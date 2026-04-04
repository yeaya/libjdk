#include <java/util/prefs/MacOSXPreferencesFile$SyncTask.h>
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

void MacOSXPreferencesFile$SyncTask::init$($MacOSXPreferencesFile* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void MacOSXPreferencesFile$SyncTask::run() {
	$MacOSXPreferencesFile::syncWorld();
}

MacOSXPreferencesFile$SyncTask::MacOSXPreferencesFile$SyncTask() {
}

$Class* MacOSXPreferencesFile$SyncTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $FINAL | $SYNTHETIC, $field(MacOSXPreferencesFile$SyncTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/MacOSXPreferencesFile;)V", nullptr, $PRIVATE, $method(MacOSXPreferencesFile$SyncTask, init$, void, $MacOSXPreferencesFile*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFile$SyncTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.MacOSXPreferencesFile$SyncTask", "java.util.prefs.MacOSXPreferencesFile", "SyncTask", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFile$SyncTask",
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
	$loadClass(MacOSXPreferencesFile$SyncTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFile$SyncTask);
	});
	return class$;
}

$Class* MacOSXPreferencesFile$SyncTask::class$ = nullptr;

		} // prefs
	} // util
} // java