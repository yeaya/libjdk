#include <sun/awt/image/SurfaceManager$ImageAccessor.h>
#include <java/awt/Image.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;

namespace sun {
	namespace awt {
		namespace image {

void SurfaceManager$ImageAccessor::init$() {
}

SurfaceManager$ImageAccessor::SurfaceManager$ImageAccessor() {
}

$Class* SurfaceManager$ImageAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SurfaceManager$ImageAccessor, init$, void)},
		{"getSurfaceManager", "(Ljava/awt/Image;)Lsun/awt/image/SurfaceManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SurfaceManager$ImageAccessor, getSurfaceManager, $SurfaceManager*, $Image*)},
		{"setSurfaceManager", "(Ljava/awt/Image;Lsun/awt/image/SurfaceManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SurfaceManager$ImageAccessor, setSurfaceManager, void, $Image*, $SurfaceManager*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.SurfaceManager$ImageAccessor", "sun.awt.image.SurfaceManager", "ImageAccessor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.image.SurfaceManager$ImageAccessor",
		"java.lang.Object",
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
	$loadClass(SurfaceManager$ImageAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceManager$ImageAccessor);
	});
	return class$;
}

$Class* SurfaceManager$ImageAccessor::class$ = nullptr;

		} // image
	} // awt
} // sun