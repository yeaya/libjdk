#include <org/w3c/dom/CDATASection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* CDATASection::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.CDATASection",
		nullptr,
		"org.w3c.dom.Text"
	};
	$loadClass(CDATASection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CDATASection);
	});
	return class$;
}

$Class* CDATASection::class$ = nullptr;

		} // dom
	} // w3c
} // org