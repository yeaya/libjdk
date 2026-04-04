#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMStringList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMStringList = ::org::w3c::dom::DOMStringList;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMConfiguration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMConfiguration, canSetParameter, bool, $String*, Object$*)},
		{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMConfiguration, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
		{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMConfiguration, getParameterNames, $DOMStringList*)},
		{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMConfiguration, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMConfiguration",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMConfiguration);
	});
	return class$;
}

$Class* DOMConfiguration::class$ = nullptr;

		} // dom
	} // w3c
} // org