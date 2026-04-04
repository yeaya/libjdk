#include <sun/awt/image/SurfaceManager$ImageCapabilitiesGc.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceManager$ProxiedGraphicsConfig = ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;

namespace sun {
	namespace awt {
		namespace image {

void SurfaceManager$ImageCapabilitiesGc::init$($SurfaceManager* this$0, $GraphicsConfiguration* gc) {
	$set(this, this$0, this$0);
	$ImageCapabilities::init$(false);
	$set(this, gc, gc);
}

bool SurfaceManager$ImageCapabilitiesGc::isAccelerated() {
	$useLocalObjectStack();
	$var($GraphicsConfiguration, tmpGc, this->gc);
	if (tmpGc == nullptr) {
		$assign(tmpGc, $$nc($$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice())->getDefaultConfiguration());
	}
	if ($instanceOf($SurfaceManager$ProxiedGraphicsConfig, tmpGc)) {
		$var($Object, proxyKey, $cast($SurfaceManager$ProxiedGraphicsConfig, tmpGc)->getProxyKey());
		if (proxyKey != nullptr) {
			$var($SurfaceDataProxy, sdp, $cast($SurfaceDataProxy, this->this$0->getCacheData(proxyKey)));
			return (sdp != nullptr && sdp->isAccelerated());
		}
	}
	return false;
}

SurfaceManager$ImageCapabilitiesGc::SurfaceManager$ImageCapabilitiesGc() {
}

$Class* SurfaceManager$ImageCapabilitiesGc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/image/SurfaceManager;", nullptr, $FINAL | $SYNTHETIC, $field(SurfaceManager$ImageCapabilitiesGc, this$0)},
		{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(SurfaceManager$ImageCapabilitiesGc, gc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/SurfaceManager;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(SurfaceManager$ImageCapabilitiesGc, init$, void, $SurfaceManager*, $GraphicsConfiguration*)},
		{"isAccelerated", "()Z", nullptr, $PUBLIC, $virtualMethod(SurfaceManager$ImageCapabilitiesGc, isAccelerated, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SurfaceManager$ImageCapabilitiesGc", "sun.awt.image.SurfaceManager", "ImageCapabilitiesGc", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.SurfaceManager$ImageCapabilitiesGc",
		"java.awt.ImageCapabilities",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.SurfaceManager"
	};
	$loadClass(SurfaceManager$ImageCapabilitiesGc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceManager$ImageCapabilitiesGc);
	});
	return class$;
}

$Class* SurfaceManager$ImageCapabilitiesGc::class$ = nullptr;

		} // image
	} // awt
} // sun