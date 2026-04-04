#include <apple/laf/JRSUIUtils$Tree.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$Tree::init$() {
}

bool JRSUIUtils$Tree::useLegacyTreeKnobs() {
	$init($JRSUIUtils);
	return $JRSUIUtils::isLeopard;
}

JRSUIUtils$Tree::JRSUIUtils$Tree() {
}

$Class* JRSUIUtils$Tree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$Tree, init$, void)},
		{"useLegacyTreeKnobs", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$Tree, useLegacyTreeKnobs, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$Tree", "apple.laf.JRSUIUtils", "Tree", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$Tree",
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
	$loadClass(JRSUIUtils$Tree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$Tree);
	});
	return class$;
}

$Class* JRSUIUtils$Tree::class$ = nullptr;

	} // laf
} // apple