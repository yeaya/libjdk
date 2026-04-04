#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSResourceResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSResourceResolver, resolveResource, $LSInput*, $String*, $String*, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSResourceResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LSResourceResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSResourceResolver);
	});
	return class$;
}

$Class* LSResourceResolver::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org