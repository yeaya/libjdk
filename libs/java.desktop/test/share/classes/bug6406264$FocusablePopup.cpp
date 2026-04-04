#include <bug6406264$FocusablePopup.h>
#include <bug6406264.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

void bug6406264$FocusablePopup::init$($bug6406264* this$0, $JComboBox* combo) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(combo);
}

bool bug6406264$FocusablePopup::isFocusable() {
	return true;
}

bug6406264$FocusablePopup::bug6406264$FocusablePopup() {
}

$Class* bug6406264$FocusablePopup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6406264;", nullptr, $FINAL | $SYNTHETIC, $field(bug6406264$FocusablePopup, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6406264;Ljavax/swing/JComboBox;)V", nullptr, $PUBLIC, $method(bug6406264$FocusablePopup, init$, void, $bug6406264*, $JComboBox*)},
		{"isFocusable", "()Z", nullptr, $PUBLIC, $virtualMethod(bug6406264$FocusablePopup, isFocusable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$FocusablePopup", "bug6406264", "FocusablePopup", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6406264$FocusablePopup",
		"javax.swing.plaf.basic.BasicComboPopup",
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
	$loadClass(bug6406264$FocusablePopup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6406264$FocusablePopup));
	});
	return class$;
}

$Class* bug6406264$FocusablePopup::class$ = nullptr;