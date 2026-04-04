#include <javax/swing/JRadioButton$AccessibleJRadioButton.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <jcpp.h>

#undef RADIO_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;

namespace javax {
	namespace swing {

void JRadioButton$AccessibleJRadioButton::init$($JRadioButton* this$0) {
	$set(this, this$0, this$0);
	$JToggleButton$AccessibleJToggleButton::init$(this$0);
}

$AccessibleRole* JRadioButton$AccessibleJRadioButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::RADIO_BUTTON;
}

JRadioButton$AccessibleJRadioButton::JRadioButton$AccessibleJRadioButton() {
}

$Class* JRadioButton$AccessibleJRadioButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JRadioButton;", nullptr, $FINAL | $SYNTHETIC, $field(JRadioButton$AccessibleJRadioButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JRadioButton;)V", nullptr, $PROTECTED, $method(JRadioButton$AccessibleJRadioButton, init$, void, $JRadioButton*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JRadioButton$AccessibleJRadioButton, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRadioButton$AccessibleJRadioButton", "javax.swing.JRadioButton", "AccessibleJRadioButton", $PROTECTED},
		{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JRadioButton$AccessibleJRadioButton",
		"javax.swing.JToggleButton$AccessibleJToggleButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JRadioButton"
	};
	$loadClass(JRadioButton$AccessibleJRadioButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRadioButton$AccessibleJRadioButton));
	});
	return class$;
}

$Class* JRadioButton$AccessibleJRadioButton::class$ = nullptr;

	} // swing
} // javax