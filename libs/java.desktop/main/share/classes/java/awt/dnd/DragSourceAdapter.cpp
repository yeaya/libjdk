#include <java/awt/dnd/DragSourceAdapter.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <jcpp.h>

using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

int32_t DragSourceAdapter::hashCode() {
	return this->$DragSourceListener::hashCode();
}

bool DragSourceAdapter::equals(Object$* arg0) {
	return this->$DragSourceListener::equals(arg0);
}

$Object* DragSourceAdapter::clone() {
	return this->$DragSourceListener::clone();
}

$String* DragSourceAdapter::toString() {
	return this->$DragSourceListener::toString();
}

void DragSourceAdapter::finalize() {
	this->$DragSourceListener::finalize();
}

void DragSourceAdapter::init$() {
}

void DragSourceAdapter::dragEnter($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragOver($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragMouseMoved($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dropActionChanged($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragExit($DragSourceEvent* dse) {
}

void DragSourceAdapter::dragDropEnd($DragSourceDropEvent* dsde) {
}

DragSourceAdapter::DragSourceAdapter() {
}

$Class* DragSourceAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PROTECTED, $method(DragSourceAdapter, init$, void)},
		{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dragDropEnd, void, $DragSourceDropEvent*)},
		{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dragEnter, void, $DragSourceDragEvent*)},
		{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dragExit, void, $DragSourceEvent*)},
		{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dragMouseMoved, void, $DragSourceDragEvent*)},
		{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dragOver, void, $DragSourceDragEvent*)},
		{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DragSourceAdapter, dropActionChanged, void, $DragSourceDragEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.dnd.DragSourceAdapter",
		"java.lang.Object",
		"java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DragSourceAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DragSourceAdapter));
	});
	return class$;
}

$Class* DragSourceAdapter::class$ = nullptr;

		} // dnd
	} // awt
} // java