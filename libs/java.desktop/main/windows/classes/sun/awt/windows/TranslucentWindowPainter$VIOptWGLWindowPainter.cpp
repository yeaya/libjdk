#include <sun/awt/windows/TranslucentWindowPainter$VIOptWGLWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

void TranslucentWindowPainter$VIOptWGLWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIOptWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptWGLWindowPainter::updateWindowAccel(int64_t psdops, int32_t w, int32_t h) {
	return $WGLSurfaceData::updateWindowAccelImpl(psdops, this->peer, w, h);
}

TranslucentWindowPainter$VIOptWGLWindowPainter::TranslucentWindowPainter$VIOptWGLWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptWGLWindowPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(TranslucentWindowPainter$VIOptWGLWindowPainter, init$, void, $WWindowPeer*)},
		{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$VIOptWGLWindowPainter, updateWindowAccel, bool, int64_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWGLWindowPainter", $PRIVATE | $STATIC},
		{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter",
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
	$loadClass(TranslucentWindowPainter$VIOptWGLWindowPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TranslucentWindowPainter$VIOptWGLWindowPainter);
	});
	return class$;
}

$Class* TranslucentWindowPainter$VIOptWGLWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun