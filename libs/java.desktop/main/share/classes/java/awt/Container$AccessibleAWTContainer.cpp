#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Container$AccessibleAWTContainer$AccessibleContainerHandler.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/ContainerListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer$AccessibleContainerHandler = ::java::awt::Container$AccessibleAWTContainer$AccessibleContainerHandler;
using $Point = ::java::awt::Point;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace java {
	namespace awt {

void Container$AccessibleAWTContainer::init$($Container* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this->propertyListenersCount = 0;
	$set(this, accessibleContainerHandler, nullptr);
}

int32_t Container$AccessibleAWTContainer::getAccessibleChildrenCount() {
	return this->this$0->getAccessibleChildrenCount();
}

$Accessible* Container$AccessibleAWTContainer::getAccessibleChild(int32_t i) {
	return this->this$0->getAccessibleChild(i);
}

$Accessible* Container$AccessibleAWTContainer::getAccessibleAt($Point* p) {
	return this->this$0->getAccessibleAt(p);
}

void Container$AccessibleAWTContainer::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (this->accessibleContainerHandler == nullptr) {
		$set(this, accessibleContainerHandler, $new($Container$AccessibleAWTContainer$AccessibleContainerHandler, this));
	}
	if (this->propertyListenersCount++ == 0) {
		this->this$0->addContainerListener(this->accessibleContainerHandler);
	}
	$Component$AccessibleAWTComponent::addPropertyChangeListener(listener);
}

void Container$AccessibleAWTContainer::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (--this->propertyListenersCount == 0) {
		this->this$0->removeContainerListener(this->accessibleContainerHandler);
	}
	$Component$AccessibleAWTComponent::removePropertyChangeListener(listener);
}

Container$AccessibleAWTContainer::Container$AccessibleAWTContainer() {
}

$Class* Container$AccessibleAWTContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(Container$AccessibleAWTContainer, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Container$AccessibleAWTContainer, serialVersionUID)},
		{"propertyListenersCount", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Container$AccessibleAWTContainer, propertyListenersCount)},
		{"accessibleContainerHandler", "Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED, $field(Container$AccessibleAWTContainer, accessibleContainerHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Container;)V", nullptr, $PROTECTED, $method(Container$AccessibleAWTContainer, init$, void, $Container*)},
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(Container$AccessibleAWTContainer, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(Container$AccessibleAWTContainer, getAccessibleAt, $Accessible*, $Point*)},
		{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(Container$AccessibleAWTContainer, getAccessibleChild, $Accessible*, int32_t)},
		{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(Container$AccessibleAWTContainer, getAccessibleChildrenCount, int32_t)},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(Container$AccessibleAWTContainer, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
		{"java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler", "java.awt.Container$AccessibleAWTContainer", "AccessibleContainerHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Container$AccessibleAWTContainer",
		"java.awt.Component$AccessibleAWTComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$AccessibleAWTContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Container$AccessibleAWTContainer));
	});
	return class$;
}

$Class* Container$AccessibleAWTContainer::class$ = nullptr;

	} // awt
} // java