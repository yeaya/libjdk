#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Toolkit.h>
#include <jcpp.h>

#undef BLACK
#undef WHITE

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $Color = ::java::awt::Color;
using $Toolkit = ::java::awt::Toolkit;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsLookAndFeel$FocusColorProperty::init$() {
	$init($Color);
	$WindowsDesktopProperty::init$("win.3d.backgroundColor"_s, $Color::BLACK);
}

$Object* WindowsLookAndFeel$FocusColorProperty::configureValue(Object$* value) {
	$useLocalObjectStack();
	$var($Object, highContrastOn, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("win.highContrast.on"_s));
	if (highContrastOn == nullptr || !$cast($Boolean, highContrastOn)->booleanValue()) {
		$init($Color);
		return $of($Color::BLACK);
	}
	$init($Color);
	return $of($nc($Color::BLACK)->equals(value) ? $Color::WHITE : $Color::BLACK);
}

WindowsLookAndFeel$FocusColorProperty::WindowsLookAndFeel$FocusColorProperty() {
}

$Class* WindowsLookAndFeel$FocusColorProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$FocusColorProperty, init$, void)},
		{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel$FocusColorProperty, configureValue, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FocusColorProperty", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty",
		"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$FocusColorProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$FocusColorProperty);
	});
	return class$;
}

$Class* WindowsLookAndFeel$FocusColorProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com