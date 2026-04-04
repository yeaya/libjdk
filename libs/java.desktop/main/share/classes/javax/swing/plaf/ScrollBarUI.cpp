#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ScrollBarUI::init$() {
	$ComponentUI::init$();
}

ScrollBarUI::ScrollBarUI() {
}

$Class* ScrollBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ScrollBarUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ScrollBarUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ScrollBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollBarUI);
	});
	return class$;
}

$Class* ScrollBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax