#include <sun/awt/image/ImageWatched$Link.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/image/ImageWatched.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void ImageWatched$Link::init$() {
}

bool ImageWatched$Link::isWatcher($ImageObserver* iw) {
	return false;
}

ImageWatched$Link* ImageWatched$Link::removeWatcher($ImageObserver* iw) {
	return this;
}

bool ImageWatched$Link::newInfo($Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	return false;
}

ImageWatched$Link::ImageWatched$Link() {
}

$Class* ImageWatched$Link::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageWatched$Link, init$, void)},
		{"isWatcher", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $virtualMethod(ImageWatched$Link, isWatcher, bool, $ImageObserver*)},
		{"newInfo", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(ImageWatched$Link, newInfo, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"removeWatcher", "(Ljava/awt/image/ImageObserver;)Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC, $virtualMethod(ImageWatched$Link, removeWatcher, ImageWatched$Link*, $ImageObserver*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageWatched$Link", "sun.awt.image.ImageWatched", "Link", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.ImageWatched$Link",
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
		"sun.awt.image.ImageWatched"
	};
	$loadClass(ImageWatched$Link, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageWatched$Link);
	});
	return class$;
}

$Class* ImageWatched$Link::class$ = nullptr;

		} // image
	} // awt
} // sun