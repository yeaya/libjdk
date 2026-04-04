#include <javax/swing/JCheckBox$AccessibleJCheckBox.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <jcpp.h>

#undef CHECK_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;

namespace javax {
	namespace swing {

void JCheckBox$AccessibleJCheckBox::init$($JCheckBox* this$0) {
	$set(this, this$0, this$0);
	$JToggleButton$AccessibleJToggleButton::init$(this$0);
}

$AccessibleRole* JCheckBox$AccessibleJCheckBox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

JCheckBox$AccessibleJCheckBox::JCheckBox$AccessibleJCheckBox() {
}

$Class* JCheckBox$AccessibleJCheckBox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JCheckBox;", nullptr, $FINAL | $SYNTHETIC, $field(JCheckBox$AccessibleJCheckBox, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JCheckBox;)V", nullptr, $PROTECTED, $method(JCheckBox$AccessibleJCheckBox, init$, void, $JCheckBox*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JCheckBox$AccessibleJCheckBox, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JCheckBox$AccessibleJCheckBox", "javax.swing.JCheckBox", "AccessibleJCheckBox", $PROTECTED},
		{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JCheckBox$AccessibleJCheckBox",
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
		"javax.swing.JCheckBox"
	};
	$loadClass(JCheckBox$AccessibleJCheckBox, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCheckBox$AccessibleJCheckBox));
	});
	return class$;
}

$Class* JCheckBox$AccessibleJCheckBox::class$ = nullptr;

	} // swing
} // javax