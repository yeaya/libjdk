#include <org/w3c/dom/DOMStringList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMStringList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, contains, bool, $String*)},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, getLength, int32_t)},
		{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStringList, item, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMStringList",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMStringList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMStringList);
	});
	return class$;
}

$Class* DOMStringList::class$ = nullptr;

		} // dom
	} // w3c
} // org