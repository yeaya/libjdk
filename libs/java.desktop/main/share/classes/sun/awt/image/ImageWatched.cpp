#include <sun/awt/image/ImageWatched.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/image/ImageWatched$Link.h>
#include <sun/awt/image/ImageWatched$WeakLink.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWatched$Link = ::sun::awt::image::ImageWatched$Link;
using $ImageWatched$WeakLink = ::sun::awt::image::ImageWatched$WeakLink;

namespace sun {
	namespace awt {
		namespace image {

$ImageWatched$Link* ImageWatched::endlink = nullptr;

void ImageWatched::init$() {
	$set(this, watcherList, ImageWatched::endlink);
}

void ImageWatched::addWatcher($ImageObserver* iw) {
	$synchronized(this) {
		if (iw != nullptr && !isWatcher(iw)) {
			$set(this, watcherList, $new($ImageWatched$WeakLink, iw, this->watcherList));
		}
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(nullptr));
	}
}

bool ImageWatched::isWatcher($ImageObserver* iw) {
	$synchronized(this) {
		return $nc(this->watcherList)->isWatcher(iw);
	}
}

void ImageWatched::removeWatcher($ImageObserver* iw) {
	$synchronized(this) {
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(iw));
	}
	if (this->watcherList == ImageWatched::endlink) {
		notifyWatcherListEmpty();
	}
}

bool ImageWatched::isWatcherListEmpty() {
	$synchronized(this) {
		$set(this, watcherList, $nc(this->watcherList)->removeWatcher(nullptr));
	}
	return (this->watcherList == ImageWatched::endlink);
}

void ImageWatched::newInfo($Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc(this->watcherList)->newInfo(img, info, x, y, w, h)) {
		removeWatcher(nullptr);
	}
}

void ImageWatched::clinit$($Class* clazz) {
	$assignStatic(ImageWatched::endlink, $new($ImageWatched$Link));
}

ImageWatched::ImageWatched() {
}

$Class* ImageWatched::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"endlink", "Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC | $STATIC, $staticField(ImageWatched, endlink)},
		{"watcherList", "Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC, $field(ImageWatched, watcherList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageWatched, init$, void)},
		{"addWatcher", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ImageWatched, addWatcher, void, $ImageObserver*)},
		{"isWatcher", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ImageWatched, isWatcher, bool, $ImageObserver*)},
		{"isWatcherListEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageWatched, isWatcherListEmpty, bool)},
		{"newInfo", "(Ljava/awt/Image;IIIII)V", nullptr, $PUBLIC, $virtualMethod(ImageWatched, newInfo, void, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"notifyWatcherListEmpty", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ImageWatched, notifyWatcherListEmpty, void)},
		{"removeWatcher", "(Ljava/awt/image/ImageObserver;)V", nullptr, $PUBLIC, $virtualMethod(ImageWatched, removeWatcher, void, $ImageObserver*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageWatched$WeakLink", "sun.awt.image.ImageWatched", "WeakLink", $PUBLIC | $STATIC},
		{"sun.awt.image.ImageWatched$AccWeakReference", "sun.awt.image.ImageWatched", "AccWeakReference", $STATIC},
		{"sun.awt.image.ImageWatched$Link", "sun.awt.image.ImageWatched", "Link", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.image.ImageWatched",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.image.ImageWatched$WeakLink,sun.awt.image.ImageWatched$AccWeakReference,sun.awt.image.ImageWatched$Link"
	};
	$loadClass(ImageWatched, name, initialize, &classInfo$$, ImageWatched::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImageWatched);
	});
	return class$;
}

$Class* ImageWatched::class$ = nullptr;

		} // image
	} // awt
} // sun