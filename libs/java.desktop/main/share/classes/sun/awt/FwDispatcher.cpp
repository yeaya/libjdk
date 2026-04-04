#include <sun/awt/FwDispatcher.h>
#include <java/awt/SecondaryLoop.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace sun {
	namespace awt {

$Class* FwDispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createSecondaryLoop", "()Ljava/awt/SecondaryLoop;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FwDispatcher, createSecondaryLoop, $SecondaryLoop*)},
		{"isDispatchThread", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FwDispatcher, isDispatchThread, bool)},
		{"scheduleDispatch", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FwDispatcher, scheduleDispatch, void, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.FwDispatcher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FwDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FwDispatcher);
	});
	return class$;
}

$Class* FwDispatcher::class$ = nullptr;

	} // awt
} // sun