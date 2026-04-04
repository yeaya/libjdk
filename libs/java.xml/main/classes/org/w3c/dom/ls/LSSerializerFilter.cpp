#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSSerializerFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializerFilter, getWhatToShow, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSSerializerFilter",
		nullptr,
		"org.w3c.dom.traversal.NodeFilter",
		nullptr,
		methodInfos$$
	};
	$loadClass(LSSerializerFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSSerializerFilter);
	});
	return class$;
}

$Class* LSSerializerFilter::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org