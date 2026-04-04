#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$ClientPropertyKeyAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getJComponent_TRANSFER_HANDLER", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ClientPropertyKeyAccessor, getJComponent_TRANSFER_HANDLER, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$ClientPropertyKeyAccessor", "sun.awt.AWTAccessor", "ClientPropertyKeyAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$ClientPropertyKeyAccessor",
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
	$loadClass(AWTAccessor$ClientPropertyKeyAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$ClientPropertyKeyAccessor);
	});
	return class$;
}

$Class* AWTAccessor$ClientPropertyKeyAccessor::class$ = nullptr;

	} // awt
} // sun