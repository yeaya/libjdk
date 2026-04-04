#include <java/util/prefs/PreferenceChangeListener.h>
#include <java/util/prefs/PreferenceChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $PreferenceChangeEvent = ::java::util::prefs::PreferenceChangeEvent;

namespace java {
	namespace util {
		namespace prefs {

$Class* PreferenceChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"preferenceChange", "(Ljava/util/prefs/PreferenceChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreferenceChangeListener, preferenceChange, void, $PreferenceChangeEvent*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.prefs.PreferenceChangeListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(PreferenceChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreferenceChangeListener);
	});
	return class$;
}

$Class* PreferenceChangeListener::class$ = nullptr;

		} // prefs
	} // util
} // java