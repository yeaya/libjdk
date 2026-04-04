#include <javax/xml/crypto/dom/DOMURIReference.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

$Class* DOMURIReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHere", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMURIReference, getHere, $Node*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dom.DOMURIReference",
		nullptr,
		"javax.xml.crypto.URIReference",
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMURIReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMURIReference);
	});
	return class$;
}

$Class* DOMURIReference::class$ = nullptr;

			} // dom
		} // crypto
	} // xml
} // javax