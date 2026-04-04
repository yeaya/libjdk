#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$ScrollPaneAdjustableAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setTypedValue", "(Ljava/awt/ScrollPaneAdjustable;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ScrollPaneAdjustableAccessor, setTypedValue, void, $ScrollPaneAdjustable*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor", "sun.awt.AWTAccessor", "ScrollPaneAdjustableAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$ScrollPaneAdjustableAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$ScrollPaneAdjustableAccessor);
	});
	return class$;
}

$Class* AWTAccessor$ScrollPaneAdjustableAccessor::class$ = nullptr;

	} // awt
} // sun