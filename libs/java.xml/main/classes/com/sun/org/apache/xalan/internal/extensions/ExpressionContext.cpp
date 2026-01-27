#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>

#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/transform/ErrorListener.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Node = ::org::w3c::dom::Node;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace extensions {

$MethodInfo _ExpressionContext_MethodInfo_[] = {
	{"getContextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, getContextNode, $Node*)},
	{"getContextNodes", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, getContextNodes, $NodeIterator*)},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, getErrorListener, $ErrorListener*)},
	{"getVariableOrParam", "(Lcom/sun/org/apache/xml/internal/utils/QName;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, getVariableOrParam, $XObject*, $QName*), "javax.xml.transform.TransformerException"},
	{"getXPathContext", "()Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, getXPathContext, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"toNumber", "(Lorg/w3c/dom/Node;)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, toNumber, double, $Node*)},
	{"toString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpressionContext, toString, $String*, $Node*)},
	{}
};

$ClassInfo _ExpressionContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.extensions.ExpressionContext",
	nullptr,
	nullptr,
	nullptr,
	_ExpressionContext_MethodInfo_
};

$Object* allocate$ExpressionContext($Class* clazz) {
	return $of($alloc(ExpressionContext));
}

$Class* ExpressionContext::load$($String* name, bool initialize) {
	$loadClass(ExpressionContext, name, initialize, &_ExpressionContext_ClassInfo_, allocate$ExpressionContext);
	return class$;
}

$Class* ExpressionContext::class$ = nullptr;

						} // extensions
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com