#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef PRESSED
#undef SELECTED

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;

namespace javax {
	namespace swing {

void JToggleButton$ToggleButtonModel::init$() {
	$DefaultButtonModel::init$();
}

bool JToggleButton$ToggleButtonModel::isSelected() {
	return (this->stateMask & $DefaultButtonModel::SELECTED) != 0;
}

void JToggleButton$ToggleButtonModel::setSelected(bool b) {
	$useLocalObjectStack();
	$var($ButtonGroup, group, getGroup());
	if (group != nullptr) {
		group->setSelected(this, b);
		b = group->isSelected(this);
	}
	if (isSelected() == b) {
		return;
	}
	if (b) {
		this->stateMask |= $DefaultButtonModel::SELECTED;
	} else {
		this->stateMask &= (uint32_t)~$DefaultButtonModel::SELECTED;
	}
	fireStateChanged();
	fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this, this->isSelected() ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
}

void JToggleButton$ToggleButtonModel::setPressed(bool b) {
	$useLocalObjectStack();
	bool var$0 = isPressed() == b;
	if (var$0 || !isEnabled()) {
		return;
	}
	if (b == false && isArmed()) {
		setSelected(!this->isSelected());
	}
	if (b) {
		this->stateMask |= $DefaultButtonModel::PRESSED;
	} else {
		this->stateMask &= (uint32_t)~$DefaultButtonModel::PRESSED;
	}
	fireStateChanged();
	bool var$1 = !isPressed();
	if (var$1 && isArmed()) {
		int32_t modifiers = 0;
		$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
		if ($instanceOf($InputEvent, currentEvent)) {
			modifiers = $cast($InputEvent, currentEvent)->getModifiers();
		} else if ($instanceOf($ActionEvent, currentEvent)) {
			modifiers = $cast($ActionEvent, currentEvent)->getModifiers();
		}
		$var($String, var$2, getActionCommand());
		fireActionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$2, $EventQueue::getMostRecentEventTime(), modifiers));
	}
}

JToggleButton$ToggleButtonModel::JToggleButton$ToggleButtonModel() {
}

$Class* JToggleButton$ToggleButtonModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JToggleButton$ToggleButtonModel, init$, void)},
		{"isSelected", "()Z", nullptr, $PUBLIC, $virtualMethod(JToggleButton$ToggleButtonModel, isSelected, bool)},
		{"setPressed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JToggleButton$ToggleButtonModel, setPressed, void, bool)},
		{"setSelected", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JToggleButton$ToggleButtonModel, setSelected, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToggleButton$ToggleButtonModel", "javax.swing.JToggleButton", "ToggleButtonModel", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JToggleButton$ToggleButtonModel",
		"javax.swing.DefaultButtonModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JToggleButton"
	};
	$loadClass(JToggleButton$ToggleButtonModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToggleButton$ToggleButtonModel));
	});
	return class$;
}

$Class* JToggleButton$ToggleButtonModel::class$ = nullptr;

	} // swing
} // javax