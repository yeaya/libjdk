#include <java/awt/dnd/DropTarget$DropTargetAutoScroller.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/dnd/Autoscroll.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Autoscroll = ::java::awt::dnd::Autoscroll;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;

namespace java {
	namespace awt {
		namespace dnd {

void DropTarget$DropTargetAutoScroller::init$($Component* c, $Point* p) {
	$useLocalObjectStack();
	$set(this, outer, $new($Rectangle));
	$set(this, inner, $new($Rectangle));
	this->hysteresis = 10;
	$set(this, component, c);
	$set(this, autoScroll, $cast($Autoscroll, this->component));
	$var($Toolkit, t, $Toolkit::getDefaultToolkit());
	$var($Integer, initial, $Integer::valueOf(100));
	$var($Integer, interval, $Integer::valueOf(100));
	try {
		$assign(initial, $cast($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.initialDelay"_s)));
	} catch ($Exception& e) {
	}
	try {
		$assign(interval, $cast($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.interval"_s)));
	} catch ($Exception& e) {
	}
	$set(this, timer, $new($Timer, $nc(interval)->intValue(), this));
	this->timer->setCoalesce(true);
	$nc(this->timer)->setInitialDelay($nc(initial)->intValue());
	$set(this, locn, p);
	$set(this, prev, p);
	try {
		this->hysteresis = $$sure($Integer, $nc(t)->getDesktopProperty("DnD.Autoscroll.cursorHysteresis"_s))->intValue();
	} catch ($Exception& e) {
	}
	$nc(this->timer)->start();
}

void DropTarget$DropTargetAutoScroller::updateRegion() {
	$useLocalObjectStack();
	$var($Insets, i, $nc(this->autoScroll)->getAutoscrollInsets());
	$var($Dimension, size, $nc(this->component)->getSize());
	if ($nc(size)->width != $nc(this->outer)->width || size->height != this->outer->height) {
		this->outer->reshape(0, 0, size->width, size->height);
	}
	if ($nc(this->inner)->x != $nc(i)->left || this->inner->y != i->top) {
		this->inner->setLocation(i->left, i->top);
	}
	int32_t newWidth = size->width - (i->left + i->right);
	int32_t newHeight = size->height - (i->top + i->bottom);
	if (newWidth != $nc(this->inner)->width || newHeight != this->inner->height) {
		this->inner->setSize(newWidth, newHeight);
	}
}

void DropTarget$DropTargetAutoScroller::updateLocation($Point* newLocn) {
	$synchronized(this) {
		$set(this, prev, this->locn);
		$set(this, locn, newLocn);
		bool var$0 = $Math::abs($nc(this->locn)->x - $nc(this->prev)->x) > this->hysteresis;
		if (var$0 || $Math::abs(this->locn->y - this->prev->y) > this->hysteresis) {
			if ($nc(this->timer)->isRunning()) {
				$nc(this->timer)->stop();
			}
		} else if (!$nc(this->timer)->isRunning()) {
			$nc(this->timer)->start();
		}
	}
}

void DropTarget$DropTargetAutoScroller::stop() {
	$nc(this->timer)->stop();
}

void DropTarget$DropTargetAutoScroller::actionPerformed($ActionEvent* e) {
	$synchronized(this) {
		updateRegion();
		bool var$0 = $nc(this->outer)->contains(this->locn);
		if (var$0 && !$nc(this->inner)->contains(this->locn)) {
			$nc(this->autoScroll)->autoscroll(this->locn);
		}
	}
}

DropTarget$DropTargetAutoScroller::DropTarget$DropTargetAutoScroller() {
}

$Class* DropTarget$DropTargetAutoScroller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, component)},
		{"autoScroll", "Ljava/awt/dnd/Autoscroll;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, autoScroll)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, timer)},
		{"locn", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, locn)},
		{"prev", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, prev)},
		{"outer", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, outer)},
		{"inner", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, inner)},
		{"hysteresis", "I", nullptr, $PRIVATE, $field(DropTarget$DropTargetAutoScroller, hysteresis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(DropTarget$DropTargetAutoScroller, init$, void, $Component*, $Point*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DropTarget$DropTargetAutoScroller, actionPerformed, void, $ActionEvent*)},
		{"stop", "()V", nullptr, $PROTECTED, $virtualMethod(DropTarget$DropTargetAutoScroller, stop, void)},
		{"updateLocation", "(Ljava/awt/Point;)V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(DropTarget$DropTargetAutoScroller, updateLocation, void, $Point*)},
		{"updateRegion", "()V", nullptr, $PRIVATE, $method(DropTarget$DropTargetAutoScroller, updateRegion, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.dnd.DropTarget$DropTargetAutoScroller", "java.awt.dnd.DropTarget", "DropTargetAutoScroller", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.dnd.DropTarget$DropTargetAutoScroller",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.dnd.DropTarget"
	};
	$loadClass(DropTarget$DropTargetAutoScroller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DropTarget$DropTargetAutoScroller);
	});
	return class$;
}

$Class* DropTarget$DropTargetAutoScroller::class$ = nullptr;

		} // dnd
	} // awt
} // java