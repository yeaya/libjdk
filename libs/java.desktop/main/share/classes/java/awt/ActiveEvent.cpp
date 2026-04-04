#include <java/awt/ActiveEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* ActiveEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispatch", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ActiveEvent, dispatch, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.ActiveEvent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ActiveEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActiveEvent);
	});
	return class$;
}

$Class* ActiveEvent::class$ = nullptr;

	} // awt
} // java