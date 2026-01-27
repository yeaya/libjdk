#include <javax/xml/xpath/XPathFunction.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathFunction_MethodInfo_[] = {
	{"evaluate", "(Ljava/util/List;)Ljava/lang/Object;", "(Ljava/util/List<*>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(XPathFunction, evaluate, $Object*, $List*), "javax.xml.xpath.XPathFunctionException"},
	{}
};

$ClassInfo _XPathFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathFunction",
	nullptr,
	nullptr,
	nullptr,
	_XPathFunction_MethodInfo_
};

$Object* allocate$XPathFunction($Class* clazz) {
	return $of($alloc(XPathFunction));
}

$Class* XPathFunction::load$($String* name, bool initialize) {
	$loadClass(XPathFunction, name, initialize, &_XPathFunction_ClassInfo_, allocate$XPathFunction);
	return class$;
}

$Class* XPathFunction::class$ = nullptr;

		} // xpath
	} // xml
} // javax