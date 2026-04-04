#include <javax/accessibility/AccessibleIcon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$Class* AccessibleIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessibleIconDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconDescription, $String*)},
		{"getAccessibleIconHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconHeight, int32_t)},
		{"getAccessibleIconWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconWidth, int32_t)},
		{"setAccessibleIconDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, setAccessibleIconDescription, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleIcon",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleIcon);
	});
	return class$;
}

$Class* AccessibleIcon::class$ = nullptr;

	} // accessibility
} // javax