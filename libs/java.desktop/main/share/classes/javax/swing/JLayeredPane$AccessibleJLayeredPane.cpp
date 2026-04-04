#include <javax/swing/JLayeredPane$AccessibleJLayeredPane.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef LAYERED_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;

namespace javax {
	namespace swing {

void JLayeredPane$AccessibleJLayeredPane::init$($JLayeredPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JLayeredPane$AccessibleJLayeredPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LAYERED_PANE;
}

JLayeredPane$AccessibleJLayeredPane::JLayeredPane$AccessibleJLayeredPane() {
}

$Class* JLayeredPane$AccessibleJLayeredPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JLayeredPane;", nullptr, $FINAL | $SYNTHETIC, $field(JLayeredPane$AccessibleJLayeredPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PROTECTED, $method(JLayeredPane$AccessibleJLayeredPane, init$, void, $JLayeredPane*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JLayeredPane$AccessibleJLayeredPane, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLayeredPane$AccessibleJLayeredPane", "javax.swing.JLayeredPane", "AccessibleJLayeredPane", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JLayeredPane$AccessibleJLayeredPane",
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
		"javax.swing.JLayeredPane"
	};
	$loadClass(JLayeredPane$AccessibleJLayeredPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JLayeredPane$AccessibleJLayeredPane));
	});
	return class$;
}

$Class* JLayeredPane$AccessibleJLayeredPane::class$ = nullptr;

	} // swing
} // javax