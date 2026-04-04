#include <javax/accessibility/AccessibleHypertext.h>
#include <javax/accessibility/AccessibleHyperlink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleHyperlink = ::javax::accessibility::AccessibleHyperlink;

namespace javax {
	namespace accessibility {

$Class* AccessibleHypertext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLink", "(I)Ljavax/accessibility/AccessibleHyperlink;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLink, $AccessibleHyperlink*, int32_t)},
		{"getLinkCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLinkCount, int32_t)},
		{"getLinkIndex", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLinkIndex, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleHypertext",
		nullptr,
		"javax.accessibility.AccessibleText",
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleHypertext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleHypertext);
	});
	return class$;
}

$Class* AccessibleHypertext::class$ = nullptr;

	} // accessibility
} // javax