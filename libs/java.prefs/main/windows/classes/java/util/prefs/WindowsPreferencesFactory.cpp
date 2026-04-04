#include <java/util/prefs/WindowsPreferencesFactory.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/WindowsPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;
using $WindowsPreferences = ::java::util::prefs::WindowsPreferences;

namespace java {
	namespace util {
		namespace prefs {

void WindowsPreferencesFactory::init$() {
}

$Preferences* WindowsPreferencesFactory::userRoot() {
	return $WindowsPreferences::getUserRoot();
}

$Preferences* WindowsPreferencesFactory::systemRoot() {
	return $WindowsPreferences::getSystemRoot();
}

WindowsPreferencesFactory::WindowsPreferencesFactory() {
}

$Class* WindowsPreferencesFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsPreferencesFactory, init$, void)},
		{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(WindowsPreferencesFactory, systemRoot, $Preferences*)},
		{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC, $virtualMethod(WindowsPreferencesFactory, userRoot, $Preferences*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.WindowsPreferencesFactory",
		"java.lang.Object",
		"java.util.prefs.PreferencesFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsPreferencesFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsPreferencesFactory);
	});
	return class$;
}

$Class* WindowsPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java