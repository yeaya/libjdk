#include <java/beans/IndexedPropertyChangeEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void IndexedPropertyChangeEvent::init$(Object$* source, $String* propertyName, Object$* oldValue, Object$* newValue, int32_t index) {
	$PropertyChangeEvent::init$(source, propertyName, oldValue, newValue);
	this->index = index;
}

int32_t IndexedPropertyChangeEvent::getIndex() {
	return this->index;
}

void IndexedPropertyChangeEvent::appendTo($StringBuilder* sb) {
	$nc(sb)->append("; index="_s)->append(getIndex());
}

IndexedPropertyChangeEvent::IndexedPropertyChangeEvent() {
}

$Class* IndexedPropertyChangeEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexedPropertyChangeEvent, serialVersionUID)},
		{"index", "I", nullptr, $PRIVATE, $field(IndexedPropertyChangeEvent, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(IndexedPropertyChangeEvent, init$, void, Object$*, $String*, Object$*, Object$*, int32_t)},
		{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(IndexedPropertyChangeEvent, appendTo, void, $StringBuilder*)},
		{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(IndexedPropertyChangeEvent, getIndex, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.IndexedPropertyChangeEvent",
		"java.beans.PropertyChangeEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IndexedPropertyChangeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexedPropertyChangeEvent);
	});
	return class$;
}

$Class* IndexedPropertyChangeEvent::class$ = nullptr;

	} // beans
} // java