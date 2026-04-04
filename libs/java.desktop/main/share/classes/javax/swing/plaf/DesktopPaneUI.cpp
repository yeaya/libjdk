#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void DesktopPaneUI::init$() {
	$ComponentUI::init$();
}

DesktopPaneUI::DesktopPaneUI() {
}

$Class* DesktopPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(DesktopPaneUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.DesktopPaneUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DesktopPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesktopPaneUI);
	});
	return class$;
}

$Class* DesktopPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax