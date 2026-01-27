#include <sun/print/PeekGraphics.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InterruptedException.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Map.h>
#include <sun/java2d/Spans.h>
#include <sun/print/PeekGraphics$ImageWaiter.h>
#include <sun/print/PeekMetrics.h>
#include <sun/print/PrinterGraphicsConfig.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef HEIGHT
#undef WIDTH

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Map = ::java::util::Map;
using $Spans = ::sun::java2d::Spans;
using $PeekGraphics$ImageWaiter = ::sun::print::PeekGraphics$ImageWaiter;
using $PeekMetrics = ::sun::print::PeekMetrics;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PeekGraphics_FieldInfo_[] = {
	{"mGraphics", "Ljava/awt/Graphics2D;", nullptr, 0, $field(PeekGraphics, mGraphics)},
	{"mPrinterJob", "Ljava/awt/print/PrinterJob;", nullptr, 0, $field(PeekGraphics, mPrinterJob)},
	{"mDrawingArea", "Lsun/java2d/Spans;", nullptr, $PRIVATE, $field(PeekGraphics, mDrawingArea)},
	{"mPrintMetrics", "Lsun/print/PeekMetrics;", nullptr, $PRIVATE, $field(PeekGraphics, mPrintMetrics)},
	{"mAWTDrawingOnly", "Z", nullptr, $PRIVATE, $field(PeekGraphics, mAWTDrawingOnly)},
	{}
};

$MethodInfo _PeekGraphics_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;)V", nullptr, $PUBLIC, $method(PeekGraphics, init$, void, $Graphics2D*, $PrinterJob*)},
	{"addDrawingRect", "(Ljava/awt/geom/Rectangle2D;FF)V", nullptr, $PRIVATE, $method(PeekGraphics, addDrawingRect, void, $Rectangle2D*, float, float)},
	{"addDrawingRect", "(FFFF)V", nullptr, $PRIVATE, $method(PeekGraphics, addDrawingRect, void, float, float, float, float)},
	{"addDrawingRect", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PRIVATE, $method(PeekGraphics, addDrawingRect, void, $Rectangle2D*)},
	{"addRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC, $virtualMethod(PeekGraphics, addRenderingHints, void, $Map*)},
	{"addStrokeShape", "(Ljava/awt/Shape;)V", nullptr, $PRIVATE, $method(PeekGraphics, addStrokeShape, void, $Shape*)},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, clearRect, void, int32_t, int32_t, int32_t, int32_t)},
	{"clip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, clip, void, $Shape*)},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, clipRect, void, int32_t, int32_t, int32_t, int32_t)},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, copyArea, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, create, $Graphics*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, dispose, void)},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, draw, void, $Shape*)},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawArc, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawGlyphVector, void, $GlyphVector*, float, float)},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, int32_t, int32_t, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $Color*, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, bool, $Image*, $AffineTransform*, $ImageObserver*)},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawImage, void, $BufferedImage*, $BufferedImageOp*, int32_t, int32_t)},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawLine, void, int32_t, int32_t, int32_t, int32_t)},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawOval, void, int32_t, int32_t, int32_t, int32_t)},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawPolygon, void, $ints*, $ints*, int32_t)},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawPolyline, void, $ints*, $ints*, int32_t)},
	{"drawRenderableImage", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawRenderableImage, void, $RenderableImage*, $AffineTransform*)},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawRenderedImage, void, $RenderedImage*, $AffineTransform*)},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawRoundRect, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawString, void, $String*, int32_t, int32_t)},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawString, void, $AttributedCharacterIterator*, int32_t, int32_t)},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawString, void, $AttributedCharacterIterator*, float, float)},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, drawString, void, $String*, float, float)},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fill, void, $Shape*)},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fillArc, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fillOval, void, int32_t, int32_t, int32_t, int32_t)},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fillPolygon, void, $ints*, $ints*, int32_t)},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fillRect, void, int32_t, int32_t, int32_t, int32_t)},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, fillRoundRect, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"finalize", "()V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, finalize, void)},
	{"getAWTDrawingOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getAWTDrawingOnly, bool)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getBackground, $Color*)},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getClip, $Shape*)},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getClipBounds, $Rectangle*)},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getColor, $Color*)},
	{"getComposite", "()Ljava/awt/Composite;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getComposite, $Composite*)},
	{"getDelegate", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getDelegate, $Graphics2D*)},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getDeviceConfiguration, $GraphicsConfiguration*)},
	{"getDrawingArea", "()Lsun/java2d/Spans;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getDrawingArea, $Spans*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getFont, $Font*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getFontMetrics, $FontMetrics*, $Font*)},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getFontRenderContext, $FontRenderContext*)},
	{"getImageHeight", "(Ljava/awt/Image;)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(PeekGraphics, getImageHeight, int32_t, $Image*)},
	{"getImageWidth", "(Ljava/awt/Image;)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(PeekGraphics, getImageWidth, int32_t, $Image*)},
	{"getMetrics", "()Lsun/print/PeekMetrics;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getMetrics, $PeekMetrics*)},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getPaint, $Paint*)},
	{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getPrinterJob, $PrinterJob*)},
	{"getRenderingHint", "(Ljava/awt/RenderingHints$Key;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getRenderingHint, $Object*, $RenderingHints$Key*)},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getRenderingHints, $RenderingHints*)},
	{"getStroke", "()Ljava/awt/Stroke;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getStroke, $Stroke*)},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, getTransform, $AffineTransform*)},
	{"hit", "(Ljava/awt/Rectangle;Ljava/awt/Shape;Z)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, hit, bool, $Rectangle*, $Shape*, bool)},
	{"hitsDrawingArea", "(Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, hitsDrawingArea, bool, $Rectangle*)},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PeekGraphics, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"rotate", "(D)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, rotate, void, double)},
	{"rotate", "(DDD)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, rotate, void, double, double, double)},
	{"scale", "(DD)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, scale, void, double, double)},
	{"setAWTDrawingOnly", "()V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setAWTDrawingOnly, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setBackground, void, $Color*)},
	{"setClip", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setClip, void, int32_t, int32_t, int32_t, int32_t)},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setClip, void, $Shape*)},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setColor, void, $Color*)},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setComposite, void, $Composite*)},
	{"setDelegate", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setDelegate, void, $Graphics2D*)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setFont, void, $Font*)},
	{"setPaint", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setPaint, void, $Paint*)},
	{"setPaintMode", "()V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setPaintMode, void)},
	{"setRenderingHint", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setRenderingHint, void, $RenderingHints$Key*, Object$*)},
	{"setRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC, $virtualMethod(PeekGraphics, setRenderingHints, void, $Map*)},
	{"setStroke", "(Ljava/awt/Stroke;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setStroke, void, $Stroke*)},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setTransform, void, $AffineTransform*)},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, setXORMode, void, $Color*)},
	{"shear", "(DD)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, shear, void, double, double)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, transform, void, $AffineTransform*)},
	{"translate", "(II)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, translate, void, int32_t, int32_t)},
	{"translate", "(DD)V", nullptr, $PUBLIC, $virtualMethod(PeekGraphics, translate, void, double, double)},
	{}
};

$InnerClassInfo _PeekGraphics_InnerClassesInfo_[] = {
	{"sun.print.PeekGraphics$ImageWaiter", "sun.print.PeekGraphics", "ImageWaiter", $PROTECTED},
	{}
};

$ClassInfo _PeekGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PeekGraphics",
	"java.awt.Graphics2D",
	"java.awt.print.PrinterGraphics,java.awt.image.ImageObserver,java.lang.Cloneable",
	_PeekGraphics_FieldInfo_,
	_PeekGraphics_MethodInfo_,
	nullptr,
	nullptr,
	_PeekGraphics_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.PeekGraphics$ImageWaiter"
};

$Object* allocate$PeekGraphics($Class* clazz) {
	return $of($alloc(PeekGraphics));
}

$String* PeekGraphics::toString() {
	 return this->$Graphics2D::toString();
}

int32_t PeekGraphics::hashCode() {
	 return this->$Graphics2D::hashCode();
}

bool PeekGraphics::equals(Object$* arg0) {
	 return this->$Graphics2D::equals(arg0);
}

$Object* PeekGraphics::clone() {
	 return this->$Graphics2D::clone();
}

void PeekGraphics::init$($Graphics2D* graphics, $PrinterJob* printerJob) {
	$Graphics2D::init$();
	$set(this, mDrawingArea, $new($Spans));
	$set(this, mPrintMetrics, $new($PeekMetrics));
	this->mAWTDrawingOnly = false;
	$set(this, mGraphics, graphics);
	$set(this, mPrinterJob, printerJob);
}

$Graphics2D* PeekGraphics::getDelegate() {
	return this->mGraphics;
}

void PeekGraphics::setDelegate($Graphics2D* graphics) {
	$set(this, mGraphics, graphics);
}

$PrinterJob* PeekGraphics::getPrinterJob() {
	return this->mPrinterJob;
}

void PeekGraphics::setAWTDrawingOnly() {
	this->mAWTDrawingOnly = true;
}

bool PeekGraphics::getAWTDrawingOnly() {
	return this->mAWTDrawingOnly;
}

$Spans* PeekGraphics::getDrawingArea() {
	return this->mDrawingArea;
}

$GraphicsConfiguration* PeekGraphics::getDeviceConfiguration() {
	return $nc(($cast($RasterPrinterJob, this->mPrinterJob)))->getPrinterGraphicsConfig();
}

$Graphics* PeekGraphics::create() {
	$var(PeekGraphics, newGraphics, nullptr);
	try {
		$assign(newGraphics, $cast(PeekGraphics, clone()));
		$set($nc(newGraphics), mGraphics, $cast($Graphics2D, $nc(this->mGraphics)->create()));
	} catch ($CloneNotSupportedException& e) {
	}
	return newGraphics;
}

void PeekGraphics::translate(int32_t x, int32_t y) {
	$nc(this->mGraphics)->translate(x, y);
}

void PeekGraphics::translate(double tx, double ty) {
	$nc(this->mGraphics)->translate(tx, ty);
}

void PeekGraphics::rotate(double theta) {
	$nc(this->mGraphics)->rotate(theta);
}

void PeekGraphics::rotate(double theta, double x, double y) {
	$nc(this->mGraphics)->rotate(theta, x, y);
}

void PeekGraphics::scale(double sx, double sy) {
	$nc(this->mGraphics)->scale(sx, sy);
}

void PeekGraphics::shear(double shx, double shy) {
	$nc(this->mGraphics)->shear(shx, shy);
}

$Color* PeekGraphics::getColor() {
	return $nc(this->mGraphics)->getColor();
}

void PeekGraphics::setColor($Color* c) {
	$nc(this->mGraphics)->setColor(c);
}

void PeekGraphics::setPaintMode() {
	$nc(this->mGraphics)->setPaintMode();
}

void PeekGraphics::setXORMode($Color* c1) {
	$nc(this->mGraphics)->setXORMode(c1);
}

$Font* PeekGraphics::getFont() {
	return $nc(this->mGraphics)->getFont();
}

void PeekGraphics::setFont($Font* font) {
	$nc(this->mGraphics)->setFont(font);
}

$FontMetrics* PeekGraphics::getFontMetrics($Font* f) {
	return $nc(this->mGraphics)->getFontMetrics(f);
}

$FontRenderContext* PeekGraphics::getFontRenderContext() {
	return $nc(this->mGraphics)->getFontRenderContext();
}

$Rectangle* PeekGraphics::getClipBounds() {
	return $nc(this->mGraphics)->getClipBounds();
}

void PeekGraphics::clipRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->clipRect(x, y, width, height);
}

void PeekGraphics::setClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->mGraphics)->setClip(x, y, width, height);
}

$Shape* PeekGraphics::getClip() {
	return $nc(this->mGraphics)->getClip();
}

void PeekGraphics::setClip($Shape* clip) {
	$nc(this->mGraphics)->setClip(clip);
}

void PeekGraphics::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) {
}

void PeekGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	addStrokeShape($$new($Line2D$Float, (float)x1, (float)y1, (float)x2, (float)y2));
	$nc(this->mPrintMetrics)->draw(this);
}

void PeekGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	addDrawingRect($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	$nc(this->mPrintMetrics)->fill(this);
}

void PeekGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle2D$Float, rect, $new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	addDrawingRect(rect);
	$nc(this->mPrintMetrics)->clear(this);
}

void PeekGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	addStrokeShape($$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
	$nc(this->mPrintMetrics)->draw(this);
}

void PeekGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$var($Rectangle2D$Float, rect, $new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	addDrawingRect(rect);
	$nc(this->mPrintMetrics)->fill(this);
}

void PeekGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	addStrokeShape($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	$nc(this->mPrintMetrics)->draw(this);
}

void PeekGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle2D$Float, rect, $new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	addDrawingRect(rect);
	$nc(this->mPrintMetrics)->fill(this);
}

void PeekGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	addStrokeShape($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	$nc(this->mPrintMetrics)->draw(this);
}

void PeekGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$var($Rectangle2D$Float, rect, $new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
	addDrawingRect(rect);
	$nc(this->mPrintMetrics)->fill(this);
}

void PeekGraphics::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (nPoints > 0) {
		int32_t x = $nc(xPoints)->get(0);
		int32_t y = $nc(yPoints)->get(0);
		for (int32_t i = 1; i < nPoints; ++i) {
			drawLine(x, y, xPoints->get(i), yPoints->get(i));
			x = xPoints->get(i);
			y = yPoints->get(i);
		}
	}
}

void PeekGraphics::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (nPoints > 0) {
		drawPolyline(xPoints, yPoints, nPoints);
		drawLine($nc(xPoints)->get(nPoints - 1), $nc(yPoints)->get(nPoints - 1), xPoints->get(0), yPoints->get(0));
	}
}

void PeekGraphics::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (nPoints > 0) {
		int32_t minX = $nc(xPoints)->get(0);
		int32_t minY = $nc(yPoints)->get(0);
		int32_t maxX = xPoints->get(0);
		int32_t maxY = yPoints->get(0);
		for (int32_t i = 1; i < nPoints; ++i) {
			if (xPoints->get(i) < minX) {
				minX = xPoints->get(i);
			} else if (xPoints->get(i) > maxX) {
				maxX = xPoints->get(i);
			}
			if (yPoints->get(i) < minY) {
				minY = yPoints->get(i);
			} else if (yPoints->get(i) > maxY) {
				maxY = yPoints->get(i);
			}
		}
		addDrawingRect((float)minX, (float)minY, (float)(maxX - minX), (float)(maxY - minY));
	}
	$nc(this->mPrintMetrics)->fill(this);
}

void PeekGraphics::drawString($String* str, int32_t x, int32_t y) {
	drawString(str, (float)x, (float)y);
}

void PeekGraphics::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	drawString(iterator, (float)x, (float)y);
}

void PeekGraphics::drawString($AttributedCharacterIterator* iterator, float x, float y) {
	$useLocalCurrentObjectStackCache();
	if (iterator == nullptr) {
		$throwNew($NullPointerException, "AttributedCharacterIterator is null"_s);
	}
	$var($TextLayout, layout, $new($TextLayout, iterator, $(getFontRenderContext())));
	layout->draw(this, x, y);
}

bool PeekGraphics::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	$var($PeekGraphics$ImageWaiter, dim, $new($PeekGraphics$ImageWaiter, this, img));
	float var$0 = (float)x;
	float var$1 = (float)y;
	float var$2 = (float)dim->getWidth();
	addDrawingRect(var$0, var$1, var$2, (float)dim->getHeight());
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, x, y, observer);
}

bool PeekGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	addDrawingRect((float)x, (float)y, (float)width, (float)height);
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, x, y, width, height, observer);
}

bool PeekGraphics::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	$var($PeekGraphics$ImageWaiter, dim, $new($PeekGraphics$ImageWaiter, this, img));
	float var$0 = (float)x;
	float var$1 = (float)y;
	float var$2 = (float)dim->getWidth();
	addDrawingRect(var$0, var$1, var$2, (float)dim->getHeight());
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, x, y, bgcolor, observer);
}

bool PeekGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	addDrawingRect((float)x, (float)y, (float)width, (float)height);
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, x, y, width, height, bgcolor, observer);
}

bool PeekGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	int32_t width = dx2 - dx1;
	int32_t height = dy2 - dy1;
	addDrawingRect((float)dx1, (float)dy1, (float)width, (float)height);
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
}

bool PeekGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	int32_t width = dx2 - dx1;
	int32_t height = dy2 - dy1;
	addDrawingRect((float)dx1, (float)dy1, (float)width, (float)height);
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
}

void PeekGraphics::drawRenderedImage($RenderedImage* img, $AffineTransform* xform) {
	if (img == nullptr) {
		return;
	}
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	$nc(this->mDrawingArea)->addInfinite();
}

void PeekGraphics::drawRenderableImage($RenderableImage* img, $AffineTransform* xform) {
	if (img == nullptr) {
		return;
	}
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	$nc(this->mDrawingArea)->addInfinite();
}

void PeekGraphics::dispose() {
	$nc(this->mGraphics)->dispose();
}

void PeekGraphics::finalize() {
}

void PeekGraphics::draw($Shape* s) {
	addStrokeShape(s);
	$nc(this->mPrintMetrics)->draw(this);
}

bool PeekGraphics::drawImage($Image* img, $AffineTransform* xform, $ImageObserver* obs) {
	if (img == nullptr) {
		return true;
	}
	$nc(this->mDrawingArea)->addInfinite();
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), img);
	return $nc(this->mGraphics)->drawImage(img, xform, obs);
}

void PeekGraphics::drawImage($BufferedImage* img, $BufferedImageOp* op, int32_t x, int32_t y) {
	if (img == nullptr) {
		return;
	}
	$nc(this->mPrintMetrics)->drawImage(static_cast<$Graphics2D*>(this), static_cast<$RenderedImage*>(img));
	$nc(this->mDrawingArea)->addInfinite();
}

void PeekGraphics::drawString($String* str, float x, float y) {
	$useLocalCurrentObjectStackCache();
	if ($nc(str)->length() == 0) {
		return;
	}
	$var($FontRenderContext, frc, getFontRenderContext());
	$var($Rectangle2D, bbox, $nc($(getFont()))->getStringBounds(str, frc));
	addDrawingRect(bbox, x, y);
	$nc(this->mPrintMetrics)->drawText(this);
}

void PeekGraphics::drawGlyphVector($GlyphVector* g, float x, float y) {
	$var($Rectangle2D, bbox, $nc(g)->getLogicalBounds());
	addDrawingRect(bbox, x, y);
	$nc(this->mPrintMetrics)->drawText(this);
}

void PeekGraphics::fill($Shape* s) {
	addDrawingRect($($nc(s)->getBounds()));
	$nc(this->mPrintMetrics)->fill(this);
}

bool PeekGraphics::hit($Rectangle* rect, $Shape* s, bool onStroke) {
	return $nc(this->mGraphics)->hit(rect, s, onStroke);
}

void PeekGraphics::setComposite($Composite* comp) {
	$nc(this->mGraphics)->setComposite(comp);
}

void PeekGraphics::setPaint($Paint* paint) {
	$nc(this->mGraphics)->setPaint(paint);
}

void PeekGraphics::setStroke($Stroke* s) {
	$nc(this->mGraphics)->setStroke(s);
}

void PeekGraphics::setRenderingHint($RenderingHints$Key* hintCategory, Object$* hintValue) {
	$nc(this->mGraphics)->setRenderingHint(hintCategory, hintValue);
}

$Object* PeekGraphics::getRenderingHint($RenderingHints$Key* hintCategory) {
	return $of($nc(this->mGraphics)->getRenderingHint(hintCategory));
}

void PeekGraphics::setRenderingHints($Map* hints) {
	$nc(this->mGraphics)->setRenderingHints(hints);
}

void PeekGraphics::addRenderingHints($Map* hints) {
	$nc(this->mGraphics)->addRenderingHints(hints);
}

$RenderingHints* PeekGraphics::getRenderingHints() {
	return $nc(this->mGraphics)->getRenderingHints();
}

void PeekGraphics::transform($AffineTransform* Tx) {
	$nc(this->mGraphics)->transform(Tx);
}

void PeekGraphics::setTransform($AffineTransform* Tx) {
	$nc(this->mGraphics)->setTransform(Tx);
}

$AffineTransform* PeekGraphics::getTransform() {
	return $nc(this->mGraphics)->getTransform();
}

$Paint* PeekGraphics::getPaint() {
	return $nc(this->mGraphics)->getPaint();
}

$Composite* PeekGraphics::getComposite() {
	return $nc(this->mGraphics)->getComposite();
}

void PeekGraphics::setBackground($Color* color) {
	$nc(this->mGraphics)->setBackground(color);
}

$Color* PeekGraphics::getBackground() {
	return $nc(this->mGraphics)->getBackground();
}

$Stroke* PeekGraphics::getStroke() {
	return $nc(this->mGraphics)->getStroke();
}

void PeekGraphics::clip($Shape* s) {
	$nc(this->mGraphics)->clip(s);
}

bool PeekGraphics::hitsDrawingArea($Rectangle* rect) {
	float var$0 = (float)$nc(rect)->getMinY();
	return $nc(this->mDrawingArea)->intersects(var$0, (float)rect->getMaxY());
}

$PeekMetrics* PeekGraphics::getMetrics() {
	return this->mPrintMetrics;
}

void PeekGraphics::addDrawingRect($Rectangle2D* rect, float x, float y) {
	float var$0 = (float)($nc(rect)->getX() + x);
	float var$1 = (float)(rect->getY() + y);
	float var$2 = (float)rect->getWidth();
	addDrawingRect(var$0, var$1, var$2, (float)rect->getHeight());
}

void PeekGraphics::addDrawingRect(float x, float y, float width, float height) {
	$var($Rectangle2D$Float, bbox, $new($Rectangle2D$Float, x, y, width, height));
	addDrawingRect(bbox);
}

void PeekGraphics::addDrawingRect($Rectangle2D* rect) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, matrix, getTransform());
	$var($Shape, transShape, $nc(matrix)->createTransformedShape(rect));
	$var($Rectangle2D, transRect, $nc(transShape)->getBounds2D());
	float var$0 = (float)$nc(transRect)->getMinY();
	$nc(this->mDrawingArea)->add(var$0, (float)transRect->getMaxY());
}

void PeekGraphics::addStrokeShape($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, transShape, $nc($(getStroke()))->createStrokedShape(s));
	addDrawingRect($($nc(transShape)->getBounds2D()));
}

bool PeekGraphics::imageUpdate($Image* img, int32_t infoFlags, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		bool gotInfo = false;
		if (((int32_t)(infoFlags & (uint32_t)($ImageObserver::WIDTH | $ImageObserver::HEIGHT))) != 0) {
			gotInfo = true;
			$of(this)->notify();
		}
		return gotInfo;
	}
}

int32_t PeekGraphics::getImageWidth($Image* img) {
	$synchronized(this) {
		while ($nc(img)->getWidth(this) == -1) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& e) {
			}
		}
		return $nc(img)->getWidth(this);
	}
}

int32_t PeekGraphics::getImageHeight($Image* img) {
	$synchronized(this) {
		while ($nc(img)->getHeight(this) == -1) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& e) {
			}
		}
		return $nc(img)->getHeight(this);
	}
}

PeekGraphics::PeekGraphics() {
}

$Class* PeekGraphics::load$($String* name, bool initialize) {
	$loadClass(PeekGraphics, name, initialize, &_PeekGraphics_ClassInfo_, allocate$PeekGraphics);
	return class$;
}

$Class* PeekGraphics::class$ = nullptr;

	} // print
} // sun