#include <java/util/prefs/MacOSXPreferencesFile$FlushTask.h>
#include <java/util/TimerTask.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

void MacOSXPreferencesFile$FlushTask::init$($MacOSXPreferencesFile* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void MacOSXPreferencesFile$FlushTask::run() {
	$MacOSXPreferencesFile::flushWorld();
}

MacOSXPreferencesFile$FlushTask::MacOSXPreferencesFile$FlushTask() {
}

$Class* MacOSXPreferencesFile$FlushTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $FINAL | $SYNTHETIC, $field(MacOSXPreferencesFile$FlushTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/MacOSXPreferencesFile;)V", nullptr, $PRIVATE, $method(MacOSXPreferencesFile$FlushTask, init$, void, $MacOSXPreferencesFile*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFile$FlushTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.MacOSXPreferencesFile$FlushTask", "java.util.prefs.MacOSXPreferencesFile", "FlushTask", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFile$FlushTask",
		"java.util.TimerTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.MacOSXPreferencesFile"
	};
	$loadClass(MacOSXPreferencesFile$FlushTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFile$FlushTask);
	});
	return class$;
}

$Class* MacOSXPreferencesFile$FlushTask::class$ = nullptr;

		} // prefs
	} // util
} // java