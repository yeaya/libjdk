#include <java/util/prefs/FileSystemPreferences$3.h>
#include <java/util/TimerTask.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$3::init$() {
	$TimerTask::init$();
}

void FileSystemPreferences$3::run() {
	$FileSystemPreferences::syncWorld();
}

FileSystemPreferences$3::FileSystemPreferences$3() {
}

$Class* FileSystemPreferences$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystemPreferences$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$3",
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
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$3);
	});
	return class$;
}

$Class* FileSystemPreferences$3::class$ = nullptr;

		} // prefs
	} // util
} // java