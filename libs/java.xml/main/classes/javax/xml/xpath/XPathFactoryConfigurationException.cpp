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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPathFactoryConfigurationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFactoryConfigurationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XPathFactoryConfigurationException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.xpath.XPathFactoryConfigurationException",
		"javax.xml.xpath.XPathException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactoryConfigurationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactoryConfigurationException);
	});
	return class$;
}

$Class* XPathFactoryConfigurationException::class$ = nullptr;

		} // xpath
	} // xml
} // javax