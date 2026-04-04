#include <java/util/prefs/FileSystemPreferencesFactory.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferencesFactory::init$() {
}

$Preferences* FileSystemPreferencesFactory::userRoot() {
	return $FileSystemPreferences::getUserRoot();
}

$Preferences* FileSystemPreferencesFactory::systemRoot() {
	return $FileSystemPreferences::getSystemRoot();
}

FileSystemPreferencesFactory::FileSystemPreferencesFactory() {
}

$Class* FileSystemPreferencesFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystemPreferencesFactory, init$, void)},
		{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferencesFactory, systemRoot, $Preferences*)},
		{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferencesFactory, userRoot, $Preferences*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferencesFactory",
		"java.lang.Object",
		"java.util.prefs.PreferencesFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(FileSystemPreferencesFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferencesFactory);
	});
	return class$;
}

$Class* FileSystemPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java