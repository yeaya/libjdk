#include <java/util/prefs/Preferences$2.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/PreferencesFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

void Preferences$2::init$() {
}

$Object* Preferences$2::run() {
	return $Preferences::factory1();
}

Preferences$2::Preferences$2() {
}

$Class* Preferences$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Preferences$2, init$, void)},
		{"run", "()Ljava/util/prefs/PreferencesFactory;", nullptr, $PUBLIC, $virtualMethod(Preferences$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.Preferences",
		"factory",
		"()Ljava/util/prefs/PreferencesFactory;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.Preferences$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.Preferences$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/prefs/PreferencesFactory;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.Preferences"
	};
	$loadClass(Preferences$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Preferences$2);
	});
	return class$;
}

$Class* Preferences$2::class$ = nullptr;

		} // prefs
	} // util
} // java