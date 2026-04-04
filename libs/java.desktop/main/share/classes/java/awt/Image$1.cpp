#include <java/awt/Image$1.h>
#include <java/awt/Image.h>
#include <sun/awt/image/SurfaceManager$ImageAccessor.h>
#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceManager$ImageAccessor = ::sun::awt::image::SurfaceManager$ImageAccessor;

namespace java {
	namespace awt {

void Image$1::init$() {
	$SurfaceManager$ImageAccessor::init$();
}

$SurfaceManager* Image$1::getSurfaceManager($Image* img) {
	return $nc(img)->surfaceManager;
}

void Image$1::setSurfaceManager($Image* img, $SurfaceManager* mgr) {
	$set($nc(img), surfaceManager, mgr);
}

Image$1::Image$1() {
}

$Class* Image$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Image$1, init$, void)},
		{"getSurfaceManager", "(Ljava/awt/Image;)Lsun/awt/image/SurfaceManager;", nullptr, $PUBLIC, $virtualMethod(Image$1, getSurfaceManager, $SurfaceManager*, $Image*)},
		{"setSurfaceManager", "(Ljava/awt/Image;Lsun/awt/image/SurfaceManager;)V", nullptr, $PUBLIC, $virtualMethod(Image$1, setSurfaceManager, void, $Image*, $SurfaceManager*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Image",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Image$1", nullptr, nullptr, 0},
		{"sun.awt.image.SurfaceManager$ImageAccessor", "sun.awt.image.SurfaceManager", "ImageAccessor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Image$1",
		"sun.awt.image.SurfaceManager$ImageAccessor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Image"
	};
	$loadClass(Image$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Image$1);
	});
	return class$;
}

$Class* Image$1::class$ = nullptr;

	} // awt
} // java