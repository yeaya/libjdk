#include <org/w3c/dom/DOMImplementationSource.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMImplementationList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationList = ::org::w3c::dom::DOMImplementationList;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMImplementationSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationSource, getDOMImplementation, $DOMImplementation*, $String*)},
		{"getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMImplementationSource, getDOMImplementationList, $DOMImplementationList*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMImplementationSource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMImplementationSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationSource);
	});
	return class$;
}

$Class* DOMImplementationSource::class$ = nullptr;

		} // dom
	} // w3c
} // org