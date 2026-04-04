#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ColorChooserUI::init$() {
	$ComponentUI::init$();
}

ColorChooserUI::ColorChooserUI() {
}

$Class* ColorChooserUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ColorChooserUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ColorChooserUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ColorChooserUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorChooserUI);
	});
	return class$;
}

$Class* ColorChooserUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax