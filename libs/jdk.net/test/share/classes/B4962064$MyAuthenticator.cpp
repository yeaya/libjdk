#include <B4962064$MyAuthenticator.h>
#include <B4962064.h>
#include <java/net/Authenticator$RequestorType.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef PROXY
#undef SERVER

using $B4962064 = ::B4962064;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;

void B4962064$MyAuthenticator::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* B4962064$MyAuthenticator::getPasswordAuthentication() {
	$useLocalObjectStack();
	$var($URL, url, getRequestingURL());
	$init($B4962064);
	if (!$nc(url)->equals($B4962064::urlsave)) {
		$B4962064::except("urls not equal"_s);
	}
	$Authenticator$RequestorType* expected = nullptr;
	if (this->count == 0) {
		$init($Authenticator$RequestorType);
		expected = $Authenticator$RequestorType::SERVER;
	} else {
		$init($Authenticator$RequestorType);
		expected = $Authenticator$RequestorType::PROXY;
	}
	if (getRequestorType() != expected) {
		$B4962064::except("wrong authtype"_s);
	}
	++this->count;
	return ($new($PasswordAuthentication, "user"_s, $("passwordNotCheckedAnyway"_s->toCharArray())));
}

B4962064$MyAuthenticator::B4962064$MyAuthenticator() {
}

$Class* B4962064$MyAuthenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, 0, $field(B4962064$MyAuthenticator, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B4962064$MyAuthenticator, init$, void)},
		{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $virtualMethod(B4962064$MyAuthenticator, getPasswordAuthentication, $PasswordAuthentication*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4962064$MyAuthenticator", "B4962064", "MyAuthenticator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4962064$MyAuthenticator",
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
		"B4962064"
	};
	$loadClass(B4962064$MyAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4962064$MyAuthenticator);
	});
	return class$;
}

$Class* B4962064$MyAuthenticator::class$ = nullptr;