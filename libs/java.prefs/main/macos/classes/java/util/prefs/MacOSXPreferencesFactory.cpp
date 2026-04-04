#include <java/util/prefs/MacOSXPreferencesFactory.h>
#include <java/util/prefs/MacOSXPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MacOSXPreferences = ::java::util::prefs::MacOSXPreferences;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

void MacOSXPreferencesFactory::init$() {
}

$Preferences* MacOSXPreferencesFactory::userRoot() {
	return $MacOSXPreferences::getUserRoot();
}

$Preferences* MacOSXPreferencesFactory::systemRoot() {
	return $MacOSXPreferences::getSystemRoot();
}

MacOSXPreferencesFactory::MacOSXPreferencesFactory() {
}

$Class* MacOSXPreferencesFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MacOSXPreferencesFactory, init$, void)},
		{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFactory, systemRoot, $Preferences*)},
		{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(MacOSXPreferencesFactory, userRoot, $Preferences*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.MacOSXPreferencesFactory",
		"java.lang.Object",
		"java.util.prefs.PreferencesFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(MacOSXPreferencesFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXPreferencesFactory);
	});
	return class$;
}

$Class* MacOSXPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java