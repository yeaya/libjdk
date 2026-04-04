#include <sun/java2d/x11/XSurfaceData.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace x11 {

bool XSurfaceData::isX11SurfaceDataInitialized$ = false;

bool XSurfaceData::isX11SurfaceDataInitialized() {
	$init(XSurfaceData);
	return XSurfaceData::isX11SurfaceDataInitialized$;
}

void XSurfaceData::setX11SurfaceDataInitialized() {
	$init(XSurfaceData);
	XSurfaceData::isX11SurfaceDataInitialized$ = true;
}

void XSurfaceData::init$($SurfaceType* surfaceType, $ColorModel* cm) {
	$SurfaceData::init$(surfaceType, cm);
}

void XSurfaceData::initOps($X11ComponentPeer* peer, $X11GraphicsConfig* gc, int32_t depth) {
	$prepareNative(initOps, void, $X11ComponentPeer* peer, $X11GraphicsConfig* gc, int32_t depth);
	$invokeNative(peer, gc, depth);
	$finishNative();
}

int64_t XSurfaceData::XCreateGC(int64_t pXSData) {
	$init(XSurfaceData);
	$prepareNativeStatic(XCreateGC, int64_t, int64_t pXSData);
	int64_t $ret = $invokeNativeStatic(pXSData);
	$finishNativeStatic();
	return $ret;
}

void XSurfaceData::XResetClip(int64_t xgc) {
	$init(XSurfaceData);
	$prepareNativeStatic(XResetClip, void, int64_t xgc);
	$invokeNativeStatic(xgc);
	$finishNativeStatic();
}

void XSurfaceData::XSetClip(int64_t xgc, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* complexclip) {
	$init(XSurfaceData);
	$prepareNativeStatic(XSetClip, void, int64_t xgc, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* complexclip);
	$invokeNativeStatic(xgc, lox, loy, hix, hiy, complexclip);
	$finishNativeStatic();
}

void XSurfaceData::flushNativeSurface() {
	$prepareNative(flushNativeSurface, void);
	$invokeNative();
	$finishNative();
}

bool XSurfaceData::isDrawableValid() {
	$prepareNative(isDrawableValid, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void XSurfaceData::setInvalid() {
	$prepareNative(setInvalid, void);
	$invokeNative();
	$finishNative();
}

void XSurfaceData::XSetGraphicsExposures(int64_t xgc, bool needExposures) {
	$init(XSurfaceData);
	$prepareNativeStatic(XSetGraphicsExposures, void, int64_t xgc, bool needExposures);
	$invokeNativeStatic(xgc, needExposures);
	$finishNativeStatic();
}

void XSurfaceData::clinit$($Class* clazz) {
	XSurfaceData::isX11SurfaceDataInitialized$ = false;
}

XSurfaceData::XSurfaceData() {
}

$Class* XSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isX11SurfaceDataInitialized", "Z", nullptr, $STATIC, $staticField(XSurfaceData, isX11SurfaceDataInitialized$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(XSurfaceData, init$, void, $SurfaceType*, $ColorModel*)},
		{"XCreateGC", "(J)J", nullptr, $PROTECTED | $STATIC | $NATIVE, $staticMethod(XSurfaceData, XCreateGC, int64_t, int64_t)},
		{"XResetClip", "(J)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $staticMethod(XSurfaceData, XResetClip, void, int64_t)},
		{"XSetClip", "(JIIIILsun/java2d/pipe/Region;)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $staticMethod(XSurfaceData, XSetClip, void, int64_t, int32_t, int32_t, int32_t, int32_t, $Region*)},
		{"XSetGraphicsExposures", "(JZ)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $staticMethod(XSurfaceData, XSetGraphicsExposures, void, int64_t, bool)},
		{"flushNativeSurface", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(XSurfaceData, flushNativeSurface, void)},
		{"initOps", "(Lsun/awt/X11ComponentPeer;Lsun/awt/X11GraphicsConfig;I)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(XSurfaceData, initOps, void, $X11ComponentPeer*, $X11GraphicsConfig*, int32_t)},
		{"isDrawableValid", "()Z", nullptr, $PROTECTED | $NATIVE, $virtualMethod(XSurfaceData, isDrawableValid, bool)},
		{"isX11SurfaceDataInitialized", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSurfaceData, isX11SurfaceDataInitialized, bool)},
		{"setInvalid", "()V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(XSurfaceData, setInvalid, void)},
		{"setX11SurfaceDataInitialized", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(XSurfaceData, setX11SurfaceDataInitialized, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.java2d.x11.XSurfaceData",
		"sun.java2d.SurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSurfaceData, name, initialize, &classInfo$$, XSurfaceData::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(XSurfaceData));
	});
	return class$;
}

$Class* XSurfaceData::class$ = nullptr;

		} // x11
	} // java2d
} // sun