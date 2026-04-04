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

$Class* XPathEvaluationResult::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"type", "()Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathEvaluationResult, type, $XPathEvaluationResult$XPathResultType*)},
		{"value", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(XPathEvaluationResult, value, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.xpath.XPathEvaluationResult$XPathResultType", "javax.xml.xpath.XPathEvaluationResult", "XPathResultType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.xpath.XPathEvaluationResult",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.xpath.XPathEvaluationResult$XPathResultType"
	};
	$loadClass(XPathEvaluationResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathEvaluationResult);
	});
	return class$;
}

$Class* XPathEvaluationResult::class$ = nullptr;

		} // xpath
	} // xml
} // javax