#include <com/sun/org/apache/xpath/internal/CachedXPathAPI.h>

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
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _CachedXPathAPI_FieldInfo_[] = {
	{"xpathSupport", "Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PROTECTED, $field(CachedXPathAPI, xpathSupport)},
	{}
};

$MethodInfo _CachedXPathAPI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CachedXPathAPI, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/CachedXPathAPI;)V", nullptr, $PUBLIC, $method(CachedXPathAPI, init$, void, CachedXPathAPI*)},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, eval, $XObject*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, eval, $XObject*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"eval", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, eval, $XObject*, $Node*, $String*, $PrefixResolver*), "javax.xml.transform.TransformerException"},
	{"getXPathContext", "()Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, getXPathContext, $XPathContext*)},
	{"selectNodeIterator", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectNodeIterator, $NodeIterator*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectNodeIterator", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectNodeIterator, $NodeIterator*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectNodeList, $NodeList*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectNodeList, $NodeList*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{"selectSingleNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectSingleNode, $Node*, $Node*, $String*), "javax.xml.transform.TransformerException"},
	{"selectSingleNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CachedXPathAPI, selectSingleNode, $Node*, $Node*, $String*, $Node*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _CachedXPathAPI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.CachedXPathAPI",
	"java.lang.Object",
	nullptr,
	_CachedXPathAPI_FieldInfo_,
	_CachedXPathAPI_MethodInfo_
};

$Object* allocate$CachedXPathAPI($Class* clazz) {
	return $of($alloc(CachedXPathAPI));
}

void CachedXPathAPI::init$() {
	$init($JdkConstants);
	$set(this, xpathSupport, $new($XPathContext, $JdkConstants::OVERRIDE_PARSER_DEFAULT));
}

void CachedXPathAPI::init$(CachedXPathAPI* priorXPathAPI) {
	$set(this, xpathSupport, $nc(priorXPathAPI)->xpathSupport);
}

$XPathContext* CachedXPathAPI::getXPathContext() {
	return this->xpathSupport;
}

$Node* CachedXPathAPI::selectSingleNode($Node* contextNode, $String* str) {
	return selectSingleNode(contextNode, str, contextNode);
}

$Node* CachedXPathAPI::selectSingleNode($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($NodeIterator, nl, selectNodeIterator(contextNode, str, namespaceNode));
	return $nc(nl)->nextNode();
}

$NodeIterator* CachedXPathAPI::selectNodeIterator($Node* contextNode, $String* str) {
	return selectNodeIterator(contextNode, str, contextNode);
}

$NodeIterator* CachedXPathAPI::selectNodeIterator($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($XObject, list, eval(contextNode, str, namespaceNode));
	return $nc(list)->nodeset();
}

$NodeList* CachedXPathAPI::selectNodeList($Node* contextNode, $String* str) {
	return selectNodeList(contextNode, str, contextNode);
}

$NodeList* CachedXPathAPI::selectNodeList($Node* contextNode, $String* str, $Node* namespaceNode) {
	$var($XObject, list, eval(contextNode, str, namespaceNode));
	return $nc(list)->nodelist();
}

$XObject* CachedXPathAPI::eval($Node* contextNode, $String* str) {
	return eval(contextNode, str, contextNode);
}

$XObject* CachedXPathAPI::eval($Node* contextNode, $String* str, $Node* namespaceNode) {
	$useLocalCurrentObjectStackCache();
	$var($PrefixResolverDefault, prefixResolver, $new($PrefixResolverDefault, ($nc(namespaceNode)->getNodeType() == $Node::DOCUMENT_NODE) ? $(static_cast<$Node*>($nc(($cast($Document, namespaceNode)))->getDocumentElement())) : namespaceNode));
	$var($XPath, xpath, $new($XPath, str, nullptr, prefixResolver, $XPath::SELECT, nullptr));
	int32_t ctxtNode = $nc(this->xpathSupport)->getDTMHandleFromNode(contextNode);
	return xpath->execute(this->xpathSupport, ctxtNode, static_cast<$PrefixResolver*>(prefixResolver));
}

$XObject* CachedXPathAPI::eval($Node* contextNode, $String* str, $PrefixResolver* prefixResolver) {
	$useLocalCurrentObjectStackCache();
	$var($XPath, xpath, $new($XPath, str, nullptr, prefixResolver, $XPath::SELECT, nullptr));
	$init($JdkConstants);
	$var($XPathContext, xpathSupport, $new($XPathContext, $JdkConstants::OVERRIDE_PARSER_DEFAULT));
	int32_t ctxtNode = xpathSupport->getDTMHandleFromNode(contextNode);
	return xpath->execute(xpathSupport, ctxtNode, prefixResolver);
}

CachedXPathAPI::CachedXPathAPI() {
}

$Class* CachedXPathAPI::load$($String* name, bool initialize) {
	$loadClass(CachedXPathAPI, name, initialize, &_CachedXPathAPI_ClassInfo_, allocate$CachedXPathAPI);
	return class$;
}

$Class* CachedXPathAPI::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com