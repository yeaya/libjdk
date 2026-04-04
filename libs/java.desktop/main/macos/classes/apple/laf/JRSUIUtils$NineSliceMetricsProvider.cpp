#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIUtils.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <jcpp.h>

using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$Class* JRSUIUtils$NineSliceMetricsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNineSliceMetricsForState", "(Lapple/laf/JRSUIState;)Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JRSUIUtils$NineSliceMetricsProvider, getNineSliceMetricsForState, $AquaImageFactory$NineSliceMetrics*, $JRSUIState*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$NineSliceMetricsProvider", "apple.laf.JRSUIUtils", "NineSliceMetricsProvider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"apple.laf.JRSUIUtils$NineSliceMetricsProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIUtils"
	};
	$loadClass(JRSUIUtils$NineSliceMetricsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$NineSliceMetricsProvider);
	});
	return class$;
}

$Class* JRSUIUtils$NineSliceMetricsProvider::class$ = nullptr;

	} // laf
} // apple