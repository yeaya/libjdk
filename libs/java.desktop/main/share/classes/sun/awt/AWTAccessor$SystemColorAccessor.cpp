#include <sun/awt/AWTAccessor$SystemColorAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$SystemColorAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"updateSystemColors", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$SystemColorAccessor, updateSystemColors, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$SystemColorAccessor", "sun.awt.AWTAccessor", "SystemColorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$SystemColorAccessor",
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
	$loadClass(AWTAccessor$SystemColorAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$SystemColorAccessor);
	});
	return class$;
}

$Class* AWTAccessor$SystemColorAccessor::class$ = nullptr;

	} // awt
} // sun