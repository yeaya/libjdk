#include <com/sun/net/httpserver/Authenticator$Retry.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <jcpp.h>

using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

void Authenticator$Retry::init$(int32_t responseCode) {
	$Authenticator$Result::init$();
	this->responseCode = responseCode;
}

int32_t Authenticator$Retry::getResponseCode() {
	return this->responseCode;
}

Authenticator$Retry::Authenticator$Retry() {
}

$Class* Authenticator$Retry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"responseCode", "I", nullptr, $PRIVATE, $field(Authenticator$Retry, responseCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Authenticator$Retry, init$, void, int32_t)},
		{"getResponseCode", "()I", nullptr, $PUBLIC, $virtualMethod(Authenticator$Retry, getResponseCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Authenticator$Retry", "com.sun.net.httpserver.Authenticator", "Retry", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.net.httpserver.Authenticator$Retry",
		"com.sun.net.httpserver.Authenticator$Result",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.net.httpserver.Authenticator"
	};
	$loadClass(Authenticator$Retry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$Retry);
	});
	return class$;
}

$Class* Authenticator$Retry::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com