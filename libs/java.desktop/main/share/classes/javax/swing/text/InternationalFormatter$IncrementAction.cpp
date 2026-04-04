#include <javax/swing/text/InternationalFormatter$IncrementAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/ParseException.h>
#include <java/util/Map.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $ParseException = ::java::text::ParseException;
using $Map = ::java::util::Map;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;

namespace javax {
	namespace swing {
		namespace text {

void InternationalFormatter$IncrementAction::init$($InternationalFormatter* this$0, $String* name, int32_t direction) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(name);
	this->direction = direction;
}

void InternationalFormatter$IncrementAction::actionPerformed($ActionEvent* ae) {
	$useLocalObjectStack();
	if ($$nc($InternationalFormatter::access$000(this->this$0))->isEditable()) {
		if (this->this$0->getAllowsInvalid()) {
			this->this$0->updateMask();
		}
		bool validEdit = false;
		if (this->this$0->isValidMask()) {
			int32_t start = $$nc($InternationalFormatter::access$100(this->this$0))->getSelectionStart();
			if (start != -1) {
				$var($AttributedCharacterIterator, iterator, this->this$0->getIterator());
				$nc(iterator)->setIndex(start);
				$var($Map, attributes, iterator->getAttributes());
				$var($Object, field, this->this$0->getAdjustField(start, attributes));
				if (this->this$0->canIncrement(field, start)) {
					try {
						$var($Object, value, this->this$0->stringToValue($($$nc($InternationalFormatter::access$200(this->this$0))->getText())));
						int32_t fieldTypeCount = this->this$0->getFieldTypeCountTo(field, start);
						$assign(value, this->this$0->adjustValue(value, attributes, field, this->direction));
						if (value != nullptr && this->this$0->isValidValue(value, false)) {
							this->this$0->resetValue(value);
							this->this$0->updateMask();
							if (this->this$0->isValidMask()) {
								this->this$0->selectField(field, fieldTypeCount);
							}
							validEdit = true;
						}
					} catch ($ParseException& pe) {
					} catch ($BadLocationException& ble) {
					}
				}
			}
		}
		if (!validEdit) {
			$InternationalFormatter::access$300(this->this$0);
		}
	}
}

InternationalFormatter$IncrementAction::InternationalFormatter$IncrementAction() {
}

$Class* InternationalFormatter$IncrementAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/InternationalFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(InternationalFormatter$IncrementAction, this$0)},
		{"direction", "I", nullptr, $PRIVATE, $field(InternationalFormatter$IncrementAction, direction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/InternationalFormatter;Ljava/lang/String;I)V", nullptr, 0, $method(InternationalFormatter$IncrementAction, init$, void, $InternationalFormatter*, $String*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternationalFormatter$IncrementAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.InternationalFormatter$IncrementAction", "javax.swing.text.InternationalFormatter", "IncrementAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.InternationalFormatter$IncrementAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.InternationalFormatter"
	};
	$loadClass(InternationalFormatter$IncrementAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InternationalFormatter$IncrementAction));
	});
	return class$;
}

$Class* InternationalFormatter$IncrementAction::class$ = nullptr;

		} // text
	} // swing
} // javax