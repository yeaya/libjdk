#include <javax/swing/JPanel$AccessibleJPanel.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef PANEL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPanel = ::javax::swing::JPanel;

namespace javax {
	namespace swing {

void JPanel$AccessibleJPanel::init$($JPanel* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JPanel$AccessibleJPanel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

JPanel$AccessibleJPanel::JPanel$AccessibleJPanel() {
}

$Class* JPanel$AccessibleJPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JPanel;", nullptr, $FINAL | $SYNTHETIC, $field(JPanel$AccessibleJPanel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED, $method(JPanel$AccessibleJPanel, init$, void, $JPanel*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JPanel$AccessibleJPanel, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JPanel$AccessibleJPanel", "javax.swing.JPanel", "AccessibleJPanel", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JPanel$AccessibleJPanel",
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
		"javax.swing.JPanel"
	};
	$loadClass(JPanel$AccessibleJPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPanel$AccessibleJPanel));
	});
	return class$;
}

$Class* JPanel$AccessibleJPanel::class$ = nullptr;

	} // swing
} // javax