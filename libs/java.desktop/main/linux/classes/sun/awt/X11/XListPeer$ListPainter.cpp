#include <sun/awt/X11/XListPeer$ListPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XListPeer.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BLACK
#undef FINE
#undef FINER
#undef FINEST
#undef IMAGE_INCOMPATIBLE
#undef IMAGE_RESTORED

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XListPeer = ::sun::awt::X11::XListPeer;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

void XListPeer$ListPainter::init$($XListPeer* this$0) {
	$set(this, this$0, this$0);
}

$Color* XListPeer$ListPainter::getListForeground() {
	if (this->this$0->fgColorSet) {
		return $nc(this->colors)->get(3);
	} else {
		$init($SystemColor);
		return $SystemColor::textText;
	}
}

$Color* XListPeer$ListPainter::getListBackground() {
	if (this->this$0->bgColorSet) {
		return $nc(this->colors)->get(0);
	} else {
		$init($SystemColor);
		return $SystemColor::text;
	}
}

$Color* XListPeer$ListPainter::getDisabledColor() {
	$useLocalObjectStack();
	$var($Color, backgroundColor, getListBackground());
	$var($Color, foregroundColor, getListForeground());
	$init($Color);
	return ($nc(backgroundColor)->equals($Color::BLACK)) ? $nc(foregroundColor)->darker() : backgroundColor->darker();
}

bool XListPeer$ListPainter::createBuffer() {
	$useLocalObjectStack();
	$var($VolatileImage, localBuffer, nullptr);
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		$assign(localBuffer, this->buffer);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (localBuffer == nullptr) {
		$init($XListPeer);
		$init($PlatformLogger$Level);
		if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$XListPeer::log->fine($$str({"Creating buffer "_s, $$str(this->this$0->width), "x"_s, $$str(this->this$0->height)}));
		}
		$assign(localBuffer, $nc(this->this$0->graphicsConfig)->createCompatibleVolatileImage(this->this$0->width + 1, this->this$0->height + 1));
	}
	$XToolkit::awtLock();
	$var($Throwable, var$2, nullptr);
	bool var$4 = false;
	bool return$3 = false;
	try {
		if (this->buffer == nullptr) {
			$set(this, buffer, localBuffer);
			var$4 = true;
			return$3 = true;
			goto $finally1;
		}
	} catch ($Throwable& var$5) {
		$assign(var$2, var$5);
	} $finally1: {
		$XToolkit::awtUnlock();
	}
	if (var$2 != nullptr) {
		$throw(var$2);
	}
	if (return$3) {
		return var$4;
	}
	return false;
}

void XListPeer$ListPainter::invalidate() {
	$XToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		if (this->buffer != nullptr) {
			this->buffer->flush();
		}
		$set(this, buffer, nullptr);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$XToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void XListPeer$ListPainter::paint($Graphics* listG, int32_t firstItem, int32_t lastItem, int32_t options) {
	paint(listG, firstItem, lastItem, options, nullptr, nullptr);
}

void XListPeer$ListPainter::paint($Graphics* listG, int32_t firstItem, int32_t lastItem, int32_t options, $Rectangle* source, $Point* distance) {
	$useLocalObjectStack();
	$init($XListPeer);
	$init($PlatformLogger$Level);
	if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$XListPeer::log->finer($$str({"Repaint from "_s, $$str(firstItem), " to "_s, $$str(lastItem), " options "_s, $$str(options)}));
	}
	if (firstItem > lastItem) {
		int32_t t = lastItem;
		lastItem = firstItem;
		firstItem = t;
	}
	if (firstItem < 0) {
		firstItem = 0;
	}
	$set(this, colors, this->this$0->getGUIcolors());
	$var($VolatileImage, localBuffer, nullptr);
	do {
		$XToolkit::awtLock();
		$var($Throwable, var$0, nullptr);
		try {
			if (createBuffer()) {
				options = 62;
			}
			$assign(localBuffer, this->buffer);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		switch ($nc(localBuffer)->validate($(this->this$0->getGraphicsConfiguration()))) {
		case $VolatileImage::IMAGE_INCOMPATIBLE:
			invalidate();
			options = 62;
			continue;
		case $VolatileImage::IMAGE_RESTORED:
			options = 62;
		}
		$var($Graphics, g, localBuffer->createGraphics());
		$var($Throwable, var$2, nullptr);
		try {
			$nc(g)->setFont($(this->this$0->getFont()));
			if ((options & 0x40) != 0) {
				paintFocus(g, 64);
			}
			if ((options & 0x80) != 0) {
				g->copyArea($nc(source)->x, $nc(source)->y, $nc(source)->width, $nc(source)->height, $nc(distance)->x, $nc(distance)->y);
			}
			if ((options & 0x20) != 0) {
				paintBackground(g);
				firstItem = this->this$0->getFirstVisibleItem();
				lastItem = this->this$0->getLastVisibleItem();
			}
			if ((options & 8) != 0) {
				paintItems(g, firstItem, lastItem, options);
			}
			if ((options & 2) != 0 && this->this$0->vsbVis) {
				g->setClip($(this->this$0->getVScrollBarRec()));
				paintVerScrollbar(g, true);
			}
			if ((options & 4) != 0 && this->this$0->hsbVis) {
				g->setClip($(this->this$0->getHScrollBarRec()));
				paintHorScrollbar(g, true);
			}
			if ((options & 0x10) != 0) {
				paintFocus(g, 16);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	} while ($nc(localBuffer)->contentsLost());
	$nc(listG)->drawImage(localBuffer, 0, 0, nullptr);
}

void XListPeer$ListPainter::paintBackground($Graphics* g) {
	$useLocalObjectStack();
	$init($SystemColor);
	$nc(g)->setColor($SystemColor::window);
	g->fillRect(0, 0, this->this$0->width, this->this$0->height);
	g->setColor($(getListBackground()));
	g->fillRect(0, 0, this->this$0->listWidth, this->this$0->listHeight);
	this->this$0->draw3DRect(g, $($XComponentPeer::getSystemColors()), 0, 0, this->this$0->listWidth - 1, this->this$0->listHeight - 1, false);
}

void XListPeer$ListPainter::paintItems($Graphics* g, int32_t firstItem, int32_t lastItem, int32_t options) {
	$useLocalObjectStack();
	$init($XListPeer);
	$init($PlatformLogger$Level);
	if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Painting items from "_s);
		var$0->append(firstItem);
		var$0->append(" to "_s);
		var$0->append(lastItem);
		var$0->append(", focused "_s);
		var$0->append(this->this$0->focusIndex);
		var$0->append(", first "_s);
		var$0->append(this->this$0->getFirstVisibleItem());
		var$0->append(", last "_s);
		var$0->append(this->this$0->getLastVisibleItem());
		$XListPeer::log->finer($$str(var$0));
	}
	firstItem = $Math::max(this->this$0->getFirstVisibleItem(), firstItem);
	if (firstItem > lastItem) {
		int32_t t = lastItem;
		lastItem = firstItem;
		firstItem = t;
	}
	firstItem = $Math::max(this->this$0->getFirstVisibleItem(), firstItem);
	lastItem = $Math::min(lastItem, $nc(this->this$0->items)->size() - 1);
	if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINER)) {
		$XListPeer::log->finer($$str({"Actually painting items from "_s, $$str(firstItem), " to "_s, $$str(lastItem), ", items in window "_s, $$str(this->this$0->itemsInWindow())}));
	}
	for (int32_t i = firstItem; i <= lastItem; ++i) {
		paintItem(g, i);
	}
}

void XListPeer$ListPainter::paintItem($Graphics* g, int32_t index) {
	$useLocalObjectStack();
	$init($XListPeer);
	$init($PlatformLogger$Level);
	if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$XListPeer::log->finest($$str({"Painting item "_s, $$str(index)}));
	}
	if (!this->this$0->isItemHidden(index)) {
		$var($Shape, clip, $nc(g)->getClip());
		int32_t w = this->this$0->getItemWidth();
		int32_t h = this->this$0->getItemHeight();
		int32_t y = this->this$0->getItemY(index);
		int32_t x = this->this$0->getItemX();
		if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
			$XListPeer::log->finest($$str({"Setting clip "_s, $$new($Rectangle, x, y, w - (1 * 2), h - (1 * 2))}));
		}
		g->setClip(x, y, w - (1 * 2), h - (1 * 2));
		if (this->this$0->isSelected(index)) {
			if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
				$XListPeer::log->finest("Painted item is selected"_s);
			}
			g->setColor($(getListForeground()));
		} else {
			g->setColor($(getListBackground()));
		}
		if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
			$XListPeer::log->finest($$str({"Filling "_s, $$new($Rectangle, x, y, w, h)}));
		}
		g->fillRect(x, y, w, h);
		bool var$0 = index <= this->this$0->getLastVisibleItem();
		if (var$0 && index < $nc(this->this$0->items)->size()) {
			if (!this->this$0->isEnabled()) {
				g->setColor($(getDisabledColor()));
			} else if (this->this$0->isSelected(index)) {
				g->setColor($(getListBackground()));
			} else {
				g->setColor($(getListForeground()));
			}
			$var($String, str, $cast($String, $nc(this->this$0->items)->elementAt(index)));
			g->drawString(str, x - $nc(this->this$0->hsb)->getValue(), y + this->this$0->fontAscent);
		} else {
			g->setClip(x, y, this->this$0->listWidth, h);
			g->setColor($(getListBackground()));
			g->fillRect(x, y, this->this$0->listWidth, h);
		}
		g->setClip(clip);
	}
}

void XListPeer$ListPainter::paintScrollBar($XScrollbar* scr, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool paintAll) {
	$useLocalObjectStack();
	$init($XListPeer);
	$init($PlatformLogger$Level);
	if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$XListPeer::log->finest($$str({"Painting scrollbar "_s, scr, " width "_s, $$str(width), " height "_s, $$str(height), ", paintAll "_s, $$str(paintAll)}));
	}
	$nc(g)->translate(x, y);
	$nc(scr)->paint(g, $($XComponentPeer::getSystemColors()), paintAll);
	g->translate(-x, -y);
}

void XListPeer$ListPainter::paintHorScrollbar($Graphics* g, bool paintAll) {
	int32_t w = this->this$0->getListWidth();
	paintScrollBar(this->this$0->hsb, g, 0, this->this$0->height - 13, w, 13, paintAll);
}

void XListPeer$ListPainter::paintVerScrollbar($Graphics* g, bool paintAll) {
	int32_t h = this->this$0->height - (this->this$0->hsbVis ? (17 - 2) : 0);
	paintScrollBar(this->this$0->vsb, g, this->this$0->width - 13, 0, 13 - 2, h, paintAll);
}

void XListPeer$ListPainter::paintFocus($Graphics* g, int32_t options) {
	$useLocalObjectStack();
	bool paintFocus = (options & 0x10) != 0;
	if (paintFocus && !this->this$0->hasFocus()) {
		paintFocus = false;
	}
	$init($XListPeer);
	$init($PlatformLogger$Level);
	if ($nc($XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Painting focus, focus index "_s);
		var$0->append(this->this$0->getFocusIndex());
		var$0->append(", focus is "_s);
		var$0->append(this->this$0->isItemHidden(this->this$0->getFocusIndex()) ? ("invisible"_s) : ("visible"_s));
		var$0->append(", paint focus is "_s);
		var$0->append(paintFocus);
		$XListPeer::log->fine($$str(var$0));
	}
	$var($Shape, clip, $nc(g)->getClip());
	g->setClip(0, 0, this->this$0->listWidth, this->this$0->listHeight);
	if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
		$XListPeer::log->finest($$str({"Setting focus clip "_s, $$new($Rectangle, 0, 0, this->this$0->listWidth, this->this$0->listHeight)}));
	}
	$var($Rectangle, rect, this->this$0->getFocusRect());
	if (this->prevFocusRect != nullptr) {
		if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
			$XListPeer::log->finest($$str({"Erasing previous focus rect "_s, this->prevFocusRect}));
		}
		g->setColor($(getListBackground()));
		g->drawRect($nc(this->prevFocusRect)->x, $nc(this->prevFocusRect)->y, $nc(this->prevFocusRect)->width, $nc(this->prevFocusRect)->height);
		$set(this, prevFocusRect, nullptr);
	}
	if (paintFocus) {
		if ($XListPeer::log->isLoggable($PlatformLogger$Level::FINEST)) {
			$XListPeer::log->finest($$str({"Painting focus rect "_s, rect}));
		}
		g->setColor($(getListForeground()));
		g->drawRect($nc(rect)->x, $nc(rect)->y, $nc(rect)->width, $nc(rect)->height);
		$set(this, prevFocusRect, rect);
	}
	g->setClip(clip);
}

XListPeer$ListPainter::XListPeer$ListPainter() {
}

$Class* XListPeer$ListPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XListPeer$ListPainter, this$0)},
		{"buffer", "Ljava/awt/image/VolatileImage;", nullptr, 0, $field(XListPeer$ListPainter, buffer)},
		{"colors", "[Ljava/awt/Color;", nullptr, 0, $field(XListPeer$ListPainter, colors)},
		{"prevFocusRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XListPeer$ListPainter, prevFocusRect)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XListPeer;)V", nullptr, 0, $method(XListPeer$ListPainter, init$, void, $XListPeer*)},
		{"createBuffer", "()Z", nullptr, $PRIVATE, $method(XListPeer$ListPainter, createBuffer, bool)},
		{"getDisabledColor", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(XListPeer$ListPainter, getDisabledColor, $Color*)},
		{"getListBackground", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(XListPeer$ListPainter, getListBackground, $Color*)},
		{"getListForeground", "()Ljava/awt/Color;", nullptr, $PRIVATE, $method(XListPeer$ListPainter, getListForeground, $Color*)},
		{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(XListPeer$ListPainter, invalidate, void)},
		{"paint", "(Ljava/awt/Graphics;III)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paint, void, $Graphics*, int32_t, int32_t, int32_t)},
		{"paint", "(Ljava/awt/Graphics;IIILjava/awt/Rectangle;Ljava/awt/Point;)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paint, void, $Graphics*, int32_t, int32_t, int32_t, $Rectangle*, $Point*)},
		{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paintBackground, void, $Graphics*)},
		{"paintFocus", "(Ljava/awt/Graphics;I)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paintFocus, void, $Graphics*, int32_t)},
		{"paintHorScrollbar", "(Ljava/awt/Graphics;Z)V", nullptr, 0, $virtualMethod(XListPeer$ListPainter, paintHorScrollbar, void, $Graphics*, bool)},
		{"paintItem", "(Ljava/awt/Graphics;I)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paintItem, void, $Graphics*, int32_t)},
		{"paintItems", "(Ljava/awt/Graphics;III)V", nullptr, $PRIVATE, $method(XListPeer$ListPainter, paintItems, void, $Graphics*, int32_t, int32_t, int32_t)},
		{"paintScrollBar", "(Lsun/awt/X11/XScrollbar;Ljava/awt/Graphics;IIIIZ)V", nullptr, 0, $virtualMethod(XListPeer$ListPainter, paintScrollBar, void, $XScrollbar*, $Graphics*, int32_t, int32_t, int32_t, int32_t, bool)},
		{"paintVerScrollbar", "(Ljava/awt/Graphics;Z)V", nullptr, 0, $virtualMethod(XListPeer$ListPainter, paintVerScrollbar, void, $Graphics*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XListPeer$ListPainter", "sun.awt.X11.XListPeer", "ListPainter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XListPeer$ListPainter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XListPeer"
	};
	$loadClass(XListPeer$ListPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XListPeer$ListPainter);
	});
	return class$;
}

$Class* XListPeer$ListPainter::class$ = nullptr;

		} // X11
	} // awt
} // sun