#include <com/sun/org/apache/xalan/internal/lib/ExsltDynamic.h>

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>
#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <jcpp.h>

#undef ER_INVALID_CONTEXT_PASSED
#undef EXSL_URI
#undef MAX_VALUE
#undef SELECT

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $ExsltBase = ::com::sun::org::apache::xalan::internal::lib::ExsltBase;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $XSLTErrorResources = ::com::sun::org::apache::xalan::internal::res::XSLTErrorResources;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathContext$XPathExpressionContext = ::com::sun::org::apache::xpath::internal::XPathContext$XPathExpressionContext;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$FieldInfo _ExsltDynamic_FieldInfo_[] = {
	{"EXSL_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExsltDynamic, EXSL_URI)},
	{}
};

$MethodInfo _ExsltDynamic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltDynamic, init$, void)},
	{"closure", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Lorg/w3c/dom/NodeList;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, closure, $NodeList*, $ExpressionContext*, $NodeList*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"evaluate", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Ljava/lang/String;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, evaluate, $XObject*, $ExpressionContext*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"map", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Lorg/w3c/dom/NodeList;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, map, $NodeList*, $ExpressionContext*, $NodeList*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"max", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Lorg/w3c/dom/NodeList;Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, max, double, $ExpressionContext*, $NodeList*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"min", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Lorg/w3c/dom/NodeList;Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, min, double, $ExpressionContext*, $NodeList*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{"sum", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Lorg/w3c/dom/NodeList;Ljava/lang/String;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltDynamic, sum, double, $ExpressionContext*, $NodeList*, $String*), "org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _ExsltDynamic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltDynamic",
	"com.sun.org.apache.xalan.internal.lib.ExsltBase",
	nullptr,
	_ExsltDynamic_FieldInfo_,
	_ExsltDynamic_MethodInfo_
};

$Object* allocate$ExsltDynamic($Class* clazz) {
	return $of($alloc(ExsltDynamic));
}

$String* ExsltDynamic::EXSL_URI = nullptr;

void ExsltDynamic::init$() {
	$ExsltBase::init$();
}

double ExsltDynamic::max($ExpressionContext* myContext, $NodeList* nl, $String* expr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, nullptr);
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	if (expr == nullptr || $nc(expr)->length() == 0) {
		$init($Double);
		return $Double::NaN;
	}
	$var($NodeSetDTM, contextNodes, $new($NodeSetDTM, nl, xctxt));
	$nc(xctxt)->pushContextNodeList(contextNodes);
	$init($Double);
	double maxValue = -$Double::MAX_VALUE;
	for (int32_t i = 0; i < contextNodes->getLength(); ++i) {
		int32_t contextNode = contextNodes->item(i);
		xctxt->pushCurrentNode(contextNode);
		double result = (double)0;
		try {
			$var($String, var$0, expr);
			$var($SourceLocator, var$1, xctxt->getSAXLocator());
			$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
			result = $nc($(dynamicXPath->execute(xctxt, contextNode, $(xctxt->getNamespaceContext()))))->num();
		} catch ($TransformerException& e) {
			xctxt->popCurrentNode();
			xctxt->popContextNodeList();
			return $Double::NaN;
		}
		xctxt->popCurrentNode();
		if (result > maxValue) {
			maxValue = result;
		}
	}
	xctxt->popContextNodeList();
	return maxValue;
}

double ExsltDynamic::min($ExpressionContext* myContext, $NodeList* nl, $String* expr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, nullptr);
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	if (expr == nullptr || $nc(expr)->length() == 0) {
		$init($Double);
		return $Double::NaN;
	}
	$var($NodeSetDTM, contextNodes, $new($NodeSetDTM, nl, xctxt));
	$nc(xctxt)->pushContextNodeList(contextNodes);
	$init($Double);
	double minValue = $Double::MAX_VALUE;
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		int32_t contextNode = contextNodes->item(i);
		xctxt->pushCurrentNode(contextNode);
		double result = (double)0;
		try {
			$var($String, var$0, expr);
			$var($SourceLocator, var$1, xctxt->getSAXLocator());
			$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
			result = $nc($(dynamicXPath->execute(xctxt, contextNode, $(xctxt->getNamespaceContext()))))->num();
		} catch ($TransformerException& e) {
			xctxt->popCurrentNode();
			xctxt->popContextNodeList();
			return $Double::NaN;
		}
		xctxt->popCurrentNode();
		if (result < minValue) {
			minValue = result;
		}
	}
	xctxt->popContextNodeList();
	return minValue;
}

double ExsltDynamic::sum($ExpressionContext* myContext, $NodeList* nl, $String* expr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, nullptr);
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	if (expr == nullptr || $nc(expr)->length() == 0) {
		$init($Double);
		return $Double::NaN;
	}
	$var($NodeSetDTM, contextNodes, $new($NodeSetDTM, nl, xctxt));
	$nc(xctxt)->pushContextNodeList(contextNodes);
	double sum = (double)0;
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		int32_t contextNode = contextNodes->item(i);
		xctxt->pushCurrentNode(contextNode);
		double result = (double)0;
		try {
			$var($String, var$0, expr);
			$var($SourceLocator, var$1, xctxt->getSAXLocator());
			$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
			result = $nc($(dynamicXPath->execute(xctxt, contextNode, $(xctxt->getNamespaceContext()))))->num();
		} catch ($TransformerException& e) {
			xctxt->popCurrentNode();
			xctxt->popContextNodeList();
			$init($Double);
			return $Double::NaN;
		}
		xctxt->popCurrentNode();
		sum = sum + result;
	}
	xctxt->popContextNodeList();
	return sum;
}

$NodeList* ExsltDynamic::map($ExpressionContext* myContext, $NodeList* nl, $String* expr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, nullptr);
	$var($Document, lDoc, nullptr);
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	if (expr == nullptr || $nc(expr)->length() == 0) {
		return $new($NodeSet);
	}
	$var($NodeSetDTM, contextNodes, $new($NodeSetDTM, nl, xctxt));
	$nc(xctxt)->pushContextNodeList(contextNodes);
	$var($NodeSet, resultSet, $new($NodeSet));
	resultSet->setShouldCacheNodes(true);
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		int32_t contextNode = contextNodes->item(i);
		xctxt->pushCurrentNode(contextNode);
		$var($XObject, object, nullptr);
		try {
			$var($String, var$0, expr);
			$var($SourceLocator, var$1, xctxt->getSAXLocator());
			$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
			$assign(object, dynamicXPath->execute(xctxt, contextNode, $(xctxt->getNamespaceContext())));
			if ($instanceOf($XNodeSet, object)) {
				$var($NodeList, nodelist, nullptr);
				$assign(nodelist, $nc(($cast($XNodeSet, object)))->nodelist());
				for (int32_t k = 0; k < $nc(nodelist)->getLength(); ++k) {
					$var($Node, n, nodelist->item(k));
					if (!resultSet->contains(n)) {
						resultSet->addNode(n);
					}
				}
			} else {
				if (lDoc == nullptr) {
					$assign(lDoc, $JdkXmlUtils::getDOMDocument());
				}
				$var($Element, element, nullptr);
				if ($instanceOf($XNumber, object)) {
					$assign(element, $nc(lDoc)->createElementNS(ExsltDynamic::EXSL_URI, "exsl:number"_s));
				} else if ($instanceOf($XBoolean, object)) {
					$assign(element, $nc(lDoc)->createElementNS(ExsltDynamic::EXSL_URI, "exsl:boolean"_s));
				} else {
					$assign(element, $nc(lDoc)->createElementNS(ExsltDynamic::EXSL_URI, "exsl:string"_s));
				}
				$var($Text, textNode, $nc(lDoc)->createTextNode($($nc(object)->str())));
				$nc(element)->appendChild(textNode);
				resultSet->addNode(element);
			}
		} catch ($Exception& e) {
			xctxt->popCurrentNode();
			xctxt->popContextNodeList();
			return $new($NodeSet);
		}
		xctxt->popCurrentNode();
	}
	xctxt->popContextNodeList();
	return resultSet;
}

$XObject* ExsltDynamic::evaluate($ExpressionContext* myContext, $String* xpathExpr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$var($XPathContext, xctxt, nullptr);
		try {
			$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
			$var($String, var$0, xpathExpr);
			$var($SourceLocator, var$1, $nc(xctxt)->getSAXLocator());
			$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
			$var($XPathContext, var$2, xctxt);
			$var($Node, var$3, $nc(myContext)->getContextNode());
			return dynamicXPath->execute(var$2, var$3, $($nc(xctxt)->getNamespaceContext()));
		} catch ($TransformerException& e) {
			return $new($XNodeSet, $($nc(xctxt)->getDTMManager()));
		}
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	$shouldNotReachHere();
}

$NodeList* ExsltDynamic::closure($ExpressionContext* myContext, $NodeList* nl, $String* expr) {
	$init(ExsltDynamic);
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, nullptr);
	if ($instanceOf($XPathContext$XPathExpressionContext, myContext)) {
		$assign(xctxt, $nc(($cast($XPathContext$XPathExpressionContext, myContext)))->getXPathContext());
	} else {
		$init($XSLTErrorResources);
		$throwNew($SAXNotSupportedException, $($XSLMessages::createMessage($XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, $$new($ObjectArray, {$of(myContext)}))));
	}
	if (expr == nullptr || $nc(expr)->length() == 0) {
		return $new($NodeSet);
	}
	$var($NodeSet, closureSet, $new($NodeSet));
	closureSet->setShouldCacheNodes(true);
	$var($NodeList, iterationList, nl);
	do {
		$var($NodeSet, iterationSet, $new($NodeSet));
		$var($NodeSetDTM, contextNodes, $new($NodeSetDTM, iterationList, xctxt));
		$nc(xctxt)->pushContextNodeList(contextNodes);
		for (int32_t i = 0; i < $nc(iterationList)->getLength(); ++i) {
			int32_t contextNode = contextNodes->item(i);
			xctxt->pushCurrentNode(contextNode);
			$var($XObject, object, nullptr);
			try {
				$var($String, var$0, expr);
				$var($SourceLocator, var$1, xctxt->getSAXLocator());
				$var($XPath, dynamicXPath, $new($XPath, var$0, var$1, $(xctxt->getNamespaceContext()), $XPath::SELECT));
				$assign(object, dynamicXPath->execute(xctxt, contextNode, $(xctxt->getNamespaceContext())));
				if ($instanceOf($XNodeSet, object)) {
					$var($NodeList, nodelist, nullptr);
					$assign(nodelist, $nc(($cast($XNodeSet, object)))->nodelist());
					for (int32_t k = 0; k < $nc(nodelist)->getLength(); ++k) {
						$var($Node, n, nodelist->item(k));
						if (!iterationSet->contains(n)) {
							iterationSet->addNode(n);
						}
					}
				} else {
					xctxt->popCurrentNode();
					xctxt->popContextNodeList();
					return $new($NodeSet);
				}
			} catch ($TransformerException& e) {
				xctxt->popCurrentNode();
				xctxt->popContextNodeList();
				return $new($NodeSet);
			}
			xctxt->popCurrentNode();
		}
		xctxt->popContextNodeList();
		$assign(iterationList, iterationSet);
		for (int32_t i = 0; i < iterationList->getLength(); ++i) {
			$var($Node, n, iterationList->item(i));
			if (!closureSet->contains(n)) {
				closureSet->addNode(n);
			}
		}
	} while ($nc(iterationList)->getLength() > 0);
	return closureSet;
}

ExsltDynamic::ExsltDynamic() {
}

void clinit$ExsltDynamic($Class* class$) {
	$assignStatic(ExsltDynamic::EXSL_URI, "http://exslt.org/common"_s);
}

$Class* ExsltDynamic::load$($String* name, bool initialize) {
	$loadClass(ExsltDynamic, name, initialize, &_ExsltDynamic_ClassInfo_, clinit$ExsltDynamic, allocate$ExsltDynamic);
	return class$;
}

$Class* ExsltDynamic::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com