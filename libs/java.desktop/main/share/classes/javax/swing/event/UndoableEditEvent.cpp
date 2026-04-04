#include <javax/swing/event/UndoableEditEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace event {

void UndoableEditEvent::init$(Object$* source, $UndoableEdit* edit) {
	$EventObject::init$(source);
	$set(this, myEdit, edit);
}

$UndoableEdit* UndoableEditEvent::getEdit() {
	return this->myEdit;
}

UndoableEditEvent::UndoableEditEvent() {
}

$Class* UndoableEditEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"myEdit", "Ljavax/swing/undo/UndoableEdit;", nullptr, $PRIVATE, $field(UndoableEditEvent, myEdit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PUBLIC, $method(UndoableEditEvent, init$, void, Object$*, $UndoableEdit*)},
		{"getEdit", "()Ljavax/swing/undo/UndoableEdit;", nullptr, $PUBLIC, $virtualMethod(UndoableEditEvent, getEdit, $UndoableEdit*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.UndoableEditEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UndoableEditEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UndoableEditEvent);
	});
	return class$;
}

$Class* UndoableEditEvent::class$ = nullptr;

		} // event
	} // swing
} // javax