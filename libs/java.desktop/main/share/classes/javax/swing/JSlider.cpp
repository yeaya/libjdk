#include <javax/swing/JSlider.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider$1SmartHashtable.h>
#include <javax/swing/JSlider$AccessibleJSlider.h>
#include <javax/swing/JSlider$ModelListener.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef BUSY
#undef HORIZONTAL
#undef VERTICAL

using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
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
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JSlider$1SmartHashtable = ::javax::swing::JSlider$1SmartHashtable;
using $JSlider$AccessibleJSlider = ::javax::swing::JSlider$AccessibleJSlider;
using $JSlider$ModelListener = ::javax::swing::JSlider$ModelListener;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;

namespace javax {
	namespace swing {

$String* JSlider::toString() {
	return this->$JComponent::toString();
}

int32_t JSlider::hashCode() {
	return this->$JComponent::hashCode();
}

bool JSlider::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JSlider::clone() {
	return this->$JComponent::clone();
}

void JSlider::finalize() {
	this->$JComponent::finalize();
}

$String* JSlider::uiClassID = nullptr;

void JSlider::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $SwingConstants::VERTICAL:
	case $SwingConstants::HORIZONTAL:
		break;
	default:
		$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
	}
}

void JSlider::init$() {
	JSlider::init$($SwingConstants::HORIZONTAL, 0, 100, 50);
}

void JSlider::init$(int32_t orientation) {
	JSlider::init$(orientation, 0, 100, 50);
}

void JSlider::init$(int32_t min, int32_t max) {
	JSlider::init$($SwingConstants::HORIZONTAL, min, max, (min + max) / 2);
}

void JSlider::init$(int32_t min, int32_t max, int32_t value) {
	JSlider::init$($SwingConstants::HORIZONTAL, min, max, value);
}

void JSlider::init$(int32_t orientation, int32_t min, int32_t max, int32_t value) {
	$JComponent::init$();
	this->paintTicks = false;
	this->paintTrack = true;
	this->paintLabels = false;
	this->isInverted = false;
	this->snapToTicks = false;
	this->snapToValue = true;
	$set(this, changeListener, createChangeListener());
	$set(this, changeEvent, nullptr);
	checkOrientation(orientation);
	this->orientation = orientation;
	setModel($$new($DefaultBoundedRangeModel, value, 0, min, max));
	updateUI();
}

void JSlider::init$($BoundedRangeModel* brm) {
	$JComponent::init$();
	this->paintTicks = false;
	this->paintTrack = true;
	this->paintLabels = false;
	this->isInverted = false;
	this->snapToTicks = false;
	this->snapToValue = true;
	$set(this, changeListener, createChangeListener());
	$set(this, changeEvent, nullptr);
	this->orientation = JSlider::HORIZONTAL;
	setModel(brm);
	updateUI();
}

$ComponentUI* JSlider::getUI() {
	return $cast($SliderUI, this->ui);
}

void JSlider::setUI($SliderUI* ui) {
	$JComponent::setUI(ui);
}

void JSlider::updateUI() {
	setUI($$cast($SliderUI, $UIManager::getUI(this)));
	updateLabelUIs();
}

$String* JSlider::getUIClassID() {
	return JSlider::uiClassID;
}

$ChangeListener* JSlider::createChangeListener() {
	return $new($JSlider$ModelListener, this);
}

void JSlider::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JSlider::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JSlider::getChangeListeners() {
	$load($ChangeListener);
	return $cast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JSlider::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc($cast($ChangeListener, listeners->get(i + 1)))->stateChanged(this->changeEvent);
		}
	}
}

$BoundedRangeModel* JSlider::getModel() {
	return this->sliderModel;
}

void JSlider::setModel($BoundedRangeModel* newModel) {
	$useLocalObjectStack();
	$var($BoundedRangeModel, oldModel, getModel());
	if (oldModel != nullptr) {
		oldModel->removeChangeListener(this->changeListener);
	}
	$set(this, sliderModel, newModel);
	if (newModel != nullptr) {
		newModel->addChangeListener(this->changeListener);
	}
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, oldModel == nullptr ? ($Integer*)nullptr : $Integer::valueOf(oldModel->getValue()));
		this->accessibleContext->firePropertyChange(var$0, var$1, (newModel == nullptr ? ($Integer*)nullptr : $($Integer::valueOf(newModel->getValue()))));
	}
	firePropertyChange("model"_s, oldModel, this->sliderModel);
}

int32_t JSlider::getValue() {
	return $$nc(getModel())->getValue();
}

void JSlider::setValue(int32_t n) {
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	if (oldValue == n) {
		return;
	}
	m->setValue(n);
}

int32_t JSlider::getMinimum() {
	return $$nc(getModel())->getMinimum();
}

void JSlider::setMinimum(int32_t minimum) {
	$useLocalObjectStack();
	int32_t oldMin = $$nc(getModel())->getMinimum();
	$$nc(getModel())->setMinimum(minimum);
	$var($String, var$0, "minimum"_s);
	$var($Object, var$1, $Integer::valueOf(oldMin));
	firePropertyChange(var$0, var$1, $($Integer::valueOf(minimum)));
}

int32_t JSlider::getMaximum() {
	return $$nc(getModel())->getMaximum();
}

void JSlider::setMaximum(int32_t maximum) {
	$useLocalObjectStack();
	int32_t oldMax = $$nc(getModel())->getMaximum();
	$$nc(getModel())->setMaximum(maximum);
	$var($String, var$0, "maximum"_s);
	$var($Object, var$1, $Integer::valueOf(oldMax));
	firePropertyChange(var$0, var$1, $($Integer::valueOf(maximum)));
}

bool JSlider::getValueIsAdjusting() {
	return $$nc(getModel())->getValueIsAdjusting();
}

void JSlider::setValueIsAdjusting(bool b) {
	$var($BoundedRangeModel, m, getModel());
	bool oldValue = $nc(m)->getValueIsAdjusting();
	m->setValueIsAdjusting(b);
	if ((oldValue != b) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue) ? $of($AccessibleState::BUSY) : ($Object*)nullptr), ((b) ? $of($AccessibleState::BUSY) : ($Object*)nullptr));
	}
}

int32_t JSlider::getExtent() {
	return $$nc(getModel())->getExtent();
}

void JSlider::setExtent(int32_t extent) {
	$$nc(getModel())->setExtent(extent);
}

int32_t JSlider::getOrientation() {
	return this->orientation;
}

void JSlider::setOrientation(int32_t orientation) {
	checkOrientation(orientation);
	int32_t oldValue = this->orientation;
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	if ((oldValue != orientation) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue == $SwingConstants::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL), ((orientation == $SwingConstants::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL));
	}
	if (orientation != oldValue) {
		revalidate();
	}
}

void JSlider::setFont($Font* font) {
	$JComponent::setFont(font);
	updateLabelSizes();
}

bool JSlider::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	if (!isShowing()) {
		return false;
	}
	$var($Enumeration, elements, $nc(this->labelTable)->elements());
	while ($nc(elements)->hasMoreElements()) {
		$var($Component, component, $cast($Component, elements->nextElement()));
		if ($instanceOf($JLabel, component)) {
			$var($JLabel, label, $cast($JLabel, component));
			bool var$0 = $SwingUtilities::doesIconReferenceImage($(label->getIcon()), img);
			if (var$0 || $SwingUtilities::doesIconReferenceImage($(label->getDisabledIcon()), img)) {
				return $JComponent::imageUpdate(img, infoflags, x, y, w, h);
			}
		}
	}
	return false;
}

$Dictionary* JSlider::getLabelTable() {
	return this->labelTable;
}

void JSlider::setLabelTable($Dictionary* labels) {
	$var($Dictionary, oldTable, this->labelTable);
	$set(this, labelTable, labels);
	updateLabelUIs();
	firePropertyChange("labelTable"_s, oldTable, this->labelTable);
	if (labels != oldTable) {
		revalidate();
		repaint();
	}
}

void JSlider::updateLabelUIs() {
	$useLocalObjectStack();
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable == nullptr) {
		return;
	}
	$var($Enumeration, labels, $nc(labelTable)->keys());
	while ($nc(labels)->hasMoreElements()) {
		$var($JComponent, component, $cast($JComponent, labelTable->get($(labels->nextElement()))));
		$nc(component)->updateUI();
		component->setSize($(component->getPreferredSize()));
	}
}

void JSlider::updateLabelSizes() {
	$useLocalObjectStack();
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable != nullptr) {
		$var($Enumeration, labels, labelTable->elements());
		while ($nc(labels)->hasMoreElements()) {
			$var($JComponent, component, $cast($JComponent, labels->nextElement()));
			$nc(component)->setSize($($nc(component)->getPreferredSize()));
		}
	}
}

$Hashtable* JSlider::createStandardLabels(int32_t increment) {
	return createStandardLabels(increment, getMinimum());
}

$Hashtable* JSlider::createStandardLabels(int32_t increment, int32_t start) {
	$useLocalObjectStack();
	bool var$0 = start > getMaximum();
	if (var$0 || start < getMinimum()) {
		$throwNew($IllegalArgumentException, "Slider label start point out of range."_s);
	}
	if (increment <= 0) {
		$throwNew($IllegalArgumentException, "Label incremement must be > 0"_s);
	}
	{
	}
	$var($JSlider$1SmartHashtable, table, $new($JSlider$1SmartHashtable, this, increment, start));
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable != nullptr && ($instanceOf($PropertyChangeListener, labelTable))) {
		removePropertyChangeListener($cast($PropertyChangeListener, labelTable));
	}
	addPropertyChangeListener(table);
	return table;
}

bool JSlider::getInverted() {
	return this->isInverted;
}

void JSlider::setInverted(bool b) {
	bool oldValue = this->isInverted;
	this->isInverted = b;
	firePropertyChange("inverted"_s, oldValue, this->isInverted);
	if (b != oldValue) {
		repaint();
	}
}

int32_t JSlider::getMajorTickSpacing() {
	return this->majorTickSpacing;
}

void JSlider::setMajorTickSpacing(int32_t n) {
	int32_t oldValue = this->majorTickSpacing;
	this->majorTickSpacing = n;
	bool var$0 = this->labelTable == nullptr && getMajorTickSpacing() > 0;
	if (var$0 && getPaintLabels()) {
		setLabelTable($(createStandardLabels(getMajorTickSpacing())));
	}
	firePropertyChange("majorTickSpacing"_s, oldValue, this->majorTickSpacing);
	if (this->majorTickSpacing != oldValue && getPaintTicks()) {
		repaint();
	}
}

int32_t JSlider::getMinorTickSpacing() {
	return this->minorTickSpacing;
}

void JSlider::setMinorTickSpacing(int32_t n) {
	int32_t oldValue = this->minorTickSpacing;
	this->minorTickSpacing = n;
	firePropertyChange("minorTickSpacing"_s, oldValue, this->minorTickSpacing);
	if (this->minorTickSpacing != oldValue && getPaintTicks()) {
		repaint();
	}
}

bool JSlider::getSnapToTicks() {
	return this->snapToTicks;
}

bool JSlider::getSnapToValue() {
	return this->snapToValue;
}

void JSlider::setSnapToTicks(bool b) {
	bool oldValue = this->snapToTicks;
	this->snapToTicks = b;
	firePropertyChange("snapToTicks"_s, oldValue, this->snapToTicks);
}

void JSlider::setSnapToValue(bool b) {
	bool oldValue = this->snapToValue;
	this->snapToValue = b;
	firePropertyChange("snapToValue"_s, oldValue, this->snapToValue);
}

bool JSlider::getPaintTicks() {
	return this->paintTicks;
}

void JSlider::setPaintTicks(bool b) {
	bool oldValue = this->paintTicks;
	this->paintTicks = b;
	firePropertyChange("paintTicks"_s, oldValue, this->paintTicks);
	if (this->paintTicks != oldValue) {
		revalidate();
		repaint();
	}
}

bool JSlider::getPaintTrack() {
	return this->paintTrack;
}

void JSlider::setPaintTrack(bool b) {
	bool oldValue = this->paintTrack;
	this->paintTrack = b;
	firePropertyChange("paintTrack"_s, oldValue, this->paintTrack);
	if (this->paintTrack != oldValue) {
		repaint();
	}
}

bool JSlider::getPaintLabels() {
	return this->paintLabels;
}

void JSlider::setPaintLabels(bool b) {
	bool oldValue = this->paintLabels;
	this->paintLabels = b;
	if (this->labelTable == nullptr && getMajorTickSpacing() > 0) {
		setLabelTable($(createStandardLabels(getMajorTickSpacing())));
	}
	firePropertyChange("paintLabels"_s, oldValue, this->paintLabels);
	if (this->paintLabels != oldValue) {
		revalidate();
		repaint();
	}
}

void JSlider::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JSlider::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JSlider::paramString() {
	$useLocalObjectStack();
	$var($String, paintTicksString, this->paintTicks ? "true"_s : "false"_s);
	$var($String, paintTrackString, this->paintTrack ? "true"_s : "false"_s);
	$var($String, paintLabelsString, this->paintLabels ? "true"_s : "false"_s);
	$var($String, isInvertedString, this->isInverted ? "true"_s : "false"_s);
	$var($String, snapToTicksString, this->snapToTicks ? "true"_s : "false"_s);
	$var($String, snapToValueString, this->snapToValue ? "true"_s : "false"_s);
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",isInverted="_s, isInvertedString, ",majorTickSpacing="_s, $$str(this->majorTickSpacing), ",minorTickSpacing="_s, $$str(this->minorTickSpacing), ",orientation="_s, orientationString, ",paintLabels="_s, paintLabelsString, ",paintTicks="_s, paintTicksString, ",paintTrack="_s, paintTrackString, ",snapToTicks="_s, 
	snapToTicksString, ",snapToValue="_s, snapToValueString});
}

$AccessibleContext* JSlider::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSlider$AccessibleJSlider, this));
	}
	return this->accessibleContext;
}

JSlider::JSlider() {
}

void JSlider::clinit$($Class* clazz) {
	$assignStatic(JSlider::uiClassID, "SliderUI"_s);
}

$Class* JSlider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSlider, uiClassID)},
		{"paintTicks", "Z", nullptr, $PRIVATE, $field(JSlider, paintTicks)},
		{"paintTrack", "Z", nullptr, $PRIVATE, $field(JSlider, paintTrack)},
		{"paintLabels", "Z", nullptr, $PRIVATE, $field(JSlider, paintLabels)},
		{"isInverted", "Z", nullptr, $PRIVATE, $field(JSlider, isInverted)},
		{"sliderModel", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JSlider, sliderModel)},
		{"majorTickSpacing", "I", nullptr, $PROTECTED, $field(JSlider, majorTickSpacing)},
		{"minorTickSpacing", "I", nullptr, $PROTECTED, $field(JSlider, minorTickSpacing)},
		{"snapToTicks", "Z", nullptr, $PROTECTED, $field(JSlider, snapToTicks)},
		{"snapToValue", "Z", nullptr, 0, $field(JSlider, snapToValue)},
		{"orientation", "I", nullptr, $PROTECTED, $field(JSlider, orientation)},
		{"labelTable", "Ljava/util/Dictionary;", nullptr, $PRIVATE, $field(JSlider, labelTable)},
		{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(JSlider, changeListener)},
		{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(JSlider, changeEvent)},
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
	$NamedAttribute getChangeListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getChangeListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getChangeListenersmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setExtentmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "Size of the range covered by the knob."},
		{}
	};
	$CompoundAttribute setExtentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setExtentmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setInvertedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true reverses the slider values from their normal order"},
		{}
	};
	$CompoundAttribute setInvertedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setInvertedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLabelTablemethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Specifies what labels will be drawn for any given value."},
		{}
	};
	$CompoundAttribute setLabelTablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLabelTablemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMajorTickSpacingmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Sets the number of values between major tick marks."},
		{}
	};
	$CompoundAttribute setMajorTickSpacingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMajorTickSpacingmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximummethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The sliders maximum value."},
		{}
	};
	$CompoundAttribute setMaximummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinimummethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The sliders minimum value."},
		{}
	};
	$CompoundAttribute setMinimummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinimummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinorTickSpacingmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Sets the number of values between minor tick marks."},
		{}
	};
	$CompoundAttribute setMinorTickSpacingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinorTickSpacingmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The sliders BoundedRangeModel."},
		{}
	};
	$CompoundAttribute setModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JSlider.VERTICAL"},
		{'s', "JSlider.HORIZONTAL"},
		{'-'}
	};
	$NamedAttribute setOrientationmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "Set the scrollbars orientation to either VERTICAL or HORIZONTAL."},
		{}
	};
	$CompoundAttribute setOrientationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOrientationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPaintLabelsmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true labels are painted on the slider."},
		{}
	};
	$CompoundAttribute setPaintLabelsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPaintLabelsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPaintTicksmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true tick marks are painted on the slider."},
		{}
	};
	$CompoundAttribute setPaintTicksmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPaintTicksmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPaintTrackmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If true, the track is painted on the slider."},
		{}
	};
	$CompoundAttribute setPaintTrackmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPaintTrackmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSnapToTicksmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "If true snap the knob to the nearest tick mark."},
		{}
	};
	$CompoundAttribute setSnapToTicksmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSnapToTicksmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSnapToValuemethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "If true snap the knob to the nearest slider value."},
		{}
	};
	$CompoundAttribute setSnapToValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSnapToValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the slider\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValuemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The sliders current value."},
		{}
	};
	$CompoundAttribute setValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValueIsAdjustingmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "True if the slider knob is being dragged."},
		{}
	};
	$CompoundAttribute setValueIsAdjustingmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValueIsAdjustingmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSlider, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JSlider, init$, void, int32_t)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JSlider, init$, void, int32_t, int32_t)},
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(JSlider, init$, void, int32_t, int32_t, int32_t)},
		{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(JSlider, init$, void, int32_t, int32_t, int32_t, int32_t)},
		{"<init>", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $method(JSlider, init$, void, $BoundedRangeModel*)},
		{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, addChangeListener, void, $ChangeListener*)},
		{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(JSlider, checkOrientation, void, int32_t)},
		{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $virtualMethod(JSlider, createChangeListener, $ChangeListener*)},
		{"createStandardLabels", "(I)Ljava/util/Hashtable;", "(I)Ljava/util/Hashtable<Ljava/lang/Integer;Ljavax/swing/JComponent;>;", $PUBLIC, $virtualMethod(JSlider, createStandardLabels, $Hashtable*, int32_t)},
		{"createStandardLabels", "(II)Ljava/util/Hashtable;", "(II)Ljava/util/Hashtable<Ljava/lang/Integer;Ljavax/swing/JComponent;>;", $PUBLIC, $virtualMethod(JSlider, createStandardLabels, $Hashtable*, int32_t, int32_t)},
		{"fireStateChanged", "()V", nullptr, $PROTECTED, $virtualMethod(JSlider, fireStateChanged, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JSlider, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, $virtualMethod(JSlider, getChangeListeners, $ChangeListenerArray*), nullptr, nullptr, getChangeListenersmethodAnnotations$$},
		{"getExtent", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getExtent, int32_t)},
		{"getInverted", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getInverted, bool)},
		{"getLabelTable", "()Ljava/util/Dictionary;", nullptr, $PUBLIC, $virtualMethod(JSlider, getLabelTable, $Dictionary*)},
		{"getMajorTickSpacing", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getMajorTickSpacing, int32_t)},
		{"getMaximum", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getMaximum, int32_t)},
		{"getMinimum", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getMinimum, int32_t)},
		{"getMinorTickSpacing", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getMinorTickSpacing, int32_t)},
		{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC, $virtualMethod(JSlider, getModel, $BoundedRangeModel*)},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getOrientation, int32_t)},
		{"getPaintLabels", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getPaintLabels, bool)},
		{"getPaintTicks", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getPaintTicks, bool)},
		{"getPaintTrack", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getPaintTrack, bool)},
		{"getSnapToTicks", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getSnapToTicks, bool)},
		{"getSnapToValue", "()Z", nullptr, 0, $virtualMethod(JSlider, getSnapToValue, bool)},
		{"getUI", "()Ljavax/swing/plaf/SliderUI;", nullptr, $PUBLIC, $virtualMethod(JSlider, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JSlider, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(JSlider, getValue, int32_t)},
		{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC, $virtualMethod(JSlider, getValueIsAdjusting, bool)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(JSlider, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JSlider, paramString, $String*)},
		{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, removeChangeListener, void, $ChangeListener*)},
		{"setExtent", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setExtent, void, int32_t), nullptr, nullptr, setExtentmethodAnnotations$$},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setFont, void, $Font*)},
		{"setInverted", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setInverted, void, bool), nullptr, nullptr, setInvertedmethodAnnotations$$},
		{"setLabelTable", "(Ljava/util/Dictionary;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setLabelTable, void, $Dictionary*), nullptr, nullptr, setLabelTablemethodAnnotations$$},
		{"setMajorTickSpacing", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setMajorTickSpacing, void, int32_t), nullptr, nullptr, setMajorTickSpacingmethodAnnotations$$},
		{"setMaximum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setMaximum, void, int32_t), nullptr, nullptr, setMaximummethodAnnotations$$},
		{"setMinimum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setMinimum, void, int32_t), nullptr, nullptr, setMinimummethodAnnotations$$},
		{"setMinorTickSpacing", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setMinorTickSpacing, void, int32_t), nullptr, nullptr, setMinorTickSpacingmethodAnnotations$$},
		{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setModel, void, $BoundedRangeModel*), nullptr, nullptr, setModelmethodAnnotations$$},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setOrientation, void, int32_t), nullptr, nullptr, setOrientationmethodAnnotations$$},
		{"setPaintLabels", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setPaintLabels, void, bool), nullptr, nullptr, setPaintLabelsmethodAnnotations$$},
		{"setPaintTicks", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setPaintTicks, void, bool), nullptr, nullptr, setPaintTicksmethodAnnotations$$},
		{"setPaintTrack", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setPaintTrack, void, bool), nullptr, nullptr, setPaintTrackmethodAnnotations$$},
		{"setSnapToTicks", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setSnapToTicks, void, bool), nullptr, nullptr, setSnapToTicksmethodAnnotations$$},
		{"setSnapToValue", "(Z)V", nullptr, 0, $virtualMethod(JSlider, setSnapToValue, void, bool), nullptr, nullptr, setSnapToValuemethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/SliderUI;)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setUI, void, $SliderUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setValue, void, int32_t), nullptr, nullptr, setValuemethodAnnotations$$},
		{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JSlider, setValueIsAdjusting, void, bool), nullptr, nullptr, setValueIsAdjustingmethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateLabelSizes", "()V", nullptr, $PRIVATE, $method(JSlider, updateLabelSizes, void)},
		{"updateLabelUIs", "()V", nullptr, $PROTECTED, $virtualMethod(JSlider, updateLabelUIs, void)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JSlider, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JSlider, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSlider$AccessibleJSlider", "javax.swing.JSlider", "AccessibleJSlider", $PROTECTED},
		{"javax.swing.JSlider$ModelListener", "javax.swing.JSlider", "ModelListener", $PRIVATE},
		{"javax.swing.JSlider$1SmartHashtable", nullptr, "SmartHashtable", 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component that supports selecting a integer value from a range."},
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
		"javax.swing.JSlider",
		"javax.swing.JComponent",
		"javax.swing.SwingConstants,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JSlider$AccessibleJSlider,javax.swing.JSlider$ModelListener,javax.swing.JSlider$1SmartHashtable,javax.swing.JSlider$1SmartHashtable$LabelUIResource"
	};
	$loadClass(JSlider, name, initialize, &classInfo$$, JSlider::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSlider));
	});
	return class$;
}

$Class* JSlider::class$ = nullptr;

	} // swing
} // javax