#include <GetAuthenticatorTest$MyAuthenticator.h>
#include <GetAuthenticatorTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

void GetAuthenticatorTest$MyAuthenticator::init$() {
	$Authenticator::init$();
}

$PasswordAuthentication* GetAuthenticatorTest$MyAuthenticator::getPasswordAuthentication() {
	$nc($System::out)->println("Auth called"_s);
	return ($new($PasswordAuthentication, "user"_s, $("passwordNotCheckedAnyway"_s->toCharArray())));
}

GetAuthenticatorTest$MyAuthenticator::GetAuthenticatorTest$MyAuthenticator() {
}

$Class* GetAuthenticatorTest$MyAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetAuthenticatorTest$MyAuthenticator, init$, void)},
		{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $virtualMethod(GetAuthenticatorTest$MyAuthenticator, getPasswordAuthentication, $PasswordAuthentication*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAuthenticatorTest$MyAuthenticator", "GetAuthenticatorTest", "MyAuthenticator", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"GetAuthenticatorTest$MyAuthenticator",
		"java.net.Authenticator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAuthenticatorTest"
	};
	$loadClass(GetAuthenticatorTest$MyAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAuthenticatorTest$MyAuthenticator);
	});
	return class$;
}

$Class* GetAuthenticatorTest$MyAuthenticator::class$ = nullptr;