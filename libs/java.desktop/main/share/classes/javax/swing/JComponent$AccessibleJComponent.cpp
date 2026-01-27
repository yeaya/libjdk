#include <javax/swing/JComponent$AccessibleJComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleExtendedComponent.h>
#include <javax/accessibility/AccessibleKeyBinding.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef ACCESSIBLE_NAME_PROPERTY
#undef LABELED_BY_PROPERTY
#undef OPAQUE
#undef SWING_COMPONENT

using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleExtendedComponent = ::javax::accessibility::AccessibleExtendedComponent;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

namespace javax {
	namespace swing {

$CompoundAttribute _JComponent$AccessibleJComponent_FieldAnnotations_accessibleFocusHandler[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JComponent$AccessibleJComponent_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$AccessibleJComponent, this$0)},
	{"propertyListenersCount", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(JComponent$AccessibleJComponent, propertyListenersCount)},
	{"accessibleFocusHandler", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED | $DEPRECATED, $field(JComponent$AccessibleJComponent, accessibleFocusHandler), _JComponent$AccessibleJComponent_FieldAnnotations_accessibleFocusHandler},
	{}
};

$MethodInfo _JComponent$AccessibleJComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $method(JComponent$AccessibleJComponent, init$, void, $JComponent*)},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, addFocusListener, void, $FocusListener*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, contains, bool, $Point*)},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleAt, $Accessible*, $Point*)},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleChild, $Accessible*, int32_t)},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleChildrenCount, int32_t)},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleComponent, $AccessibleComponent*)},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleDescription, $String*)},
	{"getAccessibleExtendedComponent", "()Ljavax/accessibility/AccessibleExtendedComponent;", nullptr, 0, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleExtendedComponent, $AccessibleExtendedComponent*)},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleIndexInParent, int32_t)},
	{"getAccessibleKeyBinding", "()Ljavax/accessibility/AccessibleKeyBinding;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleKeyBinding, $AccessibleKeyBinding*)},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleName, $String*)},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleParent, $Accessible*)},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleRole, $AccessibleRole*)},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getAccessibleStateSet, $AccessibleStateSet*)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getBackground, $Color*)},
	{"getBorderTitle", "(Ljavax/swing/border/Border;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JComponent$AccessibleJComponent, getBorderTitle, $String*, $Border*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getBounds, $Rectangle*)},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getCursor, $Cursor*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getFont, $Font*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getFontMetrics, $FontMetrics*, $Font*)},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getForeground, $Color*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getLocale, $Locale*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getLocationOnScreen, $Point*)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, getSize, $Dimension*)},
	{"getTitledBorderText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getTitledBorderText, $String*)},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, getToolTipText, $String*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, isEnabled, bool)},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, isFocusTraversable, bool)},
	{"isShowing", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, isShowing, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, isVisible, bool)},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, removeFocusListener, void, $FocusListener*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$AccessibleJComponent, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"requestFocus", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, requestFocus, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setBackground, void, $Color*)},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setBounds, void, $Rectangle*)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setCursor, void, $Cursor*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setForeground, void, $Color*)},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setLocation, void, $Point*)},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setSize, void, $Dimension*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JComponent$AccessibleJComponent, setVisible, void, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComponent$AccessibleJComponent_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleFocusHandler", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleContainerHandler", $PROTECTED},
	{}
};

$ClassInfo _JComponent$AccessibleJComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.JComponent$AccessibleJComponent",
	"java.awt.Container$AccessibleAWTContainer",
	"javax.accessibility.AccessibleExtendedComponent",
	_JComponent$AccessibleJComponent_FieldInfo_,
	_JComponent$AccessibleJComponent_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$AccessibleJComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$AccessibleJComponent($Class* clazz) {
	return $of($alloc(JComponent$AccessibleJComponent));
}

int32_t JComponent$AccessibleJComponent::hashCode() {
	 return this->$Container$AccessibleAWTContainer::hashCode();
}

bool JComponent$AccessibleJComponent::equals(Object$* arg0) {
	 return this->$Container$AccessibleAWTContainer::equals(arg0);
}

$Object* JComponent$AccessibleJComponent::clone() {
	 return this->$Container$AccessibleAWTContainer::clone();
}

$String* JComponent$AccessibleJComponent::toString() {
	 return this->$Container$AccessibleAWTContainer::toString();
}

void JComponent$AccessibleJComponent::finalize() {
	this->$Container$AccessibleAWTContainer::finalize();
}

void JComponent$AccessibleJComponent::init$($JComponent* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
	this->propertyListenersCount = 0;
	$set(this, accessibleFocusHandler, nullptr);
}

void JComponent$AccessibleJComponent::addPropertyChangeListener($PropertyChangeListener* listener) {
	$Container$AccessibleAWTContainer::addPropertyChangeListener(listener);
}

void JComponent$AccessibleJComponent::removePropertyChangeListener($PropertyChangeListener* listener) {
	$Container$AccessibleAWTContainer::removePropertyChangeListener(listener);
}

$String* JComponent$AccessibleJComponent::getBorderTitle($Border* b) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, nullptr);
	if ($instanceOf($TitledBorder, b)) {
		return $nc(($cast($TitledBorder, b)))->getTitle();
	} else if ($instanceOf($CompoundBorder, b)) {
		$assign(s, getBorderTitle($($nc(($cast($CompoundBorder, b)))->getInsideBorder())));
		if (s == nullptr) {
			$assign(s, getBorderTitle($($nc(($cast($CompoundBorder, b)))->getOutsideBorder())));
		}
		return s;
	} else {
		return nullptr;
	}
}

$String* JComponent$AccessibleJComponent::getAccessibleName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, this->accessibleName);
	if (name == nullptr) {
		$init($AccessibleContext);
		$assign(name, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
	}
	if (name == nullptr) {
		$assign(name, getBorderTitle($(this->this$0->getBorder())));
	}
	if (name == nullptr) {
		$init($JLabel);
		$var($Object, o, this->this$0->getClientProperty($JLabel::LABELED_BY_PROPERTY));
		if ($instanceOf($Accessible, o)) {
			$var($AccessibleContext, ac, $nc(($cast($Accessible, o)))->getAccessibleContext());
			if (ac != nullptr) {
				$assign(name, ac->getAccessibleName());
			}
		}
	}
	return name;
}

$String* JComponent$AccessibleJComponent::getAccessibleDescription() {
	$useLocalCurrentObjectStackCache();
	$var($String, description, this->accessibleDescription);
	if (description == nullptr) {
		$init($AccessibleContext);
		$assign(description, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY)));
	}
	if (description == nullptr) {
		try {
			$assign(description, getToolTipText());
		} catch ($Exception& e) {
		}
	}
	if (description == nullptr) {
		$init($JLabel);
		$var($Object, o, this->this$0->getClientProperty($JLabel::LABELED_BY_PROPERTY));
		if ($instanceOf($Accessible, o)) {
			$var($AccessibleContext, ac, $nc(($cast($Accessible, o)))->getAccessibleContext());
			if (ac != nullptr) {
				$assign(description, ac->getAccessibleDescription());
			}
		}
	}
	return description;
}

$AccessibleRole* JComponent$AccessibleJComponent::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SWING_COMPONENT;
}

$AccessibleStateSet* JComponent$AccessibleJComponent::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Container$AccessibleAWTContainer::getAccessibleStateSet());
	if (this->this$0->isOpaque()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::OPAQUE);
	}
	return states;
}

int32_t JComponent$AccessibleJComponent::getAccessibleChildrenCount() {
	return $Container$AccessibleAWTContainer::getAccessibleChildrenCount();
}

$Accessible* JComponent$AccessibleJComponent::getAccessibleChild(int32_t i) {
	return $Container$AccessibleAWTContainer::getAccessibleChild(i);
}

$AccessibleExtendedComponent* JComponent$AccessibleJComponent::getAccessibleExtendedComponent() {
	return this;
}

$String* JComponent$AccessibleJComponent::getToolTipText() {
	return this->this$0->getToolTipText();
}

$String* JComponent$AccessibleJComponent::getTitledBorderText() {
	$var($Border, border, this->this$0->getBorder());
	if ($instanceOf($TitledBorder, border)) {
		return $nc(($cast($TitledBorder, border)))->getTitle();
	} else {
		return nullptr;
	}
}

$AccessibleKeyBinding* JComponent$AccessibleJComponent::getAccessibleKeyBinding() {
	$useLocalCurrentObjectStackCache();
	$init($JLabel);
	$var($Object, o, this->this$0->getClientProperty($JLabel::LABELED_BY_PROPERTY));
	if ($instanceOf($Accessible, o)) {
		$var($AccessibleContext, ac, $nc(($cast($Accessible, o)))->getAccessibleContext());
		if (ac != nullptr) {
			$var($AccessibleComponent, comp, ac->getAccessibleComponent());
			if (!($instanceOf($AccessibleExtendedComponent, comp))) {
				return nullptr;
			}
			return $nc(($cast($AccessibleExtendedComponent, comp)))->getAccessibleKeyBinding();
		}
	}
	return nullptr;
}

$Accessible* JComponent$AccessibleJComponent::getAccessibleAt($Point* p) {
	return $Container$AccessibleAWTContainer::getAccessibleAt(p);
}

void JComponent$AccessibleJComponent::removeFocusListener($FocusListener* l) {
	$Container$AccessibleAWTContainer::removeFocusListener(l);
}

void JComponent$AccessibleJComponent::addFocusListener($FocusListener* l) {
	$Container$AccessibleAWTContainer::addFocusListener(l);
}

void JComponent$AccessibleJComponent::requestFocus() {
	$Container$AccessibleAWTContainer::requestFocus();
}

bool JComponent$AccessibleJComponent::isFocusTraversable() {
	return $Container$AccessibleAWTContainer::isFocusTraversable();
}

void JComponent$AccessibleJComponent::setSize($Dimension* d) {
	$Container$AccessibleAWTContainer::setSize(d);
}

$Dimension* JComponent$AccessibleJComponent::getSize() {
	return $Container$AccessibleAWTContainer::getSize();
}

void JComponent$AccessibleJComponent::setBounds($Rectangle* r) {
	$Container$AccessibleAWTContainer::setBounds(r);
}

$Rectangle* JComponent$AccessibleJComponent::getBounds() {
	return $Container$AccessibleAWTContainer::getBounds();
}

void JComponent$AccessibleJComponent::setLocation($Point* p) {
	$Container$AccessibleAWTContainer::setLocation(p);
}

$Point* JComponent$AccessibleJComponent::getLocation() {
	return $Container$AccessibleAWTContainer::getLocation();
}

$Point* JComponent$AccessibleJComponent::getLocationOnScreen() {
	return $Container$AccessibleAWTContainer::getLocationOnScreen();
}

bool JComponent$AccessibleJComponent::contains($Point* p) {
	return $Container$AccessibleAWTContainer::contains(p);
}

bool JComponent$AccessibleJComponent::isShowing() {
	return $Container$AccessibleAWTContainer::isShowing();
}

void JComponent$AccessibleJComponent::setVisible(bool b) {
	$Container$AccessibleAWTContainer::setVisible(b);
}

bool JComponent$AccessibleJComponent::isVisible() {
	return $Container$AccessibleAWTContainer::isVisible();
}

void JComponent$AccessibleJComponent::setEnabled(bool b) {
	$Container$AccessibleAWTContainer::setEnabled(b);
}

bool JComponent$AccessibleJComponent::isEnabled() {
	return $Container$AccessibleAWTContainer::isEnabled();
}

$FontMetrics* JComponent$AccessibleJComponent::getFontMetrics($Font* f) {
	return $Container$AccessibleAWTContainer::getFontMetrics(f);
}

void JComponent$AccessibleJComponent::setFont($Font* f) {
	$Container$AccessibleAWTContainer::setFont(f);
}

$Font* JComponent$AccessibleJComponent::getFont() {
	return $Container$AccessibleAWTContainer::getFont();
}

void JComponent$AccessibleJComponent::setCursor($Cursor* cursor) {
	$Container$AccessibleAWTContainer::setCursor(cursor);
}

$Cursor* JComponent$AccessibleJComponent::getCursor() {
	return $Container$AccessibleAWTContainer::getCursor();
}

void JComponent$AccessibleJComponent::setForeground($Color* c) {
	$Container$AccessibleAWTContainer::setForeground(c);
}

$Color* JComponent$AccessibleJComponent::getForeground() {
	return $Container$AccessibleAWTContainer::getForeground();
}

void JComponent$AccessibleJComponent::setBackground($Color* c) {
	$Container$AccessibleAWTContainer::setBackground(c);
}

$Color* JComponent$AccessibleJComponent::getBackground() {
	return $Container$AccessibleAWTContainer::getBackground();
}

$AccessibleComponent* JComponent$AccessibleJComponent::getAccessibleComponent() {
	return $Container$AccessibleAWTContainer::getAccessibleComponent();
}

$Locale* JComponent$AccessibleJComponent::getLocale() {
	return $Container$AccessibleAWTContainer::getLocale();
}

int32_t JComponent$AccessibleJComponent::getAccessibleIndexInParent() {
	return $Container$AccessibleAWTContainer::getAccessibleIndexInParent();
}

$Accessible* JComponent$AccessibleJComponent::getAccessibleParent() {
	return $Container$AccessibleAWTContainer::getAccessibleParent();
}

JComponent$AccessibleJComponent::JComponent$AccessibleJComponent() {
}

$Class* JComponent$AccessibleJComponent::load$($String* name, bool initialize) {
	$loadClass(JComponent$AccessibleJComponent, name, initialize, &_JComponent$AccessibleJComponent_ClassInfo_, allocate$JComponent$AccessibleJComponent);
	return class$;
}

$Class* JComponent$AccessibleJComponent::class$ = nullptr;

	} // swing
} // javax