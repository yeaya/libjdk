#include <java/awt/dnd/DnDEventMulticaster.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $DragSourceMotionListener = ::java::awt::dnd::DragSourceMotionListener;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {
		namespace dnd {

int32_t DnDEventMulticaster::hashCode() {
	return this->$AWTEventMulticaster::hashCode();
}

bool DnDEventMulticaster::equals(Object$* arg0) {
	return this->$AWTEventMulticaster::equals(arg0);
}

$Object* DnDEventMulticaster::clone() {
	return this->$AWTEventMulticaster::clone();
}

$String* DnDEventMulticaster::toString() {
	return this->$AWTEventMulticaster::toString();
}

void DnDEventMulticaster::finalize() {
	this->$AWTEventMulticaster::finalize();
}

void DnDEventMulticaster::init$($EventListener* a, $EventListener* b) {
	$AWTEventMulticaster::init$(a, b);
}

void DnDEventMulticaster::dragEnter($DragSourceDragEvent* dsde) {
	$nc($cast($DragSourceListener, this->a))->dragEnter(dsde);
	$nc($cast($DragSourceListener, this->b))->dragEnter(dsde);
}

void DnDEventMulticaster::dragOver($DragSourceDragEvent* dsde) {
	$nc($cast($DragSourceListener, this->a))->dragOver(dsde);
	$nc($cast($DragSourceListener, this->b))->dragOver(dsde);
}

void DnDEventMulticaster::dropActionChanged($DragSourceDragEvent* dsde) {
	$nc($cast($DragSourceListener, this->a))->dropActionChanged(dsde);
	$nc($cast($DragSourceListener, this->b))->dropActionChanged(dsde);
}

void DnDEventMulticaster::dragExit($DragSourceEvent* dse) {
	$nc($cast($DragSourceListener, this->a))->dragExit(dse);
	$nc($cast($DragSourceListener, this->b))->dragExit(dse);
}

void DnDEventMulticaster::dragDropEnd($DragSourceDropEvent* dsde) {
	$nc($cast($DragSourceListener, this->a))->dragDropEnd(dsde);
	$nc($cast($DragSourceListener, this->b))->dragDropEnd(dsde);
}

void DnDEventMulticaster::dragMouseMoved($DragSourceDragEvent* dsde) {
	$nc($cast($DragSourceMotionListener, this->a))->dragMouseMoved(dsde);
	$nc($cast($DragSourceMotionListener, this->b))->dragMouseMoved(dsde);
}

$DragSourceListener* DnDEventMulticaster::add($DragSourceListener* a, $DragSourceListener* b) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceListener, addInternal(a, b));
}

$DragSourceMotionListener* DnDEventMulticaster::add($DragSourceMotionListener* a, $DragSourceMotionListener* b) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceMotionListener, addInternal(a, b));
}

$DragSourceListener* DnDEventMulticaster::remove($DragSourceListener* l, $DragSourceListener* oldl) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceListener, removeInternal(l, oldl));
}

$DragSourceMotionListener* DnDEventMulticaster::remove($DragSourceMotionListener* l, $DragSourceMotionListener* ol) {
	$init(DnDEventMulticaster);
	return $cast($DragSourceMotionListener, removeInternal(l, ol));
}

$EventListener* DnDEventMulticaster::addInternal($EventListener* a, $EventListener* b) {
	$init(DnDEventMulticaster);
	if (a == nullptr) {
		return b;
	}
	if (b == nullptr) {
		return a;
	}
	return $cast($ComponentListener, $new(DnDEventMulticaster, a, b));
}

$EventListener* DnDEventMulticaster::remove($EventListener* oldl) {
	$useLocalObjectStack();
	if (oldl == this->a) {
		return this->b;
	}
	if (oldl == this->b) {
		return this->a;
	}
	$var($EventListener, a2, removeInternal(this->a, oldl));
	$var($EventListener, b2, removeInternal(this->b, oldl));
	if (a2 == this->a && b2 == this->b) {
		return $cast($ComponentListener, this);
	}
	return addInternal(a2, b2);
}

$EventListener* DnDEventMulticaster::removeInternal($EventListener* l, $EventListener* oldl) {
	$init(DnDEventMulticaster);
	if (l == oldl || l == nullptr) {
		return nullptr;
	} else if ($instanceOf(DnDEventMulticaster, l)) {
		return $cast(DnDEventMulticaster, l)->remove(oldl);
	} else {
		return l;
	}
}

void DnDEventMulticaster::save($ObjectOutputStream* s, $String* k, $EventListener* l) {
	$init(DnDEventMulticaster);
	$AWTEventMulticaster::save(s, k, l);
}

DnDEventMulticaster::DnDEventMulticaster() {
}

$Class* DnDEventMulticaster::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/EventListener;Ljava/util/EventListener;)V", nullptr, $PROTECTED, $method(DnDEventMulticaster, init$, void, $EventListener*, $EventListener*)},
		{"add", "(Ljava/awt/dnd/DragSourceListener;Ljava/awt/dnd/DragSourceListener;)Ljava/awt/dnd/DragSourceListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(DnDEventMulticaster, add, $DragSourceListener*, $DragSourceListener*, $DragSourceListener*)},
		{"add", "(Ljava/awt/dnd/DragSourceMotionListener;Ljava/awt/dnd/DragSourceMotionListener;)Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(DnDEventMulticaster, add, $DragSourceMotionListener*, $DragSourceMotionListener*, $DragSourceMotionListener*)},
		{"addInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $staticMethod(DnDEventMulticaster, addInternal, $EventListener*, $EventListener*, $EventListener*)},
		{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dragDropEnd, void, $DragSourceDropEvent*)},
		{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dragEnter, void, $DragSourceDragEvent*)},
		{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dragExit, void, $DragSourceEvent*)},
		{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dragMouseMoved, void, $DragSourceDragEvent*)},
		{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dragOver, void, $DragSourceDragEvent*)},
		{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC, $virtualMethod(DnDEventMulticaster, dropActionChanged, void, $DragSourceDragEvent*)},
		{"remove", "(Ljava/awt/dnd/DragSourceListener;Ljava/awt/dnd/DragSourceListener;)Ljava/awt/dnd/DragSourceListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(DnDEventMulticaster, remove, $DragSourceListener*, $DragSourceListener*, $DragSourceListener*)},
		{"remove", "(Ljava/awt/dnd/DragSourceMotionListener;Ljava/awt/dnd/DragSourceMotionListener;)Ljava/awt/dnd/DragSourceMotionListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(DnDEventMulticaster, remove, $DragSourceMotionListener*, $DragSourceMotionListener*, $DragSourceMotionListener*)},
		{"remove", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED, $virtualMethod(DnDEventMulticaster, remove, $EventListener*, $EventListener*)},
		{"removeInternal", "(Ljava/util/EventListener;Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED | $STATIC, $staticMethod(DnDEventMulticaster, removeInternal, $EventListener*, $EventListener*, $EventListener*)},
		{"save", "(Ljava/io/ObjectOutputStream;Ljava/lang/String;Ljava/util/EventListener;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(DnDEventMulticaster, save, void, $ObjectOutputStream*, $String*, $EventListener*), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.dnd.DnDEventMulticaster",
		"java.awt.AWTEventMulticaster",
		"java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DnDEventMulticaster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DnDEventMulticaster));
	});
	return class$;
}

$Class* DnDEventMulticaster::class$ = nullptr;

		} // dnd
	} // awt
} // java