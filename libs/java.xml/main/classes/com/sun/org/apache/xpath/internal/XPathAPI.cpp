#include <com/sun/org/apache/xpath/internal/XPathAPI.h>

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolverDefault.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef OVERRIDE_PARSER_DEFAULT
#undef SELECT

using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $PrefixResolverDefault = ::com::sun::org::apache::xml::internal::utils::PrefixResolverDefault;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _XPathAPI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPathAPI, init$, void)},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, eval, $XObject*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, eval, $XObject*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, eval, $XObject*, $Node*, $String*, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"selectNodeIterator", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectNodeIterator, $NodeIterator*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectNodeIterator", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectNodeIterator, $NodeIterator*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectNodeList, $NodeList*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectNodeList, $NodeList*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"selectSingleNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectSingleNode, $Node*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectSingleNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathAPI, selectSingleNode, $Node*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _XPathAPI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathAPI",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XPathAPI_MethodInfo_
};

$Object* allocate$XPathAPI($Class* clazz) {
	return $of($alloc(XPathAPI));
}

void XPathAPI::init$() {
}

$Node* XPathAPI::selectSingleNode($Node* contextNode, $String* str) {
	return selectSingleNode(contextNode, str, contextNode);
}

$Node* XPathAPI::selectSingleNode($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($NodeIterator, nl, selectNodeIterator(contextNode, str, namespaceNode));
	return $nc(nl)->nextNode();
}

$NodeIterator* XPathAPI::selectNodeIterator($Node* contextNode, $String* str) {
	return selectNodeIterator(contextNode, str, contextNode);
}

$NodeIterator* XPathAPI::selectNodeIterator($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($XObject, list, eval(contextNode, str, namespaceNode));
	return $nc(list)->nodeset();
}

$NodeList* XPathAPI::selectNodeList($Node* contextNode, $String* str) {
	return selectNodeList(contextNode, str, contextNode);
}

$NodeList* XPathAPI::selectNodeList($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($XObject, list, eval(contextNode, str, namespaceNode));
	return $nc(list)->nodelist();
}

$XObject* XPathAPI::eval($Node* contextNode, $String* str) {
	return eval(contextNode, str, contextNode);
}

$XObject* XPathAPI::eval($Node* contextNode, $String* str, $Node* namespaceNode) {
	$useLocalCurrentObjectStackCache();
	$init($JdkConstants);
	$var($XPathContext, xpathSupport, $new($XPathContext, $JdkConstants::OVERRIDE_PARSER_DEFAULT));
	$var($PrefixResolverDefault, prefixResolver, $new($PrefixResolverDefault, ($nc(namespaceNode)->getNodeType() == $Node::DOCUMENT_NODE) ? $(static_cast<$Node*>($nc(($cast($Document, namespaceNode)))->getDocumentElement())) : namespaceNode));
	$var($XPath, xpath, $new($XPath, str, nullptr, prefixResolver, $XPath::SELECT, nullptr));
	int32_t ctxtNode = xpathSupport->getDTMHandleFromNode(contextNode);
	return xpath->execute(xpathSupport, ctxtNode, static_cast<$PrefixResolver*>(prefixResolver));
}

$XObject* XPathAPI::eval($Node* contextNode, $String* str, $PrefixResolver* prefixResolver) {
	$useLocalCurrentObjectStackCache();
	$var($XPath, xpath, $new($XPath, str, nullptr, prefixResolver, $XPath::SELECT, nullptr));
	$init($JdkConstants);
	$var($XPathContext, xpathSupport, $new($XPathContext, $JdkConstants::OVERRIDE_PARSER_DEFAULT));
	int32_t ctxtNode = xpathSupport->getDTMHandleFromNode(contextNode);
	return xpath->execute(xpathSupport, ctxtNode, prefixResolver);
}

XPathAPI::XPathAPI() {
}

$Class* XPathAPI::load$($String* name, bool initialize) {
	$loadClass(XPathAPI, name, initialize, &_XPathAPI_ClassInfo_, allocate$XPathAPI);
	return class$;
}

$Class* XPathAPI::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com