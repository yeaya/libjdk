#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <sun/awt/image/ImageCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$Class* ImageCache$PixelsKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPixelCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageCache$PixelsKey, getPixelCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageCache$PixelsKey", "sun.awt.image.ImageCache", "PixelsKey", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.image.ImageCache$PixelsKey",
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
		"sun.awt.image.ImageCache"
	};
	$loadClass(ImageCache$PixelsKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache$PixelsKey);
	});
	return class$;
}

$Class* ImageCache$PixelsKey::class$ = nullptr;

		} // image
	} // awt
} // sun