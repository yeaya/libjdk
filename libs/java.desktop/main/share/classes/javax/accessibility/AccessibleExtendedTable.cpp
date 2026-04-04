#include <javax/accessibility/AccessibleExtendedTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$Class* AccessibleExtendedTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessibleColumn", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedTable, getAccessibleColumn, int32_t, int32_t)},
		{"getAccessibleIndex", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedTable, getAccessibleIndex, int32_t, int32_t, int32_t)},
		{"getAccessibleRow", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedTable, getAccessibleRow, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleExtendedTable",
		nullptr,
		"javax.accessibility.AccessibleTable",
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleExtendedTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleExtendedTable);
	});
	return class$;
}

$Class* AccessibleExtendedTable::class$ = nullptr;

	} // accessibility
} // javax