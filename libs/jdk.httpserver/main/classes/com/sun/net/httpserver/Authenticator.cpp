#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <jcpp.h>

using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

void Authenticator::init$() {
}

Authenticator::Authenticator() {
}

$Class* Authenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Authenticator, init$, void)},
		{"authenticate", "(Lcom/sun/net/httpserver/HttpExchange;)Lcom/sun/net/httpserver/Authenticator$Result;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Authenticator, authenticate, $Authenticator$Result*, $HttpExchange*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Authenticator$Retry", "com.sun.net.httpserver.Authenticator", "Retry", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Success", "com.sun.net.httpserver.Authenticator", "Success", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Failure", "com.sun.net.httpserver.Authenticator", "Failure", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.net.httpserver.Authenticator",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.Authenticator$Retry,com.sun.net.httpserver.Authenticator$Success,com.sun.net.httpserver.Authenticator$Failure,com.sun.net.httpserver.Authenticator$Result"
	};
	$loadClass(Authenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator);
	});
	return class$;
}

$Class* Authenticator::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com