#include <java/awt/MenuComponent$AccessibleAWTMenuComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef AWT_COMPONENT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _MenuComponent$AccessibleAWTMenuComponent_FieldInfo_[] = {
	{"this$0", "Ljava/awt/MenuComponent;", nullptr, $FINAL | $SYNTHETIC, $field(MenuComponent$AccessibleAWTMenuComponent, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuComponent$AccessibleAWTMenuComponent, serialVersionUID)},
	{}
};

$MethodInfo _MenuComponent$AccessibleAWTMenuComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuComponent;)V", nullptr, $PROTECTED, $method(MenuComponent$AccessibleAWTMenuComponent, init$, void, $MenuComponent*)},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, addAccessibleSelection, void, int32_t)},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, addFocusListener, void, $FocusListener*)},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, clearAccessibleSelection, void)},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, contains, bool, $Point*)},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleAt, $Accessible*, $Point*)},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleChild, $Accessible*, int32_t)},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleChildrenCount, int32_t)},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleComponent, $AccessibleComponent*)},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleDescription, $String*)},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleIndexInParent, int32_t)},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleName, $String*)},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleParent, $Accessible*)},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleRole, $AccessibleRole*)},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleSelection, $AccessibleSelection*)},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleSelection, $Accessible*, int32_t)},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleSelectionCount, int32_t)},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getAccessibleStateSet, $AccessibleStateSet*)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getBackground, $Color*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getBounds, $Rectangle*)},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getCursor, $Cursor*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getFont, $Font*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getFontMetrics, $FontMetrics*, $Font*)},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getForeground, $Color*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getLocale, $Locale*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getLocationOnScreen, $Point*)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, getSize, $Dimension*)},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, isAccessibleChildSelected, bool, int32_t)},
	{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, isEnabled, bool)},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, isFocusTraversable, bool)},
	{"isShowing", "()Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, isShowing, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, isVisible, bool)},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, removeAccessibleSelection, void, int32_t)},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, removeFocusListener, void, $FocusListener*)},
	{"requestFocus", "()V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, requestFocus, void)},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, selectAllAccessibleSelection, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setBackground, void, $Color*)},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setBounds, void, $Rectangle*)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setCursor, void, $Cursor*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setForeground, void, $Color*)},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setLocation, void, $Point*)},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setSize, void, $Dimension*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$AccessibleAWTMenuComponent, setVisible, void, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MenuComponent$AccessibleAWTMenuComponent_InnerClassesInfo_[] = {
	{"java.awt.MenuComponent$AccessibleAWTMenuComponent", "java.awt.MenuComponent", "AccessibleAWTMenuComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _MenuComponent$AccessibleAWTMenuComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.MenuComponent$AccessibleAWTMenuComponent",
	"javax.accessibility.AccessibleContext",
	"java.io.Serializable,javax.accessibility.AccessibleComponent,javax.accessibility.AccessibleSelection",
	_MenuComponent$AccessibleAWTMenuComponent_FieldInfo_,
	_MenuComponent$AccessibleAWTMenuComponent_MethodInfo_,
	nullptr,
	nullptr,
	_MenuComponent$AccessibleAWTMenuComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuComponent"
};

$Object* allocate$MenuComponent$AccessibleAWTMenuComponent($Class* clazz) {
	return $of($alloc(MenuComponent$AccessibleAWTMenuComponent));
}

int32_t MenuComponent$AccessibleAWTMenuComponent::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool MenuComponent$AccessibleAWTMenuComponent::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* MenuComponent$AccessibleAWTMenuComponent::clone() {
	 return this->$AccessibleContext::clone();
}

$String* MenuComponent$AccessibleAWTMenuComponent::toString() {
	 return this->$AccessibleContext::toString();
}

void MenuComponent$AccessibleAWTMenuComponent::finalize() {
	this->$AccessibleContext::finalize();
}

void MenuComponent$AccessibleAWTMenuComponent::init$($MenuComponent* this$0) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
}

$AccessibleSelection* MenuComponent$AccessibleAWTMenuComponent::getAccessibleSelection() {
	return this;
}

$String* MenuComponent$AccessibleAWTMenuComponent::getAccessibleName() {
	return this->accessibleName;
}

$String* MenuComponent$AccessibleAWTMenuComponent::getAccessibleDescription() {
	return this->accessibleDescription;
}

$AccessibleRole* MenuComponent$AccessibleAWTMenuComponent::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::AWT_COMPONENT;
}

$AccessibleStateSet* MenuComponent$AccessibleAWTMenuComponent::getAccessibleStateSet() {
	return this->this$0->getAccessibleStateSet();
}

$Accessible* MenuComponent$AccessibleAWTMenuComponent::getAccessibleParent() {
	if (this->accessibleParent != nullptr) {
		return this->accessibleParent;
	} else {
		$var($MenuContainer, parent, this->this$0->getParent());
		if ($instanceOf($Accessible, parent)) {
			return $cast($Accessible, parent);
		}
	}
	return nullptr;
}

int32_t MenuComponent$AccessibleAWTMenuComponent::getAccessibleIndexInParent() {
	return this->this$0->getAccessibleIndexInParent();
}

int32_t MenuComponent$AccessibleAWTMenuComponent::getAccessibleChildrenCount() {
	return 0;
}

$Accessible* MenuComponent$AccessibleAWTMenuComponent::getAccessibleChild(int32_t i) {
	return nullptr;
}

$Locale* MenuComponent$AccessibleAWTMenuComponent::getLocale() {
	$var($MenuContainer, parent, this->this$0->getParent());
	if ($instanceOf($Component, parent)) {
		return $nc(($cast($Component, parent)))->getLocale();
	} else {
		return $Locale::getDefault();
	}
}

$AccessibleComponent* MenuComponent$AccessibleAWTMenuComponent::getAccessibleComponent() {
	return this;
}

$Color* MenuComponent$AccessibleAWTMenuComponent::getBackground() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setBackground($Color* c) {
}

$Color* MenuComponent$AccessibleAWTMenuComponent::getForeground() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setForeground($Color* c) {
}

$Cursor* MenuComponent$AccessibleAWTMenuComponent::getCursor() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setCursor($Cursor* cursor) {
}

$Font* MenuComponent$AccessibleAWTMenuComponent::getFont() {
	return this->this$0->getFont();
}

void MenuComponent$AccessibleAWTMenuComponent::setFont($Font* f) {
	this->this$0->setFont(f);
}

$FontMetrics* MenuComponent$AccessibleAWTMenuComponent::getFontMetrics($Font* f) {
	return nullptr;
}

bool MenuComponent$AccessibleAWTMenuComponent::isEnabled() {
	return true;
}

void MenuComponent$AccessibleAWTMenuComponent::setEnabled(bool b) {
}

bool MenuComponent$AccessibleAWTMenuComponent::isVisible() {
	return true;
}

void MenuComponent$AccessibleAWTMenuComponent::setVisible(bool b) {
}

bool MenuComponent$AccessibleAWTMenuComponent::isShowing() {
	return true;
}

bool MenuComponent$AccessibleAWTMenuComponent::contains($Point* p) {
	return false;
}

$Point* MenuComponent$AccessibleAWTMenuComponent::getLocationOnScreen() {
	return nullptr;
}

$Point* MenuComponent$AccessibleAWTMenuComponent::getLocation() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setLocation($Point* p) {
}

$Rectangle* MenuComponent$AccessibleAWTMenuComponent::getBounds() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setBounds($Rectangle* r) {
}

$Dimension* MenuComponent$AccessibleAWTMenuComponent::getSize() {
	return nullptr;
}

void MenuComponent$AccessibleAWTMenuComponent::setSize($Dimension* d) {
}

$Accessible* MenuComponent$AccessibleAWTMenuComponent::getAccessibleAt($Point* p) {
	return nullptr;
}

bool MenuComponent$AccessibleAWTMenuComponent::isFocusTraversable() {
	return true;
}

void MenuComponent$AccessibleAWTMenuComponent::requestFocus() {
}

void MenuComponent$AccessibleAWTMenuComponent::addFocusListener($FocusListener* l) {
}

void MenuComponent$AccessibleAWTMenuComponent::removeFocusListener($FocusListener* l) {
}

int32_t MenuComponent$AccessibleAWTMenuComponent::getAccessibleSelectionCount() {
	return 0;
}

$Accessible* MenuComponent$AccessibleAWTMenuComponent::getAccessibleSelection(int32_t i) {
	return nullptr;
}

bool MenuComponent$AccessibleAWTMenuComponent::isAccessibleChildSelected(int32_t i) {
	return false;
}

void MenuComponent$AccessibleAWTMenuComponent::addAccessibleSelection(int32_t i) {
}

void MenuComponent$AccessibleAWTMenuComponent::removeAccessibleSelection(int32_t i) {
}

void MenuComponent$AccessibleAWTMenuComponent::clearAccessibleSelection() {
}

void MenuComponent$AccessibleAWTMenuComponent::selectAllAccessibleSelection() {
}

MenuComponent$AccessibleAWTMenuComponent::MenuComponent$AccessibleAWTMenuComponent() {
}

$Class* MenuComponent$AccessibleAWTMenuComponent::load$($String* name, bool initialize) {
	$loadClass(MenuComponent$AccessibleAWTMenuComponent, name, initialize, &_MenuComponent$AccessibleAWTMenuComponent_ClassInfo_, allocate$MenuComponent$AccessibleAWTMenuComponent);
	return class$;
}

$Class* MenuComponent$AccessibleAWTMenuComponent::class$ = nullptr;

	} // awt
} // java