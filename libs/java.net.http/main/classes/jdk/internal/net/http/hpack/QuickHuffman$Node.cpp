#include <jdk/internal/net/http/hpack/QuickHuffman$Node.h>

#include <jdk/internal/net/http/hpack/QuickHuffman.h>
#include <jcpp.h>

using $QuickHuffman$NodeArray = $Array<::jdk::internal::net::http::hpack::QuickHuffman$Node>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$MethodInfo _QuickHuffman$Node_MethodInfo_[] = {
	{"getChild", "(I)Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, getChild, QuickHuffman$Node*, int32_t)},
	{"getChildren", "()[Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, getChildren, $QuickHuffman$NodeArray*)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, getLength, int32_t)},
	{"getOrCreateChild", "(I)Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, getOrCreateChild, QuickHuffman$Node*, int32_t)},
	{"getSymbol", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, getSymbol, char16_t)},
	{"isEOSPath", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, isEOSPath, bool)},
	{"isLeaf", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, isLeaf, bool)},
	{"setEOSPath", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, setEOSPath, void, bool)},
	{"setLength", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, setLength, void, int32_t)},
	{"setSymbol", "(C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuickHuffman$Node, setSymbol, void, char16_t)},
	{}
};

$InnerClassInfo _QuickHuffman$Node_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.hpack.QuickHuffman$Node", "jdk.internal.net.http.hpack.QuickHuffman", "Node", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _QuickHuffman$Node_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.hpack.QuickHuffman$Node",
	nullptr,
	nullptr,
	nullptr,
	_QuickHuffman$Node_MethodInfo_,
	nullptr,
	nullptr,
	_QuickHuffman$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.hpack.QuickHuffman"
};

$Object* allocate$QuickHuffman$Node($Class* clazz) {
	return $of($alloc(QuickHuffman$Node));
}

$Class* QuickHuffman$Node::load$($String* name, bool initialize) {
	$loadClass(QuickHuffman$Node, name, initialize, &_QuickHuffman$Node_ClassInfo_, allocate$QuickHuffman$Node);
	return class$;
}

$Class* QuickHuffman$Node::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk