#include <sun/net/httpserver/HttpContextImpl.h>

#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/HttpContext.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpServer.h>
#include <java/lang/System$Logger.h>
#include <java/util/AbstractMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <sun/net/httpserver/AuthFilter.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $HttpContext = ::com::sun::net::httpserver::HttpContext;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpServer = ::com::sun::net::httpserver::HttpServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $System$Logger = ::java::lang::System$Logger;
using $AbstractMap = ::java::util::AbstractMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $AuthFilter = ::sun::net::httpserver::AuthFilter;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpContextImpl_FieldInfo_[] = {
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HttpContextImpl, path)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HttpContextImpl, protocol)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, $PRIVATE | $FINAL, $field(HttpContextImpl, server)},
	{"authfilter", "Lsun/net/httpserver/AuthFilter;", nullptr, $PRIVATE | $FINAL, $field(HttpContextImpl, authfilter)},
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(HttpContextImpl, attributes)},
	{"sfilters", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;", $PRIVATE | $FINAL, $field(HttpContextImpl, sfilters)},
	{"ufilters", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;", $PRIVATE | $FINAL, $field(HttpContextImpl, ufilters)},
	{"authenticator", "Lcom/sun/net/httpserver/Authenticator;", nullptr, $PRIVATE, $field(HttpContextImpl, authenticator)},
	{"handler", "Lcom/sun/net/httpserver/HttpHandler;", nullptr, $PRIVATE, $field(HttpContextImpl, handler)},
	{}
};

$MethodInfo _HttpContextImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/net/httpserver/HttpHandler;Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(static_cast<void(HttpContextImpl::*)($String*,$String*,$HttpHandler*,$ServerImpl*)>(&HttpContextImpl::init$))},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{"getAuthenticator", "()Lcom/sun/net/httpserver/Authenticator;", nullptr, $PUBLIC},
	{"getFilters", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;", $PUBLIC},
	{"getHandler", "()Lcom/sun/net/httpserver/HttpHandler;", nullptr, $PUBLIC},
	{"getLogger", "()Ljava/lang/System$Logger;", nullptr, 0},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getServer", "()Lcom/sun/net/httpserver/HttpServer;", nullptr, $PUBLIC},
	{"getServerImpl", "()Lsun/net/httpserver/ServerImpl;", nullptr, 0},
	{"getSystemFilters", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/net/httpserver/Filter;>;", 0},
	{"setAuthenticator", "(Lcom/sun/net/httpserver/Authenticator;)Lcom/sun/net/httpserver/Authenticator;", nullptr, $PUBLIC},
	{"setHandler", "(Lcom/sun/net/httpserver/HttpHandler;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpContextImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.HttpContextImpl",
	"com.sun.net.httpserver.HttpContext",
	nullptr,
	_HttpContextImpl_FieldInfo_,
	_HttpContextImpl_MethodInfo_
};

$Object* allocate$HttpContextImpl($Class* clazz) {
	return $of($alloc(HttpContextImpl));
}

void HttpContextImpl::init$($String* protocol, $String* path, $HttpHandler* cb, $ServerImpl* server) {
	$HttpContext::init$();
	$set(this, attributes, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$set(this, sfilters, $new($CopyOnWriteArrayList));
	$set(this, ufilters, $new($CopyOnWriteArrayList));
	bool var$0 = path == nullptr || protocol == nullptr || $nc(path)->length() < 1;
	if (var$0 || $nc(path)->charAt(0) != u'/') {
		$throwNew($IllegalArgumentException, "Illegal value for path or protocol"_s);
	}
	$set(this, protocol, $nc(protocol)->toLowerCase());
	$set(this, path, path);
	bool var$1 = !$nc(this->protocol)->equals("http"_s);
	if (var$1 && !$nc(this->protocol)->equals("https"_s)) {
		$throwNew($IllegalArgumentException, "Illegal value for protocol"_s);
	}
	$set(this, handler, cb);
	$set(this, server, server);
	$set(this, authfilter, $new($AuthFilter, nullptr));
	$nc(this->sfilters)->add(this->authfilter);
}

$HttpHandler* HttpContextImpl::getHandler() {
	return this->handler;
}

void HttpContextImpl::setHandler($HttpHandler* h) {
	if (h == nullptr) {
		$throwNew($NullPointerException, "Null handler parameter"_s);
	}
	if (this->handler != nullptr) {
		$throwNew($IllegalArgumentException, "handler already set"_s);
	}
	$set(this, handler, h);
}

$String* HttpContextImpl::getPath() {
	return this->path;
}

$HttpServer* HttpContextImpl::getServer() {
	return $nc(this->server)->getWrapper();
}

$ServerImpl* HttpContextImpl::getServerImpl() {
	return this->server;
}

$String* HttpContextImpl::getProtocol() {
	return this->protocol;
}

$Map* HttpContextImpl::getAttributes() {
	return this->attributes;
}

$List* HttpContextImpl::getFilters() {
	return this->ufilters;
}

$List* HttpContextImpl::getSystemFilters() {
	return this->sfilters;
}

$Authenticator* HttpContextImpl::setAuthenticator($Authenticator* auth) {
	$var($Authenticator, old, this->authenticator);
	$set(this, authenticator, auth);
	$nc(this->authfilter)->setAuthenticator(auth);
	return old;
}

$Authenticator* HttpContextImpl::getAuthenticator() {
	return this->authenticator;
}

$System$Logger* HttpContextImpl::getLogger() {
	return $nc(this->server)->getLogger();
}

HttpContextImpl::HttpContextImpl() {
}

$Class* HttpContextImpl::load$($String* name, bool initialize) {
	$loadClass(HttpContextImpl, name, initialize, &_HttpContextImpl_ClassInfo_, allocate$HttpContextImpl);
	return class$;
}

$Class* HttpContextImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun