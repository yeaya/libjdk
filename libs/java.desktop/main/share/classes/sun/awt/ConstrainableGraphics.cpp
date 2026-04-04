#include <sun/awt/ConstrainableGraphics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* ConstrainableGraphics::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"constrain", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstrainableGraphics, constrain, void, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.ConstrainableGraphics",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstrainableGraphics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstrainableGraphics);
	});
	return class$;
}

$Class* ConstrainableGraphics::class$ = nullptr;

	} // awt
} // sun