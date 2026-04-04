#include <sun/awt/X11/XVerticalScrollbar.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <jcpp.h>

#undef ALIGNMENT_VERTICAL

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;

namespace sun {
	namespace awt {
		namespace X11 {

void XVerticalScrollbar::init$($XScrollbarClient* sb) {
	$XScrollbar::init$($XScrollbar::ALIGNMENT_VERTICAL, sb);
}

void XVerticalScrollbar::setSize(int32_t width, int32_t height) {
	$XScrollbar::setSize(width, height);
	this->barWidth = width;
	this->barLength = height;
	calculateArrowWidth();
	rebuildArrows();
}

void XVerticalScrollbar::rebuildArrows() {
	$set(this, firstArrow, createArrowShape(true, true));
	$set(this, secondArrow, createArrowShape(true, false));
}

bool XVerticalScrollbar::beforeThumb(int32_t x, int32_t y) {
	$var($Rectangle, pos, calculateThumbRect());
	return (y < $nc(pos)->y);
}

$Rectangle* XVerticalScrollbar::getThumbArea() {
	int32_t var$0 = getArrowAreaWidth();
	int32_t var$1 = this->width - 4;
	return $new($Rectangle, 2, var$0, var$1, this->height - 2 * getArrowAreaWidth());
}

XVerticalScrollbar::XVerticalScrollbar() {
}

$Class* XVerticalScrollbar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XScrollbarClient;)V", nullptr, $PUBLIC, $method(XVerticalScrollbar, init$, void, $XScrollbarClient*)},
		{"beforeThumb", "(II)Z", nullptr, 0, $virtualMethod(XVerticalScrollbar, beforeThumb, bool, int32_t, int32_t)},
		{"getThumbArea", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED, $virtualMethod(XVerticalScrollbar, getThumbArea, $Rectangle*)},
		{"rebuildArrows", "()V", nullptr, $PROTECTED, $virtualMethod(XVerticalScrollbar, rebuildArrows, void)},
		{"setSize", "(II)V", nullptr, $PUBLIC, $virtualMethod(XVerticalScrollbar, setSize, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XVerticalScrollbar",
		"sun.awt.X11.XScrollbar",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XVerticalScrollbar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XVerticalScrollbar);
	});
	return class$;
}

$Class* XVerticalScrollbar::class$ = nullptr;

		} // X11
	} // awt
} // sun