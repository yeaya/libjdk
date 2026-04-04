#include <javax/swing/JComponent$AccessibleJComponent$AccessibleContainerHandler.h>
#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <jcpp.h>

#undef ACCESSIBLE_CHILD_PROPERTY

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

void JComponent$AccessibleJComponent$AccessibleContainerHandler::init$($JComponent$AccessibleJComponent* this$1) {
	$set(this, this$1, this$1);
}

void JComponent$AccessibleJComponent$AccessibleContainerHandler::componentAdded($ContainerEvent* e) {
	$useLocalObjectStack();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, nullptr, $(c->getAccessibleContext()));
	}
}

void JComponent$AccessibleJComponent$AccessibleContainerHandler::componentRemoved($ContainerEvent* e) {
	$useLocalObjectStack();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, $(c->getAccessibleContext()), nullptr);
	}
}

JComponent$AccessibleJComponent$AccessibleContainerHandler::JComponent$AccessibleJComponent$AccessibleContainerHandler() {
}

$Class* JComponent$AccessibleJComponent$AccessibleContainerHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JComponent$AccessibleJComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$AccessibleJComponent$AccessibleContainerHandler, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent$AccessibleJComponent;)V", nullptr, $PROTECTED, $method(JComponent$AccessibleJComponent$AccessibleContainerHandler, init$, void, $JComponent$AccessibleJComponent*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent$AccessibleContainerHandler, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent$AccessibleContainerHandler, componentRemoved, void, $ContainerEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{"javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleContainerHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler",
		"java.lang.Object",
		"java.awt.event.ContainerListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$AccessibleJComponent$AccessibleContainerHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$AccessibleJComponent$AccessibleContainerHandler);
	});
	return class$;
}

$Class* JComponent$AccessibleJComponent$AccessibleContainerHandler::class$ = nullptr;

	} // swing
} // javax