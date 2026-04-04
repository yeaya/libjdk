#include <javax/swing/JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <jcpp.h>

#undef CHECK_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;

namespace javax {
	namespace swing {

void JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::init$($JCheckBoxMenuItem* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem$AccessibleJMenuItem::init$(this$0);
}

$AccessibleRole* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem() {
}

$Class* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JCheckBoxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JCheckBoxMenuItem;)V", nullptr, $PROTECTED, $method(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, init$, void, $JCheckBoxMenuItem*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem", "javax.swing.JCheckBoxMenuItem", "AccessibleJCheckBoxMenuItem", $PROTECTED},
		{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem",
		"javax.swing.JMenuItem$AccessibleJMenuItem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JCheckBoxMenuItem"
	};
	$loadClass(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem));
	});
	return class$;
}

$Class* JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem::class$ = nullptr;

	} // swing
} // javax