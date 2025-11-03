#include <com/sun/net/httpserver/HttpsConfigurator.h>

#include <com/sun/net/httpserver/HttpsParameters.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

using $HttpsParameters = ::com::sun::net::httpserver::HttpsParameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _HttpsConfigurator_FieldInfo_[] = {
	{"context", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE, $field(HttpsConfigurator, context)},
	{}
};

$MethodInfo _HttpsConfigurator_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/SSLContext;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpsConfigurator::*)($SSLContext*)>(&HttpsConfigurator::init$))},
	{"configure", "(Lcom/sun/net/httpserver/HttpsParameters;)V", nullptr, $PUBLIC},
	{"getSSLContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HttpsConfigurator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.HttpsConfigurator",
	"java.lang.Object",
	nullptr,
	_HttpsConfigurator_FieldInfo_,
	_HttpsConfigurator_MethodInfo_
};

$Object* allocate$HttpsConfigurator($Class* clazz) {
	return $of($alloc(HttpsConfigurator));
}

void HttpsConfigurator::init$($SSLContext* context) {
	if (context == nullptr) {
		$throwNew($NullPointerException, "null SSLContext"_s);
	}
	$set(this, context, context);
}

$SSLContext* HttpsConfigurator::getSSLContext() {
	return this->context;
}

void HttpsConfigurator::configure($HttpsParameters* params) {
	$useLocalCurrentObjectStackCache();
	$nc(params)->setSSLParameters($($nc($(getSSLContext()))->getDefaultSSLParameters()));
}

HttpsConfigurator::HttpsConfigurator() {
}

$Class* HttpsConfigurator::load$($String* name, bool initialize) {
	$loadClass(HttpsConfigurator, name, initialize, &_HttpsConfigurator_ClassInfo_, allocate$HttpsConfigurator);
	return class$;
}

$Class* HttpsConfigurator::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com