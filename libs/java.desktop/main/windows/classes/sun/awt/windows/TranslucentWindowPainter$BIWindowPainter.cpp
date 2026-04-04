#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Window.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/DestSurfaceProvider.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $TranslucentWindowPainter = ::sun::awt::windows::TranslucentWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $DestSurfaceProvider = ::sun::java2d::DestSurfaceProvider;
using $Surface = ::sun::java2d::Surface;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

void TranslucentWindowPainter$BIWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter::init$(peer);
}

$Image* TranslucentWindowPainter$BIWindowPainter::getBackBuffer(bool clear) {
	$useLocalObjectStack();
	$var($GraphicsConfiguration, gc, $nc(this->peer)->getGraphicsConfiguration());
	$var($AffineTransform, transform, $nc(gc)->getDefaultTransform());
	int32_t var$0 = $nc(this->window)->getWidth();
	int32_t w = $Region::clipRound(var$0 * $nc(transform)->getScaleX());
	int32_t var$1 = $nc(this->window)->getHeight();
	int32_t h = $Region::clipRound(var$1 * transform->getScaleY());
	bool var$2 = this->backBuffer == nullptr || this->backBuffer->getWidth() != w;
	if (var$2 || this->backBuffer->getHeight() != h) {
		flush();
		$set(this, backBuffer, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	}
	return clear ? $cast($BufferedImage, $TranslucentWindowPainter::clearImage(this->backBuffer)) : this->backBuffer;
}

bool TranslucentWindowPainter$BIWindowPainter::update($Image* bb) {
	$useLocalObjectStack();
	$var($VolatileImage, viBB, nullptr);
	if ($instanceOf($BufferedImage, bb)) {
		$var($BufferedImage, bi, $cast($BufferedImage, bb));
		$var($ints, data, $$sure($DataBufferInt, $$nc(bi->getRaster())->getDataBuffer())->getData());
		int32_t var$0 = bi->getWidth();
		$nc(this->peer)->updateWindowImpl(data, var$0, bi->getHeight());
		return true;
	} else if ($instanceOf($VolatileImage, bb)) {
		$assign(viBB, $cast($VolatileImage, bb));
		if ($instanceOf($DestSurfaceProvider, bb)) {
			$var($Surface, s, $cast($DestSurfaceProvider, bb)->getDestSurface());
			if ($instanceOf($BufImgSurfaceData, s)) {
				int32_t w = viBB->getWidth();
				int32_t h = viBB->getHeight();
				$var($BufImgSurfaceData, bisd, $cast($BufImgSurfaceData, s));
				$var($ints, data, $$sure($DataBufferInt, $$nc(bisd->getRaster(0, 0, w, h))->getDataBuffer())->getData());
				$nc(this->peer)->updateWindowImpl(data, w, h);
				return true;
			}
		}
	}
	$var($BufferedImage, bi, $cast($BufferedImage, $TranslucentWindowPainter::clearImage(this->backBuffer)));
	$var($ints, data, $$sure($DataBufferInt, $$nc($nc(bi)->getRaster())->getDataBuffer())->getData());
	int32_t var$1 = bi->getWidth();
	$nc(this->peer)->updateWindowImpl(data, var$1, bi->getHeight());
	return (viBB != nullptr ? !viBB->contentsLost() : true);
}

void TranslucentWindowPainter$BIWindowPainter::flush() {
	if (this->backBuffer != nullptr) {
		this->backBuffer->flush();
		$set(this, backBuffer, nullptr);
	}
}

$Graphics* TranslucentWindowPainter$BIWindowPainter::getGraphics(bool clear) {
	$useLocalObjectStack();
	$var($Graphics, g, $$nc(getBackBuffer(clear))->getGraphics());
	$nc($cast($Graphics2D, g))->transform($($$nc($nc(this->peer)->getGraphicsConfiguration())->getDefaultTransform()));
	return g;
}

TranslucentWindowPainter$BIWindowPainter::TranslucentWindowPainter$BIWindowPainter() {
}

$Class* TranslucentWindowPainter$BIWindowPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"backBuffer", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(TranslucentWindowPainter$BIWindowPainter, backBuffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(TranslucentWindowPainter$BIWindowPainter, init$, void, $WWindowPeer*)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(TranslucentWindowPainter$BIWindowPainter, flush, void)},
		{"getBackBuffer", "(Z)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$BIWindowPainter, getBackBuffer, $Image*, bool)},
		{"getGraphics", "(Z)Ljava/awt/Graphics;", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$BIWindowPainter, getGraphics, $Graphics*, bool)},
		{"update", "(Ljava/awt/Image;)Z", nullptr, $PROTECTED, $virtualMethod(TranslucentWindowPainter$BIWindowPainter, update, bool, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.TranslucentWindowPainter$BIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "BIWindowPainter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.TranslucentWindowPainter$BIWindowPainter",
		"sun.awt.windows.TranslucentWindowPainter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.TranslucentWindowPainter"
	};
	$loadClass(TranslucentWindowPainter$BIWindowPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TranslucentWindowPainter$BIWindowPainter);
	});
	return class$;
}

$Class* TranslucentWindowPainter$BIWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun