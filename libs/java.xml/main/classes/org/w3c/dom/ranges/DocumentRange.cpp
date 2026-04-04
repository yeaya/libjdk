#include <org/w3c/dom/ranges/DocumentRange.h>
#include <org/w3c/dom/ranges/Range.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Range = ::org::w3c::dom::ranges::Range;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

$Class* DocumentRange::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createRange", "()Lorg/w3c/dom/ranges/Range;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentRange, createRange, $Range*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ranges.DocumentRange",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentRange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentRange);
	});
	return class$;
}

$Class* DocumentRange::class$ = nullptr;

			} // ranges
		} // dom
	} // w3c
} // org