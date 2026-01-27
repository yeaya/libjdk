#include <sun/lwawt/PlatformEventNotifier.h>

#include <java/awt/Rectangle.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformEventNotifier_MethodInfo_[] = {
	{"notifyActivation", "(ZLsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyActivation, void, bool, $LWWindowPeer*)},
	{"notifyExpose", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyExpose, void, $Rectangle*)},
	{"notifyIconify", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyIconify, void, bool)},
	{"notifyKeyEvent", "(IJIICI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyKeyEvent, void, int32_t, int64_t, int32_t, int32_t, char16_t, int32_t)},
	{"notifyMouseEvent", "(IJIIIIIIIZ[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyMouseEvent, void, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, $bytes*)},
	{"notifyMouseWheelEvent", "(JIIIIIIIID[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyMouseWheelEvent, void, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, double, $bytes*)},
	{"notifyNCMouseDown", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyNCMouseDown, void)},
	{"notifyReshape", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyReshape, void, int32_t, int32_t, int32_t, int32_t)},
	{"notifyUpdateCursor", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyUpdateCursor, void)},
	{"notifyZoom", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformEventNotifier, notifyZoom, void, bool)},
	{}
};

$ClassInfo _PlatformEventNotifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformEventNotifier",
	nullptr,
	nullptr,
	nullptr,
	_PlatformEventNotifier_MethodInfo_
};

$Object* allocate$PlatformEventNotifier($Class* clazz) {
	return $of($alloc(PlatformEventNotifier));
}

$Class* PlatformEventNotifier::load$($String* name, bool initialize) {
	$loadClass(PlatformEventNotifier, name, initialize, &_PlatformEventNotifier_ClassInfo_, allocate$PlatformEventNotifier);
	return class$;
}

$Class* PlatformEventNotifier::class$ = nullptr;

	} // lwawt
} // sun