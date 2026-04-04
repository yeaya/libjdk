#include <sun/awt/image/BufImgSurfaceManager.h>
#include <java/awt/image/BufferedImage.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

void BufImgSurfaceManager::init$($BufferedImage* bImg) {
	$SurfaceManager::init$();
	$set(this, bImg, bImg);
	$set(this, sdDefault, $BufImgSurfaceData::createData(bImg));
}

$SurfaceData* BufImgSurfaceManager::getPrimarySurfaceData() {
	return this->sdDefault;
}

$SurfaceData* BufImgSurfaceManager::restoreContents() {
	return this->sdDefault;
}

BufImgSurfaceManager::BufImgSurfaceManager() {
}

$Class* BufImgSurfaceManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bImg", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(BufImgSurfaceManager, bImg)},
		{"sdDefault", "Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $field(BufImgSurfaceManager, sdDefault)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $method(BufImgSurfaceManager, init$, void, $BufferedImage*)},
		{"getPrimarySurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(BufImgSurfaceManager, getPrimarySurfaceData, $SurfaceData*)},
		{"restoreContents", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(BufImgSurfaceManager, restoreContents, $SurfaceData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.BufImgSurfaceManager",
		"sun.awt.image.SurfaceManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufImgSurfaceManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufImgSurfaceManager);
	});
	return class$;
}

$Class* BufImgSurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun