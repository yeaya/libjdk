#include <sun/lwawt/macosx/CDropTarget.h>
#include <java/awt/Component.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/lang/IllegalStateException.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CDropTarget::init$($DropTarget* dropTarget, $Component* component, $LWComponentPeer* peer) {
	int64_t nativePeer = $CPlatformWindow::getNativeViewPtr($($nc(peer)->getPlatformWindow()));
	if (nativePeer == 0) {
		return;
	}
	this->fNativeDropTarget = createNativeDropTarget(dropTarget, component, nativePeer);
	if (this->fNativeDropTarget == 0) {
		$throwNew($IllegalStateException, "CDropTarget.createNativeDropTarget() failed."_s);
	}
}

void CDropTarget::dispose() {
	if (this->fNativeDropTarget != 0) {
		releaseNativeDropTarget(this->fNativeDropTarget);
		this->fNativeDropTarget = 0;
	}
}

int64_t CDropTarget::createNativeDropTarget($DropTarget* dropTarget, $Component* component, int64_t nativePeer) {
	$prepareNative(createNativeDropTarget, int64_t, $DropTarget* dropTarget, $Component* component, int64_t nativePeer);
	int64_t $ret = $invokeNative(dropTarget, component, nativePeer);
	$finishNative();
	return $ret;
}

void CDropTarget::releaseNativeDropTarget(int64_t nativeDropTarget) {
	$prepareNative(releaseNativeDropTarget, void, int64_t nativeDropTarget);
	$invokeNative(nativeDropTarget);
	$finishNative();
}

CDropTarget::CDropTarget() {
}

$Class* CDropTarget::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fNativeDropTarget", "J", nullptr, $PRIVATE, $field(CDropTarget, fNativeDropTarget)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer;)V", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer<**>;)V", 0, $method(CDropTarget, init$, void, $DropTarget*, $Component*, $LWComponentPeer*)},
		{"createNativeDropTarget", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;J)J", nullptr, $PROTECTED | $NATIVE, $method(CDropTarget, createNativeDropTarget, int64_t, $DropTarget*, $Component*, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CDropTarget, dispose, void)},
		{"releaseNativeDropTarget", "(J)V", nullptr, $PROTECTED | $NATIVE, $method(CDropTarget, releaseNativeDropTarget, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CDropTarget",
		"java.lang.Object",
		"sun.lwawt.PlatformDropTarget",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CDropTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CDropTarget);
	});
	return class$;
}

$Class* CDropTarget::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun