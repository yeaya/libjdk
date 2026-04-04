#include <B4769350$MyAuthenticator.h>
#include <B4769350.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;

void B4769350$MyAuthenticator::init$() {
	$Authenticator::init$();
	this->count = 0;
}

$PasswordAuthentication* B4769350$MyAuthenticator::getPasswordAuthentication() {
	$useLocalObjectStack();
	$var($PasswordAuthentication, pw, nullptr);
	$assign(pw, $new($PasswordAuthentication, "user"_s, $("pass1"_s->toCharArray())));
	++this->count;
	return pw;
}

void B4769350$MyAuthenticator::resetCount() {
	this->count = 0;
}

int32_t B4769350$MyAuthenticator::getCount() {
	return this->count;
}

B4769350$MyAuthenticator::B4769350$MyAuthenticator() {
}

$Class* B4769350$MyAuthenticator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $VOLATILE, $field(B4769350$MyAuthenticator, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B4769350$MyAuthenticator, init$, void)},
		{"getCount", "()I", nullptr, $PUBLIC, $virtualMethod(B4769350$MyAuthenticator, getCount, int32_t)},
		{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $virtualMethod(B4769350$MyAuthenticator, getPasswordAuthentication, $PasswordAuthentication*)},
		{"resetCount", "()V", nullptr, $PUBLIC, $virtualMethod(B4769350$MyAuthenticator, resetCount, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B4769350$MyAuthenticator", "B4769350", "MyAuthenticator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B4769350$MyAuthenticator",
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
		"B4769350"
	};
	$loadClass(B4769350$MyAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4769350$MyAuthenticator);
	});
	return class$;
}

$Class* B4769350$MyAuthenticator::class$ = nullptr;