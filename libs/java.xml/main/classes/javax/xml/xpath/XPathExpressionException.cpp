#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XPathException = ::javax::xml::xpath::XPathException;

namespace javax {
	namespace xml {
		namespace xpath {

void XPathExpressionException::init$($String* message) {
	$XPathException::init$(message);
}

void XPathExpressionException::init$($Throwable* cause) {
	$XPathException::init$(cause);
}

XPathExpressionException::XPathExpressionException() {
}

XPathExpressionException::XPathExpressionException(const XPathExpressionException& e) : $XPathException(e) {
}

void XPathExpressionException::throw$() {
	throw *this;
}

$Class* XPathExpressionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathExpressionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathExpressionException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathExpressionException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.xpath.XPathExpressionException",
		"javax.xml.xpath.XPathException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathExpressionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathExpressionException);
	});
	return class$;
}

$Class* XPathExpressionException::class$ = nullptr;

		} // xpath
	} // xml
} // javax