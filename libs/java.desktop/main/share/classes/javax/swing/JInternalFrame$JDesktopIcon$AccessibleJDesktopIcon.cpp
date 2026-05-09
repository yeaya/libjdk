#include <javax/swing/JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef DESKTOP_ICON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;

namespace javax {
	namespace swing {

int32_t JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::hashCode() {
	return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::equals(Object$* arg0) {
	return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::clone() {
	return this->$JComponent$AccessibleJComponent::clone();
}

$String* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::toString() {
	return this->$JComponent$AccessibleJComponent::toString();
}

void JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::init$($JInternalFrame$JDesktopIcon* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DESKTOP_ICON;
}

$AccessibleValue* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getAccessibleValue() {
	return this;
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getCurrentAccessibleValue() {
	$useLocalObjectStack();
	$var($AccessibleContext, a, $$nc(this->this$0->getInternalFrame())->getAccessibleContext());
	$var($AccessibleValue, v, $nc(a)->getAccessibleValue());
	if (v != nullptr) {
		return v->getCurrentAccessibleValue();
	} else {
		return nullptr;
	}
}

bool JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::setCurrentAccessibleValue($Number* n) {
	$useLocalObjectStack();
	if (n == nullptr) {
		return false;
	}
	$var($AccessibleContext, a, $$nc(this->this$0->getInternalFrame())->getAccessibleContext());
	$var($AccessibleValue, v, $nc(a)->getAccessibleValue());
	if (v != nullptr) {
		return v->setCurrentAccessibleValue(n);
	} else {
		return false;
	}
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getMinimumAccessibleValue() {
	$useLocalObjectStack();
	$var($AccessibleContext, a, $$nc(this->this$0->getInternalFrame())->getAccessibleContext());
	if ($instanceOf($AccessibleValue, a)) {
		return $cast($AccessibleValue, a)->getMinimumAccessibleValue();
	} else {
		return nullptr;
	}
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getMaximumAccessibleValue() {
	$useLocalObjectStack();
	$var($AccessibleContext, a, $$nc(this->this$0->getInternalFrame())->getAccessibleContext());
	if ($instanceOf($AccessibleValue, a)) {
		return $cast($AccessibleValue, a)->getMaximumAccessibleValue();
	} else {
		return nullptr;
	}
}

JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon() {
}

$Class* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, $PROTECTED, $method(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, init$, void, $JInternalFrame$JDesktopIcon*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, getAccessibleValue, $AccessibleValue*)},
		{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, getCurrentAccessibleValue, $Number*)},
		{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, getMaximumAccessibleValue, $Number*)},
		{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, getMinimumAccessibleValue, $Number*)},
		{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC, $virtualMethod(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, setCurrentAccessibleValue, bool, $Number*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JInternalFrame$JDesktopIcon", "javax.swing.JInternalFrame", "JDesktopIcon", $PUBLIC | $STATIC},
		{"javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon", "javax.swing.JInternalFrame$JDesktopIcon", "AccessibleJDesktopIcon", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon",
		"javax.swing.JComponent$AccessibleJComponent",
		"javax.accessibility.AccessibleValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JInternalFrame"
	};
	$loadClass(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon));
	});
	return class$;
}

$Class* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::class$ = nullptr;

	} // swing
} // javax