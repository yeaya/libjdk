#include <javax/swing/plaf/ViewportUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ViewportUI::init$() {
	$ComponentUI::init$();
}

ViewportUI::ViewportUI() {
}

$Class* ViewportUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ViewportUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ViewportUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ViewportUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ViewportUI);
	});
	return class$;
}

$Class* ViewportUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax