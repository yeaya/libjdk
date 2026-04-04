#include <java/util/prefs/PreferencesFactory.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$Class* PreferencesFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreferencesFactory, systemRoot, $Preferences*)},
		{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreferencesFactory, userRoot, $Preferences*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.prefs.PreferencesFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PreferencesFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreferencesFactory);
	});
	return class$;
}

$Class* PreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java