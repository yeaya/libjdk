#include <com/sun/net/httpserver/HttpContext.h>

#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _HttpContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(HttpContext, init$, void)},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getAttributes, $Map*)},
	{"getAuthenticator", "()Lcom/sun/net/httpserver/Authenticator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getAuthenticator, $Authenticator*)},
	{"getFilters", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;", $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getFilters, $List*)},
	{"getHandler", "()Lcom/sun/net/httpserver/HttpHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getHandler, $HttpHandler*)},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getPath, $String*)},
	{"getServer", "()Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, getServer, $HttpServer*)},
	{"setAuthenticator", "(Lcom/sun/net/httpserver/Authenticator;)Lcom/sun/net/httpserver/Authenticator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, setAuthenticator, $Authenticator*, $Authenticator*)},
	{"setHandler", "(Lcom/sun/net/httpserver/HttpHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpContext, setHandler, void, $HttpHandler*)},
	{}
};

$ClassInfo _HttpContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.HttpContext",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HttpContext_MethodInfo_
};

$Object* allocate$HttpContext($Class* clazz) {
	return $of($alloc(HttpContext));
}

void HttpContext::init$() {
}

HttpContext::HttpContext() {
}

$Class* HttpContext::load$($String* name, bool initialize) {
	$loadClass(HttpContext, name, initialize, &_HttpContext_ClassInfo_, allocate$HttpContext);
	return class$;
}

$Class* HttpContext::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com