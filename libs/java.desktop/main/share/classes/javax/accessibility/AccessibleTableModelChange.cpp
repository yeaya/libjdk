#include <javax/accessibility/AccessibleTableModelChange.h>
#include <jcpp.h>

#undef DELETE
#undef INSERT
#undef UPDATE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$Class* AccessibleTableModelChange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, INSERT)},
		{"UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, UPDATE)},
		{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, DELETE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getFirstColumn", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getFirstColumn, int32_t)},
		{"getFirstRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getFirstRow, int32_t)},
		{"getLastColumn", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getLastColumn, int32_t)},
		{"getLastRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getLastRow, int32_t)},
		{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getType, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleTableModelChange",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleTableModelChange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleTableModelChange);
	});
	return class$;
}

$Class* AccessibleTableModelChange::class$ = nullptr;

	} // accessibility
} // javax