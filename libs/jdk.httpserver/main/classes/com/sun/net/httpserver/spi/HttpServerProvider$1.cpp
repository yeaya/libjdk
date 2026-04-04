#include <com/sun/net/httpserver/spi/HttpServerProvider$1.h>
#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <sun/net/httpserver/DefaultHttpServerProvider.h>
#include <jcpp.h>

using $HttpServerProvider = ::com::sun::net::httpserver::spi::HttpServerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHttpServerProvider = ::sun::net::httpserver::DefaultHttpServerProvider;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

void HttpServerProvider$1::init$() {
}

$Object* HttpServerProvider$1::run() {
	if ($HttpServerProvider::loadProviderFromProperty()) {
		return $HttpServerProvider::provider$;
	}
	if ($HttpServerProvider::loadProviderAsService()) {
		return $HttpServerProvider::provider$;
	}
	$assignStatic($HttpServerProvider::provider$, $new($DefaultHttpServerProvider));
	return $HttpServerProvider::provider$;
}

HttpServerProvider$1::HttpServerProvider$1() {
}

$Class* HttpServerProvider$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpServerProvider$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpServerProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.net.httpserver.spi.HttpServerProvider",
		"provider",
		"()Lcom/sun/net/httpserver/spi/HttpServerProvider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.spi.HttpServerProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.net.httpserver.spi.HttpServerProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.spi.HttpServerProvider"
	};
	$loadClass(HttpServerProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpServerProvider$1);
	});
	return class$;
}

$Class* HttpServerProvider$1::class$ = nullptr;

				} // spi
			} // httpserver
		} // net
	} // sun
} // com