#include <java/util/prefs/MacOSXPreferencesFile$3.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

void MacOSXPreferencesFile$3::init$($ThreadGroup* arg0, $Runnable* arg1, $String* arg2, int64_t arg3, bool arg4) {
	$Thread::init$(arg0, arg1, arg2, arg3, arg4);
}

void MacOSXPreferencesFile$3::run() {
	$MacOSXPreferencesFile::flushWorld();
}

MacOSXPreferencesFile$3::MacOSXPreferencesFile$3() {
}

$Class* MacOSXPreferencesFile$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V", nullptr, 0, $method(MacOSXPreferencesFile$3, init$, void, $ThreadGroup*, $Runnable*, $String*, int64_t, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFile$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.MacOSXPreferencesFile",
		"timer",
		"()Ljava/util/Timer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.MacOSXPreferencesFile$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFile$3",
		"java.lang.Thread",
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
	$loadClass(MacOSXPreferencesFile$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFile$3);
	});
	return class$;
}

$Class* MacOSXPreferencesFile$3::class$ = nullptr;

		} // prefs
	} // util
} // java