#include <jdk/internal/net/http/SocketTube$BufferSource.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void SocketTube$BufferSource::returnUnused($ByteBuffer* buffer) {
}

$Class* SocketTube$BufferSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"append", "(Ljava/util/List;Ljava/nio/ByteBuffer;I)Ljava/util/List;", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Ljava/nio/ByteBuffer;I)Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SocketTube$BufferSource, append, $List*, $List*, $ByteBuffer*, int32_t)},
		{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SocketTube$BufferSource, getBuffer, $ByteBuffer*)},
		{"returnUnused", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$BufferSource, returnUnused, void, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$BufferSource", "jdk.internal.net.http.SocketTube", "BufferSource", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.SocketTube$BufferSource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$BufferSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$BufferSource);
	});
	return class$;
}

$Class* SocketTube$BufferSource::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk