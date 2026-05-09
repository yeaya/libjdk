#include <javax/swing/JScrollBar.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar$AccessibleJScrollBar.h>
#include <javax/swing/JScrollBar$ModelListener.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef BUSY
#undef HORIZONTAL
#undef MAX_VALUE
#undef VERTICAL

using $ComponentArray = $Array<::java::awt::Component>;
using $AdjustmentListenerArray = $Array<::java::awt::event::AdjustmentListener>;
using $Adjustable = ::java::awt::Adjustable;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Short = ::java::lang::Short;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar$AccessibleJScrollBar = ::javax::swing::JScrollBar$AccessibleJScrollBar;
using $JScrollBar$ModelListener = ::javax::swing::JScrollBar$ModelListener;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;

namespace javax {
	namespace swing {

$String* JScrollBar::toString() {
	return this->$JComponent::toString();
}

int32_t JScrollBar::hashCode() {
	return this->$JComponent::hashCode();
}

bool JScrollBar::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JScrollBar::clone() {
	return this->$JComponent::clone();
}

void JScrollBar::finalize() {
	this->$JComponent::finalize();
}

$String* JScrollBar::uiClassID = nullptr;

void JScrollBar::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $Adjustable::VERTICAL:
	case $Adjustable::HORIZONTAL:
		break;
	default:
		$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
	}
}

void JScrollBar::init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max) {
	$JComponent::init$();
	$set(this, fwdAdjustmentEvents, $new($JScrollBar$ModelListener, this));
	checkOrientation(orientation);
	this->unitIncrement = 1;
	this->blockIncrement = (extent == 0) ? 1 : extent;
	this->orientation = orientation;
	$set(this, model, $new($DefaultBoundedRangeModel, value, extent, min, max));
	this->model->addChangeListener(this->fwdAdjustmentEvents);
	setRequestFocusEnabled(false);
	updateUI();
}

void JScrollBar::init$(int32_t orientation) {
	JScrollBar::init$(orientation, 0, 10, 0, 100);
}

void JScrollBar::init$() {
	JScrollBar::init$($Adjustable::VERTICAL);
}

void JScrollBar::setUI($ScrollBarUI* ui) {
	$JComponent::setUI(ui);
}

$ComponentUI* JScrollBar::getUI() {
	return $cast($ScrollBarUI, this->ui);
}

void JScrollBar::updateUI() {
	setUI($$cast($ScrollBarUI, $UIManager::getUI(this)));
}

$String* JScrollBar::getUIClassID() {
	return JScrollBar::uiClassID;
}

int32_t JScrollBar::getOrientation() {
	return this->orientation;
}

void JScrollBar::setOrientation(int32_t orientation) {
	checkOrientation(orientation);
	int32_t oldValue = this->orientation;
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	if ((oldValue != orientation) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue == $Adjustable::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL), ((orientation == $Adjustable::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL));
	}
	if (orientation != oldValue) {
		revalidate();
	}
}

$BoundedRangeModel* JScrollBar::getModel() {
	return this->model;
}

void JScrollBar::setModel($BoundedRangeModel* newModel) {
	$useLocalObjectStack();
	$var($Integer, oldValue, nullptr);
	$var($BoundedRangeModel, oldModel, this->model);
	if (this->model != nullptr) {
		this->model->removeChangeListener(this->fwdAdjustmentEvents);
		$assign(oldValue, $Integer::valueOf($nc(this->model)->getValue()));
	}
	$set(this, model, newModel);
	if (this->model != nullptr) {
		this->model->addChangeListener(this->fwdAdjustmentEvents);
	}
	firePropertyChange("model"_s, oldModel, this->model);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_VALUE_PROPERTY, oldValue, $($Integer::valueOf($nc(this->model)->getValue())));
	}
}

int32_t JScrollBar::getUnitIncrement(int32_t direction) {
	return this->unitIncrement;
}

void JScrollBar::setUnitIncrement(int32_t unitIncrement) {
	int32_t oldValue = this->unitIncrement;
	this->unitIncrement = unitIncrement;
	firePropertyChange("unitIncrement"_s, oldValue, unitIncrement);
}

int32_t JScrollBar::getBlockIncrement(int32_t direction) {
	return this->blockIncrement;
}

void JScrollBar::setBlockIncrement(int32_t blockIncrement) {
	int32_t oldValue = this->blockIncrement;
	this->blockIncrement = blockIncrement;
	firePropertyChange("blockIncrement"_s, oldValue, blockIncrement);
}

int32_t JScrollBar::getUnitIncrement() {
	return this->unitIncrement;
}

int32_t JScrollBar::getBlockIncrement() {
	return this->blockIncrement;
}

int32_t JScrollBar::getValue() {
	return $$nc(getModel())->getValue();
}

void JScrollBar::setValue(int32_t value) {
	$useLocalObjectStack();
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	m->setValue(value);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $Integer::valueOf(oldValue));
		this->accessibleContext->firePropertyChange(var$0, var$1, $($Integer::valueOf(m->getValue())));
	}
}

int32_t JScrollBar::getVisibleAmount() {
	return $$nc(getModel())->getExtent();
}

void JScrollBar::setVisibleAmount(int32_t extent) {
	$$nc(getModel())->setExtent(extent);
}

int32_t JScrollBar::getMinimum() {
	return $$nc(getModel())->getMinimum();
}

void JScrollBar::setMinimum(int32_t minimum) {
	$$nc(getModel())->setMinimum(minimum);
}

int32_t JScrollBar::getMaximum() {
	return $$nc(getModel())->getMaximum();
}

void JScrollBar::setMaximum(int32_t maximum) {
	$$nc(getModel())->setMaximum(maximum);
}

bool JScrollBar::getValueIsAdjusting() {
	return $$nc(getModel())->getValueIsAdjusting();
}

void JScrollBar::setValueIsAdjusting(bool b) {
	$var($BoundedRangeModel, m, getModel());
	bool oldValue = $nc(m)->getValueIsAdjusting();
	m->setValueIsAdjusting(b);
	if ((oldValue != b) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue) ? $of($AccessibleState::BUSY) : ($Object*)nullptr), ((b) ? $of($AccessibleState::BUSY) : ($Object*)nullptr));
	}
}

void JScrollBar::setValues(int32_t newValue, int32_t newExtent, int32_t newMin, int32_t newMax) {
	$useLocalObjectStack();
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	m->setRangeProperties(newValue, newExtent, newMin, newMax, m->getValueIsAdjusting());
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $Integer::valueOf(oldValue));
		this->accessibleContext->firePropertyChange(var$0, var$1, $($Integer::valueOf(m->getValue())));
	}
}

void JScrollBar::addAdjustmentListener($AdjustmentListener* l) {
	$load($AdjustmentListener);
	$nc(this->listenerList)->add($AdjustmentListener::class$, l);
}

void JScrollBar::removeAdjustmentListener($AdjustmentListener* l) {
	$load($AdjustmentListener);
	$nc(this->listenerList)->remove($AdjustmentListener::class$, l);
}

$AdjustmentListenerArray* JScrollBar::getAdjustmentListeners() {
	$load($AdjustmentListener);
	return $cast($AdjustmentListenerArray, $nc(this->listenerList)->getListeners($AdjustmentListener::class$));
}

void JScrollBar::fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value) {
	fireAdjustmentValueChanged(id, type, value, getValueIsAdjusting());
}

void JScrollBar::fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value, bool isAdjusting) {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($AdjustmentEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($AdjustmentListener);
		if ($equals(listeners->get(i), $AdjustmentListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($AdjustmentEvent, this, id, type, value, isAdjusting));
			}
			$nc($cast($AdjustmentListener, listeners->get(i + 1)))->adjustmentValueChanged(e);
		}
	}
}

$Dimension* JScrollBar::getMinimumSize() {
	$var($Dimension, pref, getPreferredSize());
	if (this->orientation == $Adjustable::VERTICAL) {
		return $new($Dimension, $nc(pref)->width, 5);
	} else {
		return $new($Dimension, 5, $nc(pref)->height);
	}
}

$Dimension* JScrollBar::getMaximumSize() {
	$var($Dimension, pref, getPreferredSize());
	if (getOrientation() == $Adjustable::VERTICAL) {
		return $new($Dimension, $nc(pref)->width, $Short::MAX_VALUE);
	} else {
		return $new($Dimension, $Short::MAX_VALUE, $nc(pref)->height);
	}
}

void JScrollBar::setEnabled(bool x) {
	$useLocalObjectStack();
	$JComponent::setEnabled(x);
	$var($ComponentArray, children, getComponents());
	{
		$var($ComponentArray, arr$, children);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				$nc(child)->setEnabled(x);
			}
		}
	}
}

void JScrollBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JScrollBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JScrollBar::paramString() {
	$useLocalObjectStack();
	$var($String, orientationString, this->orientation == $Adjustable::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",blockIncrement="_s, $$str(this->blockIncrement), ",orientation="_s, orientationString, ",unitIncrement="_s, $$str(this->unitIncrement)});
}

$AccessibleContext* JScrollBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JScrollBar$AccessibleJScrollBar, this));
	}
	return this->accessibleContext;
}

JScrollBar::JScrollBar() {
}

void JScrollBar::clinit$($Class* clazz) {
	$assignStatic(JScrollBar::uiClassID, "ScrollBarUI"_s);
}

$Class* JScrollBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JScrollBar, uiClassID)},
		{"fwdAdjustmentEvents", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE, $field(JScrollBar, fwdAdjustmentEvents)},
		{"model", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JScrollBar, model)},
		{"orientation", "I", nullptr, $PROTECTED, $field(JScrollBar, orientation)},
		{"unitIncrement", "I", nullptr, $PROTECTED, $field(JScrollBar, unitIncrement)},
		{"blockIncrement", "I", nullptr, $PROTECTED, $field(JScrollBar, blockIncrement)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getAdjustmentListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAdjustmentListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAdjustmentListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBlockIncrementmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The scrollbar\'s block increment."},
		{}
	};
	$CompoundAttribute setBlockIncrementmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBlockIncrementmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximummethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The scrollbar\'s maximum value."},
		{}
	};
	$CompoundAttribute setMaximummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinimummethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The scrollbar\'s minimum value."},
		{}
	};
	$CompoundAttribute setMinimummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinimummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The scrollbar\'s BoundedRangeModel."},
		{}
	};
	$CompoundAttribute setModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JScrollBar.VERTICAL"},
		{'s', "JScrollBar.HORIZONTAL"},
		{'-'}
	};
	$NamedAttribute setOrientationmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The scrollbar\'s orientation."},
		{}
	};
	$CompoundAttribute setOrientationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOrientationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel"},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUnitIncrementmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The scrollbar\'s unit increment."},
		{}
	};
	$CompoundAttribute setUnitIncrementmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUnitIncrementmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValuemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The scrollbar\'s current value."},
		{}
	};
	$CompoundAttribute setValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValueIsAdjustingmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "True if the scrollbar thumb is being dragged."},
		{}
	};
	$CompoundAttribute setValueIsAdjustingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValueIsAdjustingmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setVisibleAmountmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The amount of the view that is currently visible."},
		{}
	};
	$CompoundAttribute setVisibleAmountmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVisibleAmountmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(JScrollBar, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JScrollBar, init$, void, int32_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JScrollBar, init$, void)},
		{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, addAdjustmentListener, void, $AdjustmentListener*)},
		{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(JScrollBar, checkOrientation, void, int32_t)},
		{"fireAdjustmentValueChanged", "(III)V", nullptr, $PROTECTED, $virtualMethod(JScrollBar, fireAdjustmentValueChanged, void, int32_t, int32_t, int32_t)},
		{"fireAdjustmentValueChanged", "(IIIZ)V", nullptr, $PRIVATE, $method(JScrollBar, fireAdjustmentValueChanged, void, int32_t, int32_t, int32_t, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAdjustmentListeners", "()[Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getAdjustmentListeners, $AdjustmentListenerArray*), nullptr, nullptr, getAdjustmentListenersmethodAnnotations$$},
		{"getBlockIncrement", "(I)I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getBlockIncrement, int32_t, int32_t)},
		{"getBlockIncrement", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getBlockIncrement, int32_t)},
		{"getMaximum", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getMaximum, int32_t)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getMaximumSize, $Dimension*)},
		{"getMinimum", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getMinimum, int32_t)},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getMinimumSize, $Dimension*)},
		{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getModel, $BoundedRangeModel*)},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getOrientation, int32_t)},
		{"getUI", "()Ljavax/swing/plaf/ScrollBarUI;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getUnitIncrement", "(I)I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getUnitIncrement, int32_t, int32_t)},
		{"getUnitIncrement", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getUnitIncrement, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getValue, int32_t)},
		{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getValueIsAdjusting, bool)},
		{"getVisibleAmount", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollBar, getVisibleAmount, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JScrollBar, paramString, $String*)},
		{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, removeAdjustmentListener, void, $AdjustmentListener*)},
		{"setBlockIncrement", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setBlockIncrement, void, int32_t), nullptr, nullptr, setBlockIncrementmethodAnnotations$$},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setEnabled, void, bool)},
		{"setMaximum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setMaximum, void, int32_t), nullptr, nullptr, setMaximummethodAnnotations$$},
		{"setMinimum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setMinimum, void, int32_t), nullptr, nullptr, setMinimummethodAnnotations$$},
		{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setModel, void, $BoundedRangeModel*), nullptr, nullptr, setModelmethodAnnotations$$},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setOrientation, void, int32_t), nullptr, nullptr, setOrientationmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/ScrollBarUI;)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setUI, void, $ScrollBarUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setUnitIncrement", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setUnitIncrement, void, int32_t), nullptr, nullptr, setUnitIncrementmethodAnnotations$$},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setValue, void, int32_t), nullptr, nullptr, setValuemethodAnnotations$$},
		{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setValueIsAdjusting, void, bool), nullptr, nullptr, setValueIsAdjustingmethodAnnotations$$},
		{"setValues", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setValues, void, int32_t, int32_t, int32_t, int32_t)},
		{"setVisibleAmount", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, setVisibleAmount, void, int32_t), nullptr, nullptr, setVisibleAmountmethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JScrollBar, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JScrollBar, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JScrollBar$AccessibleJScrollBar", "javax.swing.JScrollBar", "AccessibleJScrollBar", $PROTECTED},
		{"javax.swing.JScrollBar$ModelListener", "javax.swing.JScrollBar", "ModelListener", $PRIVATE},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component that helps determine the visible content range of an area."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JScrollBar",
		"javax.swing.JComponent",
		"java.awt.Adjustable,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JScrollBar$AccessibleJScrollBar,javax.swing.JScrollBar$ModelListener"
	};
	$loadClass(JScrollBar, name, initialize, &classInfo$$, JScrollBar::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JScrollBar));
	});
	return class$;
}

$Class* JScrollBar::class$ = nullptr;

	} // swing
} // javax