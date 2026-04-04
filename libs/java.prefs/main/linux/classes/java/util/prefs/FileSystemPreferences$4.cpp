#include <java/util/prefs/FileSystemPreferences$4.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/prefs/FileSystemPreferences$4$1.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $FileSystemPreferences$4$1 = ::java::util::prefs::FileSystemPreferences$4$1;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$4::init$() {
}

$Object* FileSystemPreferences$4::run() {
	$useLocalObjectStack();
	$$nc($Runtime::getRuntime())->addShutdownHook($$new($FileSystemPreferences$4$1, this, nullptr, nullptr, "Sync Timer Thread"_s, 0, false));
	return nullptr;
}

FileSystemPreferences$4::FileSystemPreferences$4() {
}

$Class* FileSystemPreferences$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystemPreferences$4, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$4", nullptr, nullptr, 0},
		{"java.util.prefs.FileSystemPreferences$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$4",
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
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$4);
	});
	return class$;
}

$Class* FileSystemPreferences$4::class$ = nullptr;

		} // prefs
	} // util
} // java