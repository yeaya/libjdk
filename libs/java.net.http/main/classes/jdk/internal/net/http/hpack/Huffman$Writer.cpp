#include <jdk/internal/net/http/hpack/Huffman$Writer.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/Huffman.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

int32_t Huffman$Writer::lengthOf($CharSequence* value) {
	return lengthOf(value, 0, $nc(value)->length());
}

$Class* Huffman$Writer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"from", "(Ljava/lang/CharSequence;II)Ljdk/internal/net/http/hpack/Huffman$Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Writer, from, Huffman$Writer*, $CharSequence*, int32_t, int32_t)},
		{"lengthOf", "(Ljava/lang/CharSequence;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Writer, lengthOf, int32_t, $CharSequence*, int32_t, int32_t)},
		{"lengthOf", "(Ljava/lang/CharSequence;)I", nullptr, $PUBLIC, $virtualMethod(Huffman$Writer, lengthOf, int32_t, $CharSequence*)},
		{"reset", "()Ljdk/internal/net/http/hpack/Huffman$Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Writer, reset, Huffman$Writer*)},
		{"write", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Writer, write, bool, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.Huffman$Writer", "jdk.internal.net.http.hpack.Huffman", "Writer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.hpack.Huffman$Writer",
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
		"jdk.internal.net.http.hpack.Huffman"
	};
	$loadClass(Huffman$Writer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Huffman$Writer);
	});
	return class$;
}

$Class* Huffman$Writer::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk