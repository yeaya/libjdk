#include <com/sun/imageio/spi/FileImageOutputStreamSpi.h>
#include <java/io/File.h>
#include <java/util/Locale.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/stream/FileImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $FileImageOutputStream = ::javax::imageio::stream::FileImageOutputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace spi {

$String* FileImageOutputStreamSpi::vendorName = nullptr;
$String* FileImageOutputStreamSpi::version = nullptr;
$Class* FileImageOutputStreamSpi::outputClass = nullptr;

void FileImageOutputStreamSpi::init$() {
	$ImageOutputStreamSpi::init$(FileImageOutputStreamSpi::vendorName, FileImageOutputStreamSpi::version, FileImageOutputStreamSpi::outputClass);
}

$String* FileImageOutputStreamSpi::getDescription($Locale* locale) {
	return "Service provider that instantiates a FileImageOutputStream from a File"_s;
}

$ImageOutputStream* FileImageOutputStreamSpi::createOutputStreamInstance(Object$* output, bool useCache, $File* cacheDir) {
	if ($instanceOf($File, output)) {
		try {
			return $new($FileImageOutputStream, $cast($File, output));
		} catch ($Exception& e) {
			e->printStackTrace();
			return nullptr;
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
	$shouldNotReachHere();
}

void FileImageOutputStreamSpi::clinit$($Class* clazz) {
	$assignStatic(FileImageOutputStreamSpi::vendorName, "Oracle Corporation"_s);
	$assignStatic(FileImageOutputStreamSpi::version, "1.0"_s);
	$load($File);
	$assignStatic(FileImageOutputStreamSpi::outputClass, $File::class$);
}

FileImageOutputStreamSpi::FileImageOutputStreamSpi() {
}

$Class* FileImageOutputStreamSpi::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vendorName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileImageOutputStreamSpi, vendorName)},
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileImageOutputStreamSpi, version)},
		{"outputClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(FileImageOutputStreamSpi, outputClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileImageOutputStreamSpi, init$, void)},
		{"createOutputStreamInstance", "(Ljava/lang/Object;ZLjava/io/File;)Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStreamSpi, createOutputStreamInstance, $ImageOutputStream*, Object$*, bool, $File*)},
		{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileImageOutputStreamSpi, getDescription, $String*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.spi.FileImageOutputStreamSpi",
		"javax.imageio.spi.ImageOutputStreamSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileImageOutputStreamSpi, name, initialize, &classInfo$$, FileImageOutputStreamSpi::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileImageOutputStreamSpi);
	});
	return class$;
}

$Class* FileImageOutputStreamSpi::class$ = nullptr;

			} // spi
		} // imageio
	} // sun
} // com