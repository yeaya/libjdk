#include <javax/imageio/ImageIO$ImageReaderIterator.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;

namespace javax {
	namespace imageio {

void ImageIO$ImageReaderIterator::init$($Iterator* iter) {
	$set(this, iter, iter);
}

bool ImageIO$ImageReaderIterator::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* ImageIO$ImageReaderIterator::next() {
	$var($ImageReaderSpi, spi, nullptr);
	try {
		$assign(spi, $cast($ImageReaderSpi, $nc(this->iter)->next()));
		return $nc(spi)->createReaderInstance();
	} catch ($IOException& e) {
		$init($ImageIO);
		$load($ImageReaderSpi);
		$nc($ImageIO::theRegistry)->deregisterServiceProvider(spi, $ImageReaderSpi::class$);
	}
	return nullptr;
}

void ImageIO$ImageReaderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

ImageIO$ImageReaderIterator::ImageIO$ImageReaderIterator() {
}

$Class* ImageIO$ImageReaderIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/imageio/spi/ImageReaderSpi;>;", $PRIVATE, $field(ImageIO$ImageReaderIterator, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/ImageReaderSpi;>;)V", $PUBLIC, $method(ImageIO$ImageReaderIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageReaderIterator, hasNext, bool)},
		{"next", "()Ljavax/imageio/ImageReader;", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageReaderIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ImageIO$ImageReaderIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$ImageReaderIterator", "javax.imageio.ImageIO", "ImageReaderIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$ImageReaderIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$ImageReaderIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$ImageReaderIterator);
	});
	return class$;
}

$Class* ImageIO$ImageReaderIterator::class$ = nullptr;

	} // imageio
} // javax