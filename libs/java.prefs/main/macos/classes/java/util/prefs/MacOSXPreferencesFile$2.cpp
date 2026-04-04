#include <java/util/prefs/MacOSXPreferencesFile$2.h>
#include <java/util/TimerTask.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

void MacOSXPreferencesFile$2::init$() {
	$TimerTask::init$();
}

void MacOSXPreferencesFile$2::run() {
	$MacOSXPreferencesFile::syncWorld();
}

MacOSXPreferencesFile$2::MacOSXPreferencesFile$2() {
}

$Class* MacOSXPreferencesFile$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MacOSXPreferencesFile$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFile$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.MacOSXPreferencesFile",
		"initSyncTimerIfNeeded",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.MacOSXPreferencesFile$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFile$2",
		"java.util.TimerTask",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.MacOSXPreferencesFile"
	};
	$loadClass(MacOSXPreferencesFile$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFile$2);
	});
	return class$;
}

$Class* MacOSXPreferencesFile$2::class$ = nullptr;

		} // prefs
	} // util
} // java