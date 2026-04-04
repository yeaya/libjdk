#include <javax/swing/JLayer$1.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JLayer.h>
#include <jcpp.h>

#undef PANEL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayer = ::javax::swing::JLayer;

namespace javax {
	namespace swing {

void JLayer$1::init$($JLayer* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JLayer$1::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

JLayer$1::JLayer$1() {
}

$Class* JLayer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JLayer;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLayer;)V", nullptr, 0, $method(JLayer$1, init$, void, $JLayer*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JLayer$1, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JLayer",
		"getAccessibleContext",
		"()Ljavax/accessibility/AccessibleContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLayer$1", nullptr, nullptr, 0},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JLayer$1",
		"javax.swing.JComponent$AccessibleJComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JLayer"
	};
	$loadClass(JLayer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JLayer$1));
	});
	return class$;
}

$Class* JLayer$1::class$ = nullptr;

	} // swing
} // javax