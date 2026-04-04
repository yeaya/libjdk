#include <sun/awt/X11CustomCursor.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/util/Arrays.h>
#include <sun/awt/CustomCursor.h>
#include <sun/awt/X11CustomCursor$1CCount.h>
#include <jcpp.h>

using $X11CustomCursor$1CCountArray = $Array<::sun::awt::X11CustomCursor$1CCount>;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $CustomCursor = ::sun::awt::CustomCursor;
using $X11CustomCursor$1CCount = ::sun::awt::X11CustomCursor$1CCount;

namespace sun {
	namespace awt {

void X11CustomCursor::init$($Image* cursor, $Point* hotSpot, $String* name) {
	$CustomCursor::init$(cursor, hotSpot, name);
}

void X11CustomCursor::createNativeCursor($Image* im, $ints* pixels, int32_t width, int32_t height, int32_t xHotSpot, int32_t yHotSpot) {
	$useLocalObjectStack();
	{
	}
	$var($ints, tmp, $new($ints, $nc(pixels)->length));
	for (int32_t i = 0; i < pixels->length; ++i) {
		if ((pixels->get(i) & (int32_t)0xff000000) == 0) {
			tmp->set(i, -1);
		} else {
			tmp->set(i, pixels->get(i) & 0x00ffffff);
		}
	}
	$Arrays::sort(tmp);
	int32_t fc = 0;
	int32_t bc = 0x00ffffff;
	$var($X11CustomCursor$1CCountArray, cols, $new($X11CustomCursor$1CCountArray, pixels->length));
	int32_t is = 0;
	int32_t numColors = 0;
	while (is < pixels->length) {
		if (tmp->get(is) != -1) {
			cols->set(numColors++, $$new($X11CustomCursor$1CCount, this, tmp->get(is), 1));
			break;
		}
		++is;
	}
	for (int32_t i = is + 1; i < pixels->length; ++i) {
		if (tmp->get(i) != $nc(cols->get(numColors - 1))->color) {
			cols->set(numColors++, $$new($X11CustomCursor$1CCount, this, tmp->get(i), 1));
		} else {
			++$nc(cols->get(numColors - 1))->count;
		}
	}
	$Arrays::sort(cols, 0, numColors);
	if (numColors > 0) {
		fc = $nc(cols->get(0))->color;
	}
	int32_t fcr = (fc >> 16) & 0xff;
	int32_t fcg = (fc >> 8) & 0xff;
	int32_t fcb = (fc >> 0) & 0xff;
	int32_t rdis = 0;
	int32_t gdis = 0;
	int32_t bdis = 0;
	for (int32_t j = 1; j < numColors; ++j) {
		int32_t rr = ($nc(cols->get(j))->color >> 16) & 0xff;
		int32_t gg = ($nc(cols->get(j))->color >> 8) & 0xff;
		int32_t bb = ($nc(cols->get(j))->color >> 0) & 0xff;
		rdis = rdis + $nc(cols->get(j))->count * rr;
		gdis = gdis + $nc(cols->get(j))->count * gg;
		bdis = bdis + $nc(cols->get(j))->count * bb;
	}
	int32_t rest = pixels->length - ((numColors > 0) ? $nc(cols->get(0))->count : 0);
	if (rest > 0) {
		rdis = $div(rdis, rest) - fcr;
		gdis = $div(gdis, rest) - fcg;
		bdis = $div(bdis, rest) - fcb;
	}
	rdis = (rdis * rdis + gdis * gdis + bdis * bdis) / 2;
	for (int32_t j = 1; j < numColors; ++j) {
		int32_t rr = ($nc(cols->get(j))->color >> 16) & 0xff;
		int32_t gg = ($nc(cols->get(j))->color >> 8) & 0xff;
		int32_t bb = ($nc(cols->get(j))->color >> 0) & 0xff;
		if ((rr - fcr) * (rr - fcr) + (gg - fcg) * (gg - fcg) + (bb - fcb) * (bb - fcb) >= rdis) {
			bc = $nc(cols->get(j))->color;
			break;
		}
	}
	int32_t bcr = (bc >> 16) & 0xff;
	int32_t bcg = (bc >> 8) & 0xff;
	int32_t bcb = (bc >> 0) & 0xff;
	int32_t wNByte = (width + 7) / 8;
	int32_t tNByte = wNByte * height;
	$var($bytes, xorMask, $new($bytes, tNByte));
	$var($bytes, andMask, $new($bytes, tNByte));
	for (int32_t i = 0; i < width; ++i) {
		int32_t omask = $sl(1, i % 8);
		for (int32_t j = 0; j < height; ++j) {
			int32_t ip = j * width + i;
			int32_t ibyte = j * wNByte + i / 8;
			if ((pixels->get(ip) & (int32_t)0xff000000) != 0) {
				(*andMask)[ibyte] |= omask;
			}
			int32_t pr = (pixels->get(ip) >> 16) & 0xff;
			int32_t pg = (pixels->get(ip) >> 8) & 0xff;
			int32_t pb = (pixels->get(ip) >> 0) & 0xff;
			if ((pr - fcr) * (pr - fcr) + (pg - fcg) * (pg - fcg) + (pb - fcb) * (pb - fcb) <= (pr - bcr) * (pr - bcr) + (pg - bcg) * (pg - bcg) + (pb - bcb) * (pb - bcb)) {
				(*xorMask)[ibyte] |= omask;
			}
		}
	}
	createCursor(xorMask, andMask, 8 * wNByte, height, fc, bc, xHotSpot, yHotSpot);
}

X11CustomCursor::X11CustomCursor() {
}

$Class* X11CustomCursor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(X11CustomCursor, init$, void, $Image*, $Point*, $String*), "java.lang.IndexOutOfBoundsException"},
		{"createCursor", "([B[BIIIIII)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(X11CustomCursor, createCursor, void, $bytes*, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"createNativeCursor", "(Ljava/awt/Image;[IIIII)V", nullptr, $PROTECTED, $virtualMethod(X11CustomCursor, createNativeCursor, void, $Image*, $ints*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11CustomCursor$1CCount", nullptr, "CCount", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.X11CustomCursor",
		"sun.awt.CustomCursor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.X11CustomCursor$1CCount"
	};
	$loadClass(X11CustomCursor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11CustomCursor);
	});
	return class$;
}

$Class* X11CustomCursor::class$ = nullptr;

	} // awt
} // sun