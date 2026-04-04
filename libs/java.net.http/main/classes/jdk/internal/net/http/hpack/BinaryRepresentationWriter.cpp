#include <jdk/internal/net/http/hpack/BinaryRepresentationWriter.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$Class* BinaryRepresentationWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"reset", "()Ljdk/internal/net/http/hpack/BinaryRepresentationWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BinaryRepresentationWriter, reset, BinaryRepresentationWriter*)},
		{"write", "(Ljdk/internal/net/http/hpack/HeaderTable;Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BinaryRepresentationWriter, write, bool, $HeaderTable*, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.hpack.BinaryRepresentationWriter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BinaryRepresentationWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BinaryRepresentationWriter);
	});
	return class$;
}

$Class* BinaryRepresentationWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk