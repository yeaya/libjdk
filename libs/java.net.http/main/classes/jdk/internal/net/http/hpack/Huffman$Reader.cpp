#include <jdk/internal/net/http/hpack/Huffman$Reader.h>
#include <java/lang/Appendable.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/hpack/Huffman.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$Class* Huffman$Reader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"read", "(Ljava/nio/ByteBuffer;Ljava/lang/Appendable;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Reader, read, void, $ByteBuffer*, $Appendable*, bool), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Huffman$Reader, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.Huffman$Reader", "jdk.internal.net.http.hpack.Huffman", "Reader", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.hpack.Huffman$Reader",
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
	$loadClass(Huffman$Reader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Huffman$Reader);
	});
	return class$;
}

$Class* Huffman$Reader::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk