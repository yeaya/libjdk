#include <java/awt/event/MouseMotionAdapter.h>

#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseMotionAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(MouseMotionAdapter, init$, void)},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MouseMotionAdapter, mouseDragged, void, $MouseEvent*)},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MouseMotionAdapter, mouseMoved, void, $MouseEvent*)},
	{}
};

$ClassInfo _MouseMotionAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.MouseMotionAdapter",
	"java.lang.Object",
	"java.awt.event.MouseMotionListener",
	nullptr,
	_MouseMotionAdapter_MethodInfo_
};

$Object* allocate$MouseMotionAdapter($Class* clazz) {
	return $of($alloc(MouseMotionAdapter));
}

void MouseMotionAdapter::init$() {
}

void MouseMotionAdapter::mouseDragged($MouseEvent* e) {
}

void MouseMotionAdapter::mouseMoved($MouseEvent* e) {
}

MouseMotionAdapter::MouseMotionAdapter() {
}

$Class* MouseMotionAdapter::load$($String* name, bool initialize) {
	$loadClass(MouseMotionAdapter, name, initialize, &_MouseMotionAdapter_ClassInfo_, allocate$MouseMotionAdapter);
	return class$;
}

$Class* MouseMotionAdapter::class$ = nullptr;

		} // event
	} // awt
} // java