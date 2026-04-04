#include <org/w3c/dom/DocumentFragment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DocumentFragment::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DocumentFragment",
		nullptr,
		"org.w3c.dom.Node"
	};
	$loadClass(DocumentFragment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentFragment);
	});
	return class$;
}

$Class* DocumentFragment::class$ = nullptr;

		} // dom
	} // w3c
} // org