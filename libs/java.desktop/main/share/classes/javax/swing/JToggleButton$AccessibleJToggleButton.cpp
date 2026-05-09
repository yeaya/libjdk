#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <java/awt/event/ItemEvent.h>
#include <java/util/EventObject.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef CHECKED
#undef TOGGLE_BUTTON

using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $JToggleButton = ::javax::swing::JToggleButton;

namespace javax {
	namespace swing {

int32_t JToggleButton$AccessibleJToggleButton::hashCode() {
	return this->$AbstractButton$AccessibleAbstractButton::hashCode();
}

bool JToggleButton$AccessibleJToggleButton::equals(Object$* arg0) {
	return this->$AbstractButton$AccessibleAbstractButton::equals(arg0);
}

$Object* JToggleButton$AccessibleJToggleButton::clone() {
	return this->$AbstractButton$AccessibleAbstractButton::clone();
}

$String* JToggleButton$AccessibleJToggleButton::toString() {
	return this->$AbstractButton$AccessibleAbstractButton::toString();
}

void JToggleButton$AccessibleJToggleButton::finalize() {
	this->$AbstractButton$AccessibleAbstractButton::finalize();
}

void JToggleButton$AccessibleJToggleButton::init$($JToggleButton* this$0) {
	$set(this, this$0, this$0);
	$AbstractButton$AccessibleAbstractButton::init$(this$0);
	this$0->addItemListener(this);
}

void JToggleButton$AccessibleJToggleButton::itemStateChanged($ItemEvent* e) {
	$useLocalObjectStack();
	$var($JToggleButton, tb, $cast($JToggleButton, $nc(e)->getSource()));
	if ($JToggleButton::access$000(this->this$0) != nullptr) {
		if ($nc(tb)->isSelected()) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$$nc($JToggleButton::access$100(this->this$0))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::CHECKED);
		} else {
			$init($AccessibleContext);
			$init($AccessibleState);
			$$nc($JToggleButton::access$200(this->this$0))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::CHECKED, nullptr);
		}
	}
}

$AccessibleRole* JToggleButton$AccessibleJToggleButton::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TOGGLE_BUTTON;
}

JToggleButton$AccessibleJToggleButton::JToggleButton$AccessibleJToggleButton() {
}

$Class* JToggleButton$AccessibleJToggleButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JToggleButton;", nullptr, $FINAL | $SYNTHETIC, $field(JToggleButton$AccessibleJToggleButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JToggleButton;)V", nullptr, $PUBLIC, $method(JToggleButton$AccessibleJToggleButton, init$, void, $JToggleButton*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JToggleButton$AccessibleJToggleButton, getAccessibleRole, $AccessibleRole*)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(JToggleButton$AccessibleJToggleButton, itemStateChanged, void, $ItemEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
		{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JToggleButton$AccessibleJToggleButton",
		"javax.swing.AbstractButton$AccessibleAbstractButton",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JToggleButton"
	};
	$loadClass(JToggleButton$AccessibleJToggleButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToggleButton$AccessibleJToggleButton));
	});
	return class$;
}

$Class* JToggleButton$AccessibleJToggleButton::class$ = nullptr;

	} // swing
} // javax