#include <jdk/internal/net/http/hpack/NaiveHuffman$Node.h>
#include <java/lang/IllegalStateException.h>
#include <jdk/internal/net/http/hpack/NaiveHuffman.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void NaiveHuffman$Node::init$() {
}

NaiveHuffman$Node* NaiveHuffman$Node::getChild(int32_t selector) {
	$useLocalObjectStack();
	if (isLeaf()) {
		$throwNew($IllegalStateException, "This is a leaf node"_s);
	}
	$var(NaiveHuffman$Node, result, selector == 0 ? this->left : this->right);
	if (result == nullptr) {
		$throwNew($IllegalStateException, $($String::format("Node doesn\'t have a child (selector=%s)"_s, $$new($ObjectArray, {$($Integer::valueOf(selector))}))));
	}
	return result;
}

bool NaiveHuffman$Node::isLeaf() {
	return this->charIsSet;
}

char16_t NaiveHuffman$Node::getChar() {
	if (!isLeaf()) {
		$throwNew($IllegalStateException, "This node is not a leaf node"_s);
	}
	return this->c;
}

void NaiveHuffman$Node::setChar(char16_t c) {
	if (this->charIsSet) {
		$throwNew($IllegalStateException, "This node has been taken already"_s);
	}
	if (this->left != nullptr || this->right != nullptr) {
		$throwNew($IllegalStateException, "The node cannot be made a leaf as it\'s already has a child"_s);
	}
	this->c = c;
	this->charIsSet = true;
}

NaiveHuffman$Node* NaiveHuffman$Node::addChildIfAbsent(int32_t i) {
	if (this->charIsSet) {
		$throwNew($IllegalStateException, "The node cannot have a child as it\'s already a leaf node"_s);
	}
	$var(NaiveHuffman$Node, child, nullptr);
	if (i == 0) {
		if (($assign(child, this->left)) == nullptr) {
			$assign(child, $set(this, left, $new(NaiveHuffman$Node)));
		}
	} else if (($assign(child, this->right)) == nullptr) {
		$assign(child, $set(this, right, $new(NaiveHuffman$Node)));
	}
	return child;
}

$String* NaiveHuffman$Node::toString() {
	$useLocalObjectStack();
	if (isLeaf()) {
		if (this->isEOSPath) {
			return "EOS"_s;
		} else {
			return $String::format("char: (%3s) \'%s\'"_s, $$new($ObjectArray, {
				$($Integer::valueOf((int32_t)this->c)),
				$($Character::valueOf(this->c))
			}));
		}
	}
	return "/\\"_s;
}

NaiveHuffman$Node::NaiveHuffman$Node() {
}

$Class* NaiveHuffman$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"left", "Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, 0, $field(NaiveHuffman$Node, left)},
		{"right", "Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, 0, $field(NaiveHuffman$Node, right)},
		{"isEOSPath", "Z", nullptr, 0, $field(NaiveHuffman$Node, isEOSPath)},
		{"charIsSet", "Z", nullptr, 0, $field(NaiveHuffman$Node, charIsSet)},
		{"c", "C", nullptr, 0, $field(NaiveHuffman$Node, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NaiveHuffman$Node, init$, void)},
		{"addChildIfAbsent", "(I)Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, 0, $virtualMethod(NaiveHuffman$Node, addChildIfAbsent, NaiveHuffman$Node*, int32_t)},
		{"getChar", "()C", nullptr, 0, $virtualMethod(NaiveHuffman$Node, getChar, char16_t)},
		{"getChild", "(I)Ljdk/internal/net/http/hpack/NaiveHuffman$Node;", nullptr, 0, $virtualMethod(NaiveHuffman$Node, getChild, NaiveHuffman$Node*, int32_t)},
		{"isLeaf", "()Z", nullptr, 0, $virtualMethod(NaiveHuffman$Node, isLeaf, bool)},
		{"setChar", "(C)V", nullptr, 0, $virtualMethod(NaiveHuffman$Node, setChar, void, char16_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NaiveHuffman$Node, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.NaiveHuffman$Node", "jdk.internal.net.http.hpack.NaiveHuffman", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.hpack.NaiveHuffman$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.NaiveHuffman"
	};
	$loadClass(NaiveHuffman$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NaiveHuffman$Node);
	});
	return class$;
}

$Class* NaiveHuffman$Node::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk