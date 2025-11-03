#include <com/sun/net/httpserver/spi/HttpServerProvider$1.h>

#include <com/sun/net/httpserver/spi/HttpServerProvider.h>
#include <sun/net/httpserver/DefaultHttpServerProvider.h>
#include <jcpp.h>

using $HttpServerProvider = ::com::sun::net::httpserver::spi::HttpServerProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DefaultHttpServerProvider = ::sun::net::httpserver::DefaultHttpServerProvider;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				namespace spi {

$MethodInfo _HttpServerProvider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpServerProvider$1::*)()>(&HttpServerProvider$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpServerProvider$1_EnclosingMethodInfo_ = {
	"com.sun.net.httpserver.spi.HttpServerProvider",
	"provider",
	"()Lcom/sun/net/httpserver/spi/HttpServerProvider;"
};

$InnerClassInfo _HttpServerProvider$1_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.spi.HttpServerProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpServerProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.net.httpserver.spi.HttpServerProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_HttpServerProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_HttpServerProvider$1_EnclosingMethodInfo_,
	_HttpServerProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.spi.HttpServerProvider"
};

$Object* allocate$HttpServerProvider$1($Class* clazz) {
	return $of($alloc(HttpServerProvider$1));
}

void HttpServerProvider$1::init$() {
}

$Object* HttpServerProvider$1::run() {
	if ($HttpServerProvider::loadProviderFromProperty()) {
		$init($HttpServerProvider);
		return $of($HttpServerProvider::provider$);
	}
	if ($HttpServerProvider::loadProviderAsService()) {
		return $of($HttpServerProvider::provider$);
	}
	$assignStatic($HttpServerProvider::provider$, $new($DefaultHttpServerProvider));
	return $of($HttpServerProvider::provider$);
}

HttpServerProvider$1::HttpServerProvider$1() {
}

$Class* HttpServerProvider$1::load$($String* name, bool initialize) {
	$loadClass(HttpServerProvider$1, name, initialize, &_HttpServerProvider$1_ClassInfo_, allocate$HttpServerProvider$1);
	return class$;
}

$Class* HttpServerProvider$1::class$ = nullptr;

				} // spi
			} // httpserver
		} // net
	} // sun
} // com