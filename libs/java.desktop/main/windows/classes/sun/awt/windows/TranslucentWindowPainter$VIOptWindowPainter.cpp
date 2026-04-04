#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter$1.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/DestSurfaceProvider.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter$VIOptWindowPainter$1 = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter$1;
using $TranslucentWindowPainter$VIWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $DestSurfaceProvider = ::sun::java2d::DestSurfaceProvider;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $Surface = ::sun::java2d::Surface;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace awt {
		namespace windows {

void TranslucentWindowPainter$VIOptWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptWindowPainter::update($Image* bb) {
	$useLocalObjectStack();
	if ($instanceOf($DestSurfaceProvider, bb)) {
		$var($Surface, s, $cast($DestSurfaceProvider, bb)->getDestSurface());
		if ($instanceOf($AccelSurface, s)) {
			$var($booleans, arr, $new($booleans, {false}));
			$var($AccelSurface, as, $cast($AccelSurface, s));
			int32_t w = $nc($(as->getBounds()))->width;
			int32_t h = $nc($(as->getBounds()))->height;
			$var($RenderQueue, rq, $$nc(as->getContext())->getRenderQueue());
			$nc(rq)->lock();
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$BufferedContext::validateContext(as);
					rq->flushAndInvokeNow($$new($TranslucentWindowPainter$VIOptWindowPainter$1, this, as, arr, w, h));
				} catch ($InvalidPipeException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				rq->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			return arr->get(0);
		}
	}
	return $TranslucentWindowPainter$VIWindowPainter::update(bb);
}

TranslucentWindowPainter$VIOptWindowPainter::TranslucentWindowPainter$VIOptWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptWindowPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(TranslucentWindowPainter$VIOptWindowPainter, init$, void, $WWindowPeer*)},
		{"update", "(Ljava/awt/Image;)Z", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$VIOptWindowPainter, update, bool, $Image*)},
		{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TranslucentWindowPainter$VIOptWindowPainter, updateWindowAccel, bool, int64_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
		{"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIWindowPainter", $PRIVATE | $STATIC},
		{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
		"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.TranslucentWindowPainter"
	};
	$loadClass(TranslucentWindowPainter$VIOptWindowPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TranslucentWindowPainter$VIOptWindowPainter);
	});
	return class$;
}

$Class* TranslucentWindowPainter$VIOptWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun