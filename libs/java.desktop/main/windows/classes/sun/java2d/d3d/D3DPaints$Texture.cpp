#include <sun/java2d/d3d/D3DPaints$Texture.h>
#include <java/awt/Color.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Paint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/image/BufferedImage.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DPaints$Texture::init$() {
	$D3DPaints::init$();
}

bool D3DPaints$Texture::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($D3DSurfaceData, dstData, $cast($D3DSurfaceData, sg2d->surfaceData));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $$nc($nc(dstData)->getDeviceConfiguration())->getDevice()));
	int32_t imgw = $nc(bi)->getWidth();
	int32_t imgh = bi->getHeight();
	if (!$nc(gd)->isCapPresent(32)) {
		if ((imgw & (imgw - 1)) != 0 || (imgh & (imgh - 1)) != 0) {
			return false;
		}
	}
	if (!gd->isCapPresent(64) && imgw != imgh) {
		return false;
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($D3DSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($D3DSurfaceData, srcData))) {
			return false;
		}
	}
	$var($D3DSurfaceData, d3dData, $cast($D3DSurfaceData, srcData));
	if ($nc(d3dData)->getType() != $D3DSurfaceData::TEXTURE) {
		return false;
	}
	return true;
}

D3DPaints$Texture::D3DPaints$Texture() {
}

$Class* D3DPaints$Texture::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(D3DPaints$Texture, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC, $virtualMethod(D3DPaints$Texture, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.d3d.D3DPaints$Texture", "sun.java2d.d3d.D3DPaints", "Texture", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.d3d.D3DPaints$Texture",
		"sun.java2d.d3d.D3DPaints",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.d3d.D3DPaints"
	};
	$loadClass(D3DPaints$Texture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DPaints$Texture);
	});
	return class$;
}

$Class* D3DPaints$Texture::class$ = nullptr;

		} // d3d
	} // java2d
} // sun