#include <javax/swing/JColorChooser$AccessibleJColorChooser.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <jcpp.h>

#undef COLOR_CHOOSER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

void JColorChooser$AccessibleJColorChooser::init$($JColorChooser* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JColorChooser$AccessibleJColorChooser::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::COLOR_CHOOSER;
}

JColorChooser$AccessibleJColorChooser::JColorChooser$AccessibleJColorChooser() {
}

$Class* JColorChooser$AccessibleJColorChooser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JColorChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooser$AccessibleJColorChooser, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JColorChooser;)V", nullptr, $PROTECTED, $method(JColorChooser$AccessibleJColorChooser, init$, void, $JColorChooser*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JColorChooser$AccessibleJColorChooser, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JColorChooser$AccessibleJColorChooser", "javax.swing.JColorChooser", "AccessibleJColorChooser", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JColorChooser$AccessibleJColorChooser",
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
		"javax.swing.JColorChooser"
	};
	$loadClass(JColorChooser$AccessibleJColorChooser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JColorChooser$AccessibleJColorChooser));
	});
	return class$;
}

$Class* JColorChooser$AccessibleJColorChooser::class$ = nullptr;

	} // swing
} // javax