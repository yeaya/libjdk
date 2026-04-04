#include <javax/swing/JTextArea$AccessibleJTextArea.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <jcpp.h>

#undef MULTI_LINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

void JTextArea$AccessibleJTextArea::init$($JTextArea* this$0) {
	$set(this, this$0, this$0);
	$JTextComponent$AccessibleJTextComponent::init$(this$0);
}

$AccessibleStateSet* JTextArea$AccessibleJTextArea::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JTextComponent$AccessibleJTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::MULTI_LINE);
	return states;
}

JTextArea$AccessibleJTextArea::JTextArea$AccessibleJTextArea() {
}

$Class* JTextArea$AccessibleJTextArea::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTextArea;", nullptr, $FINAL | $SYNTHETIC, $field(JTextArea$AccessibleJTextArea, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTextArea;)V", nullptr, $PROTECTED, $method(JTextArea$AccessibleJTextArea, init$, void, $JTextArea*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JTextArea$AccessibleJTextArea, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTextArea$AccessibleJTextArea", "javax.swing.JTextArea", "AccessibleJTextArea", $PROTECTED},
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTextArea$AccessibleJTextArea",
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
		"javax.swing.JTextArea"
	};
	$loadClass(JTextArea$AccessibleJTextArea, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTextArea$AccessibleJTextArea));
	});
	return class$;
}

$Class* JTextArea$AccessibleJTextArea::class$ = nullptr;

	} // swing
} // javax