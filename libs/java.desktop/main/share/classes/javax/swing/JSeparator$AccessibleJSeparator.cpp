#include <javax/swing/JSeparator$AccessibleJSeparator.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

#undef SEPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSeparator = ::javax::swing::JSeparator;

namespace javax {
	namespace swing {

void JSeparator$AccessibleJSeparator::init$($JSeparator* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JSeparator$AccessibleJSeparator::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SEPARATOR;
}

JSeparator$AccessibleJSeparator::JSeparator$AccessibleJSeparator() {
}

$Class* JSeparator$AccessibleJSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JSeparator;", nullptr, $FINAL | $SYNTHETIC, $field(JSeparator$AccessibleJSeparator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $method(JSeparator$AccessibleJSeparator, init$, void, $JSeparator*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JSeparator$AccessibleJSeparator, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSeparator$AccessibleJSeparator", "javax.swing.JSeparator", "AccessibleJSeparator", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JSeparator$AccessibleJSeparator",
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
		"javax.swing.JSeparator"
	};
	$loadClass(JSeparator$AccessibleJSeparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSeparator$AccessibleJSeparator));
	});
	return class$;
}

$Class* JSeparator$AccessibleJSeparator::class$ = nullptr;

	} // swing
} // javax