#include <javax/imageio/ImageIO$ImageTranscoderIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTranscoder.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;

namespace javax {
	namespace imageio {

void ImageIO$ImageTranscoderIterator::init$($Iterator* iter) {
	$set(this, iter, iter);
}

bool ImageIO$ImageTranscoderIterator::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* ImageIO$ImageTranscoderIterator::next() {
	$var($ImageTranscoderSpi, spi, nullptr);
	$assign(spi, $cast($ImageTranscoderSpi, $nc(this->iter)->next()));
	return $nc(spi)->createTranscoderInstance();
}

void ImageIO$ImageTranscoderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

ImageIO$ImageTranscoderIterator::ImageIO$ImageTranscoderIterator() {
}

$Class* ImageIO$ImageTranscoderIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/imageio/spi/ImageTranscoderSpi;>;", $PUBLIC, $field(ImageIO$ImageTranscoderIterator, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/ImageTranscoderSpi;>;)V", $PUBLIC, $method(ImageIO$ImageTranscoderIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageTranscoderIterator, hasNext, bool)},
		{"next", "()Ljavax/imageio/ImageTranscoder;", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageTranscoderIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageTranscoderIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$ImageTranscoderIterator", "javax.imageio.ImageIO", "ImageTranscoderIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$ImageTranscoderIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageTranscoder;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$ImageTranscoderIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$ImageTranscoderIterator);
	});
	return class$;
}

$Class* ImageIO$ImageTranscoderIterator::class$ = nullptr;

	} // imageio
} // javax