#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/lang/Package.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsDesktopProperty::updateAllUIs() {
	$useLocalObjectStack();
	$Class* uiClass = $$nc($UIManager::getLookAndFeel())->getClass();
	if ($$nc(uiClass->getPackage())->equals($(WindowsDesktopProperty::class$->getPackage()))) {
		$XPStyle::invalidateStyle();
	}
	$DesktopProperty::updateAllUIs();
}

void WindowsDesktopProperty::init$($String* key, Object$* fallback) {
	$DesktopProperty::init$(key, fallback);
}

WindowsDesktopProperty::WindowsDesktopProperty() {
}

$Class* WindowsDesktopProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(WindowsDesktopProperty, init$, void, $String*, Object$*)},
		{"updateAllUIs", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(WindowsDesktopProperty, updateAllUIs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
		"sun.swing.plaf.DesktopProperty",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsDesktopProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsDesktopProperty);
	});
	return class$;
}

$Class* WindowsDesktopProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com