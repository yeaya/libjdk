#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $AccelGraphicsConfig = ::sun::java2d::pipe::hw::AccelGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

int32_t OGLGraphicsConfig::hashCode() {
	return this->$AccelGraphicsConfig::hashCode();
}

bool OGLGraphicsConfig::equals(Object$* arg0) {
	return this->$AccelGraphicsConfig::equals(arg0);
}

$Object* OGLGraphicsConfig::clone() {
	return this->$AccelGraphicsConfig::clone();
}

$String* OGLGraphicsConfig::toString() {
	return this->$AccelGraphicsConfig::toString();
}

void OGLGraphicsConfig::finalize() {
	this->$AccelGraphicsConfig::finalize();
}

$Class* OGLGraphicsConfig::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OGLGraphicsConfig, createManagedSurface, $SurfaceData*, int32_t, int32_t, int32_t)},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $ABSTRACT},
		{"getNativeConfigInfo", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OGLGraphicsConfig, getNativeConfigInfo, int64_t)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"isCapPresent", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OGLGraphicsConfig, isCapPresent, bool, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.java2d.opengl.OGLGraphicsConfig",
		nullptr,
		"sun.java2d.pipe.hw.AccelGraphicsConfig,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(OGLGraphicsConfig, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OGLGraphicsConfig));
	});
	return class$;
}

$Class* OGLGraphicsConfig::class$ = nullptr;

		} // opengl
	} // java2d
} // sun