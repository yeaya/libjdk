#include <sun/awt/ScrollPaneWheelScroller.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Insets.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/util/EventObject.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINER
#undef SCROLLBARS_ALWAYS
#undef SCROLLBARS_NEVER
#undef WHEEL_BLOCK_SCROLL
#undef WHEEL_UNIT_SCROLL

using $Adjustable = ::java::awt::Adjustable;
using $Insets = ::java::awt::Insets;
using $ScrollPane = ::java::awt::ScrollPane;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$PlatformLogger* ScrollPaneWheelScroller::log = nullptr;

void ScrollPaneWheelScroller::init$() {
}

void ScrollPaneWheelScroller::handleWheelScrolling($ScrollPane* sp, $MouseWheelEvent* e) {
	$init(ScrollPaneWheelScroller);
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("x = "_s);
		var$0->append($nc(e)->getX());
		var$0->append(", y = "_s);
		var$0->append(e->getY());
		var$0->append(", src is "_s);
		var$0->append($(e->getSource()));
		ScrollPaneWheelScroller::log->finer($$str(var$0));
	}
	int32_t increment = 0;
	if (sp != nullptr && $nc(e)->getScrollAmount() != 0) {
		$var($Adjustable, adj, getAdjustableToScroll(sp));
		if (adj != nullptr) {
			increment = getIncrementFromAdjustable(adj, e);
			if (ScrollPaneWheelScroller::log->isLoggable($PlatformLogger$Level::FINER)) {
				ScrollPaneWheelScroller::log->finer($$str({"increment from adjustable("_s, adj->getClass(), ") : "_s, $$str(increment)}));
			}
			scrollAdjustable(adj, increment);
		}
	}
}

$Adjustable* ScrollPaneWheelScroller::getAdjustableToScroll($ScrollPane* sp) {
	$init(ScrollPaneWheelScroller);
	$useLocalObjectStack();
	int32_t policy = $nc(sp)->getScrollbarDisplayPolicy();
	if (policy == $ScrollPane::SCROLLBARS_ALWAYS || policy == $ScrollPane::SCROLLBARS_NEVER) {
		$init($PlatformLogger$Level);
		if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
			ScrollPaneWheelScroller::log->finer("using vertical scrolling due to scrollbar policy"_s);
		}
		return sp->getVAdjustable();
	} else {
		$var($Insets, ins, sp->getInsets());
		int32_t vertScrollWidth = sp->getVScrollbarWidth();
		$init($PlatformLogger$Level);
		if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINER)) {
			ScrollPaneWheelScroller::log->finer($$str({"insets: l = "_s, $$str($nc(ins)->left), ", r = "_s, $$str($nc(ins)->right), ", t = "_s, $$str($nc(ins)->top), ", b = "_s, $$str($nc(ins)->bottom)}));
			ScrollPaneWheelScroller::log->finer($$str({"vertScrollWidth = "_s, $$str(vertScrollWidth)}));
		}
		if ($nc(ins)->right >= vertScrollWidth) {
			if (ScrollPaneWheelScroller::log->isLoggable($PlatformLogger$Level::FINER)) {
				ScrollPaneWheelScroller::log->finer("using vertical scrolling because scrollbar is present"_s);
			}
			return sp->getVAdjustable();
		} else {
			int32_t horizScrollHeight = sp->getHScrollbarHeight();
			if (ins->bottom >= horizScrollHeight) {
				if (ScrollPaneWheelScroller::log->isLoggable($PlatformLogger$Level::FINER)) {
					ScrollPaneWheelScroller::log->finer("using horiz scrolling because scrollbar is present"_s);
				}
				return sp->getHAdjustable();
			} else {
				if (ScrollPaneWheelScroller::log->isLoggable($PlatformLogger$Level::FINER)) {
					ScrollPaneWheelScroller::log->finer("using NO scrollbar becsause neither is present"_s);
				}
				return nullptr;
			}
		}
	}
}

int32_t ScrollPaneWheelScroller::getIncrementFromAdjustable($Adjustable* adj, $MouseWheelEvent* e) {
	$init(ScrollPaneWheelScroller);
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (adj == nullptr) {
			ScrollPaneWheelScroller::log->fine("Assertion (adj != null) failed"_s);
		}
	}
	int32_t increment = 0;
	if ($nc(e)->getScrollType() == $MouseWheelEvent::WHEEL_UNIT_SCROLL) {
		int32_t var$0 = e->getUnitsToScroll();
		increment = var$0 * $nc(adj)->getUnitIncrement();
	} else if (e->getScrollType() == $MouseWheelEvent::WHEEL_BLOCK_SCROLL) {
		int32_t var$1 = $nc(adj)->getBlockIncrement();
		increment = var$1 * e->getWheelRotation();
	}
	return increment;
}

void ScrollPaneWheelScroller::scrollAdjustable($Adjustable* adj, int32_t amount) {
	$init(ScrollPaneWheelScroller);
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(ScrollPaneWheelScroller::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (adj == nullptr) {
			ScrollPaneWheelScroller::log->fine("Assertion (adj != null) failed"_s);
		}
		if (amount == 0) {
			ScrollPaneWheelScroller::log->fine("Assertion (amount != 0) failed"_s);
		}
	}
	int32_t current = $nc(adj)->getValue();
	int32_t var$0 = adj->getMaximum();
	int32_t upperLimit = var$0 - adj->getVisibleAmount();
	if (ScrollPaneWheelScroller::log->isLoggable($PlatformLogger$Level::FINER)) {
		ScrollPaneWheelScroller::log->finer($$str({"doScrolling by "_s, $$str(amount)}));
	}
	if (amount > 0 && current < upperLimit) {
		if (current + amount < upperLimit) {
			adj->setValue(current + amount);
			return;
		} else {
			adj->setValue(upperLimit);
			return;
		}
	} else if (amount < 0 && current > adj->getMinimum()) {
		if (current + amount > adj->getMinimum()) {
			adj->setValue(current + amount);
			return;
		} else {
			adj->setValue(adj->getMinimum());
			return;
		}
	}
}

void ScrollPaneWheelScroller::clinit$($Class* clazz) {
	$assignStatic(ScrollPaneWheelScroller::log, $PlatformLogger::getLogger("sun.awt.ScrollPaneWheelScroller"_s));
}

ScrollPaneWheelScroller::ScrollPaneWheelScroller() {
}

$Class* ScrollPaneWheelScroller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScrollPaneWheelScroller, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ScrollPaneWheelScroller, init$, void)},
		{"getAdjustableToScroll", "(Ljava/awt/ScrollPane;)Ljava/awt/Adjustable;", nullptr, $PUBLIC | $STATIC, $staticMethod(ScrollPaneWheelScroller, getAdjustableToScroll, $Adjustable*, $ScrollPane*)},
		{"getIncrementFromAdjustable", "(Ljava/awt/Adjustable;Ljava/awt/event/MouseWheelEvent;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(ScrollPaneWheelScroller, getIncrementFromAdjustable, int32_t, $Adjustable*, $MouseWheelEvent*)},
		{"handleWheelScrolling", "(Ljava/awt/ScrollPane;Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ScrollPaneWheelScroller, handleWheelScrolling, void, $ScrollPane*, $MouseWheelEvent*)},
		{"scrollAdjustable", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ScrollPaneWheelScroller, scrollAdjustable, void, $Adjustable*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.ScrollPaneWheelScroller",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScrollPaneWheelScroller, name, initialize, &classInfo$$, ScrollPaneWheelScroller::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollPaneWheelScroller);
	});
	return class$;
}

$Class* ScrollPaneWheelScroller::class$ = nullptr;

	} // awt
} // sun