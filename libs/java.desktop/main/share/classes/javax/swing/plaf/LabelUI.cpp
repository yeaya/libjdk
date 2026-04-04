#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void LabelUI::init$() {
	$ComponentUI::init$();
}

LabelUI::LabelUI() {
}

$Class* LabelUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(LabelUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.LabelUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LabelUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelUI);
	});
	return class$;
}

$Class* LabelUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax