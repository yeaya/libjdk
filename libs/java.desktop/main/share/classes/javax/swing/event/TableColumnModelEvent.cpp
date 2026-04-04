#include <javax/swing/event/TableColumnModelEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace event {

void TableColumnModelEvent::init$($TableColumnModel* source, int32_t from, int32_t to) {
	$EventObject::init$(source);
	this->fromIndex = from;
	this->toIndex = to;
}

int32_t TableColumnModelEvent::getFromIndex() {
	return this->fromIndex;
}

int32_t TableColumnModelEvent::getToIndex() {
	return this->toIndex;
}

TableColumnModelEvent::TableColumnModelEvent() {
}

$Class* TableColumnModelEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fromIndex", "I", nullptr, $PROTECTED, $field(TableColumnModelEvent, fromIndex)},
		{"toIndex", "I", nullptr, $PROTECTED, $field(TableColumnModelEvent, toIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/table/TableColumnModel;II)V", nullptr, $PUBLIC, $method(TableColumnModelEvent, init$, void, $TableColumnModel*, int32_t, int32_t)},
		{"getFromIndex", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumnModelEvent, getFromIndex, int32_t)},
		{"getToIndex", "()I", nullptr, $PUBLIC, $virtualMethod(TableColumnModelEvent, getToIndex, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.TableColumnModelEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TableColumnModelEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableColumnModelEvent);
	});
	return class$;
}

$Class* TableColumnModelEvent::class$ = nullptr;

		} // event
	} // swing
} // javax