#include <javax/swing/JSplitPane.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Number.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane$AccessibleJSplitPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <jcpp.h>

#undef BOTTOM
#undef CONTINUOUS_LAYOUT_PROPERTY
#undef DIVIDER
#undef DIVIDER_LOCATION_PROPERTY
#undef DIVIDER_SIZE_PROPERTY
#undef HORIZONTAL_SPLIT
#undef LAST_DIVIDER_LOCATION_PROPERTY
#undef LEFT
#undef ONE_TOUCH_EXPANDABLE_PROPERTY
#undef ORIENTATION_PROPERTY
#undef RESIZE_WEIGHT_PROPERTY
#undef RIGHT
#undef TOP
#undef TRUE
#undef VERTICAL_SPLIT

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane$AccessibleJSplitPane = ::javax::swing::JSplitPane$AccessibleJSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;

namespace javax {
	namespace swing {

$String* JSplitPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JSplitPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JSplitPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JSplitPane::clone() {
	 return this->$JComponent::clone();
}

void JSplitPane::finalize() {
	this->$JComponent::finalize();
}

$String* JSplitPane::uiClassID = nullptr;
$String* JSplitPane::LEFT = nullptr;
$String* JSplitPane::RIGHT = nullptr;
$String* JSplitPane::TOP = nullptr;
$String* JSplitPane::BOTTOM = nullptr;
$String* JSplitPane::DIVIDER = nullptr;
$String* JSplitPane::ORIENTATION_PROPERTY = nullptr;
$String* JSplitPane::CONTINUOUS_LAYOUT_PROPERTY = nullptr;
$String* JSplitPane::DIVIDER_SIZE_PROPERTY = nullptr;
$String* JSplitPane::ONE_TOUCH_EXPANDABLE_PROPERTY = nullptr;
$String* JSplitPane::LAST_DIVIDER_LOCATION_PROPERTY = nullptr;
$String* JSplitPane::DIVIDER_LOCATION_PROPERTY = nullptr;
$String* JSplitPane::RESIZE_WEIGHT_PROPERTY = nullptr;

void JSplitPane::init$() {
	$useLocalObjectStack();
	bool var$0 = $UIManager::getBoolean("SplitPane.continuousLayout"_s);
	$var($Component, var$1, $new($JButton, $($UIManager::getString("SplitPane.leftButtonText"_s))));
	JSplitPane::init$(JSplitPane::HORIZONTAL_SPLIT, var$0, var$1, $$new($JButton, $($UIManager::getString("SplitPane.rightButtonText"_s))));
}

void JSplitPane::init$(int32_t newOrientation) {
	JSplitPane::init$(newOrientation, $UIManager::getBoolean("SplitPane.continuousLayout"_s));
}

void JSplitPane::init$(int32_t newOrientation, bool newContinuousLayout) {
	JSplitPane::init$(newOrientation, newContinuousLayout, nullptr, nullptr);
}

void JSplitPane::init$(int32_t newOrientation, $Component* newLeftComponent, $Component* newRightComponent) {
	JSplitPane::init$(newOrientation, $UIManager::getBoolean("SplitPane.continuousLayout"_s), newLeftComponent, newRightComponent);
}

void JSplitPane::init$(int32_t newOrientation, bool newContinuousLayout, $Component* newLeftComponent, $Component* newRightComponent) {
	$JComponent::init$();
	this->dividerSizeSet = false;
	this->dividerLocation = -1;
	setLayout(nullptr);
	setUIProperty("opaque"_s, $Boolean::TRUE);
	this->orientation = newOrientation;
	if (this->orientation != JSplitPane::HORIZONTAL_SPLIT && this->orientation != JSplitPane::VERTICAL_SPLIT) {
		$throwNew($IllegalArgumentException, "cannot create JSplitPane, orientation must be one of JSplitPane.HORIZONTAL_SPLIT or JSplitPane.VERTICAL_SPLIT"_s);
	}
	this->continuousLayout = newContinuousLayout;
	if (newLeftComponent != nullptr) {
		setLeftComponent(newLeftComponent);
	}
	if (newRightComponent != nullptr) {
		setRightComponent(newRightComponent);
	}
	updateUI();
}

void JSplitPane::setUI($SplitPaneUI* ui) {
	if ($cast($SplitPaneUI, this->ui) != ui) {
		$JComponent::setUI(ui);
		revalidate();
	}
}

$ComponentUI* JSplitPane::getUI() {
	return $cast($SplitPaneUI, this->ui);
}

void JSplitPane::updateUI() {
	setUI($$cast($SplitPaneUI, $UIManager::getUI(this)));
	revalidate();
}

$String* JSplitPane::getUIClassID() {
	return JSplitPane::uiClassID;
}

void JSplitPane::setDividerSize(int32_t newSize) {
	int32_t oldSize = this->dividerSize;
	this->dividerSizeSet = true;
	if (oldSize != newSize) {
		this->dividerSize = newSize;
		firePropertyChange(JSplitPane::DIVIDER_SIZE_PROPERTY, oldSize, newSize);
	}
}

int32_t JSplitPane::getDividerSize() {
	return this->dividerSize;
}

void JSplitPane::setLeftComponent($Component* comp) {
	if (comp == nullptr) {
		if (this->leftComponent != nullptr) {
			remove(this->leftComponent);
			$set(this, leftComponent, nullptr);
		}
	} else {
		add(comp, JSplitPane::LEFT);
	}
}

$Component* JSplitPane::getLeftComponent() {
	return this->leftComponent;
}

void JSplitPane::setTopComponent($Component* comp) {
	setLeftComponent(comp);
}

$Component* JSplitPane::getTopComponent() {
	return this->leftComponent;
}

void JSplitPane::setRightComponent($Component* comp) {
	if (comp == nullptr) {
		if (this->rightComponent != nullptr) {
			remove(this->rightComponent);
			$set(this, rightComponent, nullptr);
		}
	} else {
		add(comp, JSplitPane::RIGHT);
	}
}

$Component* JSplitPane::getRightComponent() {
	return this->rightComponent;
}

void JSplitPane::setBottomComponent($Component* comp) {
	setRightComponent(comp);
}

$Component* JSplitPane::getBottomComponent() {
	return this->rightComponent;
}

void JSplitPane::setOneTouchExpandable(bool newValue) {
	bool oldValue = this->oneTouchExpandable;
	this->oneTouchExpandable = newValue;
	this->oneTouchExpandableSet = true;
	firePropertyChange(JSplitPane::ONE_TOUCH_EXPANDABLE_PROPERTY, oldValue, newValue);
	repaint();
}

bool JSplitPane::isOneTouchExpandable() {
	return this->oneTouchExpandable;
}

void JSplitPane::setLastDividerLocation(int32_t newLastLocation) {
	int32_t oldLocation = this->lastDividerLocation;
	this->lastDividerLocation = newLastLocation;
	firePropertyChange(JSplitPane::LAST_DIVIDER_LOCATION_PROPERTY, oldLocation, newLastLocation);
}

int32_t JSplitPane::getLastDividerLocation() {
	return this->lastDividerLocation;
}

void JSplitPane::setOrientation(int32_t orientation) {
	if ((orientation != JSplitPane::VERTICAL_SPLIT) && (orientation != JSplitPane::HORIZONTAL_SPLIT)) {
		$throwNew($IllegalArgumentException, "JSplitPane: orientation must be one of JSplitPane.VERTICAL_SPLIT or JSplitPane.HORIZONTAL_SPLIT"_s);
	}
	int32_t oldOrientation = this->orientation;
	this->orientation = orientation;
	firePropertyChange(JSplitPane::ORIENTATION_PROPERTY, oldOrientation, orientation);
}

int32_t JSplitPane::getOrientation() {
	return this->orientation;
}

void JSplitPane::setContinuousLayout(bool newContinuousLayout) {
	bool oldCD = this->continuousLayout;
	this->continuousLayout = newContinuousLayout;
	firePropertyChange(JSplitPane::CONTINUOUS_LAYOUT_PROPERTY, oldCD, newContinuousLayout);
}

bool JSplitPane::isContinuousLayout() {
	return this->continuousLayout;
}

void JSplitPane::setResizeWeight(double value) {
	if (value < 0 || value > 1) {
		$throwNew($IllegalArgumentException, "JSplitPane weight must be between 0 and 1"_s);
	}
	double oldWeight = this->resizeWeight;
	this->resizeWeight = value;
	firePropertyChange(JSplitPane::RESIZE_WEIGHT_PROPERTY, oldWeight, value);
}

double JSplitPane::getResizeWeight() {
	return this->resizeWeight;
}

void JSplitPane::resetToPreferredSizes() {
	$var($SplitPaneUI, ui, $cast($SplitPaneUI, getUI()));
	if (ui != nullptr) {
		ui->resetToPreferredSizes(this);
	}
}

void JSplitPane::setDividerLocation(double proportionalLocation) {
	if (proportionalLocation < 0.0 || proportionalLocation > 1.0) {
		$throwNew($IllegalArgumentException, "proportional location must be between 0.0 and 1.0."_s);
	}
	if (getOrientation() == JSplitPane::VERTICAL_SPLIT) {
		int32_t var$0 = getHeight();
		setDividerLocation($cast(int32_t, ((double)(var$0 - getDividerSize()) * proportionalLocation)));
	} else {
		int32_t var$1 = getWidth();
		setDividerLocation($cast(int32_t, ((double)(var$1 - getDividerSize()) * proportionalLocation)));
	}
}

void JSplitPane::setDividerLocation(int32_t location) {
	int32_t oldValue = this->dividerLocation;
	this->dividerLocation = location;
	$var($SplitPaneUI, ui, $cast($SplitPaneUI, getUI()));
	if (ui != nullptr) {
		ui->setDividerLocation(this, location);
	}
	firePropertyChange(JSplitPane::DIVIDER_LOCATION_PROPERTY, oldValue, location);
	setLastDividerLocation(oldValue);
}

int32_t JSplitPane::getDividerLocation() {
	return this->dividerLocation;
}

int32_t JSplitPane::getMinimumDividerLocation() {
	$var($SplitPaneUI, ui, $cast($SplitPaneUI, getUI()));
	if (ui != nullptr) {
		return ui->getMinimumDividerLocation(this);
	}
	return -1;
}

int32_t JSplitPane::getMaximumDividerLocation() {
	$var($SplitPaneUI, ui, $cast($SplitPaneUI, getUI()));
	if (ui != nullptr) {
		return ui->getMaximumDividerLocation(this);
	}
	return -1;
}

void JSplitPane::remove($Component* component) {
	if (component == this->leftComponent) {
		$set(this, leftComponent, nullptr);
	} else if (component == this->rightComponent) {
		$set(this, rightComponent, nullptr);
	}
	$JComponent::remove(component);
	revalidate();
	repaint();
}

void JSplitPane::remove(int32_t index) {
	$var($Component, comp, getComponent(index));
	if (comp == this->leftComponent) {
		$set(this, leftComponent, nullptr);
	} else if (comp == this->rightComponent) {
		$set(this, rightComponent, nullptr);
	}
	$JComponent::remove(index);
	revalidate();
	repaint();
}

void JSplitPane::removeAll() {
	$set(this, leftComponent, $set(this, rightComponent, nullptr));
	$JComponent::removeAll();
	revalidate();
	repaint();
}

bool JSplitPane::isValidateRoot() {
	return true;
}

void JSplitPane::addImpl($Component* comp, Object$* constraints$renamed, int32_t index) {
	$useLocalObjectStack();
	$var($Object, constraints, constraints$renamed);
	$var($Component, toRemove, nullptr);
	if (constraints != nullptr && !($instanceOf($String, constraints))) {
		$throwNew($IllegalArgumentException, "cannot add to layout: constraint must be a string (or null)"_s);
	}
	if (constraints == nullptr) {
		if (getLeftComponent() == nullptr) {
			$assign(constraints, JSplitPane::LEFT);
		} else if (getRightComponent() == nullptr) {
			$assign(constraints, JSplitPane::RIGHT);
		}
	}
	bool var$0 = constraints != nullptr;
	if (var$0) {
		bool var$1 = $of(constraints)->equals(JSplitPane::LEFT);
		var$0 = var$1 || $of(constraints)->equals(JSplitPane::TOP);
	}
	if (var$0) {
		$assign(toRemove, getLeftComponent());
		if (toRemove != nullptr) {
			remove(toRemove);
		}
		$set(this, leftComponent, comp);
		index = -1;
	} else {
		bool var$2 = constraints != nullptr;
		if (var$2) {
			bool var$3 = $of(constraints)->equals(JSplitPane::RIGHT);
			var$2 = var$3 || $of(constraints)->equals(JSplitPane::BOTTOM);
		}
		if (var$2) {
			$assign(toRemove, getRightComponent());
			if (toRemove != nullptr) {
				remove(toRemove);
			}
			$set(this, rightComponent, comp);
			index = -1;
		} else if (constraints != nullptr && $of(constraints)->equals(JSplitPane::DIVIDER)) {
			index = -1;
		}
	}
	$JComponent::addImpl(comp, constraints, index);
	revalidate();
	repaint();
}

void JSplitPane::paintChildren($Graphics* g) {
	$useLocalObjectStack();
	$JComponent::paintChildren(g);
	$var($SplitPaneUI, ui, $cast($SplitPaneUI, getUI()));
	if (ui != nullptr) {
		$var($Graphics, tempG, $nc(g)->create());
		ui->finishedPaintingChildren(this, tempG);
		$nc(tempG)->dispose();
	}
}

void JSplitPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JSplitPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

void JSplitPane::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "dividerSize"_s) {
		if (!this->dividerSizeSet) {
			setDividerSize($nc($cast($Number, value))->intValue());
			this->dividerSizeSet = false;
		}
	} else if (propertyName == "oneTouchExpandable"_s) {
		if (!this->oneTouchExpandableSet) {
			setOneTouchExpandable($nc($cast($Boolean, value))->booleanValue());
			this->oneTouchExpandableSet = false;
		}
	} else {
		$JComponent::setUIProperty(propertyName, value);
	}
}

$String* JSplitPane::paramString() {
	$useLocalObjectStack();
	$var($String, orientationString, this->orientation == JSplitPane::HORIZONTAL_SPLIT ? "HORIZONTAL_SPLIT"_s : "VERTICAL_SPLIT"_s);
	$var($String, continuousLayoutString, this->continuousLayout ? "true"_s : "false"_s);
	$var($String, oneTouchExpandableString, this->oneTouchExpandable ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",continuousLayout="_s, continuousLayoutString, ",dividerSize="_s, $$str(this->dividerSize), ",lastDividerLocation="_s, $$str(this->lastDividerLocation), ",oneTouchExpandable="_s, oneTouchExpandableString, ",orientation="_s, orientationString});
}

$AccessibleContext* JSplitPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSplitPane$AccessibleJSplitPane, this));
	}
	return this->accessibleContext;
}

JSplitPane::JSplitPane() {
}

void JSplitPane::clinit$($Class* clazz) {
	$assignStatic(JSplitPane::uiClassID, "SplitPaneUI"_s);
	$assignStatic(JSplitPane::LEFT, "left"_s);
	$assignStatic(JSplitPane::RIGHT, "right"_s);
	$assignStatic(JSplitPane::TOP, "top"_s);
	$assignStatic(JSplitPane::BOTTOM, "bottom"_s);
	$assignStatic(JSplitPane::DIVIDER, "divider"_s);
	$assignStatic(JSplitPane::ORIENTATION_PROPERTY, "orientation"_s);
	$assignStatic(JSplitPane::CONTINUOUS_LAYOUT_PROPERTY, "continuousLayout"_s);
	$assignStatic(JSplitPane::DIVIDER_SIZE_PROPERTY, "dividerSize"_s);
	$assignStatic(JSplitPane::ONE_TOUCH_EXPANDABLE_PROPERTY, "oneTouchExpandable"_s);
	$assignStatic(JSplitPane::LAST_DIVIDER_LOCATION_PROPERTY, "lastDividerLocation"_s);
	$assignStatic(JSplitPane::DIVIDER_LOCATION_PROPERTY, "dividerLocation"_s);
	$assignStatic(JSplitPane::RESIZE_WEIGHT_PROPERTY, "resizeWeight"_s);
}

$Class* JSplitPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSplitPane, uiClassID)},
		{"VERTICAL_SPLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JSplitPane, VERTICAL_SPLIT)},
		{"HORIZONTAL_SPLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JSplitPane, HORIZONTAL_SPLIT)},
		{"LEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, LEFT)},
		{"RIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, RIGHT)},
		{"TOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, TOP)},
		{"BOTTOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, BOTTOM)},
		{"DIVIDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, DIVIDER)},
		{"ORIENTATION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, ORIENTATION_PROPERTY)},
		{"CONTINUOUS_LAYOUT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, CONTINUOUS_LAYOUT_PROPERTY)},
		{"DIVIDER_SIZE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, DIVIDER_SIZE_PROPERTY)},
		{"ONE_TOUCH_EXPANDABLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, ONE_TOUCH_EXPANDABLE_PROPERTY)},
		{"LAST_DIVIDER_LOCATION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, LAST_DIVIDER_LOCATION_PROPERTY)},
		{"DIVIDER_LOCATION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, DIVIDER_LOCATION_PROPERTY)},
		{"RESIZE_WEIGHT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JSplitPane, RESIZE_WEIGHT_PROPERTY)},
		{"orientation", "I", nullptr, $PROTECTED, $field(JSplitPane, orientation)},
		{"continuousLayout", "Z", nullptr, $PROTECTED, $field(JSplitPane, continuousLayout)},
		{"leftComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JSplitPane, leftComponent)},
		{"rightComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JSplitPane, rightComponent)},
		{"dividerSize", "I", nullptr, $PROTECTED, $field(JSplitPane, dividerSize)},
		{"dividerSizeSet", "Z", nullptr, $PRIVATE, $field(JSplitPane, dividerSizeSet)},
		{"oneTouchExpandable", "Z", nullptr, $PROTECTED, $field(JSplitPane, oneTouchExpandable)},
		{"oneTouchExpandableSet", "Z", nullptr, $PRIVATE, $field(JSplitPane, oneTouchExpandableSet)},
		{"lastDividerLocation", "I", nullptr, $PROTECTED, $field(JSplitPane, lastDividerLocation)},
		{"resizeWeight", "D", nullptr, $PRIVATE, $field(JSplitPane, resizeWeight)},
		{"dividerLocation", "I", nullptr, $PRIVATE, $field(JSplitPane, dividerLocation)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "orientation"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this SplitPane."},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getLeftComponentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The component to the left (or above) the divider."},
		{}
	};
	$CompoundAttribute getLeftComponentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getLeftComponentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getMaximumDividerLocationmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getMaximumDividerLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMaximumDividerLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getMinimumDividerLocationmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The minimum location of the divider from the L&F."},
		{}
	};
	$CompoundAttribute getMinimumDividerLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getMinimumDividerLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUImethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The L&F object that renders this component."},
		{}
	};
	$CompoundAttribute getUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "A string that specifies the name of the L&F class."},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isValidateRootmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{}
	};
	$CompoundAttribute isValidateRootmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isValidateRootmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBottomComponentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The component below, or to the right of the divider."},
		{}
	};
	$CompoundAttribute setBottomComponentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBottomComponentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setContinuousLayoutmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Whether the child components are continuously redisplayed and laid out during user intervention."},
		{}
	};
	$CompoundAttribute setContinuousLayoutmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setContinuousLayoutmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDividerLocationmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The location of the divider."},
		{}
	};
	$CompoundAttribute setDividerLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDividerLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDividerLocationmethodAnnotations$$$1$namedAttribute[] = {
		{"description", 's', "The location of the divider."},
		{}
	};
	$CompoundAttribute setDividerLocationmethodAnnotations$$$1[] = {
		{"Ljava/beans/BeanProperty;", setDividerLocationmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute setDividerSizemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The size of the divider."},
		{}
	};
	$CompoundAttribute setDividerSizemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDividerSizemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLastDividerLocationmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The last location the divider was at."},
		{}
	};
	$CompoundAttribute setLastDividerLocationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLastDividerLocationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setOneTouchExpandablemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "UI widget on the divider to quickly expand/collapse the divider."},
		{}
	};
	$CompoundAttribute setOneTouchExpandablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOneTouchExpandablemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$1[] = {
		{'s', "JSplitPane.HORIZONTAL_SPLIT"},
		{'s', "JSplitPane.VERTICAL_SPLIT"},
		{'-'}
	};
	$NamedAttribute setOrientationmethodAnnotations$$$namedAttribute[] = {
		{"enumerationValues", '[', $attribute$1},
		{"description", 's', "The orientation, or how the splitter is divided."},
		{}
	};
	$CompoundAttribute setOrientationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOrientationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setResizeWeightmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Specifies how to distribute extra space when the split pane resizes."},
		{}
	};
	$CompoundAttribute setResizeWeightmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setResizeWeightmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRightComponentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The component to the right (or below) the divider."},
		{}
	};
	$CompoundAttribute setRightComponentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRightComponentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTopComponentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The component above, or to the left of the divider."},
		{}
	};
	$CompoundAttribute setTopComponentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTopComponentmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSplitPane, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JSplitPane, init$, void, int32_t), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(JSplitPane, init$, void, int32_t, bool)},
		{"<init>", "(ILjava/awt/Component;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(JSplitPane, init$, void, int32_t, $Component*, $Component*)},
		{"<init>", "(IZLjava/awt/Component;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(JSplitPane, init$, void, int32_t, bool, $Component*, $Component*)},
		{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED, $virtualMethod(JSplitPane, addImpl, void, $Component*, Object$*, int32_t)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getBottomComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getBottomComponent, $Component*)},
		{"getDividerLocation", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getDividerLocation, int32_t)},
		{"getDividerSize", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getDividerSize, int32_t)},
		{"getLastDividerLocation", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getLastDividerLocation, int32_t)},
		{"getLeftComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getLeftComponent, $Component*), nullptr, nullptr, getLeftComponentmethodAnnotations$$},
		{"getMaximumDividerLocation", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getMaximumDividerLocation, int32_t), nullptr, nullptr, getMaximumDividerLocationmethodAnnotations$$},
		{"getMinimumDividerLocation", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getMinimumDividerLocation, int32_t), nullptr, nullptr, getMinimumDividerLocationmethodAnnotations$$},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getOrientation, int32_t)},
		{"getResizeWeight", "()D", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getResizeWeight, double)},
		{"getRightComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getRightComponent, $Component*)},
		{"getTopComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getTopComponent, $Component*)},
		{"getUI", "()Ljavax/swing/plaf/SplitPaneUI;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getUI, $ComponentUI*), nullptr, nullptr, getUImethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JSplitPane, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"isContinuousLayout", "()Z", nullptr, $PUBLIC, $virtualMethod(JSplitPane, isContinuousLayout, bool)},
		{"isOneTouchExpandable", "()Z", nullptr, $PUBLIC, $virtualMethod(JSplitPane, isOneTouchExpandable, bool)},
		{"isValidateRoot", "()Z", nullptr, $PUBLIC, $virtualMethod(JSplitPane, isValidateRoot, bool), nullptr, nullptr, isValidateRootmethodAnnotations$$},
		{"paintChildren", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JSplitPane, paintChildren, void, $Graphics*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JSplitPane, paramString, $String*)},
		{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, remove, void, $Component*)},
		{"remove", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, remove, void, int32_t)},
		{"removeAll", "()V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, removeAll, void)},
		{"resetToPreferredSizes", "()V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, resetToPreferredSizes, void)},
		{"setBottomComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setBottomComponent, void, $Component*), nullptr, nullptr, setBottomComponentmethodAnnotations$$},
		{"setContinuousLayout", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setContinuousLayout, void, bool), nullptr, nullptr, setContinuousLayoutmethodAnnotations$$},
		{"setDividerLocation", "(D)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setDividerLocation, void, double), nullptr, nullptr, setDividerLocationmethodAnnotations$$},
		{"setDividerLocation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setDividerLocation, void, int32_t), nullptr, nullptr, setDividerLocationmethodAnnotations$$$1},
		{"setDividerSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setDividerSize, void, int32_t), nullptr, nullptr, setDividerSizemethodAnnotations$$},
		{"setLastDividerLocation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setLastDividerLocation, void, int32_t), nullptr, nullptr, setLastDividerLocationmethodAnnotations$$},
		{"setLeftComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setLeftComponent, void, $Component*)},
		{"setOneTouchExpandable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setOneTouchExpandable, void, bool), nullptr, nullptr, setOneTouchExpandablemethodAnnotations$$},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setOrientation, void, int32_t), nullptr, nullptr, setOrientationmethodAnnotations$$},
		{"setResizeWeight", "(D)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setResizeWeight, void, double), nullptr, nullptr, setResizeWeightmethodAnnotations$$},
		{"setRightComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setRightComponent, void, $Component*), nullptr, nullptr, setRightComponentmethodAnnotations$$},
		{"setTopComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setTopComponent, void, $Component*), nullptr, nullptr, setTopComponentmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/SplitPaneUI;)V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, setUI, void, $SplitPaneUI*)},
		{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(JSplitPane, setUIProperty, void, $String*, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JSplitPane, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JSplitPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSplitPane$AccessibleJSplitPane", "javax.swing.JSplitPane", "AccessibleJSplitPane", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JSplitPane",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JSplitPane$AccessibleJSplitPane"
	};
	$loadClass(JSplitPane, name, initialize, &classInfo$$, JSplitPane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSplitPane));
	});
	return class$;
}

$Class* JSplitPane::class$ = nullptr;

	} // swing
} // javax