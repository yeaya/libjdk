#include <java/util/prefs/Preferences$1.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

void Preferences$1::init$() {
}

$Object* Preferences$1::run() {
	return $of($System::getProperty("java.util.prefs.PreferencesFactory"_s));
}

Preferences$1::Preferences$1() {
}

$Class* Preferences$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Preferences$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Preferences$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.Preferences",
		"factory",
		"()Ljava/util/prefs/PreferencesFactory;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.Preferences$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.Preferences$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.Preferences"
	};
	$loadClass(Preferences$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Preferences$1);
	});
	return class$;
}

$Class* Preferences$1::class$ = nullptr;

		} // prefs
	} // util
} // java