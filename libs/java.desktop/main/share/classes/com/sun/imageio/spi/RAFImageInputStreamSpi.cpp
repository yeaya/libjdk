#include <com/sun/imageio/spi/RAFImageInputStreamSpi.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/stream/FileImageInputStream.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $FileImageInputStream = ::javax::imageio::stream::FileImageInputStream;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$String* RAFImageInputStreamSpi::vendorName = nullptr;
$String* RAFImageInputStreamSpi::version = nullptr;
$Class* RAFImageInputStreamSpi::inputClass = nullptr;

void RAFImageInputStreamSpi::init$() {
	$ImageInputStreamSpi::init$(RAFImageInputStreamSpi::vendorName, RAFImageInputStreamSpi::version, RAFImageInputStreamSpi::inputClass);
}

$String* RAFImageInputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileImageInputStream from a RandomAccessFile"_s;
}

$ImageInputStream* RAFImageInputStreamSpi::createInputStreamInstance(Object$* input, bool useCache, $File* cacheDir) {
	if ($instanceOf($RandomAccessFile, input)) {
		try {
			return $new($FileImageInputStream, $cast($RandomAccessFile, input));
		} catch ($Exception& e) {
			return nullptr;
		}
	} else {
		$throwNew($IllegalArgumentException, "input not a RandomAccessFile!"_s);
	}
	$shouldNotReachHere();
}

void RAFImageInputStreamSpi::clinit$($Class* clazz) {
	$assignStatic(RAFImageInputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(RAFImageInputStreamSpi::version, "1.0"_s);
	$load($RandomAccessFile);
	$assignStatic(RAFImageInputStreamSpi::inputClass, $RandomAccessFile::class$);
}

RAFImageInputStreamSpi::RAFImageInputStreamSpi() {
}

$Class* RAFImageInputStreamSpi::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, vendorName)},
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, version)},
		{"inputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RAFImageInputStreamSpi, inputClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RAFImageInputStreamSpi, init$, void)},
		{"createInputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageInputStream;", nullptr, $PUBLIC, $virtualMethod(RAFImageInputStreamSpi, createInputStreamInstance, $ImageInputStream*, Object$*, bool, $File*)},
		{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RAFImageInputStreamSpi, getDescription, $String*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.spi.RAFImageInputStreamSpi",
		"javax.imageio.spi.ImageInputStreamSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RAFImageInputStreamSpi, name, initialize, &classInfo$$, RAFImageInputStreamSpi::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RAFImageInputStreamSpi);
	});
	return class$;
}

$Class* RAFImageInputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com