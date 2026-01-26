#include <jdk/internal/net/http/hpack/QuickHuffman$TemporaryNode.h>

#include <jdk/internal/net/http/hpack/QuickHuffman$Node.h>
#include <jdk/internal/net/http/hpack/QuickHuffman.h>
#include <jcpp.h>

using $QuickHuffman$NodeArray = $Array<::jdk::internal::net::http::hpack::QuickHuffman$Node>;
using $QuickHuffman$TemporaryNodeArray = $Array<::jdk::internal::net::http::hpack::QuickHuffman$TemporaryNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$FieldInfo _QuickHuffman$TemporaryNode_FieldInfo_[] = {
	{"symbol", "C", nullptr, $PRIVATE, $field(QuickHuffman$TemporaryNode, symbol)},
	{"eosPath", "Z", nullptr, $PRIVATE, $field(QuickHuffman$TemporaryNode, eosPath)},
	{"children", "[Ljdk/internal/net/http/hpack/QuickHuffman$TemporaryNode;", nullptr, $PRIVATE, $field(QuickHuffman$TemporaryNode, children)},
	{"length", "I", nullptr, $PRIVATE, $field(QuickHuffman$TemporaryNode, length)},
	{}
};

$MethodInfo _QuickHuffman$TemporaryNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(QuickHuffman$TemporaryNode, init$, void)},
	{"ensureChildrenExist", "()V", nullptr, $PRIVATE, $method(QuickHuffman$TemporaryNode, ensureChildrenExist, void)},
	{"getChild", "(I)Ljdk/internal/net/http/hpack/QuickHuffman$TemporaryNode;", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, getChild, QuickHuffman$TemporaryNode*, int32_t)},
	{"getChildren", "()[Ljdk/internal/net/http/hpack/QuickHuffman$Node;", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, getChildren, $QuickHuffman$NodeArray*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, getLength, int32_t)},
	{"getOrCreateChild", "(I)Ljdk/internal/net/http/hpack/QuickHuffman$TemporaryNode;", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, getOrCreateChild, QuickHuffman$TemporaryNode*, int32_t)},
	{"getSymbol", "()C", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, getSymbol, char16_t)},
	{"isEOSPath", "()Z", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, isEOSPath, bool)},
	{"isLeaf", "()Z", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, isLeaf, bool)},
	{"setEOSPath", "(Z)V", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, setEOSPath, void, bool)},
	{"setLength", "(I)V", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, setLength, void, int32_t)},
	{"setSymbol", "(C)V", nullptr, $PUBLIC, $virtualMethod(QuickHuffman$TemporaryNode, setSymbol, void, char16_t)},
	{}
};

$InnerClassInfo _QuickHuffman$TemporaryNode_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.hpack.QuickHuffman$TemporaryNode", "jdk.internal.net.http.hpack.QuickHuffman", "TemporaryNode", $STATIC | $FINAL},
	{"jdk.internal.net.http.hpack.QuickHuffman$Node", "jdk.internal.net.http.hpack.QuickHuffman", "Node", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _QuickHuffman$TemporaryNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.hpack.QuickHuffman$TemporaryNode",
	"java.lang.Object",
	"jdk.internal.net.http.hpack.QuickHuffman$Node",
	_QuickHuffman$TemporaryNode_FieldInfo_,
	_QuickHuffman$TemporaryNode_MethodInfo_,
	nullptr,
	nullptr,
	_QuickHuffman$TemporaryNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.hpack.QuickHuffman"
};

$Object* allocate$QuickHuffman$TemporaryNode($Class* clazz) {
	return $of($alloc(QuickHuffman$TemporaryNode));
}

void QuickHuffman$TemporaryNode::init$() {
}

QuickHuffman$TemporaryNode* QuickHuffman$TemporaryNode::getOrCreateChild(int32_t index) {
	ensureChildrenExist();
	if ($nc(this->children)->get(index) == nullptr) {
		$nc(this->children)->set(index, $$new(QuickHuffman$TemporaryNode));
	}
	return $nc(this->children)->get(index);
}

void QuickHuffman$TemporaryNode::ensureChildrenExist() {
	if (this->children == nullptr) {
		$set(this, children, $new($QuickHuffman$TemporaryNodeArray, 256));
	}
}

bool QuickHuffman$TemporaryNode::isLeaf() {
	return this->children == nullptr;
}

bool QuickHuffman$TemporaryNode::isEOSPath() {
	return this->eosPath;
}

void QuickHuffman$TemporaryNode::setEOSPath(bool value) {
	this->eosPath = value;
}

QuickHuffman$TemporaryNode* QuickHuffman$TemporaryNode::getChild(int32_t index) {
	ensureChildrenExist();
	return $nc(this->children)->get(index);
}

$QuickHuffman$NodeArray* QuickHuffman$TemporaryNode::getChildren() {
	if (this->children == nullptr) {
		return $new($QuickHuffman$NodeArray, 0);
	}
	return $fcast($QuickHuffman$NodeArray, this->children);
}

char16_t QuickHuffman$TemporaryNode::getSymbol() {
	return this->symbol;
}

int32_t QuickHuffman$TemporaryNode::getLength() {
	return this->length;
}

void QuickHuffman$TemporaryNode::setSymbol(char16_t value) {
	this->symbol = value;
}

void QuickHuffman$TemporaryNode::setLength(int32_t value) {
	this->length = value;
}

QuickHuffman$TemporaryNode::QuickHuffman$TemporaryNode() {
}

$Class* QuickHuffman$TemporaryNode::load$($String* name, bool initialize) {
	$loadClass(QuickHuffman$TemporaryNode, name, initialize, &_QuickHuffman$TemporaryNode_ClassInfo_, allocate$QuickHuffman$TemporaryNode);
	return class$;
}

$Class* QuickHuffman$TemporaryNode::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk