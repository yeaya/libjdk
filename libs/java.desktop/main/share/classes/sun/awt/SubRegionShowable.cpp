#include <sun/awt/SubRegionShowable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* SubRegionShowable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"show", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubRegionShowable, show, void, int32_t, int32_t, int32_t, int32_t)},
		{"showIfNotLost", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SubRegionShowable, showIfNotLost, bool, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.SubRegionShowable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SubRegionShowable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubRegionShowable);
	});
	return class$;
}

$Class* SubRegionShowable::class$ = nullptr;

	} // awt
} // sun