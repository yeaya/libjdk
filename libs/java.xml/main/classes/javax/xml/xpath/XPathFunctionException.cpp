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

$FieldInfo _XPathFunctionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathFunctionException, serialVersionUID)},
	{}
};

$MethodInfo _XPathFunctionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFunctionException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathFunctionException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _XPathFunctionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.xpath.XPathFunctionException",
	"javax.xml.xpath.XPathExpressionException",
	nullptr,
	_XPathFunctionException_FieldInfo_,
	_XPathFunctionException_MethodInfo_
};

$Object* allocate$XPathFunctionException($Class* clazz) {
	return $of($alloc(XPathFunctionException));
}

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
	$loadClass(XPathFunctionException, name, initialize, &_XPathFunctionException_ClassInfo_, allocate$XPathFunctionException);
	return class$;
}

$Class* XPathFunctionException::class$ = nullptr;

		} // xpath
	} // xml
} // javax