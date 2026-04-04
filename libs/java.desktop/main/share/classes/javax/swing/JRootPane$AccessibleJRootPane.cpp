#include <javax/swing/JRootPane$AccessibleJRootPane.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef ROOT_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

void JRootPane$AccessibleJRootPane::init$($JRootPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JRootPane$AccessibleJRootPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::ROOT_PANE;
}

int32_t JRootPane$AccessibleJRootPane::getAccessibleChildrenCount() {
	return $JComponent$AccessibleJComponent::getAccessibleChildrenCount();
}

$Accessible* JRootPane$AccessibleJRootPane::getAccessibleChild(int32_t i) {
	return $JComponent$AccessibleJComponent::getAccessibleChild(i);
}

JRootPane$AccessibleJRootPane::JRootPane$AccessibleJRootPane() {
}

$Class* JRootPane$AccessibleJRootPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(JRootPane$AccessibleJRootPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $method(JRootPane$AccessibleJRootPane, init$, void, $JRootPane*)},
		{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JRootPane$AccessibleJRootPane, getAccessibleChild, $Accessible*, int32_t)},
		{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(JRootPane$AccessibleJRootPane, getAccessibleChildrenCount, int32_t)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JRootPane$AccessibleJRootPane, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRootPane$AccessibleJRootPane", "javax.swing.JRootPane", "AccessibleJRootPane", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JRootPane$AccessibleJRootPane",
		"javax.swing.JComponent$AccessibleJComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JRootPane"
	};
	$loadClass(JRootPane$AccessibleJRootPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRootPane$AccessibleJRootPane));
	});
	return class$;
}

$Class* JRootPane$AccessibleJRootPane::class$ = nullptr;

	} // swing
} // javax