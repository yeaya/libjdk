#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void RootPaneUI::init$() {
	$ComponentUI::init$();
}

RootPaneUI::RootPaneUI() {
}

$Class* RootPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(RootPaneUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.RootPaneUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RootPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RootPaneUI);
	});
	return class$;
}

$Class* RootPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax