#include <java/awt/event/ActionEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

#undef ACTION_FIRST
#undef ACTION_LAST
#undef ACTION_PERFORMED
#undef ALT_MASK
#undef CTRL_MASK
#undef META_MASK
#undef SHIFT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void ActionEvent::init$(Object$* source, int32_t id, $String* command) {
	ActionEvent::init$(source, id, command, 0);
}

void ActionEvent::init$(Object$* source, int32_t id, $String* command, int32_t modifiers) {
	ActionEvent::init$(source, id, command, 0, modifiers);
}

void ActionEvent::init$(Object$* source, int32_t id, $String* command, int64_t when, int32_t modifiers) {
	$AWTEvent::init$(source, id);
	$set(this, actionCommand, command);
	this->when = when;
	this->modifiers = modifiers;
}

$String* ActionEvent::getActionCommand() {
	return this->actionCommand;
}

int64_t ActionEvent::getWhen() {
	return this->when;
}

int32_t ActionEvent::getModifiers() {
	return this->modifiers;
}

$String* ActionEvent::paramString() {
	$useLocalObjectStack();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case ActionEvent::ACTION_PERFORMED:
		$assign(typeStr, "ACTION_PERFORMED"_s);
		break;
	default:
		$assign(typeStr, "unknown type"_s);
	}
	return $str({typeStr, ",cmd="_s, this->actionCommand, ",when="_s, $$str(this->when), ",modifiers="_s, $($KeyEvent::getKeyModifiersText(this->modifiers))});
}

ActionEvent::ActionEvent() {
}

$Class* ActionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHIFT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, SHIFT_MASK)},
		{"CTRL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, CTRL_MASK)},
		{"META_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, META_MASK)},
		{"ALT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ALT_MASK)},
		{"ACTION_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_FIRST)},
		{"ACTION_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_LAST)},
		{"ACTION_PERFORMED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ActionEvent, ACTION_PERFORMED)},
		{"actionCommand", "Ljava/lang/String;", nullptr, 0, $field(ActionEvent, actionCommand)},
		{"when", "J", nullptr, 0, $field(ActionEvent, when)},
		{"modifiers", "I", nullptr, 0, $field(ActionEvent, modifiers)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ActionEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(ActionEvent, init$, void, Object$*, int32_t, $String*)},
		{"<init>", "(Ljava/lang/Object;ILjava/lang/String;I)V", nullptr, $PUBLIC, $method(ActionEvent, init$, void, Object$*, int32_t, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Object;ILjava/lang/String;JI)V", nullptr, $PUBLIC, $method(ActionEvent, init$, void, Object$*, int32_t, $String*, int64_t, int32_t)},
		{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ActionEvent, getActionCommand, $String*)},
		{"getModifiers", "()I", nullptr, $PUBLIC, $virtualMethod(ActionEvent, getModifiers, int32_t)},
		{"getWhen", "()J", nullptr, $PUBLIC, $virtualMethod(ActionEvent, getWhen, int64_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ActionEvent, paramString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.event.ActionEvent",
		"java.awt.AWTEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ActionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionEvent);
	});
	return class$;
}

$Class* ActionEvent::class$ = nullptr;

		} // event
	} // awt
} // java