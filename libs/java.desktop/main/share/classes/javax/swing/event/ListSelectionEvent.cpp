#include <javax/swing/event/ListSelectionEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

void ListSelectionEvent::init$(Object$* source, int32_t firstIndex, int32_t lastIndex, bool isAdjusting) {
	$EventObject::init$(source);
	this->firstIndex = firstIndex;
	this->lastIndex = lastIndex;
	this->isAdjusting = isAdjusting;
}

int32_t ListSelectionEvent::getFirstIndex() {
	return this->firstIndex;
}

int32_t ListSelectionEvent::getLastIndex() {
	return this->lastIndex;
}

bool ListSelectionEvent::getValueIsAdjusting() {
	return this->isAdjusting;
}

$String* ListSelectionEvent::toString() {
	$useLocalObjectStack();
	$var($String, properties, $str({" source="_s, $(getSource()), " firstIndex= "_s, $$str(this->firstIndex), " lastIndex= "_s, $$str(this->lastIndex), " isAdjusting= "_s, $$str(this->isAdjusting), " "_s}));
	return $str({$($of(this)->getClass()->getName()), "["_s, properties, "]"_s});
}

ListSelectionEvent::ListSelectionEvent() {
}

$Class* ListSelectionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"firstIndex", "I", nullptr, $PRIVATE, $field(ListSelectionEvent, firstIndex)},
		{"lastIndex", "I", nullptr, $PRIVATE, $field(ListSelectionEvent, lastIndex)},
		{"isAdjusting", "Z", nullptr, $PRIVATE, $field(ListSelectionEvent, isAdjusting)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;IIZ)V", nullptr, $PUBLIC, $method(ListSelectionEvent, init$, void, Object$*, int32_t, int32_t, bool)},
		{"getFirstIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ListSelectionEvent, getFirstIndex, int32_t)},
		{"getLastIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ListSelectionEvent, getLastIndex, int32_t)},
		{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC, $virtualMethod(ListSelectionEvent, getValueIsAdjusting, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ListSelectionEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.ListSelectionEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ListSelectionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSelectionEvent);
	});
	return class$;
}

$Class* ListSelectionEvent::class$ = nullptr;

		} // event
	} // swing
} // javax