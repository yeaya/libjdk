#include <javax/xml/transform/dom/DOMLocator.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

$MethodInfo _DOMLocator_MethodInfo_[] = {
	{"getOriginatingNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMLocator, getOriginatingNode, $Node*)},
	{}
};

$ClassInfo _DOMLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.dom.DOMLocator",
	nullptr,
	"javax.xml.transform.SourceLocator",
	nullptr,
	_DOMLocator_MethodInfo_
};

$Object* allocate$DOMLocator($Class* clazz) {
	return $of($alloc(DOMLocator));
}

$Class* DOMLocator::load$($String* name, bool initialize) {
	$loadClass(DOMLocator, name, initialize, &_DOMLocator_ClassInfo_, allocate$DOMLocator);
	return class$;
}

$Class* DOMLocator::class$ = nullptr;

			} // dom
		} // transform
	} // xml
} // javax