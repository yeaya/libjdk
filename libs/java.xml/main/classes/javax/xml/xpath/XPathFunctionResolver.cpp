#include <javax/xml/xpath/XPathFunctionResolver.h>

#include <javax/xml/namespace/QName.h>
#include <javax/xml/xpath/XPathFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $XPathFunction = ::javax::xml::xpath::XPathFunction;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathFunctionResolver_MethodInfo_[] = {
	{"resolveFunction", "(Ljavax/xml/namespace/QName;I)Ljavax/xml/xpath/XPathFunction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFunctionResolver, resolveFunction, $XPathFunction*, $QName*, int32_t)},
	{}
};

$ClassInfo _XPathFunctionResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathFunctionResolver",
	nullptr,
	nullptr,
	nullptr,
	_XPathFunctionResolver_MethodInfo_
};

$Object* allocate$XPathFunctionResolver($Class* clazz) {
	return $of($alloc(XPathFunctionResolver));
}

$Class* XPathFunctionResolver::load$($String* name, bool initialize) {
	$loadClass(XPathFunctionResolver, name, initialize, &_XPathFunctionResolver_ClassInfo_, allocate$XPathFunctionResolver);
	return class$;
}

$Class* XPathFunctionResolver::class$ = nullptr;

		} // xpath
	} // xml
} // javax