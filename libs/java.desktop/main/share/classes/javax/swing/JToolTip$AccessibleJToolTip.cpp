#include <javax/swing/JToolTip$AccessibleJToolTip.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JToolTip.h>
#include <jcpp.h>

#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef TOOL_TIP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToolTip = ::javax::swing::JToolTip;

namespace javax {
	namespace swing {

void JToolTip$AccessibleJToolTip::init$($JToolTip* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$String* JToolTip$AccessibleJToolTip::getAccessibleDescription() {
	$var($String, description, this->accessibleDescription);
	if (description == nullptr) {
		$init($AccessibleContext);
		$assign(description, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY)));
	}
	if (description == nullptr) {
		$assign(description, this->this$0->getTipText());
	}
	return description;
}

$AccessibleRole* JToolTip$AccessibleJToolTip::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TOOL_TIP;
}

JToolTip$AccessibleJToolTip::JToolTip$AccessibleJToolTip() {
}

$Class* JToolTip$AccessibleJToolTip::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JToolTip;", nullptr, $FINAL | $SYNTHETIC, $field(JToolTip$AccessibleJToolTip, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JToolTip;)V", nullptr, $PROTECTED, $method(JToolTip$AccessibleJToolTip, init$, void, $JToolTip*)},
		{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JToolTip$AccessibleJToolTip, getAccessibleDescription, $String*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JToolTip$AccessibleJToolTip, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToolTip$AccessibleJToolTip", "javax.swing.JToolTip", "AccessibleJToolTip", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JToolTip$AccessibleJToolTip",
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
		"javax.swing.JToolTip"
	};
	$loadClass(JToolTip$AccessibleJToolTip, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToolTip$AccessibleJToolTip));
	});
	return class$;
}

$Class* JToolTip$AccessibleJToolTip::class$ = nullptr;

	} // swing
} // javax