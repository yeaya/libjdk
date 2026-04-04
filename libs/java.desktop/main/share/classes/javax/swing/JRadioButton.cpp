#include <javax/swing/JRadioButton.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton$AccessibleJRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef LEADING

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton$AccessibleJRadioButton = ::javax::swing::JRadioButton$AccessibleJRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {

$String* JRadioButton::uiClassID = nullptr;

void JRadioButton::init$() {
	JRadioButton::init$(nullptr, nullptr, false);
}

void JRadioButton::init$($Icon* icon) {
	JRadioButton::init$(nullptr, icon, false);
}

void JRadioButton::init$($Action* a) {
	JRadioButton::init$();
	setAction(a);
}

void JRadioButton::init$($Icon* icon, bool selected) {
	JRadioButton::init$(nullptr, icon, selected);
}

void JRadioButton::init$($String* text) {
	JRadioButton::init$(text, nullptr, false);
}

void JRadioButton::init$($String* text, bool selected) {
	JRadioButton::init$(text, nullptr, selected);
}

void JRadioButton::init$($String* text, $Icon* icon) {
	JRadioButton::init$(text, icon, false);
}

void JRadioButton::init$($String* text, $Icon* icon, bool selected) {
	$JToggleButton::init$(text, icon, selected);
	setBorderPainted(false);
	setHorizontalAlignment($SwingConstants::LEADING);
}

void JRadioButton::updateUI() {
	setUI($$cast($ButtonUI, $UIManager::getUI(this)));
}

$String* JRadioButton::getUIClassID() {
	return JRadioButton::uiClassID;
}

void JRadioButton::setIconFromAction($Action* a) {
}

void JRadioButton::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JRadioButton::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JRadioButton::paramString() {
	return $JToggleButton::paramString();
}

$AccessibleContext* JRadioButton::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JRadioButton$AccessibleJRadioButton, this));
	}
	return this->accessibleContext;
}

JRadioButton::JRadioButton() {
}

void JRadioButton::clinit$($Class* clazz) {
	$assignStatic(JRadioButton::uiClassID, "RadioButtonUI"_s);
}

$Class* JRadioButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRadioButton, uiClassID)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this Button"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRadioButton, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $Icon*)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $Action*)},
		{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $Icon*, bool)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JRadioButton, init$, void, $String*, $Icon*, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JRadioButton, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JRadioButton, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JRadioButton, paramString, $String*)},
		{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JRadioButton, setIconFromAction, void, $Action*)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JRadioButton, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JRadioButton, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRadioButton$AccessibleJRadioButton", "javax.swing.JRadioButton", "AccessibleJRadioButton", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "A component which can display it\'s state as selected or deselected."},
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
		"javax.swing.JRadioButton",
		"javax.swing.JToggleButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JRadioButton$AccessibleJRadioButton"
	};
	$loadClass(JRadioButton, name, initialize, &classInfo$$, JRadioButton::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRadioButton));
	});
	return class$;
}

$Class* JRadioButton::class$ = nullptr;

	} // swing
} // javax