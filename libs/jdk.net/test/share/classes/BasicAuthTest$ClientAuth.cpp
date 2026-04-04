#include <BasicAuthTest$ClientAuth.h>
#include <BasicAuthTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

void BasicAuthTest$ClientAuth::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* BasicAuthTest$ClientAuth::getPasswordAuthentication() {
	++this->count;
	return $new($PasswordAuthentication, "user"_s, $("passwd"_s->toCharArray()));
}

BasicAuthTest$ClientAuth::BasicAuthTest$ClientAuth() {
}

$Class* BasicAuthTest$ClientAuth::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $VOLATILE, $field(BasicAuthTest$ClientAuth, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasicAuthTest$ClientAuth, init$, void)},
		{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED, $virtualMethod(BasicAuthTest$ClientAuth, getPasswordAuthentication, $PasswordAuthentication*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BasicAuthTest$ClientAuth", "BasicAuthTest", "ClientAuth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BasicAuthTest$ClientAuth",
		"java.net.Authenticator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"BasicAuthTest"
	};
	$loadClass(BasicAuthTest$ClientAuth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicAuthTest$ClientAuth);
	});
	return class$;
}

$Class* BasicAuthTest$ClientAuth::class$ = nullptr;