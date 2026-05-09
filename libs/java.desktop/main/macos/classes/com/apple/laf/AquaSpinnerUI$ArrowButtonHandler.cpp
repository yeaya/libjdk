#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/text/DateFormat$Field.h>
#include <java/text/Format$Field.h>
#include <java/text/Format.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DateEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DONE
#undef HOUR
#undef HOUR0
#undef HOUR1

using $Format$FieldArray = $Array<::java::text::Format$Field>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $DateFormat$Field = ::java::text::DateFormat$Field;
using $Format = ::java::text::Format;
using $Format$Field = ::java::text::Format$Field;
using $ParseException = ::java::text::ParseException;
using $Calendar = ::java::util::Calendar;
using $Map = ::java::util::Map;
using $AbstractAction = ::javax::swing::AbstractAction;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DateEditor = ::javax::swing::JSpinner$DateEditor;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;

namespace com {
	namespace apple {
		namespace laf {

$Object* AquaSpinnerUI$ArrowButtonHandler::clone() {
	return this->$AbstractAction::clone();
}

int32_t AquaSpinnerUI$ArrowButtonHandler::hashCode() {
	return this->$AbstractAction::hashCode();
}

bool AquaSpinnerUI$ArrowButtonHandler::equals(Object$* arg0) {
	return this->$AbstractAction::equals(arg0);
}

$String* AquaSpinnerUI$ArrowButtonHandler::toString() {
	return this->$AbstractAction::toString();
}

void AquaSpinnerUI$ArrowButtonHandler::finalize() {
	this->$AbstractAction::finalize();
}

void AquaSpinnerUI$ArrowButtonHandler::init$($String* name, bool isNext) {
	$AbstractAction::init$(name);
	$set(this, spinner, nullptr);
	$set(this, arrowButton, nullptr);
	this->isNext = isNext;
	$set(this, autoRepeatTimer, $new($Timer, 60, this));
	this->autoRepeatTimer->setInitialDelay(300);
}

$JSpinner* AquaSpinnerUI$ArrowButtonHandler::eventToSpinner($AWTEvent* e) {
	$var($Object, src, $nc(e)->getSource());
	while (($instanceOf($Component, src)) && !($instanceOf($JSpinner, src))) {
		$assign(src, $cast($Component, src)->getParent());
	}
	return ($instanceOf($JSpinner, src)) ? $cast($JSpinner, src) : ($JSpinner*)nullptr;
}

void AquaSpinnerUI$ArrowButtonHandler::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (!($instanceOf($Timer, $($nc(e)->getSource())))) {
		$set(this, spinner, eventToSpinner(e));
		if ($instanceOf($JButton, $(e->getSource()))) {
			$set(this, arrowButton, $cast($JButton, e->getSource()));
		}
	} else {
		bool var$0 = this->arrowButton != nullptr && !$$nc(this->arrowButton->getModel())->isPressed();
		if (var$0 && this->autoRepeatTimer->isRunning()) {
			this->autoRepeatTimer->stop();
			$set(this, spinner, nullptr);
			$set(this, arrowButton, nullptr);
		}
	}
	if (this->spinner != nullptr) {
		try {
			int32_t calendarField = getCalendarField(this->spinner);
			$nc(this->spinner)->commitEdit();
			if (calendarField != -1) {
				$$sure($SpinnerDateModel, $nc(this->spinner)->getModel())->setCalendarField(calendarField);
			}
			$var($Object, value, (this->isNext) ? $nc(this->spinner)->getNextValue() : $nc(this->spinner)->getPreviousValue());
			if (value != nullptr) {
				$nc(this->spinner)->setValue(value);
				select(this->spinner);
			}
		} catch ($IllegalArgumentException& iae) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->spinner);
		} catch ($ParseException& pe) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(this->spinner);
		}
	}
}

void AquaSpinnerUI$ArrowButtonHandler::select($JSpinner* spinnerComponent) {
	$useLocalObjectStack();
	if (spinnerComponent == nullptr) {
		return;
	}
	$var($JComponent, editor, $nc(spinnerComponent)->getEditor());
	if (!($instanceOf($JSpinner$DateEditor, editor))) {
		return;
	}
	$var($JSpinner$DateEditor, dateEditor, $cast($JSpinner$DateEditor, editor));
	$var($JFormattedTextField, ftf, $nc(dateEditor)->getTextField());
	$var($Format, format, dateEditor->getFormat());
	$var($Object, value, nullptr);
	if (format == nullptr || ($assign(value, spinnerComponent->getValue())) == nullptr) {
		return;
	}
	$var($SpinnerDateModel, model, dateEditor->getModel());
	$var($DateFormat$Field, field, $DateFormat$Field::ofCalendarField($nc(model)->getCalendarField()));
	if (field == nullptr) {
		return;
	}
	try {
		$var($AttributedCharacterIterator, iterator, $nc(format)->formatToCharacterIterator(value));
		if (!select(ftf, iterator, field) && field == $DateFormat$Field::HOUR0) {
			select(ftf, iterator, $DateFormat$Field::HOUR1);
		}
	} catch ($IllegalArgumentException& iae) {
	}
}

bool AquaSpinnerUI$ArrowButtonHandler::select($JFormattedTextField* ftf, $AttributedCharacterIterator* iterator, $DateFormat$Field* field) {
	$useLocalObjectStack();
	int32_t max = $$nc($nc(ftf)->getDocument())->getLength();
	$nc(iterator)->first();
	do {
		$var($Map, attrs, iterator->getAttributes());
		if (attrs == nullptr || !attrs->containsKey(field)) {
			continue;
		}
		int32_t start = iterator->getRunStart(field);
		int32_t end = iterator->getRunLimit(field);
		if (start != -1 && end != -1 && start <= max && end <= max) {
			ftf->select(start, end);
		}
		return true;
	} while (iterator->next() != $CharacterIterator::DONE);
	return false;
}

int32_t AquaSpinnerUI$ArrowButtonHandler::getCalendarField($JSpinner* spinnerComponent) {
	$useLocalObjectStack();
	$var($JComponent, editor, $nc(spinnerComponent)->getEditor());
	if (!($instanceOf($JSpinner$DateEditor, editor))) {
		return -1;
	}
	$var($JSpinner$DateEditor, dateEditor, $cast($JSpinner$DateEditor, editor));
	$var($JFormattedTextField, ftf, $nc(dateEditor)->getTextField());
	int32_t start = $nc(ftf)->getSelectionStart();
	$var($JFormattedTextField$AbstractFormatter, formatter, ftf->getFormatter());
	if (!($instanceOf($InternationalFormatter, formatter))) {
		return -1;
	}
	$var($Format$FieldArray, fields, $nc($cast($InternationalFormatter, formatter))->getFields(start));
	{
		$var($Format$FieldArray, arr$, fields);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Format$Field, element, arr$->get(i$));
			{
				if (!($instanceOf($DateFormat$Field, element))) {
					continue;
				}
				int32_t calendarField = 0;
				$init($DateFormat$Field);
				if ($equals(element, $DateFormat$Field::HOUR1)) {
					calendarField = $Calendar::HOUR;
				} else {
					calendarField = $nc($cast($DateFormat$Field, element))->getCalendarField();
				}
				if (calendarField != -1) {
					return calendarField;
				}
			}
		}
	}
	return -1;
}

void AquaSpinnerUI$ArrowButtonHandler::mousePressed($MouseEvent* e) {
	bool var$0 = !$SwingUtilities::isLeftMouseButton(e);
	if (var$0 || !$$nc($nc(e)->getComponent())->isEnabled()) {
		return;
	}
	$set(this, spinner, eventToSpinner(e));
	this->autoRepeatTimer->start();
	focusSpinnerIfNecessary();
}

void AquaSpinnerUI$ArrowButtonHandler::mouseReleased($MouseEvent* e) {
	this->autoRepeatTimer->stop();
	$set(this, arrowButton, nullptr);
	$set(this, spinner, nullptr);
}

void AquaSpinnerUI$ArrowButtonHandler::mouseClicked($MouseEvent* e) {
}

void AquaSpinnerUI$ArrowButtonHandler::mouseEntered($MouseEvent* e) {
	bool var$0 = this->spinner != nullptr && !this->autoRepeatTimer->isRunning();
	if (var$0 && this->spinner == eventToSpinner(e)) {
		this->autoRepeatTimer->start();
	}
}

void AquaSpinnerUI$ArrowButtonHandler::mouseExited($MouseEvent* e) {
	if (this->autoRepeatTimer->isRunning()) {
		this->autoRepeatTimer->stop();
	}
}

void AquaSpinnerUI$ArrowButtonHandler::focusSpinnerIfNecessary() {
	$useLocalObjectStack();
	$var($Component, fo, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	bool var$0 = !$nc(this->spinner)->isRequestFocusEnabled();
	if (var$0 || (fo != nullptr && ($SwingUtilities::isDescendingFrom(fo, this->spinner)))) {
		return;
	}
	$var($Container, root, this->spinner);
	if (!$nc(root)->isFocusCycleRoot()) {
		$assign(root, root->getFocusCycleRootAncestor());
	}
	if (root == nullptr) {
		return;
	}
	$var($FocusTraversalPolicy, ftp, $nc(root)->getFocusTraversalPolicy());
	$var($Component, child, $nc(ftp)->getComponentAfter(root, this->spinner));
	if (child != nullptr && $SwingUtilities::isDescendingFrom(child, this->spinner)) {
		child->requestFocus();
	}
}

void AquaSpinnerUI$ArrowButtonHandler::focusGained($FocusEvent* e) {
}

void AquaSpinnerUI$ArrowButtonHandler::focusLost($FocusEvent* e) {
	if (this->spinner == eventToSpinner(e)) {
		if (this->autoRepeatTimer->isRunning()) {
			this->autoRepeatTimer->stop();
		}
		$set(this, spinner, nullptr);
		if (this->arrowButton != nullptr) {
			$var($ButtonModel, model, this->arrowButton->getModel());
			$nc(model)->setPressed(false);
			$set(this, arrowButton, nullptr);
		}
	}
}

AquaSpinnerUI$ArrowButtonHandler::AquaSpinnerUI$ArrowButtonHandler() {
}

$Class* AquaSpinnerUI$ArrowButtonHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"autoRepeatTimer", "Ljavax/swing/Timer;", nullptr, $FINAL, $field(AquaSpinnerUI$ArrowButtonHandler, autoRepeatTimer)},
		{"isNext", "Z", nullptr, $FINAL, $field(AquaSpinnerUI$ArrowButtonHandler, isNext)},
		{"spinner", "Ljavax/swing/JSpinner;", nullptr, 0, $field(AquaSpinnerUI$ArrowButtonHandler, spinner)},
		{"arrowButton", "Ljavax/swing/JButton;", nullptr, 0, $field(AquaSpinnerUI$ArrowButtonHandler, arrowButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaSpinnerUI$ArrowButtonHandler, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, actionPerformed, void, $ActionEvent*)},
		{"eventToSpinner", "(Ljava/awt/AWTEvent;)Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $method(AquaSpinnerUI$ArrowButtonHandler, eventToSpinner, $JSpinner*, $AWTEvent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, focusLost, void, $FocusEvent*)},
		{"focusSpinnerIfNecessary", "()V", nullptr, $PRIVATE, $method(AquaSpinnerUI$ArrowButtonHandler, focusSpinnerIfNecessary, void)},
		{"getCalendarField", "(Ljavax/swing/JSpinner;)I", nullptr, $PRIVATE, $method(AquaSpinnerUI$ArrowButtonHandler, getCalendarField, int32_t, $JSpinner*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$ArrowButtonHandler, mouseReleased, void, $MouseEvent*)},
		{"select", "(Ljavax/swing/JSpinner;)V", nullptr, $PRIVATE, $method(AquaSpinnerUI$ArrowButtonHandler, select, void, $JSpinner*)},
		{"select", "(Ljavax/swing/JFormattedTextField;Ljava/text/AttributedCharacterIterator;Ljava/text/DateFormat$Field;)Z", nullptr, $PRIVATE, $method(AquaSpinnerUI$ArrowButtonHandler, select, bool, $JFormattedTextField*, $AttributedCharacterIterator*, $DateFormat$Field*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler",
		"javax.swing.AbstractAction",
		"java.awt.event.FocusListener,java.awt.event.MouseListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSpinnerUI"
	};
	$loadClass(AquaSpinnerUI$ArrowButtonHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaSpinnerUI$ArrowButtonHandler));
	});
	return class$;
}

$Class* AquaSpinnerUI$ArrowButtonHandler::class$ = nullptr;

		} // laf
	} // apple
} // com