#include <javax/swing/RepaintManager$DisplayChangedHandler.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/swing/RepaintManager$DisplayChangedRunnable.h>
#include <javax/swing/RepaintManager.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef EVENT_QUEUE_KEY

using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $RepaintManager$DisplayChangedRunnable = ::javax::swing::RepaintManager$DisplayChangedRunnable;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

void RepaintManager$DisplayChangedHandler::init$() {
}

void RepaintManager$DisplayChangedHandler::displayChanged() {
	scheduleDisplayChanges();
}

void RepaintManager$DisplayChangedHandler::paletteChanged() {
}

void RepaintManager$DisplayChangedHandler::scheduleDisplayChanges() {
	$init(RepaintManager$DisplayChangedHandler);
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($AppContext::getAppContexts())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($AppContext, context, $cast($AppContext, i$->next()));
		{
			$synchronized(context) {
				if (!context->isDisposed()) {
					$var($EventQueue, eventQueue, $cast($EventQueue, context->get($AppContext::EVENT_QUEUE_KEY)));
					if (eventQueue != nullptr) {
						$var($Object, var$0, $Toolkit::getDefaultToolkit());
						eventQueue->postEvent($$new($InvocationEvent, var$0, $$new($RepaintManager$DisplayChangedRunnable)));
					}
				}
			}
		}
	}
}

RepaintManager$DisplayChangedHandler::RepaintManager$DisplayChangedHandler() {
}

$Class* RepaintManager$DisplayChangedHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RepaintManager$DisplayChangedHandler, init$, void)},
		{"displayChanged", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$DisplayChangedHandler, displayChanged, void)},
		{"paletteChanged", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$DisplayChangedHandler, paletteChanged, void)},
		{"scheduleDisplayChanges", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(RepaintManager$DisplayChangedHandler, scheduleDisplayChanges, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$DisplayChangedHandler", "javax.swing.RepaintManager", "DisplayChangedHandler", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.RepaintManager$DisplayChangedHandler",
		"java.lang.Object",
		"sun.awt.DisplayChangedListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$DisplayChangedHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$DisplayChangedHandler);
	});
	return class$;
}

$Class* RepaintManager$DisplayChangedHandler::class$ = nullptr;

	} // swing
} // javax