#include <com/sun/imageio/plugins/common/InputStreamAdapter.h>
#include <java/io/InputStream.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void InputStreamAdapter::init$($ImageInputStream* stream) {
	$InputStream::init$();
	$set(this, stream, stream);
}

int32_t InputStreamAdapter::read() {
	return $nc(this->stream)->read();
}

int32_t InputStreamAdapter::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->stream)->read(b, off, len);
}

InputStreamAdapter::InputStreamAdapter() {
}

$Class* InputStreamAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(InputStreamAdapter, stream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC, $method(InputStreamAdapter, init$, void, $ImageInputStream*)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(InputStreamAdapter, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(InputStreamAdapter, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.InputStreamAdapter",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InputStreamAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputStreamAdapter);
	});
	return class$;
}

$Class* InputStreamAdapter::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com