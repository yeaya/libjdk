#include <com/apple/laf/ScreenMenuBarProvider.h>
#include <com/apple/laf/ScreenMenuBar.h>
#include <jcpp.h>

using $ScreenMenuBar = ::com::apple::laf::ScreenMenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* ScreenMenuBarProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getScreenMenuBar", "()Lcom/apple/laf/ScreenMenuBar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuBarProvider, getScreenMenuBar, $ScreenMenuBar*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.laf.ScreenMenuBarProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ScreenMenuBarProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenMenuBarProvider);
	});
	return class$;
}

$Class* ScreenMenuBarProvider::class$ = nullptr;

		} // laf
	} // apple
} // com