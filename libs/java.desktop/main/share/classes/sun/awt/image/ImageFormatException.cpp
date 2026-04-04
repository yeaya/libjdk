#include <sun/awt/image/ImageFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void ImageFormatException::init$($String* s) {
	$Exception::init$(s);
}

ImageFormatException::ImageFormatException() {
}

ImageFormatException::ImageFormatException(const ImageFormatException& e) : $Exception(e) {
}

void ImageFormatException::throw$() {
	throw *this;
}

$Class* ImageFormatException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImageFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.ImageFormatException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageFormatException);
	});
	return class$;
}

$Class* ImageFormatException::class$ = nullptr;

		} // image
	} // awt
} // sun