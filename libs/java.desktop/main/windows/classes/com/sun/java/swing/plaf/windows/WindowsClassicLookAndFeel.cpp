#include <com/sun/java/swing/plaf/windows/WindowsClassicLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsClassicLookAndFeel::init$() {
	$WindowsLookAndFeel::init$();
}

$String* WindowsClassicLookAndFeel::getName() {
	return "Windows Classic"_s;
}

WindowsClassicLookAndFeel::WindowsClassicLookAndFeel() {
}

$Class* WindowsClassicLookAndFeel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsClassicLookAndFeel, init$, void)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsClassicLookAndFeel, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel",
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsClassicLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsClassicLookAndFeel));
	});
	return class$;
}

$Class* WindowsClassicLookAndFeel::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com