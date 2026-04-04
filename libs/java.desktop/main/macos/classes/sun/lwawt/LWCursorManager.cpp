#include <sun/lwawt/LWCursorManager.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWCursorManager$1.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWCursorManager$1 = ::sun::lwawt::LWCursorManager$1;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

void LWCursorManager::init$() {
	$set(this, updatePending, $new($AtomicBoolean, false));
}

void LWCursorManager::updateCursor() {
	this->updatePending->set(false);
	updateCursorImpl();
}

void LWCursorManager::updateCursorLater($LWWindowPeer* window) {
	$useLocalObjectStack();
	if (this->updatePending->compareAndSet(false, true)) {
		$var($Runnable, r, $new($LWCursorManager$1, this));
		$SunToolkit::executeOnEventHandlerThread($($nc(window)->getTarget()), r);
	}
}

void LWCursorManager::updateCursorImpl() {
	$useLocalObjectStack();
	$var($Point, cursorPos, getCursorPosition());
	$var($Component, c, findComponent(cursorPos));
	$var($Cursor, cursor, nullptr);
	$var($Object, peer, $LWToolkit::targetToPeer(c));
	if ($instanceOf($LWComponentPeer, peer)) {
		$var($LWComponentPeer, lwpeer, $cast($LWComponentPeer, peer));
		$var($Point, p, lwpeer->getLocationOnScreen());
		$assign(cursor, lwpeer->getCursor($$new($Point, $nc(cursorPos)->x - $nc(p)->x, $nc(cursorPos)->y - $nc(p)->y)));
	} else {
		$assign(cursor, (c != nullptr) ? c->getCursor() : ($Cursor*)nullptr);
	}
	setCursor(cursor);
}

$Component* LWCursorManager::findComponent($Point* cursorPos) {
	$useLocalObjectStack();
	$var($LWComponentPeer, peer, $LWWindowPeer::getPeerUnderCursor());
	$var($Component, c, nullptr);
	if (peer != nullptr && $$nc(peer->getWindowPeerOrSelf())->getBlocker() == nullptr) {
		$assign(c, peer->getTarget());
		if ($instanceOf($Container, c)) {
			$var($Point, p, peer->getLocationOnScreen());
			$assign(c, $$nc($AWTAccessor::getContainerAccessor())->findComponentAt($cast($Container, c), $nc(cursorPos)->x - $nc(p)->x, $nc(cursorPos)->y - $nc(p)->y, false));
		}
		while (c != nullptr) {
			$var($Object, p, $$nc($AWTAccessor::getComponentAccessor())->getPeer(c));
			bool var$0 = c->isVisible();
			if (var$0 && c->isEnabled() && p != nullptr) {
				break;
			}
			$assign(c, c->getParent());
		}
	}
	return c;
}

LWCursorManager::LWCursorManager() {
}

$Class* LWCursorManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"updatePending", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(LWCursorManager, updatePending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(LWCursorManager, init$, void)},
		{"findComponent", "(Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(LWCursorManager, findComponent, $Component*, $Point*)},
		{"getCursorPosition", "()Ljava/awt/Point;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWCursorManager, getCursorPosition, $Point*)},
		{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LWCursorManager, setCursor, void, $Cursor*)},
		{"updateCursor", "()V", nullptr, $PUBLIC | $FINAL, $method(LWCursorManager, updateCursor, void)},
		{"updateCursorImpl", "()V", nullptr, $PRIVATE, $method(LWCursorManager, updateCursorImpl, void)},
		{"updateCursorLater", "(Lsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC | $FINAL, $method(LWCursorManager, updateCursorLater, void, $LWWindowPeer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWCursorManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.lwawt.LWCursorManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.LWCursorManager$1"
	};
	$loadClass(LWCursorManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCursorManager);
	});
	return class$;
}

$Class* LWCursorManager::class$ = nullptr;

	} // lwawt
} // sun