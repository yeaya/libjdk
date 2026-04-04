#include <javax/swing/JCheckBox.h>
#include <java/awt/Component.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox$AccessibleJCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef BORDER_PAINTED_FLAT_CHANGED_PROPERTY
#undef FALSE
#undef LEADING

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JCheckBox$AccessibleJCheckBox = ::javax::swing::JCheckBox$AccessibleJCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {

$String* JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY = nullptr;
$String* JCheckBox::uiClassID = nullptr;

void JCheckBox::init$() {
	JCheckBox::init$(nullptr, nullptr, false);
}

void JCheckBox::init$($Icon* icon) {
	JCheckBox::init$(nullptr, icon, false);
}

void JCheckBox::init$($Icon* icon, bool selected) {
	JCheckBox::init$(nullptr, icon, selected);
}

void JCheckBox::init$($String* text) {
	JCheckBox::init$(text, nullptr, false);
}

void JCheckBox::init$($Action* a) {
	JCheckBox::init$();
	setAction(a);
}

void JCheckBox::init$($String* text, bool selected) {
	JCheckBox::init$(text, nullptr, selected);
}

void JCheckBox::init$($String* text, $Icon* icon) {
	JCheckBox::init$(text, icon, false);
}

void JCheckBox::init$($String* text, $Icon* icon, bool selected) {
	$JToggleButton::init$(text, icon, selected);
	this->flat = false;
	setUIProperty("borderPainted"_s, $Boolean::FALSE);
	setHorizontalAlignment($SwingConstants::LEADING);
}

void JCheckBox::setBorderPaintedFlat(bool b) {
	bool oldValue = this->flat;
	this->flat = b;
	firePropertyChange(JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY, oldValue, this->flat);
	if (b != oldValue) {
		revalidate();
		repaint();
	}
}

bool JCheckBox::isBorderPaintedFlat() {
	return this->flat;
}

void JCheckBox::updateUI() {
	setUI($$cast($ButtonUI, $UIManager::getUI(this)));
}

$String* JCheckBox::getUIClassID() {
	return JCheckBox::uiClassID;
}

void JCheckBox::setIconFromAction($Action* a) {
}

void JCheckBox::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JCheckBox::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

void JCheckBox::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if ($$nc(getUIClassID())->equals(JCheckBox::uiClassID)) {
		updateUI();
	}
}

$String* JCheckBox::paramString() {
	return $JToggleButton::paramString();
}

$AccessibleContext* JCheckBox::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JCheckBox$AccessibleJCheckBox, this));
	}
	return this->accessibleContext;
}

JCheckBox::JCheckBox() {
}

void JCheckBox::clinit$($Class* clazz) {
	$assignStatic(JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY, "borderPaintedFlat"_s);
	$assignStatic(JCheckBox::uiClassID, "CheckBoxUI"_s);
}

$Class* JCheckBox::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BORDER_PAINTED_FLAT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JCheckBox, BORDER_PAINTED_FLAT_CHANGED_PROPERTY)},
		{"flat", "Z", nullptr, $PRIVATE, $field(JCheckBox, flat)},
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCheckBox, uiClassID)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this CheckBox."},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "A string that specifies the name of the L&F class"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setBorderPaintedFlatmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Whether the border is painted flat."},
		{}
	};
	$CompoundAttribute setBorderPaintedFlatmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setBorderPaintedFlatmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JCheckBox, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $Icon*)},
		{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $Icon*, bool)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JCheckBox, init$, void, $String*, $Icon*, bool)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JCheckBox, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JCheckBox, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"isBorderPaintedFlat", "()Z", nullptr, $PUBLIC, $virtualMethod(JCheckBox, isBorderPaintedFlat, bool)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JCheckBox, paramString, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JCheckBox, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"setBorderPaintedFlat", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JCheckBox, setBorderPaintedFlat, void, bool), nullptr, nullptr, setBorderPaintedFlatmethodAnnotations$$},
		{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0, $virtualMethod(JCheckBox, setIconFromAction, void, $Action*)},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JCheckBox, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JCheckBox, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JCheckBox$AccessibleJCheckBox", "javax.swing.JCheckBox", "AccessibleJCheckBox", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"description", 's', "A component which can be selected or deselected."},
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
		"javax.swing.JCheckBox",
		"javax.swing.JToggleButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JCheckBox$AccessibleJCheckBox"
	};
	$loadClass(JCheckBox, name, initialize, &classInfo$$, JCheckBox::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCheckBox));
	});
	return class$;
}

$Class* JCheckBox::class$ = nullptr;

	} // swing
} // javax