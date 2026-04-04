#include <sun/awt/image/PNGImageDecoder$PNGException.h>
#include <java/io/IOException.h>
#include <sun/awt/image/PNGImageDecoder.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PNGImageDecoder = ::sun::awt::image::PNGImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

void PNGImageDecoder$PNGException::init$($PNGImageDecoder* this$0, $String* s) {
	$set(this, this$0, this$0);
	$IOException::init$(s);
}

PNGImageDecoder$PNGException::PNGImageDecoder$PNGException() {
}

PNGImageDecoder$PNGException::PNGImageDecoder$PNGException(const PNGImageDecoder$PNGException& e) : $IOException(e) {
}

void PNGImageDecoder$PNGException::throw$() {
	throw *this;
}

$Class* PNGImageDecoder$PNGException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/image/PNGImageDecoder;", nullptr, $FINAL | $SYNTHETIC, $field(PNGImageDecoder$PNGException, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/PNGImageDecoder;Ljava/lang/String;)V", nullptr, 0, $method(PNGImageDecoder$PNGException, init$, void, $PNGImageDecoder*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.PNGImageDecoder$PNGException", "sun.awt.image.PNGImageDecoder", "PNGException", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.PNGImageDecoder$PNGException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.image.PNGImageDecoder"
	};
	$loadClass(PNGImageDecoder$PNGException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PNGImageDecoder$PNGException);
	});
	return class$;
}

$Class* PNGImageDecoder$PNGException::class$ = nullptr;

		} // image
	} // awt
} // sun