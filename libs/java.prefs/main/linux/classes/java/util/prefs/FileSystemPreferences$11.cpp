#include <java/util/prefs/FileSystemPreferences$11.h>
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

void FileSystemPreferences$11::init$($FileSystemPreferences* this$0, $Long* val$newModTime) {
	$set(this, this$0, this$0);
	$set(this, val$newModTime, val$newModTime);
}

$Object* FileSystemPreferences$11::run() {
	if (this->this$0->isUserNode()) {
		$FileSystemPreferences::userRootModTime = $nc(this->val$newModTime)->longValue() + 1000;
		$nc($FileSystemPreferences::userRootModFile)->setLastModified($FileSystemPreferences::userRootModTime);
	} else {
		$FileSystemPreferences::systemRootModTime = $nc(this->val$newModTime)->longValue() + 1000;
		$nc($FileSystemPreferences::systemRootModFile)->setLastModified($FileSystemPreferences::systemRootModTime);
	}
	return nullptr;
}

FileSystemPreferences$11::FileSystemPreferences$11() {
}

$Class* FileSystemPreferences$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$11, this$0)},
		{"val$newModTime", "Ljava/lang/Long;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$11, val$newModTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/Long;)V", "()V", 0, $method(FileSystemPreferences$11, init$, void, $FileSystemPreferences*, $Long*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$11, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		"sync",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$11",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$11);
	});
	return class$;
}

$Class* FileSystemPreferences$11::class$ = nullptr;

		} // prefs
	} // util
} // java