#include <sun/java2d/pipe/ValidatePipe.h>

#include <java/awt/Color.h>
#include <java/awt/Image.h>
#include <java/awt/Shape.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Shape = ::java::awt::Shape;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _ValidatePipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ValidatePipe, init$, void)},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, copyImage, bool, $SunGraphics2D*, $Image*, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, copyImage, bool, $SunGraphics2D*, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"draw", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, draw, void, $SunGraphics2D*, $Shape*)},
	{"drawArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawArc, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"drawChars", "(Lsun/java2d/SunGraphics2D;[CIIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawChars, void, $SunGraphics2D*, $chars*, int32_t, int32_t, int32_t, int32_t)},
	{"drawGlyphVector", "(Lsun/java2d/SunGraphics2D;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawGlyphVector, void, $SunGraphics2D*, $GlyphVector*, float, float)},
	{"drawLine", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawLine, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawOval, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawPolygon, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
	{"drawPolyline", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawPolyline, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
	{"drawRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"drawRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawRoundRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"drawString", "(Lsun/java2d/SunGraphics2D;Ljava/lang/String;DD)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, drawString, void, $SunGraphics2D*, $String*, double, double)},
	{"fill", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fill, void, $SunGraphics2D*, $Shape*)},
	{"fillArc", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fillArc, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"fillOval", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fillOval, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"fillPolygon", "(Lsun/java2d/SunGraphics2D;[I[II)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fillPolygon, void, $SunGraphics2D*, $ints*, $ints*, int32_t)},
	{"fillRect", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fillRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t)},
	{"fillRoundRect", "(Lsun/java2d/SunGraphics2D;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, fillRoundRect, void, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, scaleImage, bool, $SunGraphics2D*, $Image*, int32_t, int32_t, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, scaleImage, bool, $SunGraphics2D*, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, transformImage, bool, $SunGraphics2D*, $Image*, $AffineTransform*, $ImageObserver*)},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, transformImage, void, $SunGraphics2D*, $BufferedImage*, $BufferedImageOp*, int32_t, int32_t)},
	{"validate", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatePipe, validate, bool, $SunGraphics2D*)},
	{}
};

$ClassInfo _ValidatePipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.ValidatePipe",
	"java.lang.Object",
	"sun.java2d.pipe.PixelDrawPipe,sun.java2d.pipe.PixelFillPipe,sun.java2d.pipe.ShapeDrawPipe,sun.java2d.pipe.TextPipe,sun.java2d.pipe.DrawImagePipe",
	nullptr,
	_ValidatePipe_MethodInfo_
};

$Object* allocate$ValidatePipe($Class* clazz) {
	return $of($alloc(ValidatePipe));
}

int32_t ValidatePipe::hashCode() {
	 return this->$PixelDrawPipe::hashCode();
}

bool ValidatePipe::equals(Object$* arg0) {
	 return this->$PixelDrawPipe::equals(arg0);
}

$Object* ValidatePipe::clone() {
	 return this->$PixelDrawPipe::clone();
}

$String* ValidatePipe::toString() {
	 return this->$PixelDrawPipe::toString();
}

void ValidatePipe::finalize() {
	this->$PixelDrawPipe::finalize();
}

void ValidatePipe::init$() {
}

bool ValidatePipe::validate($SunGraphics2D* sg) {
	$nc(sg)->validatePipe();
	return true;
}

void ValidatePipe::drawLine($SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawLine(sg, x1, y1, x2, y2);
	}
}

void ValidatePipe::drawRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawRect(sg, x, y, width, height);
	}
}

void ValidatePipe::fillRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (validate(sg)) {
		$nc($nc(sg)->fillpipe)->fillRect(sg, x, y, width, height);
	}
}

void ValidatePipe::drawRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawRoundRect(sg, x, y, width, height, arcWidth, arcHeight);
	}
}

void ValidatePipe::fillRoundRect($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	if (validate(sg)) {
		$nc($nc(sg)->fillpipe)->fillRoundRect(sg, x, y, width, height, arcWidth, arcHeight);
	}
}

void ValidatePipe::drawOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawOval(sg, x, y, width, height);
	}
}

void ValidatePipe::fillOval($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (validate(sg)) {
		$nc($nc(sg)->fillpipe)->fillOval(sg, x, y, width, height);
	}
}

void ValidatePipe::drawArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawArc(sg, x, y, width, height, startAngle, arcAngle);
	}
}

void ValidatePipe::fillArc($SunGraphics2D* sg, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	if (validate(sg)) {
		$nc($nc(sg)->fillpipe)->fillArc(sg, x, y, width, height, startAngle, arcAngle);
	}
}

void ValidatePipe::drawPolyline($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawPolyline(sg, xPoints, yPoints, nPoints);
	}
}

void ValidatePipe::drawPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (validate(sg)) {
		$nc($nc(sg)->drawpipe)->drawPolygon(sg, xPoints, yPoints, nPoints);
	}
}

void ValidatePipe::fillPolygon($SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (validate(sg)) {
		$nc($nc(sg)->fillpipe)->fillPolygon(sg, xPoints, yPoints, nPoints);
	}
}

void ValidatePipe::draw($SunGraphics2D* sg, $Shape* s) {
	if (validate(sg)) {
		$nc($nc(sg)->shapepipe)->draw(sg, s);
	}
}

void ValidatePipe::fill($SunGraphics2D* sg, $Shape* s) {
	if (validate(sg)) {
		$nc($nc(sg)->shapepipe)->fill(sg, s);
	}
}

void ValidatePipe::drawString($SunGraphics2D* sg, $String* s, double x, double y) {
	if (validate(sg)) {
		$nc($nc(sg)->textpipe)->drawString(sg, s, x, y);
	}
}

void ValidatePipe::drawGlyphVector($SunGraphics2D* sg, $GlyphVector* g, float x, float y) {
	if (validate(sg)) {
		$nc($nc(sg)->textpipe)->drawGlyphVector(sg, g, x, y);
	}
}

void ValidatePipe::drawChars($SunGraphics2D* sg, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	if (validate(sg)) {
		$nc($nc(sg)->textpipe)->drawChars(sg, data, offset, length, x, y);
	}
}

bool ValidatePipe::copyImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, $Color* bgColor, $ImageObserver* observer) {
	if (validate(sg)) {
		return $nc($nc(sg)->imagepipe)->copyImage(sg, img, x, y, bgColor, observer);
	} else {
		return false;
	}
}

bool ValidatePipe::copyImage($SunGraphics2D* sg, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, $Color* bgColor, $ImageObserver* observer) {
	if (validate(sg)) {
		return $nc($nc(sg)->imagepipe)->copyImage(sg, img, dx, dy, sx, sy, w, h, bgColor, observer);
	} else {
		return false;
	}
}

bool ValidatePipe::scaleImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, int32_t w, int32_t h, $Color* bgColor, $ImageObserver* observer) {
	if (validate(sg)) {
		return $nc($nc(sg)->imagepipe)->scaleImage(sg, img, x, y, w, h, bgColor, observer);
	} else {
		return false;
	}
}

bool ValidatePipe::scaleImage($SunGraphics2D* sg, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor, $ImageObserver* observer) {
	if (validate(sg)) {
		return $nc($nc(sg)->imagepipe)->scaleImage(sg, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgColor, observer);
	} else {
		return false;
	}
}

bool ValidatePipe::transformImage($SunGraphics2D* sg, $Image* img, $AffineTransform* atfm, $ImageObserver* observer) {
	if (validate(sg)) {
		return $nc($nc(sg)->imagepipe)->transformImage(sg, img, atfm, observer);
	} else {
		return false;
	}
}

void ValidatePipe::transformImage($SunGraphics2D* sg, $BufferedImage* img, $BufferedImageOp* op, int32_t x, int32_t y) {
	if (validate(sg)) {
		$nc($nc(sg)->imagepipe)->transformImage(sg, img, op, x, y);
	}
}

ValidatePipe::ValidatePipe() {
}

$Class* ValidatePipe::load$($String* name, bool initialize) {
	$loadClass(ValidatePipe, name, initialize, &_ValidatePipe_ClassInfo_, allocate$ValidatePipe);
	return class$;
}

$Class* ValidatePipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun