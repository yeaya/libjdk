#include <MultiAuthTest$ClientAuth.h>
#include <MultiAuthTest.h>
#include <java/net/Authenticator.h>
#include <java/net/PasswordAuthentication.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

void MultiAuthTest$ClientAuth::init$() {
	$Authenticator::init$();
	$set(this, count, $new($AtomicInteger));
	$set(this, passwd, "passwd"_s);
}

$PasswordAuthentication* MultiAuthTest$ClientAuth::getPasswordAuthentication() {
	this->count->incrementAndGet();
	return $new($PasswordAuthentication, "user"_s, $($nc(this->passwd)->toCharArray()));
}

MultiAuthTest$ClientAuth::MultiAuthTest$ClientAuth() {
}

$Class* MultiAuthTest$ClientAuth::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(MultiAuthTest$ClientAuth, count)},
		{"passwd", "Ljava/lang/String;", nullptr, $VOLATILE, $field(MultiAuthTest$ClientAuth, passwd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MultiAuthTest$ClientAuth, init$, void)},
		{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED, $virtualMethod(MultiAuthTest$ClientAuth, getPasswordAuthentication, $PasswordAuthentication*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiAuthTest$ClientAuth", "MultiAuthTest", "ClientAuth", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiAuthTest$ClientAuth",
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
		"MultiAuthTest"
	};
	$loadClass(MultiAuthTest$ClientAuth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiAuthTest$ClientAuth);
	});
	return class$;
}

$Class* MultiAuthTest$ClientAuth::class$ = nullptr;