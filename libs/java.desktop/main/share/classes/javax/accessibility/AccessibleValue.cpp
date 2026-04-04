#include <javax/accessibility/AccessibleValue.h>
#include <java/lang/Number.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace javax {
	namespace accessibility {

$Class* AccessibleValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getCurrentAccessibleValue, $Number*)},
		{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getMaximumAccessibleValue, $Number*)},
		{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getMinimumAccessibleValue, $Number*)},
		{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, setCurrentAccessibleValue, bool, $Number*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleValue",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleValue);
	});
	return class$;
}

$Class* AccessibleValue::class$ = nullptr;

	} // accessibility
} // javax