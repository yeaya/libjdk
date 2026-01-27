#include <sun/java2d/xr/XRSurfaceData$XRWindowSurfaceData.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT

using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRSurfaceData$XRWindowSurfaceData_FieldInfo_[] = {
	{"scale", "I", nullptr, $PROTECTED | $FINAL, $field(XRSurfaceData$XRWindowSurfaceData, scale)},
	{}
};

$MethodInfo _XRSurfaceData$XRWindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/xr/XRGraphicsConfig;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(XRSurfaceData$XRWindowSurfaceData, init$, void, $X11ComponentPeer*, $XRGraphicsConfig*, $SurfaceType*)},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, canSourceSendExposures, bool, int32_t, int32_t, int32_t, int32_t)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, getBounds, $Rectangle*)},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, getDefaultScaleX, double)},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, getDefaultScaleY, double)},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, getDestination, $Object*)},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, getReplacement, $SurfaceData*)},
	{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(XRSurfaceData$XRWindowSurfaceData, invalidate, void)},
	{}
};

$InnerClassInfo _XRSurfaceData$XRWindowSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRSurfaceData$XRWindowSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XRSurfaceData$XRWindowSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSurfaceData$XRWindowSurfaceData",
	"sun.java2d.xr.XRSurfaceData",
	nullptr,
	_XRSurfaceData$XRWindowSurfaceData_FieldInfo_,
	_XRSurfaceData$XRWindowSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_XRSurfaceData$XRWindowSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRSurfaceData"
};

$Object* allocate$XRSurfaceData$XRWindowSurfaceData($Class* clazz) {
	return $of($alloc(XRSurfaceData$XRWindowSurfaceData));
}

void XRSurfaceData$XRWindowSurfaceData::init$($X11ComponentPeer* peer, $XRGraphicsConfig* gc, $SurfaceType* sType) {
	$useLocalCurrentObjectStackCache();
	$var($X11ComponentPeer, var$0, peer);
	$var($XRGraphicsConfig, var$1, gc);
	$var($SurfaceType, var$2, sType);
	$var($ColorModel, var$3, $nc(peer)->getColorModel());
	$XRSurfaceData::init$(var$0, var$1, var$2, var$3, $nc($(peer->getColorModel()))->getPixelSize(), $Transparency::OPAQUE);
	this->scale = $nc(gc)->getScale();
	if (isXRDrawableValid()) {
		if ($nc($($nc(peer)->getColorModel()))->getPixelSize() == 32) {
			initXRender($XRUtils::getPictureFormatForTransparency($Transparency::TRANSLUCENT));
		} else {
			initXRender($XRUtils::getPictureFormatForTransparency($Transparency::OPAQUE));
		}
		makePipes();
	}
}

$SurfaceData* XRSurfaceData$XRWindowSurfaceData::getReplacement() {
	return $nc(this->peer)->getSurfaceData();
}

$Rectangle* XRSurfaceData$XRWindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = (r->y = 0);
	r->width *= this->scale;
	r->height *= this->scale;
	return r;
}

bool XRSurfaceData$XRWindowSurfaceData::canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {
	return true;
}

$Object* XRSurfaceData$XRWindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

void XRSurfaceData$XRWindowSurfaceData::invalidate() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			freeXSDOPicture(getNativeOps());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XRSurfaceData::invalidate();
}

double XRSurfaceData$XRWindowSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double XRSurfaceData$XRWindowSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

XRSurfaceData$XRWindowSurfaceData::XRSurfaceData$XRWindowSurfaceData() {
}

$Class* XRSurfaceData$XRWindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceData$XRWindowSurfaceData, name, initialize, &_XRSurfaceData$XRWindowSurfaceData_ClassInfo_, allocate$XRSurfaceData$XRWindowSurfaceData);
	return class$;
}

$Class* XRSurfaceData$XRWindowSurfaceData::class$ = nullptr;

		} // xr
	} // java2d
} // sun