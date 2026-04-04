#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace javax {
	namespace accessibility {

$Class* Accessible::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Accessible, getAccessibleContext, $AccessibleContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.Accessible",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Accessible, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Accessible);
	});
	return class$;
}

$Class* Accessible::class$ = nullptr;

	} // accessibility
} // javax