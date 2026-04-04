#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$Class* SurfaceManager$ProxiedGraphicsConfig::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SurfaceManager$ProxiedGraphicsConfig, getProxyKey, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.SurfaceManager"
	};
	$loadClass(SurfaceManager$ProxiedGraphicsConfig, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceManager$ProxiedGraphicsConfig);
	});
	return class$;
}

$Class* SurfaceManager$ProxiedGraphicsConfig::class$ = nullptr;

		} // image
	} // awt
} // sun