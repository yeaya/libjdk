#include <sun/awt/image/FileImageSource.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityManager.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

void FileImageSource::init$($String* filename) {
	$InputStreamImageSource::init$();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	$set(this, imagefile, filename);
}

bool FileImageSource::checkSecurity(Object$* context, bool quiet) {
	return true;
}

$ImageDecoder* FileImageSource::getDecoder() {
	$useLocalObjectStack();
	if (this->imagefile == nullptr) {
		return nullptr;
	}
	$var($InputStream, is, nullptr);
	try {
		$assign(is, $new($BufferedInputStream, $$new($FileInputStream, this->imagefile)));
	} catch ($FileNotFoundException& e) {
		return nullptr;
	}
	return getDecoder(is);
}

FileImageSource::FileImageSource() {
}

$Class* FileImageSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"imagefile", "Ljava/lang/String;", nullptr, 0, $field(FileImageSource, imagefile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileImageSource, init$, void, $String*)},
		{"checkSecurity", "(Ljava/lang/Object;Z)Z", nullptr, $FINAL, $virtualMethod(FileImageSource, checkSecurity, bool, Object$*, bool)},
		{"getDecoder", "()Lsun/awt/image/ImageDecoder;", nullptr, $PROTECTED, $virtualMethod(FileImageSource, getDecoder, $ImageDecoder*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.FileImageSource",
		"sun.awt.image.InputStreamImageSource",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileImageSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileImageSource));
	});
	return class$;
}

$Class* FileImageSource::class$ = nullptr;

		} // image
	} // awt
} // sun