#include <sun/awt/image/ImageCache$ImageSoftReference.h>
#include <java/awt/Image.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <sun/awt/image/ImageCache.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ImageCache$PixelsKey = ::sun::awt::image::ImageCache$PixelsKey;

namespace sun {
	namespace awt {
		namespace image {

void ImageCache$ImageSoftReference::init$($ImageCache$PixelsKey* key, $Image* referent, $ReferenceQueue* q) {
	$SoftReference::init$(referent, q);
	$set(this, key, key);
}

ImageCache$ImageSoftReference::ImageCache$ImageSoftReference() {
}

$Class* ImageCache$ImageSoftReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Lsun/awt/image/ImageCache$PixelsKey;", nullptr, $FINAL, $field(ImageCache$ImageSoftReference, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/ImageCache$PixelsKey;Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue;)V", "(Lsun/awt/image/ImageCache$PixelsKey;Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue<-Ljava/awt/Image;>;)V", 0, $method(ImageCache$ImageSoftReference, init$, void, $ImageCache$PixelsKey*, $Image*, $ReferenceQueue*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageCache$ImageSoftReference", "sun.awt.image.ImageCache", "ImageSoftReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImageCache$ImageSoftReference",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/SoftReference<Ljava/awt/Image;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.ImageCache"
	};
	$loadClass(ImageCache$ImageSoftReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache$ImageSoftReference);
	});
	return class$;
}

$Class* ImageCache$ImageSoftReference::class$ = nullptr;

		} // image
	} // awt
} // sun