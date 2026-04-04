#include <bug6236162$MyComboUI.h>
#include <bug6236162.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

void bug6236162$MyComboUI::init$() {
	$MetalComboBoxUI::init$();
}

$ComboPopup* bug6236162$MyComboUI::getComboPopup() {
	return this->popup;
}

bug6236162$MyComboUI::bug6236162$MyComboUI() {
}

$Class* bug6236162$MyComboUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug6236162$MyComboUI, init$, void)},
		{"getComboPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PUBLIC, $virtualMethod(bug6236162$MyComboUI, getComboPopup, $ComboPopup*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6236162$MyComboUI", "bug6236162", "MyComboUI", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6236162$MyComboUI",
		"javax.swing.plaf.metal.MetalComboBoxUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6236162"
	};
	$loadClass(bug6236162$MyComboUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6236162$MyComboUI);
	});
	return class$;
}

$Class* bug6236162$MyComboUI::class$ = nullptr;