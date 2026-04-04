#include <sun/awt/X11ComponentPeer.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {

$Class* X11ComponentPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getBounds, $Rectangle*)},
		{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getColorModel, $ColorModel*)},
		{"getContentWindow", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getContentWindow, int64_t)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getGraphics, $Graphics*)},
		{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getGraphicsConfiguration, $GraphicsConfiguration*)},
		{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getSurfaceData, $SurfaceData*)},
		{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getTarget, $Object*)},
		{"getWindow", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, getWindow, int64_t)},
		{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X11ComponentPeer, setFullScreenExclusiveModeState, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11ComponentPeer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(X11ComponentPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11ComponentPeer);
	});
	return class$;
}

$Class* X11ComponentPeer::class$ = nullptr;

	} // awt
} // sun