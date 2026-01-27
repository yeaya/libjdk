#include <javax/xml/xpath/XPathConstants.h>

#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef BOOLEAN
#undef DOM_OBJECT_MODEL
#undef NODE
#undef NODESET
#undef NUMBER
#undef STRING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathConstants_FieldInfo_[] = {
	{"NUMBER", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, NUMBER)},
	{"STRING", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, STRING)},
	{"BOOLEAN", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, BOOLEAN)},
	{"NODESET", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, NODESET)},
	{"NODE", "Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, NODE)},
	{"DOM_OBJECT_MODEL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathConstants, DOM_OBJECT_MODEL)},
	{}
};

$MethodInfo _XPathConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XPathConstants, init$, void)},
	{}
};

$ClassInfo _XPathConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.xpath.XPathConstants",
	"java.lang.Object",
	nullptr,
	_XPathConstants_FieldInfo_,
	_XPathConstants_MethodInfo_
};

$Object* allocate$XPathConstants($Class* clazz) {
	return $of($alloc(XPathConstants));
}

$QName* XPathConstants::NUMBER = nullptr;
$QName* XPathConstants::STRING = nullptr;
$QName* XPathConstants::BOOLEAN = nullptr;
$QName* XPathConstants::NODESET = nullptr;
$QName* XPathConstants::NODE = nullptr;
$String* XPathConstants::DOM_OBJECT_MODEL = nullptr;

void XPathConstants::init$() {
}

void clinit$XPathConstants($Class* class$) {
	$assignStatic(XPathConstants::DOM_OBJECT_MODEL, "http://java.sun.com/jaxp/xpath/dom"_s);
	$assignStatic(XPathConstants::NUMBER, $new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "NUMBER"_s));
	$assignStatic(XPathConstants::STRING, $new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "STRING"_s));
	$assignStatic(XPathConstants::BOOLEAN, $new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "BOOLEAN"_s));
	$assignStatic(XPathConstants::NODESET, $new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "NODESET"_s));
	$assignStatic(XPathConstants::NODE, $new($QName, "http://www.w3.org/1999/XSL/Transform"_s, "NODE"_s));
}

XPathConstants::XPathConstants() {
}

$Class* XPathConstants::load$($String* name, bool initialize) {
	$loadClass(XPathConstants, name, initialize, &_XPathConstants_ClassInfo_, clinit$XPathConstants, allocate$XPathConstants);
	return class$;
}

$Class* XPathConstants::class$ = nullptr;

		} // xpath
	} // xml
} // javax