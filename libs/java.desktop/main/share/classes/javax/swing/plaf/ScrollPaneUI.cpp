#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ScrollPaneUI::init$() {
	$ComponentUI::init$();
}

ScrollPaneUI::ScrollPaneUI() {
}

$Class* ScrollPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ScrollPaneUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ScrollPaneUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ScrollPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollPaneUI);
	});
	return class$;
}

$Class* ScrollPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax