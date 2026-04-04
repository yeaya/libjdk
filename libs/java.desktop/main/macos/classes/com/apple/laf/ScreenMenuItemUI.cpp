#include <com/apple/laf/ScreenMenuItemUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* ScreenMenuItemUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"updateListenersForScreenMenuItem", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuItemUI, updateListenersForScreenMenuItem, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.laf.ScreenMenuItemUI",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ScreenMenuItemUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenMenuItemUI);
	});
	return class$;
}

$Class* ScreenMenuItemUI::class$ = nullptr;

		} // laf
	} // apple
} // com