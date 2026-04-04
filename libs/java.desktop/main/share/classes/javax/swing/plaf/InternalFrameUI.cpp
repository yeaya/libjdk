#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void InternalFrameUI::init$() {
	$ComponentUI::init$();
}

InternalFrameUI::InternalFrameUI() {
}

$Class* InternalFrameUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(InternalFrameUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.InternalFrameUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalFrameUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameUI);
	});
	return class$;
}

$Class* InternalFrameUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax