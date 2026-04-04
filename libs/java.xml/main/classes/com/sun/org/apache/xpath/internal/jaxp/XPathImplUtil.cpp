#include <com/sun/org/apache/xpath/internal/jaxp/XPathImplUtil.h>
#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/jaxp/JAXPExtensionsProvider.h>
#include <com/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/jaxp/JAXPVariableStack.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathResultImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/io/IOException.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathConstants.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathNodes.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef BOOLEAN
#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NUMBER
#undef CLASS_RTREEFRAG
#undef CLASS_STRING
#undef ER_ARG_CANNOT_BE_NULL
#undef ER_CONTEXT_CAN_NOT_BE_NULL
#undef ER_UNSUPPORTED_RETURN_TYPE
#undef NODE
#undef NODESET
#undef NULL
#undef NUMBER
#undef STRING

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $JAXPExtensionsProvider = ::com::sun::org::apache::xpath::internal::jaxp::JAXPExtensionsProvider;
using $JAXPVariableStack = ::com::sun::org::apache::xpath::internal::jaxp::JAXPVariableStack;
using $XPathResultImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathResultImpl;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $QName = ::javax::xml::namespace$::QName;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPathConstants = ::javax::xml::xpath::XPathConstants;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;
using $XPathNodes = ::javax::xml::xpath::XPathNodes;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

void XPathImplUtil::init$() {
	this->featureSecureProcessing = false;
}

$XObject* XPathImplUtil::eval(Object$* contextItem, $XPath* xpath) {
	$useLocalObjectStack();
	$var($XPathContext, xpathSupport, nullptr);
	if (contextItem == nullptr && $instanceOf($LocPathIterator, $($nc(xpath)->getExpression()))) {
		$init($XPATHErrorResources);
		$throwNew($TransformerException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_CONTEXT_CAN_NOT_BE_NULL, $$new($ObjectArray, 0))));
	}
	if (this->functionResolver != nullptr) {
		$var($JAXPExtensionsProvider, jep, $new($JAXPExtensionsProvider, this->functionResolver, this->featureSecureProcessing, this->featureManager));
		$assign(xpathSupport, $new($XPathContext, jep));
	} else {
		$assign(xpathSupport, $new($XPathContext));
	}
	$nc(xpathSupport)->setVarStack($$new($JAXPVariableStack, this->variableResolver));
	$var($XObject, xobj, nullptr);
	$var($Node, contextNode, $cast($Node, contextItem));
	if (contextNode == nullptr) {
		$assign(xobj, $nc(xpath)->execute(xpathSupport, $DTM::NULL, this->prefixResolver));
	} else {
		$assign(xobj, $nc(xpath)->execute(xpathSupport, contextNode, this->prefixResolver));
	}
	return xobj;
}

$Document* XPathImplUtil::getDocument($InputSource* source) {
	$useLocalObjectStack();
	requireNonNull(source, "Source"_s);
	try {
		$var($DocumentBuilderFactory, dbf, $JdkXmlUtils::getDOMFactory(this->overrideDefaultParser));
		return $$nc($nc(dbf)->newDocumentBuilder())->parse(source);
	} catch ($ParserConfigurationException& e) {
		$throwNew($XPathExpressionException, e);
	} catch ($SAXException& e) {
		$throwNew($XPathExpressionException, e);
	} catch ($IOException& e) {
		$throwNew($XPathExpressionException, e);
	}
	$shouldNotReachHere();
}

$Object* XPathImplUtil::getResultAsType($XObject* resultObject, $QName* returnType) {
	$useLocalObjectStack();
	$init($XPathConstants);
	if ($nc(returnType)->equals($XPathConstants::STRING)) {
		return $of($nc(resultObject)->str());
	}
	if (returnType->equals($XPathConstants::NUMBER)) {
		return $of($Double::valueOf($nc(resultObject)->num()));
	}
	if (returnType->equals($XPathConstants::BOOLEAN)) {
		return $of($Boolean::valueOf($nc(resultObject)->bool$()));
	}
	if (returnType->equals($XPathConstants::NODESET)) {
		return $nc(resultObject)->nodelist();
	}
	if (returnType->equals($XPathConstants::NODE)) {
		$var($NodeIterator, ni, $nc(resultObject)->nodeset());
		return $nc(ni)->nextNode();
	}
	$init($XPATHErrorResources);
	$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE, $$new($ObjectArray, {$(returnType->toString())})));
	$throwNew($IllegalArgumentException, fmsg);
}

$Object* XPathImplUtil::getXPathResult($XObject* resultObject, $Class* type) {
	$useLocalObjectStack();
	int32_t resultType = $nc(resultObject)->getType();
	switch (resultType) {
	case $XObject::CLASS_BOOLEAN:
		return $nc(type)->cast($$new($XPathResultImpl, resultObject, $Boolean::class$));
	case $XObject::CLASS_NUMBER:
		return $nc(type)->cast($$new($XPathResultImpl, resultObject, $Double::class$));
	case $XObject::CLASS_STRING:
		return $nc(type)->cast($$new($XPathResultImpl, resultObject, $String::class$));
	case $XObject::CLASS_NODESET:
		$load($XPathNodes);
		return $nc(type)->cast($$new($XPathResultImpl, resultObject, $XPathNodes::class$));
	case $XObject::CLASS_RTREEFRAG:
		$load($Node);
		return $nc(type)->cast($$new($XPathResultImpl, resultObject, $Node::class$));
	}
	return nullptr;
}

void XPathImplUtil::isSupportedClassType($Class* type) {
	$useLocalObjectStack();
	requireNonNull(type, "The class type"_s);
	bool var$6 = $nc(type)->isAssignableFrom($Boolean::class$);
	bool var$5 = var$6 || type->isAssignableFrom($Double::class$);
	bool var$4 = var$5 || type->isAssignableFrom($Integer::class$);
	bool var$3 = var$4 || type->isAssignableFrom($Long::class$);
	bool var$2 = var$3 || type->isAssignableFrom($String::class$);
	$load($XPathNodes);
	bool var$1 = var$2 || type->isAssignableFrom($XPathNodes::class$);
	$load($Node);
	bool var$0 = var$1 || type->isAssignableFrom($Node::class$);
	$load($XPathEvaluationResult);
	if (var$0 || type->isAssignableFrom($XPathEvaluationResult::class$)) {
		return;
	}
	$init($XPATHErrorResources);
	$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE, $$new($ObjectArray, {$(type->toString())})));
	$throwNew($IllegalArgumentException, fmsg);
}

void XPathImplUtil::isSupported($QName* returnType) {
	$useLocalObjectStack();
	requireNonNull(returnType, "returnType"_s);
	$init($XPathConstants);
	bool var$3 = $nc(returnType)->equals($XPathConstants::STRING);
	bool var$2 = var$3 || returnType->equals($XPathConstants::NUMBER);
	bool var$1 = var$2 || returnType->equals($XPathConstants::BOOLEAN);
	bool var$0 = var$1 || returnType->equals($XPathConstants::NODE);
	if (var$0 || returnType->equals($XPathConstants::NODESET)) {
		return;
	}
	$init($XPATHErrorResources);
	$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE, $$new($ObjectArray, {$(returnType->toString())})));
	$throwNew($IllegalArgumentException, fmsg);
}

void XPathImplUtil::requireNonNull(Object$* param, $String* paramName) {
	$useLocalObjectStack();
	if (param == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ARG_CANNOT_BE_NULL, $$new($ObjectArray, {paramName})));
		$throwNew($NullPointerException, fmsg);
	}
}

XPathImplUtil::XPathImplUtil() {
}

$Class* XPathImplUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"functionResolver", "Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, 0, $field(XPathImplUtil, functionResolver)},
		{"variableResolver", "Ljavax/xml/xpath/XPathVariableResolver;", nullptr, 0, $field(XPathImplUtil, variableResolver)},
		{"prefixResolver", "Lcom/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver;", nullptr, 0, $field(XPathImplUtil, prefixResolver)},
		{"overrideDefaultParser", "Z", nullptr, 0, $field(XPathImplUtil, overrideDefaultParser)},
		{"featureSecureProcessing", "Z", nullptr, 0, $field(XPathImplUtil, featureSecureProcessing)},
		{"featureManager", "Ljdk/xml/internal/JdkXmlFeatures;", nullptr, 0, $field(XPathImplUtil, featureManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XPathImplUtil, init$, void)},
		{"eval", "(Ljava/lang/Object;Lcom/sun/org/apache/xpath/internal/XPath;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, 0, $virtualMethod(XPathImplUtil, eval, $XObject*, Object$*, $XPath*), "javax.xml.transform.TransformerException"},
		{"getDocument", "(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;", nullptr, 0, $virtualMethod(XPathImplUtil, getDocument, $Document*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
		{"getResultAsType", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XPathImplUtil, getResultAsType, $Object*, $XObject*, $QName*), "javax.xml.transform.TransformerException"},
		{"getXPathResult", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class<TT;>;)TT;", 0, $virtualMethod(XPathImplUtil, getXPathResult, $Object*, $XObject*, $Class*), "javax.xml.transform.TransformerException"},
		{"isSupported", "(Ljavax/xml/namespace/QName;)V", nullptr, 0, $virtualMethod(XPathImplUtil, isSupported, void, $QName*)},
		{"isSupportedClassType", "(Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)V", 0, $virtualMethod(XPathImplUtil, isSupportedClassType, void, $Class*)},
		{"requireNonNull", "(Ljava/lang/Object;Ljava/lang/String;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/String;)V", 0, $virtualMethod(XPathImplUtil, requireNonNull, void, Object$*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathImplUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathImplUtil);
	});
	return class$;
}

$Class* XPathImplUtil::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com