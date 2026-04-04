#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$Class* CFRetainedResource$CFNativeAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CFRetainedResource$CFNativeAction, run, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CFRetainedResource$CFNativeAction", "sun.lwawt.macosx.CFRetainedResource", "CFNativeAction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
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
		"sun.lwawt.macosx.CFRetainedResource"
	};
	$loadClass(CFRetainedResource$CFNativeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFRetainedResource$CFNativeAction);
	});
	return class$;
}

$Class* CFRetainedResource$CFNativeAction::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun