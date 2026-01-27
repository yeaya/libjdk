#include <javax/xml/xpath/XPath.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/xpath/XPathEvaluationResult$XPathResultType.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathExpression.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathEvaluationResult$XPathResultType = ::javax::xml::xpath::XPathEvaluationResult$XPathResultType;
using $XPathExpression = ::javax::xml::xpath::XPathExpression;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;
using $InputSource = ::org::xml::sax::InputSource;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPath_MethodInfo_[] = {
	{"compile", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, compile, $XPathExpression*, $String*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, evaluate, $Object*, $String*, Object$*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, evaluate, $String*, $String*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, evaluate, $Object*, $String*, $InputSource*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, evaluate, $String*, $String*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPath, evaluateExpression, $Object*, $String*, Object$*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPath, evaluateExpression, $XPathEvaluationResult*, $String*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Lorg/xml/sax/InputSource;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPath, evaluateExpression, $Object*, $String*, $InputSource*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/String;Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPath, evaluateExpression, $XPathEvaluationResult*, $String*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, getNamespaceContext, $NamespaceContext*)},
	{"getXPathFunctionResolver", "()Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, getXPathFunctionResolver, $XPathFunctionResolver*)},
	{"getXPathVariableResolver", "()Ljavax/xml/xpath/XPathVariableResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, getXPathVariableResolver, $XPathVariableResolver*)},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, reset, void)},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, setNamespaceContext, void, $NamespaceContext*)},
	{"setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, setXPathFunctionResolver, void, $XPathFunctionResolver*)},
	{"setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPath, setXPathVariableResolver, void, $XPathVariableResolver*)},
	{}
};

$ClassInfo _XPath_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPath",
	nullptr,
	nullptr,
	nullptr,
	_XPath_MethodInfo_
};

$Object* allocate$XPath($Class* clazz) {
	return $of($alloc(XPath));
}

$Object* XPath::evaluateExpression($String* expression, Object$* item, $Class* type) {
	$useLocalCurrentObjectStackCache();
	return $of($nc(type)->cast($(evaluate(expression, item, $($XPathEvaluationResult$XPathResultType::getQNameType(type))))));
}

$XPathEvaluationResult* XPath::evaluateExpression($String* expression, Object$* item) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(expression, item, $XPathEvaluationResult::class$));
}

$Object* XPath::evaluateExpression($String* expression, $InputSource* source, $Class* type) {
	$useLocalCurrentObjectStackCache();
	return $of($nc(type)->cast($(evaluate(expression, source, $($XPathEvaluationResult$XPathResultType::getQNameType(type))))));
}

$XPathEvaluationResult* XPath::evaluateExpression($String* expression, $InputSource* source) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(expression, source, $XPathEvaluationResult::class$));
}

$Class* XPath::load$($String* name, bool initialize) {
	$loadClass(XPath, name, initialize, &_XPath_ClassInfo_, allocate$XPath);
	return class$;
}

$Class* XPath::class$ = nullptr;

		} // xpath
	} // xml
} // javax