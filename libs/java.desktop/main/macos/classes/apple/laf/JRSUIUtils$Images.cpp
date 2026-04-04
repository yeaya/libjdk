#include <apple/laf/JRSUIUtils$Images.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$Images::init$() {
}

bool JRSUIUtils$Images::shouldUseLegacySecurityUIPath() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isSnowLeopardOrBelow;
}

JRSUIUtils$Images::JRSUIUtils$Images() {
}

$Class* JRSUIUtils$Images::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$Images, init$, void)},
		{"shouldUseLegacySecurityUIPath", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$Images, shouldUseLegacySecurityUIPath, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$Images", "apple.laf.JRSUIUtils", "Images", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$Images",
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
	$loadClass(JRSUIUtils$Images, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$Images);
	});
	return class$;
}

$Class* JRSUIUtils$Images::class$ = nullptr;

	} // laf
} // apple