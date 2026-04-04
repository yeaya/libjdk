#include <sun/java2d/DisposerTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$Class* DisposerTarget::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDisposerReferent", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DisposerTarget, getDisposerReferent, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.DisposerTarget",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DisposerTarget, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DisposerTarget);
	});
	return class$;
}

$Class* DisposerTarget::class$ = nullptr;

	} // java2d
} // sun