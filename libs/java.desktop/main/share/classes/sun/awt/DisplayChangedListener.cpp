#include <sun/awt/DisplayChangedListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* DisplayChangedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"displayChanged", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DisplayChangedListener, displayChanged, void)},
		{"paletteChanged", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DisplayChangedListener, paletteChanged, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.DisplayChangedListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(DisplayChangedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DisplayChangedListener);
	});
	return class$;
}

$Class* DisplayChangedListener::class$ = nullptr;

	} // awt
} // sun