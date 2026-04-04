#include <javax/xml/xpath/XPathFunctionException.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;

namespace javax {
	namespace xml {
		namespace xpath {

void XPathFunctionException::init$($String* message) {
	$XPathExpressionException::init$(message);
}

void XPathFunctionException::init$($Throwable* cause) {
	$XPathExpressionException::init$(cause);
}

XPathFunctionException::XPathFunctionException() {
}

XPathFunctionException::XPathFunctionException(const XPathFunctionException& e) : $XPathExpressionException(e) {
}

void XPathFunctionException::throw$() {
	throw *this;
}

$Class* XPathFunctionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathFunctionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFunctionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathFunctionException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.xpath.XPathFunctionException",
		"javax.xml.xpath.XPathExpressionException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFunctionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFunctionException);
	});
	return class$;
}

$Class* XPathFunctionException::class$ = nullptr;

		} // xpath
	} // xml
} // javax