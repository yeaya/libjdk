#include <MultiAuthTest$ServerAuth.h>
#include <MultiAuthTest.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <jcpp.h>

using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MultiAuthTest$ServerAuth::init$($String* realm) {
	$BasicAuthenticator::init$(realm);
	$set(this, passwd, "passwd"_s);
}

bool MultiAuthTest$ServerAuth::checkCredentials($String* username, $String* password) {
	bool var$0 = !"user"_s->equals(username);
	if (var$0 || !$nc(this->passwd)->equals(password)) {
		return false;
	}
	return true;
}

MultiAuthTest$ServerAuth::MultiAuthTest$ServerAuth() {
}

$Class* MultiAuthTest$ServerAuth::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passwd", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MultiAuthTest$ServerAuth, passwd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(MultiAuthTest$ServerAuth, init$, void, $String*)},
		{"checkCredentials", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(MultiAuthTest$ServerAuth, checkCredentials, bool, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiAuthTest$ServerAuth", "MultiAuthTest", "ServerAuth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiAuthTest$ServerAuth",
		"com.sun.net.httpserver.BasicAuthenticator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiAuthTest"
	};
	$loadClass(MultiAuthTest$ServerAuth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiAuthTest$ServerAuth);
	});
	return class$;
}

$Class* MultiAuthTest$ServerAuth::class$ = nullptr;