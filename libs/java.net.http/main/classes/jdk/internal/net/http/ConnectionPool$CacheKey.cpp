#include <jdk/internal/net/http/ConnectionPool$CacheKey.h>
#include <java/net/InetSocketAddress.h>
#include <java/util/Objects.h>
#include <jdk/internal/net/http/ConnectionPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Objects = ::java::util::Objects;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ConnectionPool$CacheKey::init$($InetSocketAddress* destination, $InetSocketAddress* proxy) {
	$set(this, proxy, proxy);
	$set(this, destination, destination);
}

bool ConnectionPool$CacheKey::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(ConnectionPool$CacheKey, other, $cast(ConnectionPool$CacheKey, obj));
	if (!$Objects::equals(this->proxy, other->proxy)) {
		return false;
	}
	if (!$Objects::equals(this->destination, other->destination)) {
		return false;
	}
	return true;
}

int32_t ConnectionPool$CacheKey::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		this->proxy,
		this->destination
	}));
}

ConnectionPool$CacheKey::ConnectionPool$CacheKey() {
}

$Class* ConnectionPool$CacheKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"proxy", "Ljava/net/InetSocketAddress;", nullptr, $FINAL, $field(ConnectionPool$CacheKey, proxy)},
		{"destination", "Ljava/net/InetSocketAddress;", nullptr, $FINAL, $field(ConnectionPool$CacheKey, destination)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/InetSocketAddress;Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(ConnectionPool$CacheKey, init$, void, $InetSocketAddress*, $InetSocketAddress*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ConnectionPool$CacheKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ConnectionPool$CacheKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ConnectionPool$CacheKey", "jdk.internal.net.http.ConnectionPool", "CacheKey", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.ConnectionPool$CacheKey",
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
	$loadClass(ConnectionPool$CacheKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionPool$CacheKey);
	});
	return class$;
}

$Class* ConnectionPool$CacheKey::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk