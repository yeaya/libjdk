#include <sun/java2d/xr/XRBackend.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/util/List.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/XRColor.h>
#include <jcpp.h>

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $GlyphList = ::sun::font::GlyphList;
using $Region = ::sun::java2d::pipe::Region;
using $GrowableEltArray = ::sun::java2d::xr::GrowableEltArray;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $XRColor = ::sun::java2d::xr::XRColor;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRBackend_MethodInfo_[] = {
	{"GCRectangles", "(IJLsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, GCRectangles, void, int32_t, int64_t, $GrowableRectArray*)},
	{"XRenderAddGlyphs", "(ILsun/font/GlyphList;Ljava/util/List;[B)V", "(ILsun/font/GlyphList;Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;[B)V", $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, XRenderAddGlyphs, void, int32_t, $GlyphList*, $List*, $bytes*)},
	{"XRenderCompositeText", "(BIIIIIIIILsun/java2d/xr/GrowableEltArray;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, XRenderCompositeText, void, int8_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $GrowableEltArray*)},
	{"XRenderCreateGlyphSet", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, XRenderCreateGlyphSet, int32_t, int32_t)},
	{"XRenderFreeGlyphs", "(I[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, XRenderFreeGlyphs, void, int32_t, $ints*)},
	{"copyArea", "(IIJIIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, copyArea, void, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"createGC", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, createGC, int64_t, int32_t)},
	{"createLinearGradient", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, createLinearGradient, int32_t, $Point2D*, $Point2D*, $floats*, $ints*, int32_t)},
	{"createPicture", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, createPicture, int32_t, int32_t, int32_t)},
	{"createPixmap", "(IIII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, createPixmap, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"createRadialGradient", "(FFFF[F[II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, createRadialGradient, int32_t, float, float, float, float, $floats*, $ints*, int32_t)},
	{"freeGC", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, freeGC, void, int64_t)},
	{"freePicture", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, freePicture, void, int32_t)},
	{"freePixmap", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, freePixmap, void, int32_t)},
	{"putMaskImage", "(IJ[BIIIIIIIIF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, putMaskImage, void, int32_t, int64_t, $bytes*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float)},
	{"renderComposite", "(BIIIIIIIIIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, renderComposite, void, int8_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"renderRectangle", "(IBLsun/java2d/xr/XRColor;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, renderRectangle, void, int32_t, int8_t, $XRColor*, int32_t, int32_t, int32_t, int32_t)},
	{"renderRectangles", "(IBLsun/java2d/xr/XRColor;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, renderRectangles, void, int32_t, int8_t, $XRColor*, $GrowableRectArray*)},
	{"setClipRectangles", "(ILsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setClipRectangles, void, int32_t, $Region*)},
	{"setFilter", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setFilter, void, int32_t, int32_t)},
	{"setGCClipRectangles", "(JLsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setGCClipRectangles, void, int64_t, $Region*)},
	{"setGCExposures", "(JZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setGCExposures, void, int64_t, bool)},
	{"setGCForeground", "(JI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setGCForeground, void, int64_t, int32_t)},
	{"setGCMode", "(JZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setGCMode, void, int64_t, bool)},
	{"setPictureRepeat", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setPictureRepeat, void, int32_t, int32_t)},
	{"setPictureTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XRBackend, setPictureTransform, void, int32_t, $AffineTransform*)},
	{}
};

$ClassInfo _XRBackend_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.xr.XRBackend",
	nullptr,
	nullptr,
	nullptr,
	_XRBackend_MethodInfo_
};

$Object* allocate$XRBackend($Class* clazz) {
	return $of($alloc(XRBackend));
}

$Class* XRBackend::load$($String* name, bool initialize) {
	$loadClass(XRBackend, name, initialize, &_XRBackend_ClassInfo_, allocate$XRBackend);
	return class$;
}

$Class* XRBackend::class$ = nullptr;

		} // xr
	} // java2d
} // sun