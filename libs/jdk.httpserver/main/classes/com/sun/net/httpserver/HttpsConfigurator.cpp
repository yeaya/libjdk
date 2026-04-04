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

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

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
	$useLocalObjectStack();
	$nc(params)->setSSLParameters($($$nc(getSSLContext())->getDefaultSSLParameters()));
}

HttpsConfigurator::HttpsConfigurator() {
}

$Class* HttpsConfigurator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"context", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE, $field(HttpsConfigurator, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/net/ssl/SSLContext;)V", nullptr, $PUBLIC, $method(HttpsConfigurator, init$, void, $SSLContext*)},
		{"configure", "(Lcom/sun/net/httpserver/HttpsParameters;)V", nullptr, $PUBLIC, $virtualMethod(HttpsConfigurator, configure, void, $HttpsParameters*)},
		{"getSSLContext", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC, $virtualMethod(HttpsConfigurator, getSSLContext, $SSLContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.net.httpserver.HttpsConfigurator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpsConfigurator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpsConfigurator);
	});
	return class$;
}

$Class* HttpsConfigurator::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com