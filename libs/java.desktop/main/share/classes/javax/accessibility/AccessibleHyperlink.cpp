#include <javax/accessibility/AccessibleHyperlink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

void AccessibleHyperlink::init$() {
}

AccessibleHyperlink::AccessibleHyperlink() {
}

$Class* AccessibleHyperlink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getAccessibleActionCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "()V", nullptr, $PROTECTED, $method(AccessibleHyperlink, init$, void)},
		{"getAccessibleActionAnchor", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHyperlink, getAccessibleActionAnchor, $Object*, int32_t)},
		{"getAccessibleActionObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHyperlink, getAccessibleActionObject, $Object*, int32_t)},
		{"getEndIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHyperlink, getEndIndex, int32_t)},
		{"getStartIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHyperlink, getStartIndex, int32_t)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHyperlink, isValid, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.accessibility.AccessibleHyperlink",
		"java.lang.Object",
		"javax.accessibility.AccessibleAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleHyperlink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleHyperlink);
	});
	return class$;
}

$Class* AccessibleHyperlink::class$ = nullptr;

	} // accessibility
} // javax