#include <sun/java2d/SurfaceManagerFactory.h>
#include <java/lang/IllegalStateException.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;

namespace sun {
	namespace java2d {

SurfaceManagerFactory* SurfaceManagerFactory::instance = nullptr;

void SurfaceManagerFactory::init$() {
}

SurfaceManagerFactory* SurfaceManagerFactory::getInstance() {
	$load(SurfaceManagerFactory);
	$synchronized(class$) {
		$init(SurfaceManagerFactory);
		if (SurfaceManagerFactory::instance == nullptr) {
			$throwNew($IllegalStateException, "No SurfaceManagerFactory set."_s);
		}
		return SurfaceManagerFactory::instance;
	}
}

void SurfaceManagerFactory::setInstance(SurfaceManagerFactory* factory) {
	$load(SurfaceManagerFactory);
	$synchronized(class$) {
		if (factory == nullptr) {
			$throwNew($IllegalArgumentException, "factory must be non-null"_s);
		}
		$init(SurfaceManagerFactory);
		if (SurfaceManagerFactory::instance != nullptr) {
			$throwNew($IllegalStateException, "The surface manager factory is already initialized"_s);
		}
		$assignStatic(SurfaceManagerFactory::instance, factory);
	}
}

SurfaceManagerFactory::SurfaceManagerFactory() {
}

$Class* SurfaceManagerFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/java2d/SurfaceManagerFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceManagerFactory, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SurfaceManagerFactory, init$, void)},
		{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SurfaceManagerFactory, createVolatileManager, $VolatileSurfaceManager*, $SunVolatileImage*, Object$*)},
		{"getInstance", "()Lsun/java2d/SurfaceManagerFactory;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(SurfaceManagerFactory, getInstance, SurfaceManagerFactory*)},
		{"setInstance", "(Lsun/java2d/SurfaceManagerFactory;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(SurfaceManagerFactory, setInstance, void, SurfaceManagerFactory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.java2d.SurfaceManagerFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SurfaceManagerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceManagerFactory);
	});
	return class$;
}

$Class* SurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun