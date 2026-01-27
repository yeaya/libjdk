#include <javax/xml/xpath/XPathFactoryConfigurationException.h>

#include <javax/xml/xpath/XPathException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XPathException = ::javax::xml::xpath::XPathException;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathFactoryConfigurationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathFactoryConfigurationException, serialVersionUID)},
	{}
};

$MethodInfo _XPathFactoryConfigurationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryConfigurationException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathFactoryConfigurationException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _XPathFactoryConfigurationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.xpath.XPathFactoryConfigurationException",
	"javax.xml.xpath.XPathException",
	nullptr,
	_XPathFactoryConfigurationException_FieldInfo_,
	_XPathFactoryConfigurationException_MethodInfo_
};

$Object* allocate$XPathFactoryConfigurationException($Class* clazz) {
	return $of($alloc(XPathFactoryConfigurationException));
}

void XPathFactoryConfigurationException::init$($String* message) {
	$XPathException::init$(message);
}

void XPathFactoryConfigurationException::init$($Throwable* cause) {
	$XPathException::init$(cause);
}

XPathFactoryConfigurationException::XPathFactoryConfigurationException() {
}

XPathFactoryConfigurationException::XPathFactoryConfigurationException(const XPathFactoryConfigurationException& e) : $XPathException(e) {
}

void XPathFactoryConfigurationException::throw$() {
	throw *this;
}

$Class* XPathFactoryConfigurationException::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryConfigurationException, name, initialize, &_XPathFactoryConfigurationException_ClassInfo_, allocate$XPathFactoryConfigurationException);
	return class$;
}

$Class* XPathFactoryConfigurationException::class$ = nullptr;

		} // xpath
	} // xml
} // javax