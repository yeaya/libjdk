#include <javax/xml/xpath/XPathExpression.h>

#include <javax/xml/namespace/QName.h>
#include <javax/xml/xpath/XPathEvaluationResult$XPathResultType.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathEvaluationResult$XPathResultType = ::javax::xml::xpath::XPathEvaluationResult$XPathResultType;
using $InputSource = ::org::xml::sax::InputSource;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathExpression_MethodInfo_[] = {
	{"evaluate", "(Ljava/lang/Object;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathExpression, evaluate, $Object*, Object$*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathExpression, evaluate, $String*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Lorg/xml/sax/InputSource;Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathExpression, evaluate, $Object*, $InputSource*, $QName*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluate", "(Lorg/xml/sax/InputSource;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathExpression, evaluate, $String*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPathExpression, evaluateExpression, $Object*, Object$*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Ljava/lang/Object;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPathExpression, evaluateExpression, $XPathEvaluationResult*, Object$*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Lorg/xml/sax/InputSource;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Lorg/xml/sax/InputSource;Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(XPathExpression, evaluateExpression, $Object*, $InputSource*, $Class*), "javax.xml.xpath.XPathExpressionException"},
	{"evaluateExpression", "(Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult;", "(Lorg/xml/sax/InputSource;)Ljavax/xml/xpath/XPathEvaluationResult<*>;", $PUBLIC, $virtualMethod(XPathExpression, evaluateExpression, $XPathEvaluationResult*, $InputSource*), "javax.xml.xpath.XPathExpressionException"},
	{}
};

$ClassInfo _XPathExpression_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathExpression",
	nullptr,
	nullptr,
	nullptr,
	_XPathExpression_MethodInfo_
};

$Object* allocate$XPathExpression($Class* clazz) {
	return $of($alloc(XPathExpression));
}

$Object* XPathExpression::evaluateExpression(Object$* item, $Class* type) {
	$useLocalCurrentObjectStackCache();
	return $of($nc(type)->cast($(evaluate(item, $($XPathEvaluationResult$XPathResultType::getQNameType(type))))));
}

$XPathEvaluationResult* XPathExpression::evaluateExpression(Object$* item) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(item, $XPathEvaluationResult::class$));
}

$Object* XPathExpression::evaluateExpression($InputSource* source, $Class* type) {
	$useLocalCurrentObjectStackCache();
	return $of($nc(type)->cast($(evaluate(source, $($XPathEvaluationResult$XPathResultType::getQNameType(type))))));
}

$XPathEvaluationResult* XPathExpression::evaluateExpression($InputSource* source) {
	$load($XPathEvaluationResult);
	return $cast($XPathEvaluationResult, evaluateExpression(source, $XPathEvaluationResult::class$));
}

$Class* XPathExpression::load$($String* name, bool initialize) {
	$loadClass(XPathExpression, name, initialize, &_XPathExpression_ClassInfo_, allocate$XPathExpression);
	return class$;
}

$Class* XPathExpression::class$ = nullptr;

		} // xpath
	} // xml
} // javax