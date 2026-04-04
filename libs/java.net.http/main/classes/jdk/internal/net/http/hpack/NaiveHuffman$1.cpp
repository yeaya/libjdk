#include <jdk/internal/net/http/hpack/NaiveHuffman$1.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman$Node.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NaiveHuffman = ::jdk::internal::net::http::hpack::NaiveHuffman;
using $NaiveHuffman$Node = ::jdk::internal::net::http::hpack::NaiveHuffman$Node;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void NaiveHuffman$1::init$($NaiveHuffman* this$0) {
	$set(this, this$0, this$0);
	$NaiveHuffman$Node::init$();
}

$String* NaiveHuffman$1::toString() {
	return "root"_s;
}

NaiveHuffman$1::NaiveHuffman$1() {
}

$Class* NaiveHuffman$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/hpack/NaiveHuffman;", nullptr, $FINAL | $SYNTHETIC, $field(NaiveHuffman$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/NaiveHuffman;)V", nullptr, 0, $method(NaiveHuffman$1, init$, void, $NaiveHuffman*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.hpack.NaiveHuffman",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.NaiveHuffman$1", nullptr, nullptr, 0},
		{"jdk.internal.net.http.hpack.NaiveHuffman$Node", "jdk.internal.net.http.hpack.NaiveHuffman", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.hpack.NaiveHuffman$1",
		"jdk.internal.net.http.hpack.NaiveHuffman$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.NaiveHuffman"
	};
	$loadClass(NaiveHuffman$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NaiveHuffman$1);
	});
	return class$;
}

$Class* NaiveHuffman$1::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk