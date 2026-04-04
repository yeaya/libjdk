#include <jdk/internal/net/http/ConnectionPool$ExpiryList.h>
#include <java/time/Instant.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Optional.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/ConnectionPool$ExpiryEntry.h>
#include <jdk/internal/net/http/ConnectionPool.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jcpp.h>

#undef KEEP_ALIVE
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instant = ::java::time::Instant;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Optional = ::java::util::Optional;
using $Stream = ::java::util::stream::Stream;
using $ConnectionPool = ::jdk::internal::net::http::ConnectionPool;
using $ConnectionPool$ExpiryEntry = ::jdk::internal::net::http::ConnectionPool$ExpiryEntry;
using $HttpConnection = ::jdk::internal::net::http::HttpConnection;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ConnectionPool$ExpiryList::init$() {
	$set(this, list, $new($LinkedList));
}

int32_t ConnectionPool$ExpiryList::size() {
	return this->list->size();
}

bool ConnectionPool$ExpiryList::purgeMaybeRequired() {
	return this->mayContainEntries;
}

$Optional* ConnectionPool$ExpiryList::nextExpiryDeadline() {
	if (this->list->isEmpty()) {
		return $Optional::empty();
	} else {
		return $Optional::of($nc(($$cast($ConnectionPool$ExpiryEntry, this->list->getLast())))->expiry);
	}
}

$HttpConnection* ConnectionPool$ExpiryList::removeOldest() {
	$var($ConnectionPool$ExpiryEntry, entry, $cast($ConnectionPool$ExpiryEntry, this->list->pollLast()));
	return entry == nullptr ? ($HttpConnection*)nullptr : entry->connection;
}

void ConnectionPool$ExpiryList::add($HttpConnection* conn) {
	$init($ConnectionPool);
	add(conn, $($Instant::now()), $ConnectionPool::KEEP_ALIVE);
}

void ConnectionPool$ExpiryList::add($HttpConnection* conn, $Instant* now, int64_t keepAlive) {
	$useLocalObjectStack();
	$init($ChronoUnit);
	$var($Instant, then, $$nc($nc(now)->truncatedTo($ChronoUnit::SECONDS))->plus(keepAlive, $ChronoUnit::SECONDS));
	$var($ListIterator, li, this->list->listIterator());
	while ($nc(li)->hasNext()) {
		$var($ConnectionPool$ExpiryEntry, entry, $cast($ConnectionPool$ExpiryEntry, li->next()));
		if ($nc(then)->isAfter($nc(entry)->expiry)) {
			li->previous();
			li->add($$new($ConnectionPool$ExpiryEntry, conn, then));
			this->mayContainEntries = true;
			return;
		}
	}
	this->list->add($$new($ConnectionPool$ExpiryEntry, conn, then));
	this->mayContainEntries = true;
}

void ConnectionPool$ExpiryList::remove($HttpConnection* c) {
	$useLocalObjectStack();
	if (c == nullptr || this->list->isEmpty()) {
		return;
	}
	$var($ListIterator, li, this->list->listIterator());
	while ($nc(li)->hasNext()) {
		$var($ConnectionPool$ExpiryEntry, e, $cast($ConnectionPool$ExpiryEntry, li->next()));
		if ($nc($nc(e)->connection)->equals(c)) {
			li->remove();
			this->mayContainEntries = !this->list->isEmpty();
			return;
		}
	}
}

$List* ConnectionPool$ExpiryList::purgeUntil($Instant* now) {
	$useLocalObjectStack();
	if (this->list->isEmpty()) {
		return $Collections::emptyList();
	}
	$var($List, closelist, $new($ArrayList));
	$var($Iterator, li, this->list->descendingIterator());
	while ($nc(li)->hasNext()) {
		$var($ConnectionPool$ExpiryEntry, entry, $cast($ConnectionPool$ExpiryEntry, li->next()));
		if (!$nc($nc(entry)->expiry)->isAfter(now)) {
			li->remove();
			$var($HttpConnection, c, entry->connection);
			closelist->add(c);
		} else {
			break;
		}
	}
	this->mayContainEntries = !this->list->isEmpty();
	return closelist;
}

$Stream* ConnectionPool$ExpiryList::stream() {
	return this->list->stream();
}

void ConnectionPool$ExpiryList::clear() {
	this->list->clear();
	this->mayContainEntries = false;
}

ConnectionPool$ExpiryList::ConnectionPool$ExpiryList() {
}

$Class* ConnectionPool$ExpiryList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljdk/internal/net/http/ConnectionPool$ExpiryEntry;>;", $PRIVATE | $FINAL, $field(ConnectionPool$ExpiryList, list)},
		{"mayContainEntries", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ConnectionPool$ExpiryList, mayContainEntries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ConnectionPool$ExpiryList, init$, void)},
		{"add", "(Ljdk/internal/net/http/HttpConnection;)V", nullptr, 0, $method(ConnectionPool$ExpiryList, add, void, $HttpConnection*)},
		{"add", "(Ljdk/internal/net/http/HttpConnection;Ljava/time/Instant;J)V", nullptr, 0, $method(ConnectionPool$ExpiryList, add, void, $HttpConnection*, $Instant*, int64_t)},
		{"clear", "()V", nullptr, 0, $method(ConnectionPool$ExpiryList, clear, void)},
		{"nextExpiryDeadline", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/time/Instant;>;", 0, $method(ConnectionPool$ExpiryList, nextExpiryDeadline, $Optional*)},
		{"purgeMaybeRequired", "()Z", nullptr, 0, $method(ConnectionPool$ExpiryList, purgeMaybeRequired, bool)},
		{"purgeUntil", "(Ljava/time/Instant;)Ljava/util/List;", "(Ljava/time/Instant;)Ljava/util/List<Ljdk/internal/net/http/HttpConnection;>;", 0, $method(ConnectionPool$ExpiryList, purgeUntil, $List*, $Instant*)},
		{"remove", "(Ljdk/internal/net/http/HttpConnection;)V", nullptr, 0, $method(ConnectionPool$ExpiryList, remove, void, $HttpConnection*)},
		{"removeOldest", "()Ljdk/internal/net/http/HttpConnection;", nullptr, 0, $method(ConnectionPool$ExpiryList, removeOldest, $HttpConnection*)},
		{"size", "()I", nullptr, 0, $method(ConnectionPool$ExpiryList, size, int32_t)},
		{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljdk/internal/net/http/ConnectionPool$ExpiryEntry;>;", 0, $method(ConnectionPool$ExpiryList, stream, $Stream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ConnectionPool$ExpiryList", "jdk.internal.net.http.ConnectionPool", "ExpiryList", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.ConnectionPool$ExpiryList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ConnectionPool"
	};
	$loadClass(ConnectionPool$ExpiryList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionPool$ExpiryList);
	});
	return class$;
}

$Class* ConnectionPool$ExpiryList::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk