#include <com/sun/net/httpserver/Authenticator$Retry.h>

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

$FieldInfo _Authenticator$Retry_FieldInfo_[] = {
	{"responseCode", "I", nullptr, $PRIVATE, $field(Authenticator$Retry, responseCode)},
	{}
};

$MethodInfo _Authenticator$Retry_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$Retry::*)(int32_t)>(&Authenticator$Retry::init$))},
	{"getResponseCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$Retry_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Authenticator$Retry", "com.sun.net.httpserver.Authenticator", "Retry", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$Retry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.Authenticator$Retry",
	"com.sun.net.httpserver.Authenticator$Result",
	nullptr,
	_Authenticator$Retry_FieldInfo_,
	_Authenticator$Retry_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$Retry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Authenticator"
};

$Object* allocate$Authenticator$Retry($Class* clazz) {
	return $of($alloc(Authenticator$Retry));
}

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
	$loadClass(Authenticator$Retry, name, initialize, &_Authenticator$Retry_ClassInfo_, allocate$Authenticator$Retry);
	return class$;
}

$Class* Authenticator$Retry::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com