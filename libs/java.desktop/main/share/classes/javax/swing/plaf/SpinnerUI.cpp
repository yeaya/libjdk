#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void SpinnerUI::init$() {
	$ComponentUI::init$();
}

SpinnerUI::SpinnerUI() {
}

$Class* SpinnerUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SpinnerUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.SpinnerUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SpinnerUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpinnerUI);
	});
	return class$;
}

$Class* SpinnerUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax