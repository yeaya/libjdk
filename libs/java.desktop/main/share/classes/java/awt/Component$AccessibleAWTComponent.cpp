#include <java/awt/Component$AccessibleAWTComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent$AccessibleAWTComponentHandler.h>
#include <java/awt/Component$AccessibleAWTComponent$AccessibleAWTFocusHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef AWT_COMPONENT
#undef ENABLED
#undef VISIBLE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent$AccessibleAWTComponentHandler = ::java::awt::Component$AccessibleAWTComponent$AccessibleAWTComponentHandler;
using $Component$AccessibleAWTComponent$AccessibleAWTFocusHandler = ::java::awt::Component$AccessibleAWTComponent$AccessibleAWTFocusHandler;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _Component$AccessibleAWTComponent_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$AccessibleAWTComponent, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component$AccessibleAWTComponent, serialVersionUID)},
	{"propertyListenersCount", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Component$AccessibleAWTComponent, propertyListenersCount)},
	{"accessibleAWTComponentHandler", "Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED, $field(Component$AccessibleAWTComponent, accessibleAWTComponentHandler)},
	{"accessibleAWTFocusHandler", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(Component$AccessibleAWTComponent, accessibleAWTFocusHandler)},
	{}
};

$MethodInfo _Component$AccessibleAWTComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(Component$AccessibleAWTComponent, init$, void, $Component*)},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, addFocusListener, void, $FocusListener*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, contains, bool, $Point*)},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleAt, $Accessible*, $Point*)},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleChild, $Accessible*, int32_t)},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleChildrenCount, int32_t)},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleComponent, $AccessibleComponent*)},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleDescription, $String*)},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleIndexInParent, int32_t)},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleName, $String*)},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleParent, $Accessible*)},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleRole, $AccessibleRole*)},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getAccessibleStateSet, $AccessibleStateSet*)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getBackground, $Color*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getBounds, $Rectangle*)},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getCursor, $Cursor*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getFont, $Font*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getFontMetrics, $FontMetrics*, $Font*)},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getForeground, $Color*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getLocale, $Locale*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getLocationOnScreen, $Point*)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, getSize, $Dimension*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, isEnabled, bool)},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, isFocusTraversable, bool)},
	{"isShowing", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, isShowing, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, isVisible, bool)},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, removeFocusListener, void, $FocusListener*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"requestFocus", "()V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, requestFocus, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setBackground, void, $Color*)},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setBounds, void, $Rectangle*)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setCursor, void, $Cursor*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setForeground, void, $Color*)},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setLocation, void, $Point*)},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setSize, void, $Dimension*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Component$AccessibleAWTComponent, setVisible, void, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$AccessibleAWTComponent_InnerClassesInfo_[] = {
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.Component$AccessibleAWTComponent$AccessibleAWTFocusHandler", "java.awt.Component$AccessibleAWTComponent", "AccessibleAWTFocusHandler", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent$AccessibleAWTComponentHandler", "java.awt.Component$AccessibleAWTComponent", "AccessibleAWTComponentHandler", $PROTECTED},
	{}
};

$ClassInfo _Component$AccessibleAWTComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleContext",
	"java.io.Serializable,javax.accessibility.AccessibleComponent",
	_Component$AccessibleAWTComponent_FieldInfo_,
	_Component$AccessibleAWTComponent_MethodInfo_,
	nullptr,
	nullptr,
	_Component$AccessibleAWTComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$AccessibleAWTComponent($Class* clazz) {
	return $of($alloc(Component$AccessibleAWTComponent));
}

int32_t Component$AccessibleAWTComponent::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool Component$AccessibleAWTComponent::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* Component$AccessibleAWTComponent::clone() {
	 return this->$AccessibleContext::clone();
}

$String* Component$AccessibleAWTComponent::toString() {
	 return this->$AccessibleContext::toString();
}

void Component$AccessibleAWTComponent::finalize() {
	this->$AccessibleContext::finalize();
}

void Component$AccessibleAWTComponent::init$($Component* this$0) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
	this->propertyListenersCount = 0;
	$set(this, accessibleAWTComponentHandler, nullptr);
	$set(this, accessibleAWTFocusHandler, nullptr);
}

void Component$AccessibleAWTComponent::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (this->accessibleAWTComponentHandler == nullptr) {
		$set(this, accessibleAWTComponentHandler, $new($Component$AccessibleAWTComponent$AccessibleAWTComponentHandler, this));
	}
	if (this->accessibleAWTFocusHandler == nullptr) {
		$set(this, accessibleAWTFocusHandler, $new($Component$AccessibleAWTComponent$AccessibleAWTFocusHandler, this));
	}
	if (this->propertyListenersCount++ == 0) {
		this->this$0->addComponentListener(this->accessibleAWTComponentHandler);
		this->this$0->addFocusListener(this->accessibleAWTFocusHandler);
	}
	$AccessibleContext::addPropertyChangeListener(listener);
}

void Component$AccessibleAWTComponent::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (--this->propertyListenersCount == 0) {
		this->this$0->removeComponentListener(this->accessibleAWTComponentHandler);
		this->this$0->removeFocusListener(this->accessibleAWTFocusHandler);
	}
	$AccessibleContext::removePropertyChangeListener(listener);
}

$String* Component$AccessibleAWTComponent::getAccessibleName() {
	return this->accessibleName;
}

$String* Component$AccessibleAWTComponent::getAccessibleDescription() {
	return this->accessibleDescription;
}

$AccessibleRole* Component$AccessibleAWTComponent::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::AWT_COMPONENT;
}

$AccessibleStateSet* Component$AccessibleAWTComponent::getAccessibleStateSet() {
	return this->this$0->getAccessibleStateSet();
}

$Accessible* Component$AccessibleAWTComponent::getAccessibleParent() {
	if (this->accessibleParent != nullptr) {
		return this->accessibleParent;
	} else {
		$var($Container, parent, this->this$0->getParent());
		if ($instanceOf($Accessible, parent)) {
			return $cast($Accessible, parent);
		}
	}
	return nullptr;
}

int32_t Component$AccessibleAWTComponent::getAccessibleIndexInParent() {
	return this->this$0->getAccessibleIndexInParent();
}

int32_t Component$AccessibleAWTComponent::getAccessibleChildrenCount() {
	return 0;
}

$Accessible* Component$AccessibleAWTComponent::getAccessibleChild(int32_t i) {
	return nullptr;
}

$Locale* Component$AccessibleAWTComponent::getLocale() {
	return this->this$0->getLocale();
}

$AccessibleComponent* Component$AccessibleAWTComponent::getAccessibleComponent() {
	return this;
}

$Color* Component$AccessibleAWTComponent::getBackground() {
	return this->this$0->getBackground();
}

void Component$AccessibleAWTComponent::setBackground($Color* c) {
	this->this$0->setBackground(c);
}

$Color* Component$AccessibleAWTComponent::getForeground() {
	return this->this$0->getForeground();
}

void Component$AccessibleAWTComponent::setForeground($Color* c) {
	this->this$0->setForeground(c);
}

$Cursor* Component$AccessibleAWTComponent::getCursor() {
	return this->this$0->getCursor();
}

void Component$AccessibleAWTComponent::setCursor($Cursor* cursor) {
	this->this$0->setCursor(cursor);
}

$Font* Component$AccessibleAWTComponent::getFont() {
	return this->this$0->getFont();
}

void Component$AccessibleAWTComponent::setFont($Font* f) {
	this->this$0->setFont(f);
}

$FontMetrics* Component$AccessibleAWTComponent::getFontMetrics($Font* f) {
	if (f == nullptr) {
		return nullptr;
	} else {
		return this->this$0->getFontMetrics(f);
	}
}

bool Component$AccessibleAWTComponent::isEnabled() {
	return this->this$0->isEnabled();
}

void Component$AccessibleAWTComponent::setEnabled(bool b) {
	bool old = this->this$0->isEnabled();
	this->this$0->setEnabled(b);
	if (b != old) {
		if (this->this$0->accessibleContext != nullptr) {
			if (b) {
				$init($AccessibleContext);
				$init($AccessibleState);
				$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ENABLED);
			} else {
				$init($AccessibleContext);
				$init($AccessibleState);
				$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::ENABLED, nullptr);
			}
		}
	}
}

bool Component$AccessibleAWTComponent::isVisible() {
	return this->this$0->isVisible();
}

void Component$AccessibleAWTComponent::setVisible(bool b) {
	bool old = this->this$0->isVisible();
	this->this$0->setVisible(b);
	if (b != old) {
		if (this->this$0->accessibleContext != nullptr) {
			if (b) {
				$init($AccessibleContext);
				$init($AccessibleState);
				$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::VISIBLE);
			} else {
				$init($AccessibleContext);
				$init($AccessibleState);
				$nc(this->this$0->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::VISIBLE, nullptr);
			}
		}
	}
}

bool Component$AccessibleAWTComponent::isShowing() {
	return this->this$0->isShowing();
}

bool Component$AccessibleAWTComponent::contains($Point* p) {
	return this->this$0->contains(p);
}

$Point* Component$AccessibleAWTComponent::getLocationOnScreen() {
	$synchronized(this->this$0->getTreeLock()) {
		if (this->this$0->isShowing()) {
			return this->this$0->getLocationOnScreen();
		} else {
			return nullptr;
		}
	}
}

$Point* Component$AccessibleAWTComponent::getLocation() {
	return this->this$0->getLocation();
}

void Component$AccessibleAWTComponent::setLocation($Point* p) {
	this->this$0->setLocation(p);
}

$Rectangle* Component$AccessibleAWTComponent::getBounds() {
	return this->this$0->getBounds();
}

void Component$AccessibleAWTComponent::setBounds($Rectangle* r) {
	this->this$0->setBounds(r);
}

$Dimension* Component$AccessibleAWTComponent::getSize() {
	return this->this$0->getSize();
}

void Component$AccessibleAWTComponent::setSize($Dimension* d) {
	this->this$0->setSize(d);
}

$Accessible* Component$AccessibleAWTComponent::getAccessibleAt($Point* p) {
	return nullptr;
}

bool Component$AccessibleAWTComponent::isFocusTraversable() {
	return this->this$0->isFocusTraversable();
}

void Component$AccessibleAWTComponent::requestFocus() {
	this->this$0->requestFocus();
}

void Component$AccessibleAWTComponent::addFocusListener($FocusListener* l) {
	this->this$0->addFocusListener(l);
}

void Component$AccessibleAWTComponent::removeFocusListener($FocusListener* l) {
	this->this$0->removeFocusListener(l);
}

Component$AccessibleAWTComponent::Component$AccessibleAWTComponent() {
}

$Class* Component$AccessibleAWTComponent::load$($String* name, bool initialize) {
	$loadClass(Component$AccessibleAWTComponent, name, initialize, &_Component$AccessibleAWTComponent_ClassInfo_, allocate$Component$AccessibleAWTComponent);
	return class$;
}

$Class* Component$AccessibleAWTComponent::class$ = nullptr;

	} // awt
} // java