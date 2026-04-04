#include <sun/security/krb5/SCDynamicStoreConfig$1.h>
#include <java/lang/CharSequence.h>
#include <sun/security/krb5/SCDynamicStoreConfig.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {

void SCDynamicStoreConfig$1::init$() {
}

$Object* SCDynamicStoreConfig$1::run() {
	$beforeCallerSensitive();
	$var($String, osname, $System::getProperty("os.name"_s));
	if ($nc(osname)->contains("OS X"_s)) {
		$System::loadLibrary("osxkrb5"_s);
		return $of($Boolean::valueOf(true));
	}
	return $of($Boolean::valueOf(false));
}

SCDynamicStoreConfig$1::SCDynamicStoreConfig$1() {
}

$Class* SCDynamicStoreConfig$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SCDynamicStoreConfig$1, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(SCDynamicStoreConfig$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.SCDynamicStoreConfig",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.SCDynamicStoreConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.SCDynamicStoreConfig$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.SCDynamicStoreConfig"
	};
	$loadClass(SCDynamicStoreConfig$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SCDynamicStoreConfig$1);
	});
	return class$;
}

$Class* SCDynamicStoreConfig$1::class$ = nullptr;

		} // krb5
	} // security
} // sun