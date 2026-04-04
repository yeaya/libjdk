#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ToolBarUI::init$() {
	$ComponentUI::init$();
}

ToolBarUI::ToolBarUI() {
}

$Class* ToolBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ToolBarUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ToolBarUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ToolBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolBarUI);
	});
	return class$;
}

$Class* ToolBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax