#include <sun/java2d/opengl/OGLPaints$Texture.h>
#include <java/awt/Color.h>
#include <java/awt/Paint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/image/BufferedImage.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLPaints$Texture::init$() {
	$OGLPaints::init$();
}

bool OGLPaints$Texture::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($OGLSurfaceData, dstData, $cast($OGLSurfaceData, sg2d->surfaceData));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	if (!$nc(dstData)->isTexNonPow2Available()) {
		int32_t imgw = $nc(bi)->getWidth();
		int32_t imgh = bi->getHeight();
		if ((imgw & (imgw - 1)) != 0 || (imgh & (imgh - 1)) != 0) {
			return false;
		}
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($OGLSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($OGLSurfaceData, srcData))) {
			return false;
		}
	}
	$var($OGLSurfaceData, oglData, $cast($OGLSurfaceData, srcData));
	if ($nc(oglData)->getType() != $OGLSurfaceData::TEXTURE) {
		return false;
	}
	return true;
}

OGLPaints$Texture::OGLPaints$Texture() {
}

$Class* OGLPaints$Texture::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OGLPaints$Texture, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(OGLPaints$Texture, isPaintValid, bool, $SunGraphics2D*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLPaints$Texture", "sun.java2d.opengl.OGLPaints", "Texture", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLPaints$Texture",
		"sun.java2d.opengl.OGLPaints",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLPaints"
	};
	$loadClass(OGLPaints$Texture, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLPaints$Texture);
	});
	return class$;
}

$Class* OGLPaints$Texture::class$ = nullptr;

		} // opengl
	} // java2d
} // sun