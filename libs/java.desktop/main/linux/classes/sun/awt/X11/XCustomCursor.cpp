#include <sun/awt/X11/XCustomCursor.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/lang/Math.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XColor.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XGlobalCursorManager.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11CustomCursor.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Native = ::sun::awt::X11::Native;
using $XColor = ::sun::awt::X11::XColor;
using $XConstants = ::sun::awt::X11::XConstants;
using $XGlobalCursorManager = ::sun::awt::X11::XGlobalCursorManager;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11CustomCursor = ::sun::awt::X11CustomCursor;

namespace sun {
	namespace awt {
		namespace X11 {

void XCustomCursor::init$($Image* cursor, $Point* hotSpot, $String* name) {
	$X11CustomCursor::init$(cursor, hotSpot, name);
}

$Dimension* XCustomCursor::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	$init(XCustomCursor);
	$useLocalObjectStack();
	$var($Dimension, d, nullptr);
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		int64_t display = $XToolkit::getDisplay();
		int64_t root_window = $XlibWrapper::RootWindow(display, $XlibWrapper::DefaultScreen(display));
		int32_t var$1 = $Math::abs(preferredWidth);
		$XlibWrapper::XQueryBestCursor(display, root_window, var$1, $Math::abs(preferredHeight), $XlibWrapper::larg1, $XlibWrapper::larg2);
		int32_t var$2 = $nc($XlibWrapper::unsafe)->getInt($XlibWrapper::larg1);
		$assign(d, $new($Dimension, var$2, $XlibWrapper::unsafe->getInt($XlibWrapper::larg2)));
		if (preferredWidth > 0 && preferredHeight > 0) {
			d->width = $Math::min(d->width, preferredWidth);
			d->height = $Math::min(d->height, preferredHeight);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return d;
}

void XCustomCursor::createCursor($bytes* xorMask, $bytes* andMask, int32_t width, int32_t height, int32_t fcolor, int32_t bcolor, int32_t xHotSpot, int32_t yHotSpot) {
	$useLocalObjectStack();
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		int64_t display = $XToolkit::getDisplay();
		int64_t root_window = $XlibWrapper::RootWindow(display, $XlibWrapper::DefaultScreen(display));
		int64_t colormap = $XToolkit::getDefaultXColormap();
		$var($XColor, fore_color, $new($XColor));
		fore_color->set_flags((int8_t)(($XConstants::DoRed | $XConstants::DoGreen) | $XConstants::DoBlue));
		fore_color->set_red((int16_t)(((fcolor >> 16) & 0xff) << 8));
		fore_color->set_green((int16_t)(((fcolor >> 8) & 0xff) << 8));
		fore_color->set_blue((int16_t)(((fcolor >> 0) & 0xff) << 8));
		$XlibWrapper::XAllocColor(display, colormap, fore_color->pData);
		$var($XColor, back_color, $new($XColor));
		back_color->set_flags((int8_t)(($XConstants::DoRed | $XConstants::DoGreen) | $XConstants::DoBlue));
		back_color->set_red((int16_t)(((bcolor >> 16) & 0xff) << 8));
		back_color->set_green((int16_t)(((bcolor >> 8) & 0xff) << 8));
		back_color->set_blue((int16_t)(((bcolor >> 0) & 0xff) << 8));
		$XlibWrapper::XAllocColor(display, colormap, back_color->pData);
		int64_t nativeXorMask = $Native::toData(xorMask);
		int64_t source = $XlibWrapper::XCreateBitmapFromData(display, root_window, nativeXorMask, width, height);
		int64_t nativeAndMask = $Native::toData(andMask);
		int64_t mask = $XlibWrapper::XCreateBitmapFromData(display, root_window, nativeAndMask, width, height);
		int64_t cursor = $XlibWrapper::XCreatePixmapCursor(display, source, mask, fore_color->pData, back_color->pData, xHotSpot, yHotSpot);
		$nc($XlibWrapper::unsafe)->freeMemory(nativeXorMask);
		$XlibWrapper::unsafe->freeMemory(nativeAndMask);
		$XlibWrapper::XFreePixmap(display, source);
		$XlibWrapper::XFreePixmap(display, mask);
		back_color->dispose();
		fore_color->dispose();
		$XGlobalCursorManager::setPData(this, cursor);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

XCustomCursor::XCustomCursor() {
}

$Class* XCustomCursor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XCustomCursor, init$, void, $Image*, $Point*, $String*), "java.lang.IndexOutOfBoundsException"},
		{"createCursor", "([B[BIIIIII)V", nullptr, $PROTECTED, $virtualMethod(XCustomCursor, createCursor, void, $bytes*, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $STATIC, $staticMethod(XCustomCursor, getBestCursorSize, $Dimension*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XCustomCursor",
		"sun.awt.X11CustomCursor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XCustomCursor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XCustomCursor);
	});
	return class$;
}

$Class* XCustomCursor::class$ = nullptr;

		} // X11
	} // awt
} // sun