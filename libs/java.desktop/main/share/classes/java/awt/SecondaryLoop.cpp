#include <java/awt/SecondaryLoop.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* SecondaryLoop::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"enter", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecondaryLoop, enter, bool)},
		{"exit", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SecondaryLoop, exit, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.SecondaryLoop",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SecondaryLoop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecondaryLoop);
	});
	return class$;
}

$Class* SecondaryLoop::class$ = nullptr;

	} // awt
} // java