#include <javax/xml/xpath/XPathVariableResolver.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace xpath {

$Class* XPathVariableResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveVariable", "(Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathVariableResolver, resolveVariable, $Object*, $QName*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.xpath.XPathVariableResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathVariableResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathVariableResolver);
	});
	return class$;
}

$Class* XPathVariableResolver::class$ = nullptr;

		} // xpath
	} // xml
} // javax