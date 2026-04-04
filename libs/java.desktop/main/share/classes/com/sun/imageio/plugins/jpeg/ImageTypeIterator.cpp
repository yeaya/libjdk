#include <com/sun/imageio/plugins/jpeg/ImageTypeIterator.h>
#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

using $ImageTypeProducer = ::com::sun::imageio::plugins::jpeg::ImageTypeProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void ImageTypeIterator::init$($Iterator* producers) {
	$set(this, theNext, nullptr);
	$set(this, producers, producers);
}

bool ImageTypeIterator::hasNext() {
	$useLocalObjectStack();
	if (this->theNext != nullptr) {
		return true;
	}
	if (!$nc(this->producers)->hasNext()) {
		return false;
	}
	do {
		$set(this, theNext, $$sure($ImageTypeProducer, this->producers->next())->getType());
	} while (this->theNext == nullptr && $nc(this->producers)->hasNext());
	return (this->theNext != nullptr);
}

$Object* ImageTypeIterator::next() {
	if (this->theNext != nullptr || hasNext()) {
		$var($ImageTypeSpecifier, t, this->theNext);
		$set(this, theNext, nullptr);
		return t;
	} else {
		$throwNew($NoSuchElementException);
	}
}

void ImageTypeIterator::remove() {
	$nc(this->producers)->remove();
}

ImageTypeIterator::ImageTypeIterator() {
}

$Class* ImageTypeIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"producers", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;>;", $PRIVATE, $field(ImageTypeIterator, producers)},
		{"theNext", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $field(ImageTypeIterator, theNext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;>;)V", $PUBLIC, $method(ImageTypeIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageTypeIterator, hasNext, bool)},
		{"next", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC, $virtualMethod(ImageTypeIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ImageTypeIterator, remove, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.ImageTypeIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;"
	};
	$loadClass(ImageTypeIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageTypeIterator);
	});
	return class$;
}

$Class* ImageTypeIterator::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com