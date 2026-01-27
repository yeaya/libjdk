#include <javax/xml/xpath/XPathVariableResolver.h>

#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace javax {
	namespace xml {
		namespace xpath {

$MethodInfo _XPathVariableResolver_MethodInfo_[] = {
	{"resolveVariable", "(Ljavax/xml/namespace/QName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathVariableResolver, resolveVariable, $Object*, $QName*)},
	{}
};

$ClassInfo _XPathVariableResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.xpath.XPathVariableResolver",
	nullptr,
	nullptr,
	nullptr,
	_XPathVariableResolver_MethodInfo_
};

$Object* allocate$XPathVariableResolver($Class* clazz) {
	return $of($alloc(XPathVariableResolver));
}

$Class* XPathVariableResolver::load$($String* name, bool initialize) {
	$loadClass(XPathVariableResolver, name, initialize, &_XPathVariableResolver_ClassInfo_, allocate$XPathVariableResolver);
	return class$;
}

$Class* XPathVariableResolver::class$ = nullptr;

		} // xpath
	} // xml
} // javax