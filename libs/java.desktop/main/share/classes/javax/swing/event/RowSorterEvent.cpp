#include <javax/swing/event/RowSorterEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/event/RowSorterEvent$Type.h>
#include <jcpp.h>

#undef SORT_ORDER_CHANGED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorterEvent$Type = ::javax::swing::event::RowSorterEvent$Type;

namespace javax {
	namespace swing {
		namespace event {

void RowSorterEvent::init$($RowSorter* source) {
	$init($RowSorterEvent$Type);
	RowSorterEvent::init$(source, $RowSorterEvent$Type::SORT_ORDER_CHANGED, nullptr);
}

void RowSorterEvent::init$($RowSorter* source, $RowSorterEvent$Type* type, $ints* previousRowIndexToModel) {
	$EventObject::init$(source);
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type must be non-null"_s);
	}
	$set(this, type, type);
	$set(this, oldViewToModel, previousRowIndexToModel);
}

$Object* RowSorterEvent::getSource() {
	return $cast($RowSorter, $EventObject::getSource());
}

$RowSorterEvent$Type* RowSorterEvent::getType() {
	return this->type;
}

int32_t RowSorterEvent::convertPreviousRowIndexToModel(int32_t index) {
	if (this->oldViewToModel != nullptr && index >= 0 && index < this->oldViewToModel->length) {
		return this->oldViewToModel->get(index);
	}
	return -1;
}

int32_t RowSorterEvent::getPreviousRowCount() {
	return (this->oldViewToModel == nullptr) ? 0 : this->oldViewToModel->length;
}

RowSorterEvent::RowSorterEvent() {
}

$Class* RowSorterEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE, $field(RowSorterEvent, type)},
		{"oldViewToModel", "[I", nullptr, $PRIVATE, $field(RowSorterEvent, oldViewToModel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RowSorter;)V", "(Ljavax/swing/RowSorter<*>;)V", $PUBLIC, $method(RowSorterEvent, init$, void, $RowSorter*)},
		{"<init>", "(Ljavax/swing/RowSorter;Ljavax/swing/event/RowSorterEvent$Type;[I)V", "(Ljavax/swing/RowSorter<*>;Ljavax/swing/event/RowSorterEvent$Type;[I)V", $PUBLIC, $method(RowSorterEvent, init$, void, $RowSorter*, $RowSorterEvent$Type*, $ints*)},
		{"convertPreviousRowIndexToModel", "(I)I", nullptr, $PUBLIC, $virtualMethod(RowSorterEvent, convertPreviousRowIndexToModel, int32_t, int32_t)},
		{"getPreviousRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(RowSorterEvent, getPreviousRowCount, int32_t)},
		{"getSource", "()Ljavax/swing/RowSorter;", "()Ljavax/swing/RowSorter<*>;", $PUBLIC, $virtualMethod(RowSorterEvent, getSource, $Object*)},
		{"getType", "()Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC, $virtualMethod(RowSorterEvent, getType, $RowSorterEvent$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.RowSorterEvent$Type", "javax.swing.event.RowSorterEvent", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.RowSorterEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.event.RowSorterEvent$Type"
	};
	$loadClass(RowSorterEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSorterEvent);
	});
	return class$;
}

$Class* RowSorterEvent::class$ = nullptr;

		} // event
	} // swing
} // javax