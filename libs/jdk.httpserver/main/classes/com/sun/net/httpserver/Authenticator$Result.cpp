#include <com/sun/net/httpserver/Authenticator$Result.h>

#include <com/sun/net/httpserver/Authenticator.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$MethodInfo _Authenticator$Result_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Authenticator$Result::*)()>(&Authenticator$Result::init$))},
	{}
};

$InnerClassInfo _Authenticator$Result_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$Result_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.Authenticator$Result",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Authenticator$Result_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Authenticator"
};

$Object* allocate$Authenticator$Result($Class* clazz) {
	return $of($alloc(Authenticator$Result));
}

void Authenticator$Result::init$() {
}

Authenticator$Result::Authenticator$Result() {
}

$Class* Authenticator$Result::load$($String* name, bool initialize) {
	$loadClass(Authenticator$Result, name, initialize, &_Authenticator$Result_ClassInfo_, allocate$Authenticator$Result);
	return class$;
}

$Class* Authenticator$Result::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com