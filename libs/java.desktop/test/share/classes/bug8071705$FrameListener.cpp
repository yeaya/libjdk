#include <bug8071705$FrameListener.h>
#include <bug8071705.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8071705 = ::bug8071705;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

void bug8071705$FrameListener::init$($GraphicsDevice* device, $CountDownLatch* latch, $booleans* result) {
	$ComponentAdapter::init$();
	$set(this, device, device);
	$set(this, latch, latch);
	$set(this, result, result);
}

void bug8071705$FrameListener::componentShown($ComponentEvent* e) {
	$var($JFrame, frame, $cast($JFrame, $nc(e)->getComponent()));
	$bug8071705::runActualTest(this->device, this->latch, frame, this->result);
	$nc(frame)->setVisible(false);
	frame->dispose();
	$nc(this->latch)->countDown();
}

bug8071705$FrameListener::bug8071705$FrameListener() {
}

$Class* bug8071705$FrameListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE, $field(bug8071705$FrameListener, device)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE, $field(bug8071705$FrameListener, latch)},
		{"result", "[Z", nullptr, $PRIVATE, $field(bug8071705$FrameListener, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsDevice;Ljava/util/concurrent/CountDownLatch;[Z)V", nullptr, $PUBLIC, $method(bug8071705$FrameListener, init$, void, $GraphicsDevice*, $CountDownLatch*, $booleans*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8071705$FrameListener, componentShown, void, $ComponentEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8071705$FrameListener", "bug8071705", "FrameListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8071705$FrameListener",
		"java.awt.event.ComponentAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8071705"
	};
	$loadClass(bug8071705$FrameListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8071705$FrameListener);
	});
	return class$;
}

$Class* bug8071705$FrameListener::class$ = nullptr;