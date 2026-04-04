#include <javax/swing/plaf/ProgressBarUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ProgressBarUI::init$() {
	$ComponentUI::init$();
}

ProgressBarUI::ProgressBarUI() {
}

$Class* ProgressBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ProgressBarUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ProgressBarUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ProgressBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressBarUI);
	});
	return class$;
}

$Class* ProgressBarUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax