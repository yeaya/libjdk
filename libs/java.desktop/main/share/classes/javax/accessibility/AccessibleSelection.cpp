#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace javax {
	namespace accessibility {

$Class* AccessibleSelection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, addAccessibleSelection, void, int32_t)},
		{"clearAccessibleSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, clearAccessibleSelection, void)},
		{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, getAccessibleSelection, $Accessible*, int32_t)},
		{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, getAccessibleSelectionCount, int32_t)},
		{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, isAccessibleChildSelected, bool, int32_t)},
		{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, removeAccessibleSelection, void, int32_t)},
		{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleSelection, selectAllAccessibleSelection, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleSelection",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleSelection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleSelection);
	});
	return class$;
}

$Class* AccessibleSelection::class$ = nullptr;

	} // accessibility
} // javax