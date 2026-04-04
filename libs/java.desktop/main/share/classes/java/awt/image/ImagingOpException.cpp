#include <java/awt/image/ImagingOpException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace image {

void ImagingOpException::init$($String* s) {
	$RuntimeException::init$(s);
}

ImagingOpException::ImagingOpException() {
}

ImagingOpException::ImagingOpException(const ImagingOpException& e) : $RuntimeException(e) {
}

void ImagingOpException::throw$() {
	throw *this;
}

$Class* ImagingOpException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImagingOpException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImagingOpException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.ImagingOpException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImagingOpException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImagingOpException);
	});
	return class$;
}

$Class* ImagingOpException::class$ = nullptr;

		} // image
	} // awt
} // java