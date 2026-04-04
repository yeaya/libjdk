#include <javax/swing/plaf/PanelUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void PanelUI::init$() {
	$ComponentUI::init$();
}

PanelUI::PanelUI() {
}

$Class* PanelUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(PanelUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.PanelUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PanelUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PanelUI);
	});
	return class$;
}

$Class* PanelUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax