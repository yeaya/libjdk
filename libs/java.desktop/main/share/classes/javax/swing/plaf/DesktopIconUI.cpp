#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void DesktopIconUI::init$() {
	$ComponentUI::init$();
}

DesktopIconUI::DesktopIconUI() {
}

$Class* DesktopIconUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(DesktopIconUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.DesktopIconUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DesktopIconUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesktopIconUI);
	});
	return class$;
}

$Class* DesktopIconUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax