#include <java/awt/Frame$1.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Frame$1::init$() {
}

void Frame$1::setExtendedState($Frame* frame, int32_t state) {
	$synchronized($nc(frame)->getObjectLock()) {
		frame->state = state;
	}
}

int32_t Frame$1::getExtendedState($Frame* frame) {
	$synchronized($nc(frame)->getObjectLock()) {
		return frame->state;
	}
}

$Rectangle* Frame$1::getMaximizedBounds($Frame* frame) {
	$synchronized($nc(frame)->getObjectLock()) {
		return frame->maximizedBounds;
	}
}

Frame$1::Frame$1() {
}

$Class* Frame$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Frame$1, init$, void)},
		{"getExtendedState", "(Ljava/awt/Frame;)I", nullptr, $PUBLIC, $virtualMethod(Frame$1, getExtendedState, int32_t, $Frame*)},
		{"getMaximizedBounds", "(Ljava/awt/Frame;)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(Frame$1, getMaximizedBounds, $Rectangle*, $Frame*)},
		{"setExtendedState", "(Ljava/awt/Frame;I)V", nullptr, $PUBLIC, $virtualMethod(Frame$1, setExtendedState, void, $Frame*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Frame",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Frame$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$FrameAccessor", "sun.awt.AWTAccessor", "FrameAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Frame$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$FrameAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Frame"
	};
	$loadClass(Frame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Frame$1);
	});
	return class$;
}

$Class* Frame$1::class$ = nullptr;

	} // awt
} // java