#include <javax/swing/JTextField$AccessibleJTextField.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <jcpp.h>

#undef SINGLE_LINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

void JTextField$AccessibleJTextField::init$($JTextField* this$0) {
	$set(this, this$0, this$0);
	$JTextComponent$AccessibleJTextComponent::init$(this$0);
}

$AccessibleStateSet* JTextField$AccessibleJTextField::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JTextComponent$AccessibleJTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::SINGLE_LINE);
	return states;
}

JTextField$AccessibleJTextField::JTextField$AccessibleJTextField() {
}

$Class* JTextField$AccessibleJTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(JTextField$AccessibleJTextField, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTextField;)V", nullptr, $PROTECTED, $method(JTextField$AccessibleJTextField, init$, void, $JTextField*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JTextField$AccessibleJTextField, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextField$AccessibleJTextField", "javax.swing.JTextField", "AccessibleJTextField", $PROTECTED},
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTextField$AccessibleJTextField",
		"javax.swing.text.JTextComponent$AccessibleJTextComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTextField"
	};
	$loadClass(JTextField$AccessibleJTextField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextField$AccessibleJTextField));
	});
	return class$;
}

$Class* JTextField$AccessibleJTextField::class$ = nullptr;

	} // swing
} // javax