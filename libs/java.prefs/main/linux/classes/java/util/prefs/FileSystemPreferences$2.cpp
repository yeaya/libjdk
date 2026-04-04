#include <java/util/prefs/FileSystemPreferences$2.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$2::init$() {
}

$Object* FileSystemPreferences$2::run() {
	$useLocalObjectStack();
	$var($String, systemPrefsDirName, $System::getProperty("java.util.prefs.systemRoot"_s, "/etc/.java"_s));
	$init($FileSystemPreferences);
	$assignStatic($FileSystemPreferences::systemRootDir, $new($File, systemPrefsDirName, ".systemPrefs"_s));
	if (!$FileSystemPreferences::systemRootDir->exists()) {
		$assignStatic($FileSystemPreferences::systemRootDir, $new($File, $($System::getProperty("java.home"_s)), ".systemPrefs"_s));
		if (!$FileSystemPreferences::systemRootDir->exists()) {
			if ($FileSystemPreferences::systemRootDir->mkdirs()) {
				$$nc($FileSystemPreferences::getLogger())->info("Created system preferences directory in java.home."_s);
				try {
					$FileSystemPreferences::chmod($($nc($FileSystemPreferences::systemRootDir)->getCanonicalPath()), 493);
				} catch ($IOException& e) {
				}
			} else {
				$$nc($FileSystemPreferences::getLogger())->warning("Could not create system preferences directory. System preferences are unusable."_s);
			}
		}
	}
	$FileSystemPreferences::isSystemRootWritable = $nc($FileSystemPreferences::systemRootDir)->canWrite();
	$assignStatic($FileSystemPreferences::systemLockFile, $new($File, $FileSystemPreferences::systemRootDir, ".system.lock"_s));
	$assignStatic($FileSystemPreferences::systemRootModFile, $new($File, $FileSystemPreferences::systemRootDir, ".systemRootModFile"_s));
	if (!$FileSystemPreferences::systemRootModFile->exists() && $FileSystemPreferences::isSystemRootWritable) {
		try {
			$FileSystemPreferences::systemRootModFile->createNewFile();
			int32_t result = $FileSystemPreferences::chmod($($FileSystemPreferences::systemRootModFile->getCanonicalPath()), 420);
			if (result != 0) {
				$$nc($FileSystemPreferences::getLogger())->warning($$str({"Chmod failed on "_s, $($nc($FileSystemPreferences::systemRootModFile)->getCanonicalPath()), " Unix error code "_s, $$str(result)}));
			}
		} catch ($IOException& e) {
			$$nc($FileSystemPreferences::getLogger())->warning($(e->toString()));
		}
	}
	$FileSystemPreferences::systemRootModTime = $nc($FileSystemPreferences::systemRootModFile)->lastModified();
	return nullptr;
}

FileSystemPreferences$2::FileSystemPreferences$2() {
}

$Class* FileSystemPreferences$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystemPreferences$2, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		"setupSystemRoot",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$2",
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
	$loadClass(FileSystemPreferences$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$2);
	});
	return class$;
}

$Class* FileSystemPreferences$2::class$ = nullptr;

		} // prefs
	} // util
} // java