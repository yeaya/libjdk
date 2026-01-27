#include <sun/lwawt/LWGraphicsConfig.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

$MethodInfo _LWGraphicsConfig_MethodInfo_[] = {
	{"assertOperationSupported", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, assertOperationSupported, void, int32_t, $BufferCapabilities*), "java.awt.AWTException"},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, createAcceleratedImage, $Image*, $Component*, int32_t, int32_t)},
	{"createBackBuffer", "(Lsun/lwawt/LWComponentPeer;)Ljava/awt/Image;", "(Lsun/lwawt/LWComponentPeer<**>;)Ljava/awt/Image;", $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, createBackBuffer, $Image*, $LWComponentPeer*)},
	{"destroyBackBuffer", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, destroyBackBuffer, void, $Image*)},
	{"flip", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", "(Lsun/lwawt/LWComponentPeer<**>;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, flip, void, $LWComponentPeer*, $Image*, int32_t, int32_t, int32_t, int32_t, $BufferCapabilities$FlipContents*)},
	{"getMaxTextureHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, getMaxTextureHeight, int32_t)},
	{"getMaxTextureWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LWGraphicsConfig, getMaxTextureWidth, int32_t)},
	{}
};

$ClassInfo _LWGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.LWGraphicsConfig",
	nullptr,
	nullptr,
	nullptr,
	_LWGraphicsConfig_MethodInfo_
};

$Object* allocate$LWGraphicsConfig($Class* clazz) {
	return $of($alloc(LWGraphicsConfig));
}

$Class* LWGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(LWGraphicsConfig, name, initialize, &_LWGraphicsConfig_ClassInfo_, allocate$LWGraphicsConfig);
	return class$;
}

$Class* LWGraphicsConfig::class$ = nullptr;

	} // lwawt
} // sun