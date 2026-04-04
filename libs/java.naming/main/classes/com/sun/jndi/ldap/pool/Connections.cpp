#include <com/sun/jndi/ldap/pool/Connections.h>
#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/pool/ConnectionDesc.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/InterruptedNamingException.h>
#include <jcpp.h>

#undef BUSY
#undef DEFAULT_SIZE
#undef EXPIRED
#undef IDLE

using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $ConnectionDesc = ::com::sun::jndi::ldap::pool::ConnectionDesc;
using $Pool = ::com::sun::jndi::ldap::pool::Pool;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PooledConnectionFactory = ::com::sun::jndi::ldap::pool::PooledConnectionFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CommunicationException = ::javax::naming::CommunicationException;
using $InterruptedNamingException = ::javax::naming::InterruptedNamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

bool Connections::debug = false;
bool Connections::trace = false;

void Connections::init$(Object$* id, int32_t initSize, int32_t prefSize, int32_t maxSize, $PooledConnectionFactory* factory) {
	$useLocalObjectStack();
	this->closed = false;
	this->maxSize = maxSize;
	if (maxSize > 0) {
		this->prefSize = $Math::min(prefSize, maxSize);
		initSize = $Math::min(initSize, maxSize);
	} else {
		this->prefSize = prefSize;
	}
	$set(this, conns, $new($ArrayList, maxSize > 0 ? maxSize : Connections::DEFAULT_SIZE));
	$set(this, ref, $new($SoftReference, id));
	d("init size="_s, initSize);
	d("max size="_s, maxSize);
	d("preferred size="_s, prefSize);
	$var($PooledConnection, conn, nullptr);
	for (int32_t i = 0; i < initSize; ++i) {
		$assign(conn, $nc(factory)->createPooledConnection(this));
		td("Create "_s, conn, factory);
		this->conns->add($$new($ConnectionDesc, conn));
	}
}

$PooledConnection* Connections::get(int64_t timeout, $PooledConnectionFactory* factory) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($PooledConnection, conn, nullptr);
		int64_t start = (timeout > 0 ? $System::currentTimeMillis() : 0);
		int64_t waittime = timeout;
		d("get(): before"_s);
		while (($assign(conn, getOrCreateConnection(factory))) == nullptr) {
			if (timeout > 0 && waittime <= 0) {
				$throwNew($CommunicationException, $$str({"Timeout exceeded while waiting for a connection: "_s, $$str(timeout), "ms"_s}));
			}
			try {
				d("get(): waiting"_s);
				if (waittime > 0) {
					$of(this)->wait(waittime);
				} else {
					$of(this)->wait();
				}
			} catch ($InterruptedException& e) {
				$throwNew($InterruptedNamingException, "Interrupted while waiting for a connection"_s);
			}
			if (timeout > 0) {
				int64_t now = $System::currentTimeMillis();
				waittime = timeout - (now - start);
			}
		}
		d("get(): after"_s);
		return conn;
	}
}

$PooledConnection* Connections::getOrCreateConnection($PooledConnectionFactory* factory) {
	$useLocalObjectStack();
	int32_t size = this->conns->size();
	$var($PooledConnection, conn, nullptr);
	if (this->prefSize <= 0 || size >= this->prefSize) {
		$var($ConnectionDesc, entry, nullptr);
		for (int32_t i = 0; i < size; ++i) {
			$assign(entry, $cast($ConnectionDesc, this->conns->get(i)));
			if (($assign(conn, $nc(entry)->tryUse())) != nullptr) {
				d("get(): use "_s, conn);
				td("Use "_s, conn);
				return conn;
			}
		}
	}
	if (this->maxSize > 0 && size >= this->maxSize) {
		return nullptr;
	}
	$assign(conn, $nc(factory)->createPooledConnection(this));
	td("Create and use "_s, conn, factory);
	this->conns->add($$new($ConnectionDesc, conn, true));
	return conn;
}

bool Connections::releasePooledConnection($PooledConnection* conn) {
	$synchronized(this) {
		$var($ConnectionDesc, entry, nullptr);
		int32_t loc = this->conns->indexOf($assign(entry, $new($ConnectionDesc, conn)));
		d("release(): "_s, conn);
		if (loc >= 0) {
			if (this->closed || (this->prefSize > 0 && this->conns->size() > this->prefSize)) {
				d("release(): closing "_s, conn);
				td("Close "_s, conn);
				this->conns->remove(entry);
				$nc(conn)->closeConnection();
			} else {
				d("release(): release "_s, conn);
				td("Release "_s, conn);
				$assign(entry, $cast($ConnectionDesc, this->conns->get(loc)));
				$nc(entry)->release();
			}
			$of(this)->notifyAll();
			d("release(): notify"_s);
			return true;
		} else {
			return false;
		}
	}
}

bool Connections::removePooledConnection($PooledConnection* conn) {
	$synchronized(this) {
		if (this->conns->remove($$new($ConnectionDesc, conn))) {
			d("remove(): "_s, conn);
			$of(this)->notifyAll();
			d("remove(): notify"_s);
			td("Remove "_s, conn);
			if (this->conns->isEmpty()) {
				$set(this, ref, nullptr);
			}
			return true;
		} else {
			d("remove(): not found "_s, conn);
			return false;
		}
	}
}

bool Connections::expire(int64_t threshold) {
	$useLocalObjectStack();
	$var($List, clonedConns, nullptr);
	$synchronized(this) {
		$assign(clonedConns, $new($ArrayList, this->conns));
	}
	$var($List, expired, $new($ArrayList));
	{
		$var($Iterator, i$, clonedConns->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ConnectionDesc, entry, $cast($ConnectionDesc, i$->next()));
			{
				d("expire(): "_s, entry);
				if ($nc(entry)->expire(threshold)) {
					expired->add(entry);
					td("expire(): Expired "_s, entry);
				}
			}
		}
	}
	$synchronized(this) {
		this->conns->removeAll(expired);
		return this->conns->isEmpty();
	}
}

void Connections::close() {
	$synchronized(this) {
		expire($System::currentTimeMillis());
		this->closed = true;
	}
}

$String* Connections::getStats() {
	$useLocalObjectStack();
	int32_t idle = 0;
	int32_t busy = 0;
	int32_t expired = 0;
	int64_t use = 0;
	int32_t len = 0;
	$synchronized(this) {
		len = this->conns->size();
		$var($ConnectionDesc, entry, nullptr);
		for (int32_t i = 0; i < len; ++i) {
			$assign(entry, $cast($ConnectionDesc, this->conns->get(i)));
			use += $nc(entry)->getUseCount();
			switch (entry->getState()) {
			case $ConnectionDesc::BUSY:
				++busy;
				break;
			case $ConnectionDesc::IDLE:
				++idle;
				break;
			case $ConnectionDesc::EXPIRED:
				++expired;
			}
		}
	}
	return $str({"size="_s, $$str(len), "; use="_s, $$str(use), "; busy="_s, $$str(busy), "; idle="_s, $$str(idle), "; expired="_s, $$str(expired)});
}

void Connections::d($String* msg, Object$* o1) {
	if (Connections::debug) {
		d($$str({msg, o1}));
	}
}

void Connections::d($String* msg, int32_t i) {
	$useLocalObjectStack();
	if (Connections::debug) {
		d($$str({msg, $$str(i)}));
	}
}

void Connections::d($String* msg) {
	$useLocalObjectStack();
	if (Connections::debug) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(this);
		var$0->append("."_s);
		var$0->append(msg);
		var$0->append("; size: "_s);
		var$0->append(this->conns->size());
		$nc($System::err)->println($$str(var$0));
	}
}

void Connections::td($String* msg, Object$* o1, Object$* o2) {
	if (Connections::trace) {
		td($$str({msg, o1, "["_s, o2, "]"_s}));
	}
}

void Connections::td($String* msg, Object$* o1) {
	if (Connections::trace) {
		td($$str({msg, o1}));
	}
}

void Connections::td($String* msg) {
	if (Connections::trace) {
		$nc($System::err)->println(msg);
	}
}

void Connections::clinit$($Class* clazz) {
	$init($Pool);
	Connections::debug = $Pool::debug;
	$init($LdapPoolManager);
	Connections::trace = $LdapPoolManager::trace;
}

Connections::Connections() {
}

$Class* Connections::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Connections, debug)},
		{"trace", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Connections, trace)},
		{"DEFAULT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Connections, DEFAULT_SIZE)},
		{"maxSize", "I", nullptr, $PRIVATE | $FINAL, $field(Connections, maxSize)},
		{"prefSize", "I", nullptr, $PRIVATE | $FINAL, $field(Connections, prefSize)},
		{"conns", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/jndi/ldap/pool/ConnectionDesc;>;", $PRIVATE | $FINAL, $field(Connections, conns)},
		{"closed", "Z", nullptr, $PRIVATE, $field(Connections, closed)},
		{"ref", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/lang/Object;>;", $PRIVATE, $field(Connections, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;IIILcom/sun/jndi/ldap/pool/PooledConnectionFactory;)V", nullptr, 0, $method(Connections, init$, void, Object$*, int32_t, int32_t, int32_t, $PooledConnectionFactory*), "javax.naming.NamingException"},
		{"close", "()V", nullptr, $SYNCHRONIZED, $method(Connections, close, void)},
		{"d", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(Connections, d, void, $String*, Object$*)},
		{"d", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Connections, d, void, $String*, int32_t)},
		{"d", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Connections, d, void, $String*)},
		{"expire", "(J)Z", nullptr, 0, $method(Connections, expire, bool, int64_t)},
		{"get", "(JLcom/sun/jndi/ldap/pool/PooledConnectionFactory;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $SYNCHRONIZED, $method(Connections, get, $PooledConnection*, int64_t, $PooledConnectionFactory*), "javax.naming.NamingException"},
		{"getOrCreateConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnectionFactory;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PRIVATE, $method(Connections, getOrCreateConnection, $PooledConnection*, $PooledConnectionFactory*), "javax.naming.NamingException"},
		{"getStats", "()Ljava/lang/String;", nullptr, 0, $method(Connections, getStats, $String*)},
		{"releasePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Connections, releasePooledConnection, bool, $PooledConnection*)},
		{"removePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Connections, removePooledConnection, bool, $PooledConnection*)},
		{"td", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(Connections, td, void, $String*, Object$*, Object$*)},
		{"td", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(Connections, td, void, $String*, Object$*)},
		{"td", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Connections, td, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.pool.Connections",
		"java.lang.Object",
		"com.sun.jndi.ldap.pool.PoolCallback",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Connections, name, initialize, &classInfo$$, Connections::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Connections);
	});
	return class$;
}

$Class* Connections::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com