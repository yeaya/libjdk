#include <com/sun/imageio/stream/StreamFinalizer.h>
#include <java/io/IOException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

void StreamFinalizer::init$($ImageInputStream* stream) {
	$set(this, stream, stream);
}

void StreamFinalizer::finalize() {
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(this->stream)->close();
		} catch ($IOException& e) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$set(this, stream, nullptr);
		$Object::finalize();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

StreamFinalizer::StreamFinalizer() {
}

$Class* StreamFinalizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(StreamFinalizer, stream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC, $method(StreamFinalizer, init$, void, $ImageInputStream*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(StreamFinalizer, finalize, void), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.stream.StreamFinalizer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamFinalizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamFinalizer);
	});
	return class$;
}

$Class* StreamFinalizer::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com