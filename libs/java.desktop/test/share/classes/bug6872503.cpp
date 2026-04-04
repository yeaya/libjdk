#include <bug6872503.h>
#include <bug6872503$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/AWTEventListenerProxy.h>
#include <java/util/EventListener.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef FOCUS_EVENT_MASK
#undef KEY_EVENT_MASK
#undef MOUSE_EVENT_MASK

using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $bug6872503$1 = ::bug6872503$1;
using $AWTEvent = ::java::awt::AWTEvent;
using $FlowLayout = ::java::awt::FlowLayout;
using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $AWTEventListenerProxy = ::java::awt::event::AWTEventListenerProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JLayer = ::javax::swing::JLayer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JLayer* bug6872503::l1 = nullptr;
$JLayer* bug6872503::l2 = nullptr;

void bug6872503::init$() {
}

void bug6872503::createGui() {
	$useLocalObjectStack();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	int32_t length = $nc($($nc(toolkit)->getAWTEventListeners()))->length;
	$init(bug6872503);
	$assignStatic(bug6872503::l1, $new($JLayer));
	bug6872503::l1->setLayerEventMask($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::FOCUS_EVENT_MASK);
	$assignStatic(bug6872503::l2, $new($JLayer));
	bug6872503::l2->setLayerEventMask($AWTEvent::MOUSE_EVENT_MASK | $AWTEvent::KEY_EVENT_MASK);
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
	$var($JFrame, frame, $new($JFrame));
	frame->setLayout($$new($FlowLayout));
	frame->add(bug6872503::l1);
	frame->add(bug6872503::l2);
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
	frame->pack();
	if (!isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "AWTEventListener was not added"_s);
	}
	int64_t var$0 = $nc(bug6872503::l1)->getLayerEventMask();
	if (!layerEventControllerMaskEquals(var$0 | $nc(bug6872503::l2)->getLayerEventMask())) {
		$throwNew($RuntimeException, "Wrong mask for AWTEventListener"_s);
	}
	frame->dispose();
	if (isLayerEventControllerAdded()) {
		$throwNew($RuntimeException, "Unexpected AWTEventListener was added"_s);
	}
}

bool bug6872503::isLayerEventControllerAdded() {
	$useLocalObjectStack();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($AWTEventListener, layerEventController, nullptr);
	{
		$var($AWTEventListenerArray, arr$, $nc(toolkit)->getAWTEventListeners());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($AWTEventListener, listener, arr$->get(i$));
			{
				if ($instanceOf($AWTEventListenerProxy, listener)) {
					$assign(listener, $cast($AWTEventListener, $cast($AWTEventListenerProxy, listener)->getListener()));
				}
				if ("LayerEventController"_s->equals($($nc(listener)->getClass()->getSimpleName()))) {
					if (layerEventController != nullptr) {
						$throwNew($RuntimeException, "Duplicated LayerEventController"_s);
					}
					$assign(layerEventController, listener);
				}
			}
		}
	}
	bool ret = layerEventController != nullptr;
	if (ret) {
		$nc($System::out)->println("LayerEventController found"_s);
	} else {
		$nc($System::out)->println("No LayerEventController"_s);
	}
	return ret;
}

bool bug6872503::layerEventControllerMaskEquals(int64_t mask) {
	$useLocalObjectStack();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($AWTEventListener, layerEventController, nullptr);
	{
		$var($AWTEventListenerArray, arr$, $nc(toolkit)->getAWTEventListeners(mask));
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($AWTEventListener, listener, arr$->get(i$));
			{
				if ($instanceOf($AWTEventListenerProxy, listener)) {
					$assign(listener, $cast($AWTEventListener, $cast($AWTEventListenerProxy, listener)->getListener()));
				}
				if ("LayerEventController"_s->equals($($nc(listener)->getClass()->getSimpleName()))) {
					if (layerEventController != nullptr) {
						$throwNew($RuntimeException, "Duplicated LayerEventController"_s);
					}
					$assign(layerEventController, listener);
				}
			}
		}
	}
	bool ret = layerEventController != nullptr;
	if (ret) {
		$nc($System::out)->println("LayerEventController with the correct mask found"_s);
	} else {
		$nc($System::out)->println("No LayerEventController with the correct mask"_s);
	}
	return ret;
}

void bug6872503::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6872503$1));
}

bug6872503::bug6872503() {
}

$Class* bug6872503::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"l1", "Ljavax/swing/JLayer;", "Ljavax/swing/JLayer<Ljava/awt/Component;>;", $STATIC, $staticField(bug6872503, l1)},
		{"l2", "Ljavax/swing/JLayer;", "Ljavax/swing/JLayer<Ljava/awt/Component;>;", $STATIC, $staticField(bug6872503, l2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6872503, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6872503, createGui, void)},
		{"isLayerEventControllerAdded", "()Z", nullptr, $STATIC, $staticMethod(bug6872503, isLayerEventControllerAdded, bool)},
		{"layerEventControllerMaskEquals", "(J)Z", nullptr, $STATIC, $staticMethod(bug6872503, layerEventControllerMaskEquals, bool, int64_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6872503, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6872503$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6872503",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6872503$1"
	};
	$loadClass(bug6872503, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6872503);
	});
	return class$;
}

$Class* bug6872503::class$ = nullptr;