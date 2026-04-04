#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$Class* CFRetainedResource$CFNativeActionGet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CFRetainedResource$CFNativeActionGet, run, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet", "sun.lwawt.macosx.CFRetainedResource", "CFNativeActionGet", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
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
	$loadClass(CFRetainedResource$CFNativeActionGet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CFRetainedResource$CFNativeActionGet);
	});
	return class$;
}

$Class* CFRetainedResource$CFNativeActionGet::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun