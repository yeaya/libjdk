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

$Class* XPathFunctionResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveFunction", "(Ljavax/xml/namespace/QName;I)Ljavax/xml/xpath/XPathFunction;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFunctionResolver, resolveFunction, $XPathFunction*, $QName*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.xpath.XPathFunctionResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFunctionResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFunctionResolver);
	});
	return class$;
}

$Class* XPathFunctionResolver::class$ = nullptr;

		} // xpath
	} // xml
} // javax