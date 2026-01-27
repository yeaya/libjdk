#include <javax/swing/event/InternalFrameAdapter.h>

#include <javax/swing/event/InternalFrameEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _InternalFrameAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(InternalFrameAdapter, init$, void)},
	{"internalFrameActivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameActivated, void, $InternalFrameEvent*)},
	{"internalFrameClosed", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameClosed, void, $InternalFrameEvent*)},
	{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameClosing, void, $InternalFrameEvent*)},
	{"internalFrameDeactivated", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameDeactivated, void, $InternalFrameEvent*)},
	{"internalFrameDeiconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameDeiconified, void, $InternalFrameEvent*)},
	{"internalFrameIconified", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameIconified, void, $InternalFrameEvent*)},
	{"internalFrameOpened", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC, $virtualMethod(InternalFrameAdapter, internalFrameOpened, void, $InternalFrameEvent*)},
	{}
};

$ClassInfo _InternalFrameAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.event.InternalFrameAdapter",
	"java.lang.Object",
	"javax.swing.event.InternalFrameListener",
	nullptr,
	_InternalFrameAdapter_MethodInfo_
};

$Object* allocate$InternalFrameAdapter($Class* clazz) {
	return $of($alloc(InternalFrameAdapter));
}

void InternalFrameAdapter::init$() {
}

void InternalFrameAdapter::internalFrameOpened($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameClosing($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameClosed($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameIconified($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameDeiconified($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameActivated($InternalFrameEvent* e) {
}

void InternalFrameAdapter::internalFrameDeactivated($InternalFrameEvent* e) {
}

InternalFrameAdapter::InternalFrameAdapter() {
}

$Class* InternalFrameAdapter::load$($String* name, bool initialize) {
	$loadClass(InternalFrameAdapter, name, initialize, &_InternalFrameAdapter_ClassInfo_, allocate$InternalFrameAdapter);
	return class$;
}

$Class* InternalFrameAdapter::class$ = nullptr;

		} // event
	} // swing
} // javax