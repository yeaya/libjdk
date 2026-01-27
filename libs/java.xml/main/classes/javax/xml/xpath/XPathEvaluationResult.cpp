#include <javax/xml/xpath/XPathEvaluationResult.h>

#include <javax/xml/xpath/XPathEvaluationResult$XPathResultType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XPathEvaluationResult$XPathResultType = ::javax::xml::xpath::XPathEvaluationResult$XPathResultType;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathEvaluationResult_MethodInfo_[] = {
	{"type", "()Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathEvaluationResult, type, $XPathEvaluationResult$XPathResultType*)},
	{"value", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(XPathEvaluationResult, value, $Object*)},
	{}
};

$InnerClassInfo _XPathEvaluationResult_InnerClassesInfo_[] = {
	{"javax.xml.xpath.XPathEvaluationResult$XPathResultType", "javax.xml.xpath.XPathEvaluationResult", "XPathResultType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XPathEvaluationResult_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathEvaluationResult",
	nullptr,
	nullptr,
	nullptr,
	_XPathEvaluationResult_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_XPathEvaluationResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.xpath.XPathEvaluationResult$XPathResultType"
};

$Object* allocate$XPathEvaluationResult($Class* clazz) {
	return $of($alloc(XPathEvaluationResult));
}

$Class* XPathEvaluationResult::load$($String* name, bool initialize) {
	$loadClass(XPathEvaluationResult, name, initialize, &_XPathEvaluationResult_ClassInfo_, allocate$XPathEvaluationResult);
	return class$;
}

$Class* XPathEvaluationResult::class$ = nullptr;

		} // xpath
	} // xml
} // javax