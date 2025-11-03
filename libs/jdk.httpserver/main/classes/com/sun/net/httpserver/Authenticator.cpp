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

$MethodInfo _Authenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Authenticator::*)()>(&Authenticator::init$))},
	{"authenticate", "(Lcom/sun/net/httpserver/HttpExchange;)Lcom/sun/net/httpserver/Authenticator$Result;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Authenticator_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Authenticator$Retry", "com.sun.net.httpserver.Authenticator", "Retry", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Success", "com.sun.net.httpserver.Authenticator", "Success", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Failure", "com.sun.net.httpserver.Authenticator", "Failure", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.net.httpserver.Authenticator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Authenticator$Retry,com.sun.net.httpserver.Authenticator$Success,com.sun.net.httpserver.Authenticator$Failure,com.sun.net.httpserver.Authenticator$Result"
};

$Object* allocate$Authenticator($Class* clazz) {
	return $of($alloc(Authenticator));
}

void Authenticator::init$() {
}

Authenticator::Authenticator() {
}

$Class* Authenticator::load$($String* name, bool initialize) {
	$loadClass(Authenticator, name, initialize, &_Authenticator_ClassInfo_, allocate$Authenticator);
	return class$;
}

$Class* Authenticator::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com