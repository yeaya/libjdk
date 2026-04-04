#include <apple/laf/JRSUIUtils$TabbedPane.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$TabbedPane::init$() {
}

bool JRSUIUtils$TabbedPane::useLegacyTabs() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isLeopard;
}

bool JRSUIUtils$TabbedPane::shouldUseTabbedPaneContrastUI() {
	$init($JRSUIUtils);
	return !$JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$TabbedPane::JRSUIUtils$TabbedPane() {
}

$Class* JRSUIUtils$TabbedPane::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$TabbedPane, init$, void)},
		{"shouldUseTabbedPaneContrastUI", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$TabbedPane, shouldUseTabbedPaneContrastUI, bool)},
		{"useLegacyTabs", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$TabbedPane, useLegacyTabs, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$TabbedPane", "apple.laf.JRSUIUtils", "TabbedPane", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$TabbedPane",
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
	$loadClass(JRSUIUtils$TabbedPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$TabbedPane);
	});
	return class$;
}

$Class* JRSUIUtils$TabbedPane::class$ = nullptr;

	} // laf
} // apple