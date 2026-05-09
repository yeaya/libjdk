#include <javax/swing/JProgressBar.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/io/ObjectOutputStream.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar$AccessibleJProgressBar.h>
#include <javax/swing/JProgressBar$ModelListener.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef HORIZONTAL
#undef VERTICAL

using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Graphics = ::java::awt::Graphics;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NumberFormat = ::java::text::NumberFormat;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar$AccessibleJProgressBar = ::javax::swing::JProgressBar$AccessibleJProgressBar;
using $JProgressBar$ModelListener = ::javax::swing::JProgressBar$ModelListener;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;

namespace javax {
	namespace swing {

$String* JProgressBar::toString() {
	return this->$JComponent::toString();
}

int32_t JProgressBar::hashCode() {
	return this->$JComponent::hashCode();
}

bool JProgressBar::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* JProgressBar::clone() {
	return this->$JComponent::clone();
}

void JProgressBar::finalize() {
	this->$JComponent::finalize();
}

$String* JProgressBar::uiClassID = nullptr;

void JProgressBar::init$() {
	JProgressBar::init$(JProgressBar::defaultOrientation);
}

void JProgressBar::init$(int32_t orient) {
	JProgressBar::init$(orient, JProgressBar::defaultMinimum, JProgressBar::defaultMaximum);
}

void JProgressBar::init$(int32_t min, int32_t max) {
	JProgressBar::init$(JProgressBar::defaultOrientation, min, max);
}

void JProgressBar::init$(int32_t orient, int32_t min, int32_t max) {
	$JComponent::init$();
	$set(this, changeEvent, nullptr);
	$set(this, changeListener, nullptr);
	setModel($$new($DefaultBoundedRangeModel, min, 0, min, max));
	updateUI();
	setOrientation(orient);
	setBorderPainted(true);
	setStringPainted(false);
	setString(nullptr);
	setIndeterminate(false);
}

void JProgressBar::init$($BoundedRangeModel* newModel) {
	$JComponent::init$();
	$set(this, changeEvent, nullptr);
	$set(this, changeListener, nullptr);
	setModel(newModel);
	updateUI();
	setOrientation(JProgressBar::defaultOrientation);
	setBorderPainted(true);
	setStringPainted(false);
	setString(nullptr);
	setIndeterminate(false);
}

int32_t JProgressBar::getOrientation() {
	return this->orientation;
}

void JProgressBar::setOrientation(int32_t newOrientation) {
	$useLocalObjectStack();
	if (this->orientation != newOrientation) {
		{
			int32_t oldOrientation = 0;
			switch (newOrientation) {
			case $SwingConstants::VERTICAL:
			case $SwingConstants::HORIZONTAL:
				oldOrientation = this->orientation;
				this->orientation = newOrientation;
				firePropertyChange("orientation"_s, oldOrientation, newOrientation);
				if (this->accessibleContext != nullptr) {
					$init($AccessibleContext);
					$init($AccessibleState);
					this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldOrientation == $SwingConstants::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL), ((this->orientation == $SwingConstants::VERTICAL) ? $AccessibleState::VERTICAL : $AccessibleState::HORIZONTAL));
				}
				break;
			default:
				$throwNew($IllegalArgumentException, $$str({$$str(newOrientation), " is not a legal orientation"_s}));
			}
		}
		revalidate();
	}
}

bool JProgressBar::isStringPainted() {
	return this->paintString;
}

void JProgressBar::setStringPainted(bool b) {
	bool oldValue = this->paintString;
	this->paintString = b;
	firePropertyChange("stringPainted"_s, oldValue, this->paintString);
	if (this->paintString != oldValue) {
		revalidate();
		repaint();
	}
}

$String* JProgressBar::getString() {
	if (this->progressString != nullptr) {
		return this->progressString;
	} else {
		if (this->format == nullptr) {
			$set(this, format, $NumberFormat::getPercentInstance());
		}
		return $nc(this->format)->format($($Double::valueOf(getPercentComplete())));
	}
}

void JProgressBar::setString($String* s) {
	$var($String, oldValue, this->progressString);
	$set(this, progressString, s);
	firePropertyChange("string"_s, oldValue, this->progressString);
	if (this->progressString == nullptr || oldValue == nullptr || !this->progressString->equals(oldValue)) {
		repaint();
	}
}

double JProgressBar::getPercentComplete() {
	int32_t var$0 = $nc(this->model)->getMaximum();
	int64_t span = var$0 - this->model->getMinimum();
	double currentValue = (double)$nc(this->model)->getValue();
	double pc = (currentValue - $nc(this->model)->getMinimum()) / span;
	return pc;
}

bool JProgressBar::isBorderPainted() {
	return this->paintBorder$;
}

void JProgressBar::setBorderPainted(bool b) {
	bool oldValue = this->paintBorder$;
	this->paintBorder$ = b;
	firePropertyChange("borderPainted"_s, oldValue, this->paintBorder$);
	if (this->paintBorder$ != oldValue) {
		repaint();
	}
}

void JProgressBar::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

$ComponentUI* JProgressBar::getUI() {
	return $cast($ProgressBarUI, this->ui);
}

void JProgressBar::setUI($ProgressBarUI* ui) {
	$JComponent::setUI(ui);
}

void JProgressBar::updateUI() {
	setUI($$cast($ProgressBarUI, $UIManager::getUI(this)));
}

$String* JProgressBar::getUIClassID() {
	return JProgressBar::uiClassID;
}

$ChangeListener* JProgressBar::createChangeListener() {
	return $new($JProgressBar$ModelListener, this);
}

void JProgressBar::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JProgressBar::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JProgressBar::getChangeListeners() {
	$load($ChangeListener);
	return $cast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JProgressBar::fireStateChanged() {
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

$BoundedRangeModel* JProgressBar::getModel() {
	return this->model;
}

void JProgressBar::setModel($BoundedRangeModel* newModel) {
	$useLocalObjectStack();
	$var($BoundedRangeModel, oldModel, getModel());
	if (newModel != oldModel) {
		if (oldModel != nullptr) {
			oldModel->removeChangeListener(this->changeListener);
			$set(this, changeListener, nullptr);
		}
		$set(this, model, newModel);
		if (newModel != nullptr) {
			$set(this, changeListener, createChangeListener());
			newModel->addChangeListener(this->changeListener);
		}
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
			$var($Object, var$1, oldModel == nullptr ? ($Integer*)nullptr : $Integer::valueOf(oldModel->getValue()));
			this->accessibleContext->firePropertyChange(var$0, var$1, (newModel == nullptr ? ($Integer*)nullptr : $($Integer::valueOf(newModel->getValue()))));
		}
		if (this->model != nullptr) {
			this->model->setExtent(0);
		}
		repaint();
	}
}

int32_t JProgressBar::getValue() {
	return $$nc(getModel())->getValue();
}

int32_t JProgressBar::getMinimum() {
	return $$nc(getModel())->getMinimum();
}

int32_t JProgressBar::getMaximum() {
	return $$nc(getModel())->getMaximum();
}

void JProgressBar::setValue(int32_t n) {
	$useLocalObjectStack();
	$var($BoundedRangeModel, brm, getModel());
	int32_t oldValue = $nc(brm)->getValue();
	brm->setValue(n);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $Integer::valueOf(oldValue));
		this->accessibleContext->firePropertyChange(var$0, var$1, $($Integer::valueOf(brm->getValue())));
	}
}

void JProgressBar::setMinimum(int32_t n) {
	$$nc(getModel())->setMinimum(n);
}

void JProgressBar::setMaximum(int32_t n) {
	$$nc(getModel())->setMaximum(n);
}

void JProgressBar::setIndeterminate(bool newValue) {
	bool oldValue = this->indeterminate;
	this->indeterminate = newValue;
	firePropertyChange("indeterminate"_s, oldValue, this->indeterminate);
}

bool JProgressBar::isIndeterminate() {
	return this->indeterminate;
}

void JProgressBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JProgressBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JProgressBar::paramString() {
	$useLocalObjectStack();
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, progressStringString, this->progressString != nullptr ? this->progressString : ""_s);
	$var($String, paintStringString, this->paintString ? "true"_s : "false"_s);
	$var($String, indeterminateString, this->indeterminate ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",orientation="_s, orientationString, ",paintBorder="_s, paintBorderString, ",paintString="_s, paintStringString, ",progressString="_s, progressStringString, ",indeterminateString="_s, indeterminateString});
}

$AccessibleContext* JProgressBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JProgressBar$AccessibleJProgressBar, this));
	}
	return this->accessibleContext;
}

JProgressBar::JProgressBar() {
}

void JProgressBar::clinit$($Class* clazz) {
	$assignStatic(JProgressBar::uiClassID, "ProgressBarUI"_s);
}

$Class* JProgressBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JProgressBar, uiClassID)},
		{"orientation", "I", nullptr, $PROTECTED, $field(JProgressBar, orientation)},
		{"paintBorder", "Z", nullptr, $PROTECTED, $field(JProgressBar, paintBorder$)},
		{"model", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JProgressBar, model)},
		{"progressString", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JProgressBar, progressString)},
		{"paintString", "Z", nullptr, $PROTECTED, $field(JProgressBar, paintString)},
		{"defaultMinimum", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultMinimum)},
		{"defaultMaximum", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultMaximum)},
		{"defaultOrientation", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultOrientation)},
		{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(JProgressBar, changeEvent)},
		{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(JProgressBar, changeListener)},
		{"format", "Ljava/text/Format;", nullptr, $PRIVATE | $TRANSIENT, $field(JProgressBar, format)},
		{"indeterminate", "Z", nullptr, $PRIVATE, $field(JProgressBar, indeterminate)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this ProgressBar."},
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
	$NamedAttribute getPercentCompletemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getPercentCompletemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getPercentCompletemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "A string that specifies the name of the look-and-feel class."},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isIndeterminatemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "Is the progress bar indeterminate (true) or normal (false)?"},
		{}
	};
	$CompoundAttribute isIndeterminatemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isIndeterminatemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBorderPaintedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Whether the progress bar should paint its border."},
		{}
	};
	$CompoundAttribute setBorderPaintedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBorderPaintedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMaximummethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The progress bar\'s maximum value."},
		{}
	};
	$CompoundAttribute setMaximummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMaximummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMinimummethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The progress bar\'s minimum value."},
		{}
	};
	$CompoundAttribute setMinimummethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMinimummethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setModelmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The data model used by the JProgressBar."},
		{}
	};
	$CompoundAttribute setModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setOrientationmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Set the progress bar\'s orientation."},
		{}
	};
	$CompoundAttribute setOrientationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOrientationmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setStringmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Specifies the progress string to paint"},
		{}
	};
	$CompoundAttribute setStringmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setStringmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setStringPaintedmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Whether the progress bar should render a string."},
		{}
	};
	$CompoundAttribute setStringPaintedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setStringPaintedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setValuemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"preferred", 'Z', "true"},
		{"description", 's', "The progress bar\'s current value."},
		{}
	};
	$CompoundAttribute setValuemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setValuemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JProgressBar, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JProgressBar, init$, void, int32_t)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JProgressBar, init$, void, int32_t, int32_t)},
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(JProgressBar, init$, void, int32_t, int32_t, int32_t)},
		{"<init>", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $method(JProgressBar, init$, void, $BoundedRangeModel*)},
		{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, addChangeListener, void, $ChangeListener*)},
		{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $virtualMethod(JProgressBar, createChangeListener, $ChangeListener*)},
		{"fireStateChanged", "()V", nullptr, $PROTECTED, $virtualMethod(JProgressBar, fireStateChanged, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getChangeListeners, $ChangeListenerArray*), nullptr, nullptr, getChangeListenersmethodAnnotations$$},
		{"getMaximum", "()I", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getMaximum, int32_t)},
		{"getMinimum", "()I", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getMinimum, int32_t)},
		{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getModel, $BoundedRangeModel*)},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getOrientation, int32_t)},
		{"getPercentComplete", "()D", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getPercentComplete, double), nullptr, nullptr, getPercentCompletemethodAnnotations$$},
		{"getString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getString, $String*)},
		{"getUI", "()Ljavax/swing/plaf/ProgressBarUI;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(JProgressBar, getValue, int32_t)},
		{"isBorderPainted", "()Z", nullptr, $PUBLIC, $virtualMethod(JProgressBar, isBorderPainted, bool)},
		{"isIndeterminate", "()Z", nullptr, $PUBLIC, $virtualMethod(JProgressBar, isIndeterminate, bool), nullptr, nullptr, isIndeterminatemethodAnnotations$$},
		{"isStringPainted", "()Z", nullptr, $PUBLIC, $virtualMethod(JProgressBar, isStringPainted, bool)},
		{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(JProgressBar, paintBorder, void, $Graphics*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JProgressBar, paramString, $String*)},
		{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, removeChangeListener, void, $ChangeListener*)},
		{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setBorderPainted, void, bool), nullptr, nullptr, setBorderPaintedmethodAnnotations$$},
		{"setIndeterminate", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setIndeterminate, void, bool)},
		{"setMaximum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setMaximum, void, int32_t), nullptr, nullptr, setMaximummethodAnnotations$$},
		{"setMinimum", "(I)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setMinimum, void, int32_t), nullptr, nullptr, setMinimummethodAnnotations$$},
		{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setModel, void, $BoundedRangeModel*), nullptr, nullptr, setModelmethodAnnotations$$},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setOrientation, void, int32_t), nullptr, nullptr, setOrientationmethodAnnotations$$},
		{"setString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setString, void, $String*), nullptr, nullptr, setStringmethodAnnotations$$},
		{"setStringPainted", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setStringPainted, void, bool), nullptr, nullptr, setStringPaintedmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/ProgressBarUI;)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setUI, void, $ProgressBarUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, setValue, void, int32_t), nullptr, nullptr, setValuemethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JProgressBar, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JProgressBar, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JProgressBar$AccessibleJProgressBar", "javax.swing.JProgressBar", "AccessibleJProgressBar", $PROTECTED},
		{"javax.swing.JProgressBar$ModelListener", "javax.swing.JProgressBar", "ModelListener", $PRIVATE},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component that displays an integer value."},
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
		"javax.swing.JProgressBar",
		"javax.swing.JComponent",
		"javax.swing.SwingConstants,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JProgressBar$AccessibleJProgressBar,javax.swing.JProgressBar$ModelListener"
	};
	$loadClass(JProgressBar, name, initialize, &classInfo$$, JProgressBar::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JProgressBar));
	});
	return class$;
}

$Class* JProgressBar::class$ = nullptr;

	} // swing
} // javax