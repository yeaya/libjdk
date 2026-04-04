#include <sun/awt/image/ImageCache.h>
#include <java/awt/Image.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <java/util/function/Supplier.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/image/ImageCache$ImageSoftReference.h>
#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $Supplier = ::java::util::function::Supplier;
using $AppContext = ::sun::awt::AppContext;
using $ImageCache$ImageSoftReference = ::sun::awt::image::ImageCache$ImageSoftReference;
using $ImageCache$PixelsKey = ::sun::awt::image::ImageCache$PixelsKey;

namespace sun {
	namespace awt {
		namespace image {

class ImageCache$$Lambda$lambda$getInstance$0 : public $Supplier {
	$class(ImageCache$$Lambda$lambda$getInstance$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return ImageCache::lambda$getInstance$0();
	}
};
$Class* ImageCache$$Lambda$lambda$getInstance$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageCache$$Lambda$lambda$getInstance$0, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageCache$$Lambda$lambda$getInstance$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.image.ImageCache$$Lambda$lambda$getInstance$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageCache$$Lambda$lambda$getInstance$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache$$Lambda$lambda$getInstance$0);
	});
	return class$;
}
$Class* ImageCache$$Lambda$lambda$getInstance$0::class$ = nullptr;

ImageCache* ImageCache::getInstance() {
	$load(ImageCache);
	return $cast(ImageCache, $AppContext::getSoftReferenceValue(ImageCache::class$, $$new(ImageCache$$Lambda$lambda$getInstance$0)));
}

void ImageCache::init$(int32_t maxPixelCount) {
	$set(this, map, $new($LinkedHashMap, 16, 0.75f, true));
	this->currentPixelCount = 0;
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, referenceQueue, $new($ReferenceQueue));
	this->maxPixelCount = maxPixelCount;
}

void ImageCache::init$() {
	ImageCache::init$((8 * 1024 * 1024) / 4);
}

void ImageCache::flush() {
	$useLocalObjectStack();
	$$nc($nc(this->lock)->writeLock())->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->map)->clear();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$$nc(this->lock->writeLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$Image* ImageCache::getImage($ImageCache$PixelsKey* key) {
	$useLocalObjectStack();
	$var($ImageCache$ImageSoftReference, ref, nullptr);
	$$nc($nc(this->lock)->readLock())->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$assign(ref, $cast($ImageCache$ImageSoftReference, $nc(this->map)->get(key)));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$$nc(this->lock->readLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return ref == nullptr ? ($Image*)nullptr : $cast($Image, ref->get());
}

void ImageCache::setImage($ImageCache$PixelsKey* key, $Image* image) {
	$useLocalObjectStack();
	$$nc($nc(this->lock)->writeLock())->lock();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		$var($ImageCache$ImageSoftReference, ref, $cast($ImageCache$ImageSoftReference, $nc(this->map)->get(key)));
		if (ref != nullptr) {
			if (ref->get() != nullptr) {
				return$1 = true;
				goto $finally;
			}
			this->currentPixelCount -= $nc(key)->getPixelCount();
			this->map->remove(key);
		}
		;
		int32_t newPixelCount = $nc(key)->getPixelCount();
		this->currentPixelCount += newPixelCount;
		if (this->currentPixelCount > this->maxPixelCount) {
			while (($assign(ref, $cast($ImageCache$ImageSoftReference, $nc(this->referenceQueue)->poll()))) != nullptr) {
				this->map->remove($nc(ref)->key);
				this->currentPixelCount -= $nc(ref->key)->getPixelCount();
			}
		}
		if (this->currentPixelCount > this->maxPixelCount) {
			$var($Iterator, mapIter, $$nc(this->map->entrySet())->iterator());
			while ((this->currentPixelCount > this->maxPixelCount) && $nc(mapIter)->hasNext()) {
				$var($Map$Entry, entry, $cast($Map$Entry, mapIter->next()));
				mapIter->remove();
				$var($Image, img, $cast($Image, $$sure($ImageCache$ImageSoftReference, $nc(entry)->getValue())->get()));
				if (img != nullptr) {
					img->flush();
				}
				this->currentPixelCount -= $nc($nc(($$cast($ImageCache$ImageSoftReference, entry->getValue())))->key)->getPixelCount();
			}
		}
		this->map->put(key, $$new($ImageCache$ImageSoftReference, key, image, this->referenceQueue));
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		$$nc(this->lock->writeLock())->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

ImageCache* ImageCache::lambda$getInstance$0() {
	return $new(ImageCache);
}

ImageCache::ImageCache() {
}

$Class* ImageCache::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.image.ImageCache$$Lambda$lambda$getInstance$0")) {
			return ImageCache$$Lambda$lambda$getInstance$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Lsun/awt/image/ImageCache$PixelsKey;Lsun/awt/image/ImageCache$ImageSoftReference;>;", $PRIVATE | $FINAL, $field(ImageCache, map)},
		{"maxPixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache, maxPixelCount)},
		{"currentPixelCount", "I", nullptr, $PRIVATE, $field(ImageCache, currentPixelCount)},
		{"lock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(ImageCache, lock)},
		{"referenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/awt/Image;>;", $PRIVATE | $FINAL, $field(ImageCache, referenceQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ImageCache, init$, void, int32_t)},
		{"<init>", "()V", nullptr, 0, $method(ImageCache, init$, void)},
		{"flush", "()V", nullptr, $PUBLIC, $method(ImageCache, flush, void)},
		{"getImage", "(Lsun/awt/image/ImageCache$PixelsKey;)Ljava/awt/Image;", nullptr, $PUBLIC, $method(ImageCache, getImage, $Image*, $ImageCache$PixelsKey*)},
		{"getInstance", "()Lsun/awt/image/ImageCache;", nullptr, $PUBLIC | $STATIC, $staticMethod(ImageCache, getInstance, ImageCache*)},
		{"lambda$getInstance$0", "()Lsun/awt/image/ImageCache;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ImageCache, lambda$getInstance$0, ImageCache*)},
		{"setImage", "(Lsun/awt/image/ImageCache$PixelsKey;Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(ImageCache, setImage, void, $ImageCache$PixelsKey*, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImageCache$ImageSoftReference", "sun.awt.image.ImageCache", "ImageSoftReference", $PRIVATE | $STATIC},
		{"sun.awt.image.ImageCache$PixelsKey", "sun.awt.image.ImageCache", "PixelsKey", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.image.ImageCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.image.ImageCache$ImageSoftReference,sun.awt.image.ImageCache$PixelsKey"
	};
	$loadClass(ImageCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache);
	});
	return class$;
}

$Class* ImageCache::class$ = nullptr;

		} // image
	} // awt
} // sun