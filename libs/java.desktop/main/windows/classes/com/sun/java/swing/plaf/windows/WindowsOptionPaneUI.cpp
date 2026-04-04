#include <com/sun/java/swing/plaf/windows/WindowsOptionPaneUI.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

WindowsOptionPaneUI::WindowsOptionPaneUI() {
}

$Class* WindowsOptionPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsOptionPaneUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsOptionPaneUI",
		"javax.swing.plaf.basic.BasicOptionPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsOptionPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsOptionPaneUI);
	});
	return class$;
}

$Class* WindowsOptionPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com