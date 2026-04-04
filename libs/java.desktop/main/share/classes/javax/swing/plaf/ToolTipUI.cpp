#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ToolTipUI::init$() {
	$ComponentUI::init$();
}

ToolTipUI::ToolTipUI() {
}

$Class* ToolTipUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ToolTipUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ToolTipUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ToolTipUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolTipUI);
	});
	return class$;
}

$Class* ToolTipUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax