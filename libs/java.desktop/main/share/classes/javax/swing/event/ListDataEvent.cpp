#include <javax/swing/event/ListDataEvent.h>
#include <java/lang/Math.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef CONTENTS_CHANGED
#undef INTERVAL_ADDED
#undef INTERVAL_REMOVED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

int32_t ListDataEvent::getType() {
	return this->type;
}

int32_t ListDataEvent::getIndex0() {
	return this->index0;
}

int32_t ListDataEvent::getIndex1() {
	return this->index1;
}

void ListDataEvent::init$(Object$* source, int32_t type, int32_t index0, int32_t index1) {
	$EventObject::init$(source);
	this->type = type;
	this->index0 = $Math::min(index0, index1);
	this->index1 = $Math::max(index0, index1);
}

$String* ListDataEvent::toString() {
	$useLocalObjectStack();
	return $str({$($of(this)->getClass()->getName()), "[type="_s, $$str(this->type), ",index0="_s, $$str(this->index0), ",index1="_s, $$str(this->index1), "]"_s});
}

ListDataEvent::ListDataEvent() {
}

$Class* ListDataEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONTENTS_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListDataEvent, CONTENTS_CHANGED)},
		{"INTERVAL_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListDataEvent, INTERVAL_ADDED)},
		{"INTERVAL_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ListDataEvent, INTERVAL_REMOVED)},
		{"type", "I", nullptr, $PRIVATE, $field(ListDataEvent, type)},
		{"index0", "I", nullptr, $PRIVATE, $field(ListDataEvent, index0)},
		{"index1", "I", nullptr, $PRIVATE, $field(ListDataEvent, index1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;III)V", nullptr, $PUBLIC, $method(ListDataEvent, init$, void, Object$*, int32_t, int32_t, int32_t)},
		{"getIndex0", "()I", nullptr, $PUBLIC, $virtualMethod(ListDataEvent, getIndex0, int32_t)},
		{"getIndex1", "()I", nullptr, $PUBLIC, $virtualMethod(ListDataEvent, getIndex1, int32_t)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(ListDataEvent, getType, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ListDataEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.ListDataEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ListDataEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListDataEvent);
	});
	return class$;
}

$Class* ListDataEvent::class$ = nullptr;

		} // event
	} // swing
} // javax