#include <sun/awt/im/InputMethodWindow.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {
		namespace im {

$Class* InputMethodWindow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodWindow, setInputContext, void, $InputContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.im.InputMethodWindow",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InputMethodWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodWindow);
	});
	return class$;
}

$Class* InputMethodWindow::class$ = nullptr;

		} // im
	} // awt
} // sun