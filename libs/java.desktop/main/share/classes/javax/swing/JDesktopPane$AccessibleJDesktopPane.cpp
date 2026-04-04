#include <javax/swing/JDesktopPane$AccessibleJDesktopPane.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <jcpp.h>

#undef DESKTOP_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;

namespace javax {
	namespace swing {

void JDesktopPane$AccessibleJDesktopPane::init$($JDesktopPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JDesktopPane$AccessibleJDesktopPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DESKTOP_PANE;
}

JDesktopPane$AccessibleJDesktopPane::JDesktopPane$AccessibleJDesktopPane() {
}

$Class* JDesktopPane$AccessibleJDesktopPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JDesktopPane;", nullptr, $FINAL | $SYNTHETIC, $field(JDesktopPane$AccessibleJDesktopPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDesktopPane;)V", nullptr, $PROTECTED, $method(JDesktopPane$AccessibleJDesktopPane, init$, void, $JDesktopPane*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane$AccessibleJDesktopPane, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JDesktopPane$AccessibleJDesktopPane", "javax.swing.JDesktopPane", "AccessibleJDesktopPane", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JDesktopPane$AccessibleJDesktopPane",
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
		"javax.swing.JDesktopPane"
	};
	$loadClass(JDesktopPane$AccessibleJDesktopPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JDesktopPane$AccessibleJDesktopPane));
	});
	return class$;
}

$Class* JDesktopPane$AccessibleJDesktopPane::class$ = nullptr;

	} // swing
} // javax