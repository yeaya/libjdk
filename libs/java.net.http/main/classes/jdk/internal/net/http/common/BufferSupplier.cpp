#include <jdk/internal/net/http/common/BufferSupplier.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* BufferSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"recycle", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferSupplier, recycle, void, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.BufferSupplier",
		nullptr,
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Supplier<Ljava/nio/ByteBuffer;>;"
	};
	$loadClass(BufferSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferSupplier);
	});
	return class$;
}

$Class* BufferSupplier::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk