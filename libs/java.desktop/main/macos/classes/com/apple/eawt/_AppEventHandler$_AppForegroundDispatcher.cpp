#include <com/apple/eawt/_AppEventHandler$_AppForegroundDispatcher.h>

#include <com/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/AppForegroundEvent.h>
#include <java/awt/desktop/AppForegroundListener.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_BooleanAppEventMultiplexor = ::com::apple::eawt::_AppEventHandler$_BooleanAppEventMultiplexor;
using $AppForegroundEvent = ::java::awt::desktop::AppForegroundEvent;
using $AppForegroundListener = ::java::awt::desktop::AppForegroundListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo __AppEventHandler$_AppForegroundDispatcher_FieldInfo_[] = {
	{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_AppForegroundDispatcher, this$0)},
	{}
};

$MethodInfo __AppEventHandler$_AppForegroundDispatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_AppForegroundDispatcher, init$, void, $_AppEventHandler*)},
	{"createEvent", "(Z)Ljava/awt/desktop/AppForegroundEvent;", nullptr, 0, $virtualMethod(_AppEventHandler$_AppForegroundDispatcher, createEvent, $Object*, bool)},
	{"performFalseEventOn", "(Ljava/awt/desktop/AppForegroundListener;Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_AppForegroundDispatcher, performFalseEventOn, void, $AppForegroundListener*, $AppForegroundEvent*)},
	{"performFalseEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_AppForegroundDispatcher, performFalseEventOn, void, Object$*, Object$*)},
	{"performTrueEventOn", "(Ljava/awt/desktop/AppForegroundListener;Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_AppForegroundDispatcher, performTrueEventOn, void, $AppForegroundListener*, $AppForegroundEvent*)},
	{"performTrueEventOn", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_AppForegroundDispatcher, performTrueEventOn, void, Object$*, Object$*)},
	{}
};

$InnerClassInfo __AppEventHandler$_AppForegroundDispatcher_InnerClassesInfo_[] = {
	{"com.apple.eawt._AppEventHandler$_AppForegroundDispatcher", "com.apple.eawt._AppEventHandler", "_AppForegroundDispatcher", 0},
	{"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor", "com.apple.eawt._AppEventHandler", "_BooleanAppEventMultiplexor", $ABSTRACT},
	{}
};

$ClassInfo __AppEventHandler$_AppForegroundDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt._AppEventHandler$_AppForegroundDispatcher",
	"com.apple.eawt._AppEventHandler$_BooleanAppEventMultiplexor",
	nullptr,
	__AppEventHandler$_AppForegroundDispatcher_FieldInfo_,
	__AppEventHandler$_AppForegroundDispatcher_MethodInfo_,
	"Lcom/apple/eawt/_AppEventHandler$_BooleanAppEventMultiplexor<Ljava/awt/desktop/AppForegroundListener;Ljava/awt/desktop/AppForegroundEvent;>;",
	nullptr,
	__AppEventHandler$_AppForegroundDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt._AppEventHandler"
};

$Object* allocate$_AppEventHandler$_AppForegroundDispatcher($Class* clazz) {
	return $of($alloc(_AppEventHandler$_AppForegroundDispatcher));
}

void _AppEventHandler$_AppForegroundDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_BooleanAppEventMultiplexor::init$(this$0);
}

$Object* _AppEventHandler$_AppForegroundDispatcher::createEvent(bool isTrue) {
	return $of($new($AppForegroundEvent));
}

void _AppEventHandler$_AppForegroundDispatcher::performFalseEventOn($AppForegroundListener* listener, $AppForegroundEvent* e) {
	$nc(listener)->appMovedToBackground(e);
}

void _AppEventHandler$_AppForegroundDispatcher::performTrueEventOn($AppForegroundListener* listener, $AppForegroundEvent* e) {
	$nc(listener)->appRaisedToForeground(e);
}

void _AppEventHandler$_AppForegroundDispatcher::performFalseEventOn(Object$* listener, Object$* e) {
	this->performFalseEventOn($cast($AppForegroundListener, listener), $cast($AppForegroundEvent, e));
}

void _AppEventHandler$_AppForegroundDispatcher::performTrueEventOn(Object$* listener, Object$* e) {
	this->performTrueEventOn($cast($AppForegroundListener, listener), $cast($AppForegroundEvent, e));
}

_AppEventHandler$_AppForegroundDispatcher::_AppEventHandler$_AppForegroundDispatcher() {
}

$Class* _AppEventHandler$_AppForegroundDispatcher::load$($String* name, bool initialize) {
	$loadClass(_AppEventHandler$_AppForegroundDispatcher, name, initialize, &__AppEventHandler$_AppForegroundDispatcher_ClassInfo_, allocate$_AppEventHandler$_AppForegroundDispatcher);
	return class$;
}

$Class* _AppEventHandler$_AppForegroundDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com