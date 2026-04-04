#include <javax/swing/JSeparator.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator$AccessibleJSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator$AccessibleJSeparator = ::javax::swing::JSeparator$AccessibleJSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;

namespace javax {
	namespace swing {

$String* JSeparator::toString() {
	 return this->$JComponent::toString();
}

int32_t JSeparator::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JSeparator::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JSeparator::clone() {
	 return this->$JComponent::clone();
}

void JSeparator::finalize() {
	this->$JComponent::finalize();
}

$String* JSeparator::uiClassID = nullptr;

void JSeparator::init$() {
	JSeparator::init$($SwingConstants::HORIZONTAL);
}

void JSeparator::init$(int32_t orientation) {
	$JComponent::init$();
	this->orientation = $SwingConstants::HORIZONTAL;
	checkOrientation(orientation);
	this->orientation = orientation;
	setFocusable(false);
	updateUI();
}

$ComponentUI* JSeparator::getUI() {
	return $cast($SeparatorUI, this->ui);
}

void JSeparator::setUI($SeparatorUI* ui) {
	$JComponent::setUI(ui);
}

void JSeparator::updateUI() {
	setUI($$cast($SeparatorUI, $UIManager::getUI(this)));
}

$String* JSeparator::getUIClassID() {
	return JSeparator::uiClassID;
}

void JSeparator::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JSeparator::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

int32_t JSeparator::getOrientation() {
	return this->orientation;
}

void JSeparator::setOrientation(int32_t orientation) {
	if (this->orientation == orientation) {
		return;
	}
	int32_t oldValue = this->orientation;
	checkOrientation(orientation);
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	revalidate();
	repaint();
}

void JSeparator::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $SwingConstants::VERTICAL:
	case $SwingConstants::HORIZONTAL:
		break;
	default:
		$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
	}
}

$String* JSeparator::paramString() {
	$useLocalObjectStack();
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",orientation="_s, orientationString});
}

$AccessibleContext* JSeparator::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSeparator$AccessibleJSeparator, this));
	}
	return this->accessibleContext;
}

JSeparator::JSeparator() {
}

void JSeparator::clinit$($Class* clazz) {
	$assignStatic(JSeparator::uiClassID, "SeparatorUI"_s);
}

$Class* JSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSeparator, uiClassID)},
		{"orientation", "I", nullptr, $PRIVATE, $field(JSeparator, orientation)},
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
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "SwingConstants.HORIZONTAL"},
		{'s', "SwingConstants.VERTICAL"},
		{'-'}
	};
	$NamedAttribute setOrientationmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The orientation of the separator."},
		{}
	};
	$CompoundAttribute setOrientationmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setOrientationmethodAnnotations$$$namedAttribute},
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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSeparator, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JSeparator, init$, void, int32_t)},
		{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(JSeparator, checkOrientation, void, int32_t)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JSeparator, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getOrientation", "()I", nullptr, $PUBLIC, $virtualMethod(JSeparator, getOrientation, int32_t)},
		{"getUI", "()Ljavax/swing/plaf/SeparatorUI;", nullptr, $PUBLIC, $virtualMethod(JSeparator, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JSeparator, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JSeparator, paramString, $String*)},
		{"setOrientation", "(I)V", nullptr, $PUBLIC, $virtualMethod(JSeparator, setOrientation, void, int32_t), nullptr, nullptr, setOrientationmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/SeparatorUI;)V", nullptr, $PUBLIC, $virtualMethod(JSeparator, setUI, void, $SeparatorUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JSeparator, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JSeparator, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSeparator$AccessibleJSeparator", "javax.swing.JSeparator", "AccessibleJSeparator", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A divider between menu items."},
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
		"javax.swing.JSeparator",
		"javax.swing.JComponent",
		"javax.swing.SwingConstants,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JSeparator$AccessibleJSeparator"
	};
	$loadClass(JSeparator, name, initialize, &classInfo$$, JSeparator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSeparator));
	});
	return class$;
}

$Class* JSeparator::class$ = nullptr;

	} // swing
} // javax