#include <com/sun/net/httpserver/Authenticator$Failure.h>
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

void Authenticator$Failure::init$(int32_t responseCode) {
	$Authenticator$Result::init$();
	this->responseCode = responseCode;
}

int32_t Authenticator$Failure::getResponseCode() {
	return this->responseCode;
}

Authenticator$Failure::Authenticator$Failure() {
}

$Class* Authenticator$Failure::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"responseCode", "I", nullptr, $PRIVATE, $field(Authenticator$Failure, responseCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Authenticator$Failure, init$, void, int32_t)},
		{"getResponseCode", "()I", nullptr, $PUBLIC, $virtualMethod(Authenticator$Failure, getResponseCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Authenticator$Failure", "com.sun.net.httpserver.Authenticator", "Failure", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.net.httpserver.Authenticator$Failure",
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
	$loadClass(Authenticator$Failure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$Failure);
	});
	return class$;
}

$Class* Authenticator$Failure::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com