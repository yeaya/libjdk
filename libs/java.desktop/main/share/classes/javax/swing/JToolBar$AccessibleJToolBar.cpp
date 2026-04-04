#include <javax/swing/JToolBar$AccessibleJToolBar.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef TOOL_BAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToolBar = ::javax::swing::JToolBar;

namespace javax {
	namespace swing {

void JToolBar$AccessibleJToolBar::init$($JToolBar* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleStateSet* JToolBar$AccessibleJToolBar::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	return states;
}

$AccessibleRole* JToolBar$AccessibleJToolBar::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TOOL_BAR;
}

JToolBar$AccessibleJToolBar::JToolBar$AccessibleJToolBar() {
}

$Class* JToolBar$AccessibleJToolBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JToolBar;", nullptr, $FINAL | $SYNTHETIC, $field(JToolBar$AccessibleJToolBar, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JToolBar;)V", nullptr, $PROTECTED, $method(JToolBar$AccessibleJToolBar, init$, void, $JToolBar*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JToolBar$AccessibleJToolBar, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JToolBar$AccessibleJToolBar, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToolBar$AccessibleJToolBar", "javax.swing.JToolBar", "AccessibleJToolBar", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JToolBar$AccessibleJToolBar",
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
		"javax.swing.JToolBar"
	};
	$loadClass(JToolBar$AccessibleJToolBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToolBar$AccessibleJToolBar));
	});
	return class$;
}

$Class* JToolBar$AccessibleJToolBar::class$ = nullptr;

	} // swing
} // javax