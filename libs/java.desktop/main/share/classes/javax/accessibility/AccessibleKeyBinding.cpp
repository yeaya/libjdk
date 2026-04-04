#include <javax/accessibility/AccessibleKeyBinding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$Class* AccessibleKeyBinding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleKeyBinding, getAccessibleKeyBinding, $Object*, int32_t)},
		{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleKeyBinding, getAccessibleKeyBindingCount, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleKeyBinding",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleKeyBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleKeyBinding);
	});
	return class$;
}

$Class* AccessibleKeyBinding::class$ = nullptr;

	} // accessibility
} // javax