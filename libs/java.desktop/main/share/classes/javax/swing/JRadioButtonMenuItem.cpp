#include <javax/swing/JRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

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
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;

namespace javax {
	namespace swing {

$String* JRadioButtonMenuItem::uiClassID = nullptr;

void JRadioButtonMenuItem::init$() {
	JRadioButtonMenuItem::init$(nullptr, nullptr, false);
}

void JRadioButtonMenuItem::init$($Icon* icon) {
	JRadioButtonMenuItem::init$(nullptr, icon, false);
}

void JRadioButtonMenuItem::init$($String* text) {
	JRadioButtonMenuItem::init$(text, nullptr, false);
}

void JRadioButtonMenuItem::init$($Action* a) {
	JRadioButtonMenuItem::init$();
	setAction(a);
}

void JRadioButtonMenuItem::init$($String* text, $Icon* icon) {
	JRadioButtonMenuItem::init$(text, icon, false);
}

void JRadioButtonMenuItem::init$($String* text, bool selected) {
	JRadioButtonMenuItem::init$(text);
	setSelected(selected);
}

void JRadioButtonMenuItem::init$($Icon* icon, bool selected) {
	JRadioButtonMenuItem::init$(nullptr, icon, selected);
}

void JRadioButtonMenuItem::init$($String* text, $Icon* icon, bool selected) {
	$JMenuItem::init$(text, icon);
	setModel($$new($JToggleButton$ToggleButtonModel));
	setSelected(selected);
	setFocusable(false);
}

$String* JRadioButtonMenuItem::getUIClassID() {
	return JRadioButtonMenuItem::uiClassID;
}

void JRadioButtonMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JRadioButtonMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JRadioButtonMenuItem::paramString() {
	return $JMenuItem::paramString();
}

bool JRadioButtonMenuItem::shouldUpdateSelectedStateFromAction() {
	return true;
}

$AccessibleContext* JRadioButtonMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, this));
	}
	return this->accessibleContext;
}

JRadioButtonMenuItem::JRadioButtonMenuItem() {
}

void JRadioButtonMenuItem::clinit$($Class* clazz) {
	$assignStatic(JRadioButtonMenuItem::uiClassID, "RadioButtonMenuItemUI"_s);
}

$Class* JRadioButtonMenuItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRadioButtonMenuItem, uiClassID)},
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $Icon*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $String*, bool)},
		{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $Icon*, bool)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JRadioButtonMenuItem, init$, void, $String*, $Icon*, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JRadioButtonMenuItem, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JRadioButtonMenuItem, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JRadioButtonMenuItem, paramString, $String*)},
		{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0, $virtualMethod(JRadioButtonMenuItem, shouldUpdateSelectedStateFromAction, bool)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JRadioButtonMenuItem, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem", "javax.swing.JRadioButtonMenuItem", "AccessibleJRadioButtonMenuItem", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "A component within a group of menu items which can be selected."},
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
		"javax.swing.JRadioButtonMenuItem",
		"javax.swing.JMenuItem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem"
	};
	$loadClass(JRadioButtonMenuItem, name, initialize, &classInfo$$, JRadioButtonMenuItem::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRadioButtonMenuItem));
	});
	return class$;
}

$Class* JRadioButtonMenuItem::class$ = nullptr;

	} // swing
} // javax