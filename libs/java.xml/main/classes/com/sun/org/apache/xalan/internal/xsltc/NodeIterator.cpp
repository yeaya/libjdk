#include <com/sun/org/apache/xalan/internal/xsltc/NodeIterator.h>

#include <jcpp.h>

#undef END

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

$FieldInfo _NodeIterator_FieldInfo_[] = {
	{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeIterator, END)},
	{}
};

$MethodInfo _NodeIterator_MethodInfo_[] = {
	{"cloneIterator", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, cloneIterator, NodeIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getLast, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, getPosition, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, reset, NodeIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeIterator, setStartNode, NodeIterator*, int32_t)},
	{}
};

$ClassInfo _NodeIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.NodeIterator",
	nullptr,
	"java.lang.Cloneable",
	_NodeIterator_FieldInfo_,
	_NodeIterator_MethodInfo_
};

$Object* allocate$NodeIterator($Class* clazz) {
	return $of($alloc(NodeIterator));
}

$Class* NodeIterator::load$($String* name, bool initialize) {
	$loadClass(NodeIterator, name, initialize, &_NodeIterator_ClassInfo_, allocate$NodeIterator);
	return class$;
}

$Class* NodeIterator::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com