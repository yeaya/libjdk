#include <javax/swing/JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <jcpp.h>

#undef RADIO_BUTTON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;

namespace javax {
	namespace swing {

void JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::init$($JRadioButtonMenuItem* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem$AccessibleJMenuItem::init$(this$0);
}

$AccessibleRole* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::RADIO_BUTTON;
}

JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem() {
}

$Class* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JRadioButtonMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JRadioButtonMenuItem;)V", nullptr, $PROTECTED, $method(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, init$, void, $JRadioButtonMenuItem*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem", "javax.swing.JRadioButtonMenuItem", "AccessibleJRadioButtonMenuItem", $PROTECTED},
		{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem",
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
		"javax.swing.JRadioButtonMenuItem"
	};
	$loadClass(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem));
	});
	return class$;
}

$Class* JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem::class$ = nullptr;

	} // swing
} // javax