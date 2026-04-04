#include <java/awt/Conditional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Conditional::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"evaluate", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Conditional, evaluate, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.awt.Conditional",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Conditional, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Conditional);
	});
	return class$;
}

$Class* Conditional::class$ = nullptr;

	} // awt
} // java