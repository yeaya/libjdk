#include <com/sun/net/httpserver/Authenticator$Success.h>

#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <jcpp.h>

using $Authenticator = ::com::sun::net::httpserver::Authenticator;
using $Authenticator$Result = ::com::sun::net::httpserver::Authenticator$Result;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _Authenticator$Success_FieldInfo_[] = {
	{"principal", "Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PRIVATE, $field(Authenticator$Success, principal)},
	{}
};

$MethodInfo _Authenticator$Success_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/net/httpserver/HttpPrincipal;)V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$Success::*)($HttpPrincipal*)>(&Authenticator$Success::init$))},
	{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$Success_InnerClassesInfo_[] = {
	{"com.sun.net.httpserver.Authenticator$Success", "com.sun.net.httpserver.Authenticator", "Success", $PUBLIC | $STATIC},
	{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$Success_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.Authenticator$Success",
	"com.sun.net.httpserver.Authenticator$Result",
	nullptr,
	_Authenticator$Success_FieldInfo_,
	_Authenticator$Success_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$Success_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.net.httpserver.Authenticator"
};

$Object* allocate$Authenticator$Success($Class* clazz) {
	return $of($alloc(Authenticator$Success));
}

void Authenticator$Success::init$($HttpPrincipal* p) {
	$Authenticator$Result::init$();
	$set(this, principal, p);
}

$HttpPrincipal* Authenticator$Success::getPrincipal() {
	return this->principal;
}

Authenticator$Success::Authenticator$Success() {
}

$Class* Authenticator$Success::load$($String* name, bool initialize) {
	$loadClass(Authenticator$Success, name, initialize, &_Authenticator$Success_ClassInfo_, allocate$Authenticator$Success);
	return class$;
}

$Class* Authenticator$Success::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com