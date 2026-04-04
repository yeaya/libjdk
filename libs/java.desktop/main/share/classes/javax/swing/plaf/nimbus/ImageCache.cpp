#include <javax/swing/plaf/nimbus/ImageCache.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <javax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ImageCache$PixelCountSoftReference = ::javax::swing::plaf::nimbus::ImageCache$PixelCountSoftReference;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

ImageCache* ImageCache::instance = nullptr;

ImageCache* ImageCache::getInstance() {
	$init(ImageCache);
	return ImageCache::instance;
}

void ImageCache::init$() {
	$set(this, map, $new($LinkedHashMap, 16, 0.75f, true));
	this->currentPixelCount = 0;
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, referenceQueue, $new($ReferenceQueue));
	this->maxPixelCount = (8 * 1024 * 1024) / 4;
	this->maxSingleImagePixelSize = 300 * 300;
}

void ImageCache::init$(int32_t maxPixelCount, int32_t maxSingleImagePixelSize) {
	$set(this, map, $new($LinkedHashMap, 16, 0.75f, true));
	this->currentPixelCount = 0;
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, referenceQueue, $new($ReferenceQueue));
	this->maxPixelCount = maxPixelCount;
	this->maxSingleImagePixelSize = maxSingleImagePixelSize;
}

void ImageCache::flush() {
	$useLocalObjectStack();
	$$nc($nc(this->lock)->readLock())->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->map)->clear();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$$nc($nc(this->lock)->readLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ImageCache::isImageCachable(int32_t w, int32_t h) {
	return (w * h) < this->maxSingleImagePixelSize;
}

$Image* ImageCache::getImage($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalObjectStack();
	$$nc($nc(this->lock)->readLock())->lock();
	$var($Throwable, var$0, nullptr);
	$var($Image, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($ImageCache$PixelCountSoftReference, ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->map)->get($($Integer::valueOf(hash(config, w, h, args))))));
		if (ref != nullptr && ref->equals(config, w, h, args)) {
			$assign(var$2, $cast($Image, ref->get()));
			return$1 = true;
			goto $finally;
		} else {
			$assign(var$2, nullptr);
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$$nc($nc(this->lock)->readLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ImageCache::setImage($Image* image, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalObjectStack();
	if (!isImageCachable(w, h)) {
		return false;
	}
	int32_t hash = this->hash(config, w, h, args);
	$$nc($nc(this->lock)->writeLock())->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		$var($ImageCache$PixelCountSoftReference, ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->map)->get($($Integer::valueOf(hash)))));
		if (ref != nullptr && $equals(ref->get(), image)) {
			var$2 = true;
			return$1 = true;
			goto $finally;
		}
		if (ref != nullptr) {
			this->currentPixelCount -= ref->pixelCount;
			this->map->remove($($Integer::valueOf(hash)));
		}
		int32_t var$3 = $nc(image)->getWidth(nullptr);
		int32_t newPixelCount = var$3 * image->getHeight(nullptr);
		this->currentPixelCount += newPixelCount;
		if (this->currentPixelCount > this->maxPixelCount) {
			while (($assign(ref, $cast($ImageCache$PixelCountSoftReference, $nc(this->referenceQueue)->poll()))) != nullptr) {
				this->map->remove($($Integer::valueOf($nc(ref)->hash)));
				this->currentPixelCount -= ref->pixelCount;
			}
		}
		if (this->currentPixelCount > this->maxPixelCount) {
			$var($Iterator, mapIter, $$nc(this->map->entrySet())->iterator());
			while ((this->currentPixelCount > this->maxPixelCount) && $nc(mapIter)->hasNext()) {
				$var($Map$Entry, entry, $cast($Map$Entry, mapIter->next()));
				mapIter->remove();
				$var($Image, img, $cast($Image, $$sure($ImageCache$PixelCountSoftReference, $nc(entry)->getValue())->get()));
				if (img != nullptr) {
					img->flush();
				}
				this->currentPixelCount -= $nc(($$cast($ImageCache$PixelCountSoftReference, entry->getValue())))->pixelCount;
			}
		}
		$var($Object, var$4, $Integer::valueOf(hash));
		this->map->put(var$4, $$new($ImageCache$PixelCountSoftReference, image, this->referenceQueue, newPixelCount, hash, config, w, h, args));
		var$2 = true;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} $finally: {
		$$nc($nc(this->lock)->writeLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ImageCache::hash($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	int32_t hash = 0;
	hash = (config != nullptr ? $of(config)->hashCode() : 0);
	hash = 31 * hash + w;
	hash = 31 * hash + h;
	hash = 31 * hash + $Arrays::deepHashCode(args);
	return hash;
}

void ImageCache::clinit$($Class* clazz) {
	$assignStatic(ImageCache::instance, $new(ImageCache));
}

ImageCache::ImageCache() {
}

$Class* ImageCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Ljava/lang/Integer;Ljavax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference;>;", $PRIVATE | $FINAL, $field(ImageCache, map)},
		{"maxPixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache, maxPixelCount)},
		{"maxSingleImagePixelSize", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache, maxSingleImagePixelSize)},
		{"currentPixelCount", "I", nullptr, $PRIVATE, $field(ImageCache, currentPixelCount)},
		{"lock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE, $field(ImageCache, lock)},
		{"referenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/awt/Image;>;", $PRIVATE, $field(ImageCache, referenceQueue)},
		{"instance", "Ljavax/swing/plaf/nimbus/ImageCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImageCache, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageCache, init$, void)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(ImageCache, init$, void, int32_t, int32_t)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(ImageCache, flush, void)},
		{"getImage", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Ljava/awt/Image;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ImageCache, getImage, $Image*, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{"getInstance", "()Ljavax/swing/plaf/nimbus/ImageCache;", nullptr, $STATIC, $staticMethod(ImageCache, getInstance, ImageCache*)},
		{"hash", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)I", nullptr, $PRIVATE | $TRANSIENT, $method(ImageCache, hash, int32_t, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{"isImageCachable", "(II)Z", nullptr, $PUBLIC, $virtualMethod(ImageCache, isImageCachable, bool, int32_t, int32_t)},
		{"setImage", "(Ljava/awt/Image;Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ImageCache, setImage, bool, $Image*, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference", "javax.swing.plaf.nimbus.ImageCache", "PixelCountSoftReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ImageCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference"
	};
	$loadClass(ImageCache, name, initialize, &classInfo$$, ImageCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache);
	});
	return class$;
}

$Class* ImageCache::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax