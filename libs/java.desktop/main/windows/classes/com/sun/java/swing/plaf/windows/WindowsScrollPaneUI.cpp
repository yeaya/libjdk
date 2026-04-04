#include <com/sun/java/swing/plaf/windows/WindowsScrollPaneUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

WindowsScrollPaneUI::WindowsScrollPaneUI() {
}

$Class* WindowsScrollPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsScrollPaneUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsScrollPaneUI",
		"javax.swing.plaf.basic.BasicScrollPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsScrollPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsScrollPaneUI));
	});
	return class$;
}

$Class* WindowsScrollPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com