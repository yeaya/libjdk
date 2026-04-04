#include <javax/swing/JButton.h>
#include <java/awt/Component.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton$AccessibleJButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton$AccessibleJButton = ::javax::swing::JButton$AccessibleJButton;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {

$String* JButton::toString() {
	 return this->$AbstractButton::toString();
}

int32_t JButton::hashCode() {
	 return this->$AbstractButton::hashCode();
}

bool JButton::equals(Object$* arg0) {
	 return this->$AbstractButton::equals(arg0);
}

$Object* JButton::clone() {
	 return this->$AbstractButton::clone();
}

void JButton::finalize() {
	this->$AbstractButton::finalize();
}

$String* JButton::uiClassID = nullptr;

void JButton::init$() {
	JButton::init$(nullptr, nullptr);
}

void JButton::init$($Icon* icon) {
	JButton::init$(nullptr, icon);
}

void JButton::init$($String* text) {
	JButton::init$(text, nullptr);
}

void JButton::init$($Action* a) {
	JButton::init$();
	setAction(a);
}

void JButton::init$($String* text, $Icon* icon) {
	$AbstractButton::init$();
	setModel($$new($DefaultButtonModel));
	init(text, icon);
}

void JButton::updateUI() {
	setUI($$cast($ButtonUI, $UIManager::getUI(this)));
}

$String* JButton::getUIClassID() {
	return JButton::uiClassID;
}

bool JButton::isDefaultButton() {
	$var($JRootPane, root, $SwingUtilities::getRootPane(this));
	if (root != nullptr) {
		return root->getDefaultButton() == this;
	}
	return false;
}

bool JButton::isDefaultCapable() {
	return this->defaultCapable;
}

void JButton::setDefaultCapable(bool defaultCapable) {
	bool oldDefaultCapable = this->defaultCapable;
	this->defaultCapable = defaultCapable;
	firePropertyChange("defaultCapable"_s, oldDefaultCapable, defaultCapable);
}

void JButton::removeNotify() {
	$var($JRootPane, root, $SwingUtilities::getRootPane(this));
	if (root != nullptr && root->getDefaultButton() == this) {
		root->setDefaultButton(nullptr);
	}
	$AbstractButton::removeNotify();
}

void JButton::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JButton::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JButton::paramString() {
	$useLocalObjectStack();
	$var($String, defaultCapableString, this->defaultCapable ? "true"_s : "false"_s);
	return $str({$($AbstractButton::paramString()), ",defaultCapable="_s, defaultCapableString});
}

$AccessibleContext* JButton::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JButton$AccessibleJButton, this));
	}
	return this->accessibleContext;
}

JButton::JButton() {
}

void JButton::clinit$($Class* clazz) {
	$assignStatic(JButton::uiClassID, "ButtonUI"_s);
}

$Class* JButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JButton, uiClassID)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "text"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$2$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$2[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$2$namedAttribute},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this Button."},
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
	$NamedAttribute isDefaultButtonmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "Whether or not this button is the default button"},
		{}
	};
	$CompoundAttribute isDefaultButtonmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isDefaultButtonmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDefaultCapablemethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Whether or not this button can be the default button"},
		{}
	};
	$CompoundAttribute setDefaultCapablemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDefaultCapablemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JButton, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JButton, init$, void, $Icon*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JButton, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$$2},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JButton, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JButton, init$, void, $String*, $Icon*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JButton, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JButton, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"isDefaultButton", "()Z", nullptr, $PUBLIC, $virtualMethod(JButton, isDefaultButton, bool), nullptr, nullptr, isDefaultButtonmethodAnnotations$$},
		{"isDefaultCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(JButton, isDefaultCapable, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JButton, paramString, $String*)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(JButton, removeNotify, void)},
		{"setDefaultCapable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JButton, setDefaultCapable, void, bool), nullptr, nullptr, setDefaultCapablemethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JButton, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JButton, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JButton$AccessibleJButton", "javax.swing.JButton", "AccessibleJButton", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{"description", 's', "An implementation of a \"push\" button."},
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
		"javax.swing.JButton",
		"javax.swing.AbstractButton",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JButton$AccessibleJButton"
	};
	$loadClass(JButton, name, initialize, &classInfo$$, JButton::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JButton));
	});
	return class$;
}

$Class* JButton::class$ = nullptr;

	} // swing
} // javax