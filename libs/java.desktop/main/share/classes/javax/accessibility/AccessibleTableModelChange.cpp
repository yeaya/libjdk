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

$FieldInfo _AccessibleTableModelChange_FieldInfo_[] = {
	{"INSERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, INSERT)},
	{"UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, UPDATE)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleTableModelChange, DELETE)},
	{}
};

$MethodInfo _AccessibleTableModelChange_MethodInfo_[] = {
	{"getFirstColumn", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getFirstColumn, int32_t)},
	{"getFirstRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getFirstRow, int32_t)},
	{"getLastColumn", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getLastColumn, int32_t)},
	{"getLastRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getLastRow, int32_t)},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleTableModelChange, getType, int32_t)},
	{}
};

$ClassInfo _AccessibleTableModelChange_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleTableModelChange",
	nullptr,
	nullptr,
	_AccessibleTableModelChange_FieldInfo_,
	_AccessibleTableModelChange_MethodInfo_
};

$Object* allocate$AccessibleTableModelChange($Class* clazz) {
	return $of($alloc(AccessibleTableModelChange));
}

$Class* AccessibleTableModelChange::load$($String* name, bool initialize) {
	$loadClass(AccessibleTableModelChange, name, initialize, &_AccessibleTableModelChange_ClassInfo_, allocate$AccessibleTableModelChange);
	return class$;
}

$Class* AccessibleTableModelChange::class$ = nullptr;

	} // accessibility
} // javax