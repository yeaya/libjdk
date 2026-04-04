#include <sun/awt/windows/WInputMethod$1.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WInputMethod.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WInputMethod = ::sun::awt::windows::WInputMethod;

namespace sun {
	namespace awt {
		namespace windows {

void WInputMethod$1::init$($WInputMethod* this$0) {
	$set(this, this$0, this$0);
}

void WInputMethod$1::run() {
	$useLocalObjectStack();
	int32_t x = 0;
	int32_t y = 0;
	$var($Component, client, $WInputMethod::access$000(this->this$0));
	if (client != nullptr) {
		if (!client->isShowing()) {
			return;
		}
		if ($WInputMethod::access$100(this->this$0)) {
			$var($Rectangle, rc, $nc(this->this$0->inputContext)->getTextLocation($($TextHitInfo::leading(0))));
			x = $nc(rc)->x;
			y = rc->y + rc->height;
		} else {
			$var($Point, pt, client->getLocationOnScreen());
			$var($Dimension, size, client->getSize());
			x = $nc(pt)->x;
			y = pt->y + $nc(size)->height;
		}
	}
	this->this$0->openCandidateWindow(this->this$0->awtFocussedComponentPeer, x, y);
}

WInputMethod$1::WInputMethod$1() {
}

$Class* WInputMethod$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WInputMethod;", nullptr, $FINAL | $SYNTHETIC, $field(WInputMethod$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WInputMethod;)V", nullptr, 0, $method(WInputMethod$1, init$, void, $WInputMethod*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WInputMethod$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WInputMethod",
		"inquireCandidatePosition",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WInputMethod$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WInputMethod$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WInputMethod"
	};
	$loadClass(WInputMethod$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WInputMethod$1);
	});
	return class$;
}

$Class* WInputMethod$1::class$ = nullptr;

		} // windows
	} // awt
} // sun