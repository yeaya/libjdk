#include <com/sun/java/swing/plaf/windows/WindowsSeparatorUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

WindowsSeparatorUI::WindowsSeparatorUI() {
}

$Class* WindowsSeparatorUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsSeparatorUI, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsSeparatorUI",
		"javax.swing.plaf.basic.BasicSeparatorUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSeparatorUI);
	});
	return class$;
}

$Class* WindowsSeparatorUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com