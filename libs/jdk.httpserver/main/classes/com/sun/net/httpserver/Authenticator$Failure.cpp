#include <com/sun/net/httpserver/Authenticator$Failure.h>

#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _Authenticator$Failure_FieldInfo_[] = {
	{"responseCode", "I", nullptr, $PRIVATE, $field(Authenticator$Failure, responseCode)},
	{}
};

$MethodInfo _Authenticator$Failure_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$Failure::*)(int32_t)>(&Authenticator$Failure::init$))},
	{"getResponseCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$Failure_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Authenticator$Failure", "com.sun.net.httpserver.Authenticator", "Failure", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$Failure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.Authenticator$Failure",
	"com.sun.net.httpserver.Authenticator$Result",
	nullptr,
	_Authenticator$Failure_FieldInfo_,
	_Authenticator$Failure_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$Failure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Authenticator"
};

$Object* allocate$Authenticator$Failure($Class* clazz) {
	return $of($alloc(Authenticator$Failure));
}

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
	$loadClass(Authenticator$Failure, name, initialize, &_Authenticator$Failure_ClassInfo_, allocate$Authenticator$Failure);
	return class$;
}

$Class* Authenticator$Failure::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com