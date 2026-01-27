#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _ExpressionNode_MethodInfo_[] = {
	{"exprAddChild", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionNode, exprAddChild, void, ExpressionNode*, int32_t)},
	{"exprGetChild", "(I)Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionNode, exprGetChild, ExpressionNode*, int32_t)},
	{"exprGetNumChildren", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionNode, exprGetNumChildren, int32_t)},
	{"exprGetParent", "()Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionNode, exprGetParent, ExpressionNode*)},
	{"exprSetParent", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionNode, exprSetParent, void, ExpressionNode*)},
	{}
};

$ClassInfo _ExpressionNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.ExpressionNode",
	nullptr,
	"javax.xml.transform.SourceLocator",
	nullptr,
	_ExpressionNode_MethodInfo_
};

$Object* allocate$ExpressionNode($Class* clazz) {
	return $of($alloc(ExpressionNode));
}

$Class* ExpressionNode::load$($String* name, bool initialize) {
	$loadClass(ExpressionNode, name, initialize, &_ExpressionNode_ClassInfo_, allocate$ExpressionNode);
	return class$;
}

$Class* ExpressionNode::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com