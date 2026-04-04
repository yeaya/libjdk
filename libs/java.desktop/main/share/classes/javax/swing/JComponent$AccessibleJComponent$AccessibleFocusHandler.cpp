#include <javax/swing/JComponent$AccessibleJComponent$AccessibleFocusHandler.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

void JComponent$AccessibleJComponent$AccessibleFocusHandler::init$($JComponent$AccessibleJComponent* this$1) {
	$set(this, this$1, this$1);
}

void JComponent$AccessibleJComponent$AccessibleFocusHandler::focusGained($FocusEvent* event) {
	if ($JComponent::access$000(this->this$1->this$0) != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$$nc($JComponent::access$100(this->this$1->this$0))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED);
	}
}

void JComponent$AccessibleJComponent$AccessibleFocusHandler::focusLost($FocusEvent* event) {
	if ($JComponent::access$200(this->this$1->this$0) != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$$nc($JComponent::access$300(this->this$1->this$0))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
}

JComponent$AccessibleJComponent$AccessibleFocusHandler::JComponent$AccessibleJComponent$AccessibleFocusHandler() {
}

$Class* JComponent$AccessibleJComponent$AccessibleFocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JComponent$AccessibleJComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$AccessibleJComponent$AccessibleFocusHandler, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent$AccessibleJComponent;)V", nullptr, $PROTECTED, $method(JComponent$AccessibleJComponent$AccessibleFocusHandler, init$, void, $JComponent$AccessibleJComponent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent$AccessibleFocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent$AccessibleFocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{"javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleFocusHandler", $PROTECTED},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$AccessibleJComponent$AccessibleFocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$AccessibleJComponent$AccessibleFocusHandler);
	});
	return class$;
}

$Class* JComponent$AccessibleJComponent$AccessibleFocusHandler::class$ = nullptr;

	} // swing
} // javax