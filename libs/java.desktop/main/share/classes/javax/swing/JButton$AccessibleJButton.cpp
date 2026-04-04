#include <javax/swing/JButton$AccessibleJButton.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

#undef PUSH_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $JButton = ::javax::swing::JButton;

namespace javax {
	namespace swing {

void JButton$AccessibleJButton::init$($JButton* this$0) {
	$set(this, this$0, this$0);
	$AbstractButton$AccessibleAbstractButton::init$(this$0);
}

$AccessibleRole* JButton$AccessibleJButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PUSH_BUTTON;
}

JButton$AccessibleJButton::JButton$AccessibleJButton() {
}

$Class* JButton$AccessibleJButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(JButton$AccessibleJButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;)V", nullptr, $PROTECTED, $method(JButton$AccessibleJButton, init$, void, $JButton*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JButton$AccessibleJButton, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JButton$AccessibleJButton", "javax.swing.JButton", "AccessibleJButton", $PROTECTED},
		{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JButton$AccessibleJButton",
		"javax.swing.AbstractButton$AccessibleAbstractButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JButton"
	};
	$loadClass(JButton$AccessibleJButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JButton$AccessibleJButton));
	});
	return class$;
}

$Class* JButton$AccessibleJButton::class$ = nullptr;

	} // swing
} // javax