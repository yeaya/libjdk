#include <java/util/prefs/MacOSXPreferencesFile$1.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

void MacOSXPreferencesFile$1::init$() {
}

$Object* MacOSXPreferencesFile$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("prefs"_s);
	return nullptr;
}

MacOSXPreferencesFile$1::MacOSXPreferencesFile$1() {
}

$Class* MacOSXPreferencesFile$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MacOSXPreferencesFile$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFile$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.MacOSXPreferencesFile",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.MacOSXPreferencesFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFile$1",
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
		"java.util.prefs.MacOSXPreferencesFile"
	};
	$loadClass(MacOSXPreferencesFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFile$1);
	});
	return class$;
}

$Class* MacOSXPreferencesFile$1::class$ = nullptr;

		} // prefs
	} // util
} // java