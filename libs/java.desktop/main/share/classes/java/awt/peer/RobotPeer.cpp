#include <java/awt/peer/RobotPeer.h>

#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _RobotPeer_MethodInfo_[] = {
	{"getRGBPixel", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, getRGBPixel, int32_t, int32_t, int32_t)},
	{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, getRGBPixels, $ints*, $Rectangle*)},
	{"keyPress", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, keyPress, void, int32_t)},
	{"keyRelease", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, keyRelease, void, int32_t)},
	{"mouseMove", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, mouseMove, void, int32_t, int32_t)},
	{"mousePress", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, mousePress, void, int32_t)},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, mouseRelease, void, int32_t)},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RobotPeer, mouseWheel, void, int32_t)},
	{"useAbsoluteCoordinates", "()Z", nullptr, $PUBLIC, $virtualMethod(RobotPeer, useAbsoluteCoordinates, bool)},
	{}
};

$ClassInfo _RobotPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.RobotPeer",
	nullptr,
	nullptr,
	nullptr,
	_RobotPeer_MethodInfo_
};

$Object* allocate$RobotPeer($Class* clazz) {
	return $of($alloc(RobotPeer));
}

bool RobotPeer::useAbsoluteCoordinates() {
	return false;
}

$Class* RobotPeer::load$($String* name, bool initialize) {
	$loadClass(RobotPeer, name, initialize, &_RobotPeer_ClassInfo_, allocate$RobotPeer);
	return class$;
}

$Class* RobotPeer::class$ = nullptr;

		} // peer
	} // awt
} // java