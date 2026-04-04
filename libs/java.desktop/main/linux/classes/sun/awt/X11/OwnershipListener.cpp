#include <sun/awt/X11/OwnershipListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* OwnershipListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ownershipChanged", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OwnershipListener, ownershipChanged, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.awt.X11.OwnershipListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OwnershipListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OwnershipListener);
	});
	return class$;
}

$Class* OwnershipListener::class$ = nullptr;

		} // X11
	} // awt
} // sun