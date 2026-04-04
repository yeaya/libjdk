#include <javax/xml/xpath/XPathFunction.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace xpath {

$Class* XPathFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"evaluate", "(Ljava/util/List;)Ljava/lang/Object;", "(Ljava/util/List<*>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(XPathFunction, evaluate, $Object*, $List*), "javax.xml.xpath.XPathFunctionException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.xpath.XPathFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFunction);
	});
	return class$;
}

$Class* XPathFunction::class$ = nullptr;

		} // xpath
	} // xml
} // javax