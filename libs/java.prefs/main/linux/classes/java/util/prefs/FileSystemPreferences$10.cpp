#include <java/util/prefs/FileSystemPreferences$10.h>
#include <java/io/File.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$10::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$10::run() {
	int64_t nmt = 0;
	if (this->this$0->isUserNode()) {
		nmt = $nc($FileSystemPreferences::userRootModFile)->lastModified();
		$FileSystemPreferences::isUserRootModified = $FileSystemPreferences::userRootModTime == nmt;
	} else {
		nmt = $nc($FileSystemPreferences::systemRootModFile)->lastModified();
		$FileSystemPreferences::isSystemRootModified = $FileSystemPreferences::systemRootModTime == nmt;
	}
	return $of($Long::valueOf(nmt));
}

FileSystemPreferences$10::FileSystemPreferences$10() {
}

$Class* FileSystemPreferences$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$10, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(FileSystemPreferences$10, init$, void, $FileSystemPreferences*)},
		{"run", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$10, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		"sync",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$10",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$10);
	});
	return class$;
}

$Class* FileSystemPreferences$10::class$ = nullptr;

		} // prefs
	} // util
} // java