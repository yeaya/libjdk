#include <javax/swing/JViewport$AccessibleJViewport.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

#undef VIEWPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

void JViewport$AccessibleJViewport::init$($JViewport* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JViewport$AccessibleJViewport::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::VIEWPORT;
}

JViewport$AccessibleJViewport::JViewport$AccessibleJViewport() {
}

$Class* JViewport$AccessibleJViewport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JViewport;", nullptr, $FINAL | $SYNTHETIC, $field(JViewport$AccessibleJViewport, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JViewport;)V", nullptr, $PROTECTED, $method(JViewport$AccessibleJViewport, init$, void, $JViewport*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JViewport$AccessibleJViewport, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JViewport$AccessibleJViewport", "javax.swing.JViewport", "AccessibleJViewport", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JViewport$AccessibleJViewport",
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
		"javax.swing.JViewport"
	};
	$loadClass(JViewport$AccessibleJViewport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JViewport$AccessibleJViewport));
	});
	return class$;
}

$Class* JViewport$AccessibleJViewport::class$ = nullptr;

	} // swing
} // javax