#include <sun/awt/windows/TranslucentWindowPainter$VIOptD3DWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

void TranslucentWindowPainter$VIOptD3DWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIOptWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptD3DWindowPainter::updateWindowAccel(int64_t psdops, int32_t w, int32_t h) {
	return $D3DSurfaceData::updateWindowAccelImpl(psdops, $nc(this->peer)->getData(), w, h);
}

TranslucentWindowPainter$VIOptD3DWindowPainter::TranslucentWindowPainter$VIOptD3DWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptD3DWindowPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(TranslucentWindowPainter$VIOptD3DWindowPainter, init$, void, $WWindowPeer*)},
		{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$VIOptD3DWindowPainter, updateWindowAccel, bool, int64_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptD3DWindowPainter", $PRIVATE | $STATIC},
		{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter",
		"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
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
	$loadClass(TranslucentWindowPainter$VIOptD3DWindowPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TranslucentWindowPainter$VIOptD3DWindowPainter);
	});
	return class$;
}

$Class* TranslucentWindowPainter$VIOptD3DWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun