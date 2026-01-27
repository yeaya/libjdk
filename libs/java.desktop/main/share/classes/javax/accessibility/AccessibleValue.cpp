#include <javax/accessibility/AccessibleValue.h>

#include <java/lang/Number.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleValue_MethodInfo_[] = {
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getCurrentAccessibleValue, $Number*)},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getMaximumAccessibleValue, $Number*)},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, getMinimumAccessibleValue, $Number*)},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleValue, setCurrentAccessibleValue, bool, $Number*)},
	{}
};

$ClassInfo _AccessibleValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleValue",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleValue_MethodInfo_
};

$Object* allocate$AccessibleValue($Class* clazz) {
	return $of($alloc(AccessibleValue));
}

$Class* AccessibleValue::load$($String* name, bool initialize) {
	$loadClass(AccessibleValue, name, initialize, &_AccessibleValue_ClassInfo_, allocate$AccessibleValue);
	return class$;
}

$Class* AccessibleValue::class$ = nullptr;

	} // accessibility
} // javax