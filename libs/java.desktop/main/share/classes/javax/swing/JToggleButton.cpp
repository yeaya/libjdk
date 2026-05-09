#include <javax/swing/JToggleButton.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton$1.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton$1 = ::javax::swing::JToggleButton$1;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;

namespace javax {
	namespace swing {

$String* JToggleButton::toString() {
	return this->$AbstractButton::toString();
}

int32_t JToggleButton::hashCode() {
	return this->$AbstractButton::hashCode();
}

bool JToggleButton::equals(Object$* arg0) {
	return this->$AbstractButton::equals(arg0);
}

$Object* JToggleButton::clone() {
	return this->$AbstractButton::clone();
}

void JToggleButton::finalize() {
	this->$AbstractButton::finalize();
}

$String* JToggleButton::uiClassID = nullptr;

$AccessibleContext* JToggleButton::access$200(JToggleButton* x0) {
	$init(JToggleButton);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JToggleButton::access$100(JToggleButton* x0) {
	$init(JToggleButton);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JToggleButton::access$000(JToggleButton* x0) {
	$init(JToggleButton);
	return $nc(x0)->accessibleContext;
}

void JToggleButton::init$() {
	JToggleButton::init$(nullptr, nullptr, false);
}

void JToggleButton::init$($Icon* icon) {
	JToggleButton::init$(nullptr, icon, false);
}

void JToggleButton::init$($Icon* icon, bool selected) {
	JToggleButton::init$(nullptr, icon, selected);
}

void JToggleButton::init$($String* text) {
	JToggleButton::init$(text, nullptr, false);
}

void JToggleButton::init$($String* text, bool selected) {
	JToggleButton::init$(text, nullptr, selected);
}

void JToggleButton::init$($Action* a) {
	JToggleButton::init$();
	setAction(a);
}

void JToggleButton::init$($String* text, $Icon* icon) {
	JToggleButton::init$(text, icon, false);
}

void JToggleButton::init$($String* text, $Icon* icon, bool selected) {
	$AbstractButton::init$();
	setModel($$new($JToggleButton$ToggleButtonModel));
	$nc(this->model)->setSelected(selected);
	init(text, icon);
}

void JToggleButton::updateUI() {
	setUI($$cast($ButtonUI, $UIManager::getUI(this)));
}

$String* JToggleButton::getUIClassID() {
	return JToggleButton::uiClassID;
}

bool JToggleButton::shouldUpdateSelectedStateFromAction() {
	return true;
}

JToggleButton* JToggleButton::getGroupSelection($FocusEvent$Cause* cause) {
	$useLocalObjectStack();
	$init($JToggleButton$1);
	$var($ButtonModel, model, nullptr);
	$var(JToggleButton, selection, nullptr);
	switch ($nc($JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->get($nc((cause))->ordinal())) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		$assign(model, getModel());
		$assign(selection, this);
		if (model != nullptr) {
			$var($ButtonGroup, group, model->getGroup());
			bool var$0 = group != nullptr && group->getSelection() != nullptr;
			if (var$0 && !group->isSelected(model)) {
				$var($Iterator, iterator, $$nc(group->getElements())->asIterator());
				while ($nc(iterator)->hasNext()) {
					$var($AbstractButton, member, $cast($AbstractButton, iterator->next()));
					if (group->isSelected($($nc(member)->getModel()))) {
						bool var$3 = $instanceOf(JToggleButton, member) && member->isVisible();
						bool var$2 = var$3 && member->isDisplayable();
						bool var$1 = var$2 && member->isEnabled();
						if (var$1 && member->isFocusable()) {
							$assign(selection, $cast(JToggleButton, member));
						}
						break;
					}
				}
			}
		}
		return selection;
	default:
		return this;
	}
}

void JToggleButton::requestFocus($FocusEvent$Cause* cause) {
	$$nc(getGroupSelection(cause))->requestFocusUnconditionally(cause);
}

void JToggleButton::requestFocusUnconditionally($FocusEvent$Cause* cause) {
	$AbstractButton::requestFocus(cause);
}

bool JToggleButton::requestFocusInWindow($FocusEvent$Cause* cause) {
	return $$nc(getGroupSelection(cause))->requestFocusInWindowUnconditionally(cause);
}

bool JToggleButton::requestFocusInWindowUnconditionally($FocusEvent$Cause* cause) {
	return $AbstractButton::requestFocusInWindow(cause);
}

void JToggleButton::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JToggleButton::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JToggleButton::paramString() {
	return $AbstractButton::paramString();
}

$AccessibleContext* JToggleButton::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JToggleButton$AccessibleJToggleButton, this));
	}
	return this->accessibleContext;
}

JToggleButton::JToggleButton() {
}

void JToggleButton::clinit$($Class* clazz) {
	$assignStatic(JToggleButton::uiClassID, "ToggleButtonUI"_s);
}

$Class* JToggleButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JToggleButton, uiClassID)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this ToggleButton."},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "A string that specifies the name of the L&F class"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JToggleButton, init$, void)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $Icon*)},
		{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $Icon*, bool)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $String*, bool)},
		{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $Action*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $String*, $Icon*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(JToggleButton, init$, void, $String*, $Icon*, bool)},
		{"access$000", "(Ljavax/swing/JToggleButton;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JToggleButton, access$000, $AccessibleContext*, JToggleButton*)},
		{"access$100", "(Ljavax/swing/JToggleButton;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JToggleButton, access$100, $AccessibleContext*, JToggleButton*)},
		{"access$200", "(Ljavax/swing/JToggleButton;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JToggleButton, access$200, $AccessibleContext*, JToggleButton*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JToggleButton, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getGroupSelection", "(Ljava/awt/event/FocusEvent$Cause;)Ljavax/swing/JToggleButton;", nullptr, $PRIVATE, $method(JToggleButton, getGroupSelection, JToggleButton*, $FocusEvent$Cause*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JToggleButton, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JToggleButton, paramString, $String*)},
		{"requestFocus", "(Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC, $virtualMethod(JToggleButton, requestFocus, void, $FocusEvent$Cause*)},
		{"requestFocusInWindow", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC, $virtualMethod(JToggleButton, requestFocusInWindow, bool, $FocusEvent$Cause*)},
		{"requestFocusInWindowUnconditionally", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PRIVATE, $method(JToggleButton, requestFocusInWindowUnconditionally, bool, $FocusEvent$Cause*)},
		{"requestFocusUnconditionally", "(Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PRIVATE, $method(JToggleButton, requestFocusUnconditionally, void, $FocusEvent$Cause*)},
		{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0, $virtualMethod(JToggleButton, shouldUpdateSelectedStateFromAction, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JToggleButton, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JToggleButton, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToggleButton$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.JToggleButton$AccessibleJToggleButton", "javax.swing.JToggleButton", "AccessibleJToggleButton", $PROTECTED},
		{"javax.swing.JToggleButton$ToggleButtonModel", "javax.swing.JToggleButton", "ToggleButtonModel", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UIClassID"},
		{"description", 's', "An implementation of a two-state button."},
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
		"javax.swing.JToggleButton",
		"javax.swing.AbstractButton",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JToggleButton$1,javax.swing.JToggleButton$AccessibleJToggleButton,javax.swing.JToggleButton$ToggleButtonModel"
	};
	$loadClass(JToggleButton, name, initialize, &classInfo$$, JToggleButton::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToggleButton));
	});
	return class$;
}

$Class* JToggleButton::class$ = nullptr;

	} // swing
} // javax