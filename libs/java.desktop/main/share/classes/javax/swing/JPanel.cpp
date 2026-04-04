#include <javax/swing/JPanel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel$AccessibleJPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PanelUI.h>
#include <jcpp.h>

#undef TRUE

using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JPanel$AccessibleJPanel = ::javax::swing::JPanel$AccessibleJPanel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PanelUI = ::javax::swing::plaf::PanelUI;

namespace javax {
	namespace swing {

$String* JPanel::toString() {
	 return this->$JComponent::toString();
}

int32_t JPanel::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JPanel::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JPanel::clone() {
	 return this->$JComponent::clone();
}

void JPanel::finalize() {
	this->$JComponent::finalize();
}

$String* JPanel::uiClassID = nullptr;

void JPanel::init$($LayoutManager* layout, bool isDoubleBuffered) {
	$JComponent::init$();
	setLayout(layout);
	setDoubleBuffered(isDoubleBuffered);
	setUIProperty("opaque"_s, $Boolean::TRUE);
	updateUI();
}

void JPanel::init$($LayoutManager* layout) {
	JPanel::init$(layout, true);
}

void JPanel::init$(bool isDoubleBuffered) {
	JPanel::init$($$new($FlowLayout), isDoubleBuffered);
}

void JPanel::init$() {
	JPanel::init$(true);
}

void JPanel::updateUI() {
	setUI($$cast($PanelUI, $UIManager::getUI(this)));
}

$ComponentUI* JPanel::getUI() {
	return $cast($PanelUI, this->ui);
}

void JPanel::setUI($PanelUI* ui) {
	$JComponent::setUI(ui);
}

$String* JPanel::getUIClassID() {
	return JPanel::uiClassID;
}

void JPanel::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JPanel::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JPanel::paramString() {
	return $JComponent::paramString();
}

$AccessibleContext* JPanel::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JPanel$AccessibleJPanel, this));
	}
	return this->accessibleContext;
}

JPanel::JPanel() {
}

void JPanel::clinit$($Class* clazz) {
	$assignStatic(JPanel::uiClassID, "PanelUI"_s);
}

$Class* JPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPanel, uiClassID)},
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
		{"expert", 'Z', "true"},
		{"description", 's', "A string that specifies the name of the L&F class."},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
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
		{"<init>", "(Ljava/awt/LayoutManager;Z)V", nullptr, $PUBLIC, $method(JPanel, init$, void, $LayoutManager*, bool)},
		{"<init>", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $method(JPanel, init$, void, $LayoutManager*)},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(JPanel, init$, void, bool)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPanel, init$, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JPanel, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getUI", "()Ljavax/swing/plaf/PanelUI;", nullptr, $PUBLIC, $virtualMethod(JPanel, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JPanel, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JPanel, paramString, $String*)},
		{"setUI", "(Ljavax/swing/plaf/PanelUI;)V", nullptr, $PUBLIC, $virtualMethod(JPanel, setUI, void, $PanelUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JPanel, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JPanel, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JPanel$AccessibleJPanel", "javax.swing.JPanel", "AccessibleJPanel", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A generic lightweight container."},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JPanel",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JPanel$AccessibleJPanel"
	};
	$loadClass(JPanel, name, initialize, &classInfo$$, JPanel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPanel));
	});
	return class$;
}

$Class* JPanel::class$ = nullptr;

	} // swing
} // javax