#include <java/awt/event/WindowAdapter.h>

#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _WindowAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(WindowAdapter, init$, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowActivated, void, $WindowEvent*)},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowClosed, void, $WindowEvent*)},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowClosing, void, $WindowEvent*)},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowDeactivated, void, $WindowEvent*)},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowDeiconified, void, $WindowEvent*)},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowGainedFocus, void, $WindowEvent*)},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowIconified, void, $WindowEvent*)},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowLostFocus, void, $WindowEvent*)},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowOpened, void, $WindowEvent*)},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowAdapter, windowStateChanged, void, $WindowEvent*)},
	{}
};

$ClassInfo _WindowAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.WindowAdapter",
	"java.lang.Object",
	"java.awt.event.WindowListener,java.awt.event.WindowStateListener,java.awt.event.WindowFocusListener",
	nullptr,
	_WindowAdapter_MethodInfo_
};

$Object* allocate$WindowAdapter($Class* clazz) {
	return $of($alloc(WindowAdapter));
}

int32_t WindowAdapter::hashCode() {
	 return this->$WindowListener::hashCode();
}

bool WindowAdapter::equals(Object$* arg0) {
	 return this->$WindowListener::equals(arg0);
}

$Object* WindowAdapter::clone() {
	 return this->$WindowListener::clone();
}

$String* WindowAdapter::toString() {
	 return this->$WindowListener::toString();
}

void WindowAdapter::finalize() {
	this->$WindowListener::finalize();
}

void WindowAdapter::init$() {
}

void WindowAdapter::windowOpened($WindowEvent* e) {
}

void WindowAdapter::windowClosing($WindowEvent* e) {
}

void WindowAdapter::windowClosed($WindowEvent* e) {
}

void WindowAdapter::windowIconified($WindowEvent* e) {
}

void WindowAdapter::windowDeiconified($WindowEvent* e) {
}

void WindowAdapter::windowActivated($WindowEvent* e) {
}

void WindowAdapter::windowDeactivated($WindowEvent* e) {
}

void WindowAdapter::windowStateChanged($WindowEvent* e) {
}

void WindowAdapter::windowGainedFocus($WindowEvent* e) {
}

void WindowAdapter::windowLostFocus($WindowEvent* e) {
}

WindowAdapter::WindowAdapter() {
}

$Class* WindowAdapter::load$($String* name, bool initialize) {
	$loadClass(WindowAdapter, name, initialize, &_WindowAdapter_ClassInfo_, allocate$WindowAdapter);
	return class$;
}

$Class* WindowAdapter::class$ = nullptr;

		} // event
	} // awt
} // java