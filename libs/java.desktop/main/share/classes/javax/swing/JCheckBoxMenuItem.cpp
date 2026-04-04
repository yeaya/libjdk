#include <javax/swing/JCheckBoxMenuItem.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
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
using $JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;

namespace javax {
	namespace swing {

$String* JCheckBoxMenuItem::uiClassID = nullptr;

void JCheckBoxMenuItem::init$() {
	JCheckBoxMenuItem::init$(nullptr, nullptr, false);
}

void JCheckBoxMenuItem::init$($Icon* icon) {
	JCheckBoxMenuItem::init$(nullptr, icon, false);
}

void JCheckBoxMenuItem::init$($String* text) {
	JCheckBoxMenuItem::init$(text, nullptr, false);
}

void JCheckBoxMenuItem::init$($Action* a) {
	JCheckBoxMenuItem::init$();
	setAction(a);
}

void JCheckBoxMenuItem::init$($String* text, $Icon* icon) {
	JCheckBoxMenuItem::init$(text, icon, false);
}

void JCheckBoxMenuItem::init$($String* text, bool b) {
	JCheckBoxMenuItem::init$(text, nullptr, b);
}

void JCheckBoxMenuItem::init$($String* text, $Icon* icon, bool b) {
	$JMenuItem::init$(text, icon);
	setModel($$new($JToggleButton$ToggleButtonModel));
	setSelected(b);
	setFocusable(false);
}

$String* JCheckBoxMenuItem::getUIClassID() {
	return JCheckBoxMenuItem::uiClassID;
}

bool JCheckBoxMenuItem::getState() {
	return isSelected();
}

void JCheckBoxMenuItem::setState(bool b) {
	$synchronized(this) {
		setSelected(b);
	}
}

$ObjectArray* JCheckBoxMenuItem::getSelectedObjects() {
	$useLocalObjectStack();
	if (isSelected() == false) {
		return nullptr;
	}
	$var($ObjectArray, selectedObjects, $new($ObjectArray, 1));
	selectedObjects->set(0, $(getText()));
	return selectedObjects;
}

void JCheckBoxMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JCheckBoxMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JCheckBoxMenuItem::paramString() {
	return $JMenuItem::paramString();
}

bool JCheckBoxMenuItem::shouldUpdateSelectedStateFromAction() {
	return true;
}

$AccessibleContext* JCheckBoxMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, this));
	}
	return this->accessibleContext;
}

JCheckBoxMenuItem::JCheckBoxMenuItem() {
}

void JCheckBoxMenuItem::clinit$($Class* clazz) {
	$assignStatic(JCheckBoxMenuItem::uiClassID, "CheckBoxMenuItemUI"_s);
}

$Class* JCheckBoxMenuItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCheckBoxMenuItem, uiClassID)},
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
	$NamedAttribute getSelectedObjectsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getSelectedObjectsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getSelectedObjectsmethodAnnotations$$$namedAttribute},
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
	$NamedAttribute setStatemethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{"description", 's', "The selection state of the check box menu item"},
		{}
	};
	$CompoundAttribute setStatemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setStatemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $Icon*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JCheckBoxMenuItem, init$, void, $String*, $Icon*, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JCheckBoxMenuItem, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JCheckBoxMenuItem, getSelectedObjects, $ObjectArray*), nullptr, nullptr, getSelectedObjectsmethodAnnotations$$},
		{"getState", "()Z", nullptr, $PUBLIC, $virtualMethod(JCheckBoxMenuItem, getState, bool)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JCheckBoxMenuItem, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JCheckBoxMenuItem, paramString, $String*)},
		{"setState", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JCheckBoxMenuItem, setState, void, bool), nullptr, nullptr, setStatemethodAnnotations$$},
		{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0, $virtualMethod(JCheckBoxMenuItem, shouldUpdateSelectedStateFromAction, bool)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JCheckBoxMenuItem, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem", "javax.swing.JCheckBoxMenuItem", "AccessibleJCheckBoxMenuItem", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "A menu item which can be selected or deselected."},
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
		"javax.swing.JCheckBoxMenuItem",
		"javax.swing.JMenuItem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem"
	};
	$loadClass(JCheckBoxMenuItem, name, initialize, &classInfo$$, JCheckBoxMenuItem::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCheckBoxMenuItem));
	});
	return class$;
}

$Class* JCheckBoxMenuItem::class$ = nullptr;

	} // swing
} // javax