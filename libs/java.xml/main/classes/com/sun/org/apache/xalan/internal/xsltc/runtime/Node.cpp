#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Node.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _Node_FieldInfo_[] = {
	{"node", "I", nullptr, $PUBLIC, $field(Node, node)},
	{"type", "I", nullptr, $PUBLIC, $field(Node, type)},
	{}
};

$MethodInfo _Node_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(Node, init$, void, int32_t, int32_t)},
	{}
};

$ClassInfo _Node_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.Node",
	"java.lang.Object",
	nullptr,
	_Node_FieldInfo_,
	_Node_MethodInfo_
};

$Object* allocate$Node($Class* clazz) {
	return $of($alloc(Node));
}

void Node::init$(int32_t n, int32_t t) {
	this->node = n;
	this->type = t;
}

Node::Node() {
}

$Class* Node::load$($String* name, bool initialize) {
	$loadClass(Node, name, initialize, &_Node_ClassInfo_, allocate$Node);
	return class$;
}

$Class* Node::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com