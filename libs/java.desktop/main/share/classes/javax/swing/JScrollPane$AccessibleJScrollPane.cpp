#include <javax/swing/JScrollPane$AccessibleJScrollPane.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRelation.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef CONTROLLED_BY
#undef CONTROLLER_FOR
#undef SCROLL_PANE

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRelation = ::javax::accessibility::AccessibleRelation;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace javax {
	namespace swing {

int32_t JScrollPane$AccessibleJScrollPane::hashCode() {
	return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JScrollPane$AccessibleJScrollPane::equals(Object$* arg0) {
	return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JScrollPane$AccessibleJScrollPane::clone() {
	return this->$JComponent$AccessibleJComponent::clone();
}

$String* JScrollPane$AccessibleJScrollPane::toString() {
	return this->$JComponent$AccessibleJComponent::toString();
}

void JScrollPane$AccessibleJScrollPane::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JScrollPane$AccessibleJScrollPane::resetViewPort() {
	if (this->viewPort != nullptr) {
		this->viewPort->removeChangeListener(this);
		$nc(this->viewPort)->removePropertyChangeListener(this);
	}
	$set(this, viewPort, this->this$0->getViewport());
	if (this->viewPort != nullptr) {
		this->viewPort->addChangeListener(this);
		$nc(this->viewPort)->addPropertyChangeListener(this);
	}
}

void JScrollPane$AccessibleJScrollPane::init$($JScrollPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$set(this, viewPort, nullptr);
	resetViewPort();
	$var($JScrollBar, scrollBar, this$0->getHorizontalScrollBar());
	if (scrollBar != nullptr) {
		setScrollBarRelations(scrollBar);
	}
	$assign(scrollBar, this$0->getVerticalScrollBar());
	if (scrollBar != nullptr) {
		setScrollBarRelations(scrollBar);
	}
}

$AccessibleRole* JScrollPane$AccessibleJScrollPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_PANE;
}

void JScrollPane$AccessibleJScrollPane::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $Boolean::valueOf(false));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JScrollPane$AccessibleJScrollPane::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "horizontalScrollBar"_s || propertyName == "verticalScrollBar"_s) {
		if ($instanceOf($JScrollBar, $(e->getNewValue()))) {
			setScrollBarRelations($$cast($JScrollBar, e->getNewValue()));
		}
	}
}

void JScrollPane$AccessibleJScrollPane::setScrollBarRelations($JScrollBar* scrollBar) {
	$useLocalObjectStack();
	$init($AccessibleRelation);
	$var($AccessibleRelation, controlledBy, $new($AccessibleRelation, $AccessibleRelation::CONTROLLED_BY, scrollBar));
	$var($AccessibleRelation, controllerFor, $new($AccessibleRelation, $AccessibleRelation::CONTROLLER_FOR, this->this$0));
	$var($AccessibleContext, ac, $nc(scrollBar)->getAccessibleContext());
	$$nc($nc(ac)->getAccessibleRelationSet())->add(controllerFor);
	$$nc(getAccessibleRelationSet())->add(controlledBy);
}

JScrollPane$AccessibleJScrollPane::JScrollPane$AccessibleJScrollPane() {
}

$Class* JScrollPane$AccessibleJScrollPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(JScrollPane$AccessibleJScrollPane, this$0)},
		{"viewPort", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane$AccessibleJScrollPane, viewPort)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JScrollPane;)V", nullptr, $PUBLIC, $method(JScrollPane$AccessibleJScrollPane, init$, void, $JScrollPane*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JScrollPane$AccessibleJScrollPane, getAccessibleRole, $AccessibleRole*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane$AccessibleJScrollPane, propertyChange, void, $PropertyChangeEvent*)},
		{"resetViewPort", "()V", nullptr, $PUBLIC, $virtualMethod(JScrollPane$AccessibleJScrollPane, resetViewPort, void)},
		{"setScrollBarRelations", "(Ljavax/swing/JScrollBar;)V", nullptr, 0, $virtualMethod(JScrollPane$AccessibleJScrollPane, setScrollBarRelations, void, $JScrollBar*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane$AccessibleJScrollPane, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JScrollPane$AccessibleJScrollPane", "javax.swing.JScrollPane", "AccessibleJScrollPane", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JScrollPane$AccessibleJScrollPane",
		"javax.swing.JComponent$AccessibleJComponent",
		"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JScrollPane"
	};
	$loadClass(JScrollPane$AccessibleJScrollPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JScrollPane$AccessibleJScrollPane));
	});
	return class$;
}

$Class* JScrollPane$AccessibleJScrollPane::class$ = nullptr;

	} // swing
} // javax