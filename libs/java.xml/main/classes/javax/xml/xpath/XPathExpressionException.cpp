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

$FieldInfo _XPathExpressionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathExpressionException, serialVersionUID)},
	{}
};

$MethodInfo _XPathExpressionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathExpressionException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathExpressionException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _XPathExpressionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.xpath.XPathExpressionException",
	"javax.xml.xpath.XPathException",
	nullptr,
	_XPathExpressionException_FieldInfo_,
	_XPathExpressionException_MethodInfo_
};

$Object* allocate$XPathExpressionException($Class* clazz) {
	return $of($alloc(XPathExpressionException));
}

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
	$loadClass(XPathExpressionException, name, initialize, &_XPathExpressionException_ClassInfo_, allocate$XPathExpressionException);
	return class$;
}

$Class* XPathExpressionException::class$ = nullptr;

		} // xpath
	} // xml
} // javax