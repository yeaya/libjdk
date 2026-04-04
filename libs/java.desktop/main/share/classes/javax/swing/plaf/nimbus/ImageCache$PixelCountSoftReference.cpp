#include <javax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Arrays.h>
#include <javax/swing/plaf/nimbus/ImageCache.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ImageCache$PixelCountSoftReference::init$($Image* referent, $ReferenceQueue* q, int32_t pixelCount, int32_t hash, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$SoftReference::init$(referent, q);
	this->pixelCount = pixelCount;
	this->hash = hash;
	$set(this, config, config);
	this->w = w;
	this->h = h;
	$set(this, args, args);
}

bool ImageCache$PixelCountSoftReference::equals($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	return config == this->config && w == this->w && h == this->h && $Arrays::equals(args, this->args);
}

ImageCache$PixelCountSoftReference::ImageCache$PixelCountSoftReference() {
}

$Class* ImageCache$PixelCountSoftReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, pixelCount)},
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, hash)},
		{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, config)},
		{"w", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, w)},
		{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, h)},
		{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue;IILjava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", "(Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue<-Ljava/awt/Image;>;IILjava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", $PUBLIC, $method(ImageCache$PixelCountSoftReference, init$, void, $Image*, $ReferenceQueue*, int32_t, int32_t, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{"equals", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageCache$PixelCountSoftReference, equals, bool, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference", "javax.swing.plaf.nimbus.ImageCache", "PixelCountSoftReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference",
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
		"javax.swing.plaf.nimbus.ImageCache"
	};
	$loadClass(ImageCache$PixelCountSoftReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache$PixelCountSoftReference);
	});
	return class$;
}

$Class* ImageCache$PixelCountSoftReference::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax