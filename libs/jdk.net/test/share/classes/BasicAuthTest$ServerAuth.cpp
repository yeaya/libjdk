#include <BasicAuthTest$ServerAuth.h>
#include <BasicAuthTest.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <jcpp.h>

using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void BasicAuthTest$ServerAuth::init$($String* realm) {
	$BasicAuthenticator::init$(realm);
}

bool BasicAuthTest$ServerAuth::checkCredentials($String* username, $String* password) {
	bool var$0 = !"user"_s->equals(username);
	if (var$0 || !"passwd"_s->equals(password)) {
		return false;
	}
	return true;
}

BasicAuthTest$ServerAuth::BasicAuthTest$ServerAuth() {
}

$Class* BasicAuthTest$ServerAuth::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicAuthTest$ServerAuth, init$, void, $String*)},
		{"checkCredentials", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(BasicAuthTest$ServerAuth, checkCredentials, bool, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BasicAuthTest$ServerAuth", "BasicAuthTest", "ServerAuth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BasicAuthTest$ServerAuth",
		"com.sun.net.httpserver.BasicAuthenticator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"BasicAuthTest"
	};
	$loadClass(BasicAuthTest$ServerAuth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAuthTest$ServerAuth);
	});
	return class$;
}

$Class* BasicAuthTest$ServerAuth::class$ = nullptr;