#include <sun/security/krb5/Credentials$1.h>
#include <java/lang/CharSequence.h>
#include <sun/security/krb5/Credentials.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {

void Credentials$1::init$() {
}

$Object* Credentials$1::run() {
	$beforeCallerSensitive();
	if ($$nc($System::getProperty("os.name"_s))->contains("OS X"_s)) {
		$System::loadLibrary("osxkrb5"_s);
	} else {
		$System::loadLibrary("w2k_lsa_auth"_s);
	}
	return nullptr;
}

Credentials$1::Credentials$1() {
}

$Class* Credentials$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Credentials$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Credentials$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.Credentials",
		"ensureLoaded",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.Credentials$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.Credentials$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.Credentials"
	};
	$loadClass(Credentials$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Credentials$1);
	});
	return class$;
}

$Class* Credentials$1::class$ = nullptr;

		} // krb5
	} // security
} // sun