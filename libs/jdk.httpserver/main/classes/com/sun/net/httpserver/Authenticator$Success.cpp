#include <com/sun/net/httpserver/Authenticator$Success.h>
#include <com/sun/net/httpserver/Authenticator$Result.h>
#include <com/sun/net/httpserver/Authenticator.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <jcpp.h>

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
	$FieldInfo fieldInfos$$[] = {
		{"principal", "Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PRIVATE, $field(Authenticator$Success, principal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/net/httpserver/HttpPrincipal;)V", nullptr, $PUBLIC, $method(Authenticator$Success, init$, void, $HttpPrincipal*)},
		{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC, $virtualMethod(Authenticator$Success, getPrincipal, $HttpPrincipal*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.net.httpserver.Authenticator$Success", "com.sun.net.httpserver.Authenticator", "Success", $PUBLIC | $STATIC},
		{"com.sun.net.httpserver.Authenticator$Result", "com.sun.net.httpserver.Authenticator", "Result", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.net.httpserver.Authenticator$Success",
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
	$loadClass(Authenticator$Success, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$Success);
	});
	return class$;
}

$Class* Authenticator$Success::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com