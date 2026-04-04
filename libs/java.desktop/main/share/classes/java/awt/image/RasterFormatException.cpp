#include <java/awt/image/RasterFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace image {

void RasterFormatException::init$($String* s) {
	$RuntimeException::init$(s);
}

RasterFormatException::RasterFormatException() {
}

RasterFormatException::RasterFormatException(const RasterFormatException& e) : $RuntimeException(e) {
}

void RasterFormatException::throw$() {
	throw *this;
}

$Class* RasterFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RasterFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RasterFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.RasterFormatException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RasterFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RasterFormatException);
	});
	return class$;
}

$Class* RasterFormatException::class$ = nullptr;

		} // image
	} // awt
} // java