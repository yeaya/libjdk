#include <java/beans/Visibility.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* Visibility::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"avoidingGui", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, avoidingGui, bool)},
		{"dontUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, dontUseGui, void)},
		{"needsGui", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, needsGui, bool)},
		{"okToUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, okToUseGui, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.Visibility",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Visibility, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Visibility);
	});
	return class$;
}

$Class* Visibility::class$ = nullptr;

	} // beans
} // java