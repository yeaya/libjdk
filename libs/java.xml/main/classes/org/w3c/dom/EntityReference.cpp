#include <org/w3c/dom/EntityReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* EntityReference::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.EntityReference",
		nullptr,
		"org.w3c.dom.Node"
	};
	$loadClass(EntityReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntityReference);
	});
	return class$;
}

$Class* EntityReference::class$ = nullptr;

		} // dom
	} // w3c
} // org