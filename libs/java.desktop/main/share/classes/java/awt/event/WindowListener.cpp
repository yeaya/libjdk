#include <java/awt/event/WindowListener.h>

#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _WindowListener_MethodInfo_[] = {
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowActivated, void, $WindowEvent*)},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowClosed, void, $WindowEvent*)},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowClosing, void, $WindowEvent*)},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowDeactivated, void, $WindowEvent*)},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowDeiconified, void, $WindowEvent*)},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowIconified, void, $WindowEvent*)},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowOpened, void, $WindowEvent*)},
	{}
};

$ClassInfo _WindowListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.event.WindowListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_WindowListener_MethodInfo_
};

$Object* allocate$WindowListener($Class* clazz) {
	return $of($alloc(WindowListener));
}

$Class* WindowListener::load$($String* name, bool initialize) {
	$loadClass(WindowListener, name, initialize, &_WindowListener_ClassInfo_, allocate$WindowListener);
	return class$;
}

$Class* WindowListener::class$ = nullptr;

		} // event
	} // awt
} // java