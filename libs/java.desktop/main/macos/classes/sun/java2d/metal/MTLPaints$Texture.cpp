#include <sun/java2d/metal/MTLPaints$Texture.h>
#include <java/awt/Color.h>
#include <java/awt/Paint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/image/BufferedImage.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <jcpp.h>

#undef TEXTURE
#undef TRANSFORM_ISIDENT

using $Color = ::java::awt::Color;
using $TexturePaint = ::java::awt::TexturePaint;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MTLPaints = ::sun::java2d::metal::MTLPaints;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLPaints$Texture::init$() {
	$MTLPaints::init$();
}

bool MTLPaints$Texture::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($MTLSurfaceData, dstData, $cast($MTLSurfaceData, sg2d->surfaceData));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($MTLSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($MTLSurfaceData, srcData))) {
			return false;
		}
	}
	$var($MTLSurfaceData, mtlData, $cast($MTLSurfaceData, srcData));
	if ($nc(mtlData)->getType() != $MTLSurfaceData::TEXTURE) {
		return false;
	}
	return true;
}

MTLPaints$Texture::MTLPaints$Texture() {
}

$Class* MTLPaints$Texture::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MTLPaints$Texture, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(MTLPaints$Texture, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLPaints$Texture", "sun.java2d.metal.MTLPaints", "Texture", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLPaints$Texture",
		"sun.java2d.metal.MTLPaints",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLPaints"
	};
	$loadClass(MTLPaints$Texture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLPaints$Texture);
	});
	return class$;
}

$Class* MTLPaints$Texture::class$ = nullptr;

		} // metal
	} // java2d
} // sun