#include <bug6406264$CustomComboBoxUI.h>
#include <bug6406264$FocusablePopup.h>
#include <bug6406264.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $bug6406264$FocusablePopup = ::bug6406264$FocusablePopup;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

void bug6406264$CustomComboBoxUI::init$($bug6406264* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI::init$();
}

$ComboPopup* bug6406264$CustomComboBoxUI::createPopup() {
	return $new($bug6406264$FocusablePopup, this->this$0, this->this$0);
}

bug6406264$CustomComboBoxUI::bug6406264$CustomComboBoxUI() {
}

$Class* bug6406264$CustomComboBoxUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6406264;", nullptr, $FINAL | $SYNTHETIC, $field(bug6406264$CustomComboBoxUI, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6406264;)V", nullptr, $PRIVATE, $method(bug6406264$CustomComboBoxUI, init$, void, $bug6406264*)},
		{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED, $virtualMethod(bug6406264$CustomComboBoxUI, createPopup, $ComboPopup*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$CustomComboBoxUI", "bug6406264", "CustomComboBoxUI", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6406264$CustomComboBoxUI",
		"javax.swing.plaf.basic.BasicComboBoxUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6406264"
	};
	$loadClass(bug6406264$CustomComboBoxUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6406264$CustomComboBoxUI);
	});
	return class$;
}

$Class* bug6406264$CustomComboBoxUI::class$ = nullptr;