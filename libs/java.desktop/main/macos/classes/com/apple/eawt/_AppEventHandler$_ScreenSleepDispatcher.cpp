#include <com/apple/eawt/_AppEventHandler$_ScreenSleepDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/ScreenSleepEvent.h>
#include <java/awt/desktop/ScreenSleepListener.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_BooleanAppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor;
using $ScreenSleepEvent = ::java::awt::desktop::ScreenSleepEvent;
using $ScreenSleepListener = ::java::awt::desktop::ScreenSleepListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_ScreenSleepDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_ScreenSleepDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_ScreenSleepDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_ScreenSleepDispatcher, init$, void, $_AppEventHandler*)},
	{"createEvent", "(Z)Ljava/awt/desktop/ScreenSleepEvent;", nullptr, 0, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, createEvent, $Object*, bool)},
	{"performFalseEventOn", "(Ljava/awt/desktop/ScreenSleepListener;Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, performFalseEventOn, void, $ScreenSleepListener*, $ScreenSleepEvent*)},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, performFalseEventOn, void, Object$*, Object$*)},
	{"performTrueEventOn", "(Ljava/awt/desktop/ScreenSleepListener;Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, performTrueEventOn, void, $ScreenSleepListener*, $ScreenSleepEvent*)},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, performTrueEventOn, void, Object$*, Object$*)},
	{"registerNativeListener", "()V", nullptr, 0, $virtualMethod(_AppEventHandler$_ScreenSleepDispatcher, registerNativeListener, void)},
	{}
};

$InnerClassInfo __AppEventHandler$_ScreenSleepDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_ScreenSleepDispatcher", "com.apple.eawt._AppEventHandler", "_ScreenSleepDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_ScreenSleepDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_ScreenSleepDispatcher",
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	nullptr,
	__AppEventHandler$_ScreenSleepDispatcher_FieldInfo_,
	__AppEventHandler$_ScreenSleepDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor<Ljava/awt/desktop/ScreenSleepListener;Ljava/awt/desktop/ScreenSleepEvent;>;",
	nullptr,
	__AppEventHandler$_ScreenSleepDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_ScreenSleepDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_ScreenSleepDispatcher));
}

void _AppEventHandler$_ScreenSleepDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_BooleanAppEventMultiplexor::init$(this$0);
}

$Object* _AppEventHandler$_ScreenSleepDispatcher::createEvent(bool isTrue) {
	return $of($new($ScreenSleepEvent));
}

void _AppEventHandler$_ScreenSleepDispatcher::performFalseEventOn($ScreenSleepListener* listener, $ScreenSleepEvent* e) {
	$nc(listener)->screenAwoke(e);
}

void _AppEventHandler$_ScreenSleepDispatcher::performTrueEventOn($ScreenSleepListener* listener, $ScreenSleepEvent* e) {
	$nc(listener)->screenAboutToSleep(e);
}

void _AppEventHandler$_ScreenSleepDispatcher::registerNativeListener() {
	$_AppEventHandler::nativeRegisterForNotification(2);
}

void _AppEventHandler$_ScreenSleepDispatcher::performFalseEventOn(Object$* listener, Object$* e) {
	this->performFalseEventOn($cast($ScreenSleepListener, listener), $cast($ScreenSleepEvent, e));
}

void _AppEventHandler$_ScreenSleepDispatcher::performTrueEventOn(Object$* listener, Object$* e) {
	this->performTrueEventOn($cast($ScreenSleepListener, listener), $cast($ScreenSleepEvent, e));
}

_AppEventHandler$_ScreenSleepDispatcher::_AppEventHandler$_ScreenSleepDispatcher() {
}

$Class* _AppEventHandler$_ScreenSleepDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_ScreenSleepDispatcher, name, initialize, &__AppEventHandler$_ScreenSleepDispatcher_ClassInfo_, allocate$_AppEventHandler$_ScreenSleepDispatcher);
	return class$;
}

$Class* _AppEventHandler$_ScreenSleepDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com