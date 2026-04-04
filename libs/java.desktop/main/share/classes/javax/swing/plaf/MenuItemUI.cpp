#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {

void MenuItemUI::init$() {
	$ButtonUI::init$();
}

MenuItemUI::MenuItemUI() {
}

$Class* MenuItemUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MenuItemUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.MenuItemUI",
		"javax.swing.plaf.ButtonUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuItemUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuItemUI);
	});
	return class$;
}

$Class* MenuItemUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax