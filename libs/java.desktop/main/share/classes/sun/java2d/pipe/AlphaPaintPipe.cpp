#include <sun/java2d/pipe/AlphaPaintPipe.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/AlphaPaintPipe$TileContext.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef OPAQUE
#undef TILE_SIZE

using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $AlphaPaintPipe$TileContext = ::sun::java2d::pipe::AlphaPaintPipe$TileContext;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace pipe {

$WeakReference* AlphaPaintPipe::cachedLastRaster = nullptr;
$WeakReference* AlphaPaintPipe::cachedLastColorModel = nullptr;
$WeakReference* AlphaPaintPipe::cachedLastData = nullptr;

void AlphaPaintPipe::init$() {
}

$Object* AlphaPaintPipe::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* abox) {
	$useLocalObjectStack();
	$var($ColorModel, var$0, $nc(sg)->getDeviceColorModel());
	$var($Rectangle2D, var$1, $nc(s)->getBounds2D());
	$var($AffineTransform, var$2, sg->cloneTransform());
	$var($PaintContext, paintContext, $nc($nc(sg)->paint)->createContext(var$0, devR, var$1, var$2, $(sg->getRenderingHints())));
	return $new($AlphaPaintPipe$TileContext, sg, paintContext);
}

bool AlphaPaintPipe::needTile(Object$* context, int32_t x, int32_t y, int32_t w, int32_t h) {
	return true;
}

void AlphaPaintPipe::renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($AlphaPaintPipe$TileContext, context, $cast($AlphaPaintPipe$TileContext, ctx));
	$var($PaintContext, paintCtxt, $nc(context)->paintCtxt);
	$var($SunGraphics2D, sg, context->sunG2D);
	$var($SurfaceData, dstData, context->dstData);
	$var($SurfaceData, srcData, nullptr);
	$var($Raster, lastRas, nullptr);
	if (context->lastData != nullptr && context->lastRaster != nullptr) {
		$assign(srcData, $cast($SurfaceData, context->lastData->get()));
		$assign(lastRas, $cast($Raster, $nc(context->lastRaster)->get()));
		if (srcData == nullptr || lastRas == nullptr) {
			$assign(srcData, nullptr);
			$assign(lastRas, nullptr);
		}
	}
	$var($ColorModel, paintModel, context->paintModel);
	for (int32_t rely = 0; rely < h; rely += AlphaPaintPipe::TILE_SIZE) {
		int32_t ty = y + rely;
		int32_t th = $Math::min(h - rely, AlphaPaintPipe::TILE_SIZE);
		for (int32_t relx = 0; relx < w; relx += AlphaPaintPipe::TILE_SIZE) {
			int32_t tx = x + relx;
			int32_t tw = $Math::min(w - relx, AlphaPaintPipe::TILE_SIZE);
			$var($Raster, srcRaster, $nc(paintCtxt)->getRaster(tx, ty, tw, th));
			bool var$0 = $nc(srcRaster)->getMinX() != 0;
			if (var$0 || (srcRaster->getMinY() != 0)) {
				$assign(srcRaster, srcRaster->createTranslatedChild(0, 0));
			}
			if (lastRas != srcRaster) {
				$assign(lastRas, srcRaster);
				$set(context, lastRaster, $new($WeakReference, lastRas));
				$var($BufferedImage, bImg, $new($BufferedImage, paintModel, $cast($WritableRaster, srcRaster), $nc(paintModel)->isAlphaPremultiplied(), nullptr));
				$assign(srcData, $BufImgSurfaceData::createData(bImg));
				$set(context, lastData, $new($WeakReference, srcData));
				$set(context, lastMask, nullptr);
				$set(context, lastBlit, nullptr);
			}
			if (atile == nullptr) {
				if (context->lastBlit == nullptr) {
					$var($CompositeType, comptype, $nc(sg)->imageComp);
					$init($CompositeType);
					bool var$1 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
					if (var$1 && $nc(paintModel)->getTransparency() == $Transparency::OPAQUE) {
						$assign(comptype, $CompositeType::SrcNoEa);
					}
					$var($SurfaceType, var$2, $nc(srcData)->getSurfaceType());
					$set(context, lastBlit, $Blit::getFromCache(var$2, comptype, $($nc(dstData)->getSurfaceType())));
				}
				$nc(context->lastBlit)->Blit$(srcData, dstData, $nc(sg)->composite, nullptr, 0, 0, tx, ty, tw, th);
			} else {
				if (context->lastMask == nullptr) {
					$var($CompositeType, comptype, $nc(sg)->imageComp);
					$init($CompositeType);
					bool var$3 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
					if (var$3 && $nc(paintModel)->getTransparency() == $Transparency::OPAQUE) {
						$assign(comptype, $CompositeType::SrcNoEa);
					}
					$var($SurfaceType, var$4, $nc(srcData)->getSurfaceType());
					$set(context, lastMask, $MaskBlit::getFromCache(var$4, comptype, $($nc(dstData)->getSurfaceType())));
				}
				int32_t toff = offset + rely * tilesize + relx;
				$nc(context->lastMask)->MaskBlit$(srcData, dstData, $nc(sg)->composite, nullptr, 0, 0, tx, ty, tw, th, atile, toff, tilesize);
			}
		}
	}
}

void AlphaPaintPipe::skipTile(Object$* context, int32_t x, int32_t y) {
	return;
}

void AlphaPaintPipe::endSequence(Object$* ctx) {
	$var($AlphaPaintPipe$TileContext, context, $cast($AlphaPaintPipe$TileContext, ctx));
	if ($nc(context)->paintCtxt != nullptr) {
		context->paintCtxt->dispose();
	}
	$synchronized(AlphaPaintPipe::class$) {
		if (context->lastData != nullptr) {
			$assignStatic(AlphaPaintPipe::cachedLastRaster, context->lastRaster);
			if (AlphaPaintPipe::cachedLastColorModel == nullptr || !$equals(AlphaPaintPipe::cachedLastColorModel->get(), context->paintModel)) {
				$assignStatic(AlphaPaintPipe::cachedLastColorModel, $new($WeakReference, context->paintModel));
			}
			$assignStatic(AlphaPaintPipe::cachedLastData, context->lastData);
		}
	}
}

AlphaPaintPipe::AlphaPaintPipe() {
}

$Class* AlphaPaintPipe::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cachedLastRaster", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $STATIC, $staticField(AlphaPaintPipe, cachedLastRaster)},
		{"cachedLastColorModel", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/ColorModel;>;", $STATIC, $staticField(AlphaPaintPipe, cachedLastColorModel)},
		{"cachedLastData", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $STATIC, $staticField(AlphaPaintPipe, cachedLastData)},
		{"TILE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlphaPaintPipe, TILE_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlphaPaintPipe, init$, void)},
		{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AlphaPaintPipe, endSequence, void, Object$*)},
		{"needTile", "(Ljava/lang/Object;IIII)Z", nullptr, $PUBLIC, $virtualMethod(AlphaPaintPipe, needTile, bool, Object$*, int32_t, int32_t, int32_t, int32_t)},
		{"renderPathTile", "(Ljava/lang/Object;[BIIIIII)V", nullptr, $PUBLIC, $virtualMethod(AlphaPaintPipe, renderPathTile, void, Object$*, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"skipTile", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $virtualMethod(AlphaPaintPipe, skipTile, void, Object$*, int32_t, int32_t)},
		{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AlphaPaintPipe, startSequence, $Object*, $SunGraphics2D*, $Shape*, $Rectangle*, $ints*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.AlphaPaintPipe$TileContext", "sun.java2d.pipe.AlphaPaintPipe", "TileContext", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.pipe.AlphaPaintPipe",
		"java.lang.Object",
		"sun.java2d.pipe.CompositePipe",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.pipe.AlphaPaintPipe$TileContext"
	};
	$loadClass(AlphaPaintPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlphaPaintPipe);
	});
	return class$;
}

$Class* AlphaPaintPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun