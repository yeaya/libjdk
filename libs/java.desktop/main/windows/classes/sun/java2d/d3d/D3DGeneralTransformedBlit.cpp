#include <sun/java2d/d3d/D3DGeneralTransformedBlit.h>
#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

void D3DGeneralTransformedBlit::init$($TransformBlit* performop) {
	$init($SurfaceType);
	$init($CompositeType);
	$init($D3DSurfaceData);
	$TransformBlit::init$($SurfaceType::Any, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
	$set(this, performop, performop);
}

void D3DGeneralTransformedBlit::Transform($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($SurfaceData, src, src$renamed);
		$init($CompositeType);
		$init($SurfaceType);
		$var($Blit, convertsrc, $Blit::getFromCache($($nc(src)->getSurfaceType()), $CompositeType::SrcNoEa, $SurfaceType::IntArgbPre));
		$var($SurfaceData, cachedSrc, this->srcTmp != nullptr ? $cast($SurfaceData, this->srcTmp->get()) : ($SurfaceData*)nullptr);
		$assign(src, convertFrom(convertsrc, src, srcx, srcy, width, height, cachedSrc, $BufferedImage::TYPE_INT_ARGB_PRE));
		$nc(this->performop)->Transform(src, dst, comp, clip, at, hint, 0, 0, dstx, dsty, width, height);
		if (src != cachedSrc) {
			$set(this, srcTmp, $new($WeakReference, src));
		}
	}
}

D3DGeneralTransformedBlit::D3DGeneralTransformedBlit() {
}

$Class* D3DGeneralTransformedBlit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"performop", "Lsun/java2d/loops/TransformBlit;", nullptr, $PRIVATE | $FINAL, $field(D3DGeneralTransformedBlit, performop)},
		{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(D3DGeneralTransformedBlit, srcTmp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/TransformBlit;)V", nullptr, 0, $method(D3DGeneralTransformedBlit, init$, void, $TransformBlit*)},
		{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(D3DGeneralTransformedBlit, Transform, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, $AffineTransform*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.d3d.D3DGeneralTransformedBlit",
		"sun.java2d.loops.TransformBlit",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(D3DGeneralTransformedBlit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3DGeneralTransformedBlit);
	});
	return class$;
}

$Class* D3DGeneralTransformedBlit::class$ = nullptr;

		} // d3d
	} // java2d
} // sun