#include <sun/java2d/NullSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/NullPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <jcpp.h>

#undef IMMUTABLE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $NullPipe = ::sun::java2d::pipe::NullPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;

namespace sun {
	namespace java2d {

$FieldInfo _NullSurfaceData_FieldInfo_[] = {
	{"theInstance", "Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NullSurfaceData, theInstance)},
	{"nullpipe", "Lsun/java2d/pipe/NullPipe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NullSurfaceData, nullpipe)},
	{}
};

$MethodInfo _NullSurfaceData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NullSurfaceData, init$, void)},
	{"checkCustomComposite", "()V", nullptr, $PROTECTED, $virtualMethod(NullSurfaceData, checkCustomComposite, void)},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, copyArea, bool, $SunGraphics2D*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, getBounds, $Rectangle*)},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, getDestination, $Object*)},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, getDeviceConfiguration, $GraphicsConfiguration*)},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, getRaster, $Raster*, int32_t, int32_t, int32_t, int32_t)},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, getReplacement, $SurfaceData*)},
	{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, invalidate, void)},
	{"pixelFor", "(I)I", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, pixelFor, int32_t, int32_t)},
	{"rgbFor", "(I)I", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, rgbFor, int32_t, int32_t)},
	{"useTightBBoxes", "()Z", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, useTightBBoxes, bool)},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC, $virtualMethod(NullSurfaceData, validatePipe, void, $SunGraphics2D*)},
	{}
};

$ClassInfo _NullSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.NullSurfaceData",
	"sun.java2d.SurfaceData",
	nullptr,
	_NullSurfaceData_FieldInfo_,
	_NullSurfaceData_MethodInfo_
};

$Object* allocate$NullSurfaceData($Class* clazz) {
	return $of($alloc(NullSurfaceData));
}

$SurfaceData* NullSurfaceData::theInstance = nullptr;
$NullPipe* NullSurfaceData::nullpipe = nullptr;

void NullSurfaceData::init$() {
	$init($StateTrackable$State);
	$init($SurfaceType);
	$SurfaceData::init$($StateTrackable$State::IMMUTABLE, $SurfaceType::Any, $($ColorModel::getRGBdefault()));
}

void NullSurfaceData::invalidate() {
}

$SurfaceData* NullSurfaceData::getReplacement() {
	return this;
}

void NullSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$set($nc(sg2d), drawpipe, NullSurfaceData::nullpipe);
	$set(sg2d, fillpipe, NullSurfaceData::nullpipe);
	$set(sg2d, shapepipe, NullSurfaceData::nullpipe);
	$set(sg2d, textpipe, NullSurfaceData::nullpipe);
	$set(sg2d, imagepipe, NullSurfaceData::nullpipe);
}

$GraphicsConfiguration* NullSurfaceData::getDeviceConfiguration() {
	return nullptr;
}

$Raster* NullSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InvalidPipeException, "should be NOP"_s);
	$shouldNotReachHere();
}

bool NullSurfaceData::useTightBBoxes() {
	return false;
}

int32_t NullSurfaceData::pixelFor(int32_t rgb) {
	return rgb;
}

int32_t NullSurfaceData::rgbFor(int32_t pixel) {
	return pixel;
}

$Rectangle* NullSurfaceData::getBounds() {
	return $new($Rectangle);
}

void NullSurfaceData::checkCustomComposite() {
	return;
}

bool NullSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	return true;
}

$Object* NullSurfaceData::getDestination() {
	return $of(nullptr);
}

void clinit$NullSurfaceData($Class* class$) {
	$assignStatic(NullSurfaceData::theInstance, $new(NullSurfaceData));
	$assignStatic(NullSurfaceData::nullpipe, $new($NullPipe));
}

NullSurfaceData::NullSurfaceData() {
}

$Class* NullSurfaceData::load$($String* name, bool initialize) {
	$loadClass(NullSurfaceData, name, initialize, &_NullSurfaceData_ClassInfo_, clinit$NullSurfaceData, allocate$NullSurfaceData);
	return class$;
}

$Class* NullSurfaceData::class$ = nullptr;

	} // java2d
} // sun