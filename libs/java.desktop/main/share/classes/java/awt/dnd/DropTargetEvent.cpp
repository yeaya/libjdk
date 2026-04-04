#include <java/awt/dnd/DropTargetEvent.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace dnd {

void DropTargetEvent::init$($DropTargetContext* dtc) {
	$EventObject::init$($($nc(dtc)->getDropTarget()));
	$set(this, context, dtc);
}

$DropTargetContext* DropTargetEvent::getDropTargetContext() {
	return this->context;
}

DropTargetEvent::DropTargetEvent() {
}

$Class* DropTargetEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTargetEvent, serialVersionUID)},
		{"context", "Ljava/awt/dnd/DropTargetContext;", nullptr, $PROTECTED, $field(DropTargetEvent, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/dnd/DropTargetContext;)V", nullptr, $PUBLIC, $method(DropTargetEvent, init$, void, $DropTargetContext*)},
		{"getDropTargetContext", "()Ljava/awt/dnd/DropTargetContext;", nullptr, $PUBLIC, $virtualMethod(DropTargetEvent, getDropTargetContext, $DropTargetContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.dnd.DropTargetEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DropTargetEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DropTargetEvent);
	});
	return class$;
}

$Class* DropTargetEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java