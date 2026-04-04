#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ButtonUI::init$() {
	$ComponentUI::init$();
}

ButtonUI::ButtonUI() {
}

$Class* ButtonUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ButtonUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ButtonUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ButtonUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ButtonUI);
	});
	return class$;
}

$Class* ButtonUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax