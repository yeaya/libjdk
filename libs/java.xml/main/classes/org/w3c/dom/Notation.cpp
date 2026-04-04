#include <org/w3c/dom/Notation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* Notation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Notation, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Notation, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.Notation",
		nullptr,
		"org.w3c.dom.Node",
		nullptr,
		methodInfos$$
	};
	$loadClass(Notation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Notation);
	});
	return class$;
}

$Class* Notation::class$ = nullptr;

		} // dom
	} // w3c
} // org