#include <sun/awt/image/ImageAccessException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void ImageAccessException::init$($String* s) {
	$Exception::init$(s);
}

ImageAccessException::ImageAccessException() {
}

ImageAccessException::ImageAccessException(const ImageAccessException& e) : $Exception(e) {
}

void ImageAccessException::throw$() {
	throw *this;
}

$Class* ImageAccessException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImageAccessException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.ImageAccessException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageAccessException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageAccessException);
	});
	return class$;
}

$Class* ImageAccessException::class$ = nullptr;

		} // image
	} // awt
} // sun