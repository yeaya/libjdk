#include <sun/lwawt/macosx/CPrinterSurfaceData.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/PageFormat.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <sun/java2d/OSXSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/lwawt/macosx/CPrinterGraphicsConfig.h>
#include <jcpp.h>

#undef DESC_INT_RGB_PQ
#undef TYPE_INT_ARGB_PRE

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $OSXSurfaceData = ::sun::java2d::OSXSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $CPrinterGraphicsConfig = ::sun::lwawt::macosx::CPrinterGraphicsConfig;

namespace sun {
	namespace lwawt {
		namespace macosx {

$String* CPrinterSurfaceData::DESC_INT_RGB_PQ = nullptr;
$SurfaceType* CPrinterSurfaceData::IntRgbPQ = nullptr;

$SurfaceData* CPrinterSurfaceData::createData($PageFormat* pf, int64_t context) {
	$init(CPrinterSurfaceData);
	return $new(CPrinterSurfaceData, $($CPrinterGraphicsConfig::getConfig(pf)), context);
}

void CPrinterSurfaceData::init$($GraphicsConfiguration* gc, int64_t context) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, CPrinterSurfaceData::IntRgbPQ);
	$var($ColorModel, var$1, $nc(gc)->getColorModel());
	$OSXSurfaceData::init$(var$0, var$1, gc, $(gc->getBounds()));
	$var($ByteBuffer, var$2, this->fGraphicsStates);
	$var($ObjectArray, var$3, this->fGraphicsStatesObject);
	int32_t var$4 = $nc($(gc->getBounds()))->width;
	initOps(context, var$2, var$3, var$4, $nc($(gc->getBounds()))->height);
}

$SurfaceData* CPrinterSurfaceData::getReplacement() {
	return this;
}

void CPrinterSurfaceData::initOps(int64_t context, $ByteBuffer* byteParameters, $ObjectArray* objectParameters, int32_t width, int32_t height) {
	$prepareNative(initOps, void, int64_t context, $ByteBuffer* byteParameters, $ObjectArray* objectParameters, int32_t width, int32_t height);
	$invokeNative(context, byteParameters, objectParameters, width, height);
	$finishNative();
}

void CPrinterSurfaceData::enableFlushing() {
	_flush();
}

void CPrinterSurfaceData::_flush() {
	$prepareNative(_flush, void);
	$invokeNative();
	$finishNative();
}

$Object* CPrinterSurfaceData::getDestination() {
	return nullptr;
}

$Raster* CPrinterSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($BufferedImage, dstImage, $new($BufferedImage, x + w, y + h, $BufferedImage::TYPE_INT_ARGB_PRE));
	return dstImage->getRaster();
}

$BufferedImage* CPrinterSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, $BufferedImage* dstImage$renamed) {
	$useLocalObjectStack();
	$var($BufferedImage, dstImage, dstImage$renamed);
	if (dstImage == nullptr) {
		$assign(dstImage, $$nc(getDeviceConfiguration())->createCompatibleImage(w, h));
	}
	$var($Graphics, g, $nc(dstImage)->createGraphics());
	$var($BufferedImage, thisImage, getCompositingImage(w, h));
	$nc(g)->drawImage(thisImage, 0, 0, w, h, x, y, x + w, y + h, nullptr);
	g->dispose();
	return dstImage;
}

bool CPrinterSurfaceData::xorSurfacePixels($SunGraphics2D* sg2d, $BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

void CPrinterSurfaceData::clinit$($Class* clazz) {
	$assignStatic(CPrinterSurfaceData::DESC_INT_RGB_PQ, "Integer RGB Printer Quartz"_s);
	$init($SurfaceType);
	$assignStatic(CPrinterSurfaceData::IntRgbPQ, $nc($SurfaceType::IntRgb)->deriveSubType(CPrinterSurfaceData::DESC_INT_RGB_PQ));
}

CPrinterSurfaceData::CPrinterSurfaceData() {
}

$Class* CPrinterSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DESC_INT_RGB_PQ", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPrinterSurfaceData, DESC_INT_RGB_PQ)},
		{"IntRgbPQ", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPrinterSurfaceData, IntRgbPQ)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsConfiguration;J)V", nullptr, $PRIVATE, $method(CPrinterSurfaceData, init$, void, $GraphicsConfiguration*, int64_t)},
		{"_flush", "()V", nullptr, $NATIVE, $virtualMethod(CPrinterSurfaceData, _flush, void)},
		{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIILjava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, copyArea, $BufferedImage*, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, $BufferedImage*)},
		{"createData", "(Ljava/awt/print/PageFormat;J)Lsun/java2d/SurfaceData;", nullptr, $STATIC, $staticMethod(CPrinterSurfaceData, createData, $SurfaceData*, $PageFormat*, int64_t)},
		{"enableFlushing", "()V", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, enableFlushing, void)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, getDestination, $Object*)},
		{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, getRaster, $Raster*, int32_t, int32_t, int32_t, int32_t)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, getReplacement, $SurfaceData*)},
		{"initOps", "(JLjava/nio/ByteBuffer;[Ljava/lang/Object;II)V", nullptr, $PRIVATE | $NATIVE, $method(CPrinterSurfaceData, initOps, void, int64_t, $ByteBuffer*, $ObjectArray*, int32_t, int32_t)},
		{"xorSurfacePixels", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(CPrinterSurfaceData, xorSurfacePixels, bool, $SunGraphics2D*, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CPrinterSurfaceData",
		"sun.java2d.OSXSurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPrinterSurfaceData, name, initialize, &classInfo$$, CPrinterSurfaceData::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CPrinterSurfaceData));
	});
	return class$;
}

$Class* CPrinterSurfaceData::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun