#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void SliderUI::init$() {
	$ComponentUI::init$();
}

SliderUI::SliderUI() {
}

$Class* SliderUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SliderUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.SliderUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SliderUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderUI);
	});
	return class$;
}

$Class* SliderUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax