#include <apple/laf/JRSUIUtils$InternalFrame.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$InternalFrame::init$() {
}

bool JRSUIUtils$InternalFrame::shouldUseLegacyBorderMetrics() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$InternalFrame::JRSUIUtils$InternalFrame() {
}

$Class* JRSUIUtils$InternalFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$InternalFrame, init$, void)},
		{"shouldUseLegacyBorderMetrics", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$InternalFrame, shouldUseLegacyBorderMetrics, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$InternalFrame", "apple.laf.JRSUIUtils", "InternalFrame", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$InternalFrame",
		"java.lang.Object",
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
	$loadClass(JRSUIUtils$InternalFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$InternalFrame);
	});
	return class$;
}

$Class* JRSUIUtils$InternalFrame::class$ = nullptr;

	} // laf
} // apple