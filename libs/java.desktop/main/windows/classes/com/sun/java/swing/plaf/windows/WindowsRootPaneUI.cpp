#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <jcpp.h>

using $WindowsRootPaneUI$AltProcessor = ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI$AltProcessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

WindowsRootPaneUI* WindowsRootPaneUI::windowsRootPaneUI = nullptr;
$WindowsRootPaneUI$AltProcessor* WindowsRootPaneUI::altProcessor = nullptr;

void WindowsRootPaneUI::init$() {
	$BasicRootPaneUI::init$();
}

$ComponentUI* WindowsRootPaneUI::createUI($JComponent* c) {
	$init(WindowsRootPaneUI);
	return WindowsRootPaneUI::windowsRootPaneUI;
}

void WindowsRootPaneUI::clinit$($Class* clazz) {
	$assignStatic(WindowsRootPaneUI::windowsRootPaneUI, $new(WindowsRootPaneUI));
	$assignStatic(WindowsRootPaneUI::altProcessor, $new($WindowsRootPaneUI$AltProcessor));
}

WindowsRootPaneUI::WindowsRootPaneUI() {
}

$Class* WindowsRootPaneUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"windowsRootPaneUI", "Lcom/sun/java/swing/plaf/windows/WindowsRootPaneUI;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsRootPaneUI, windowsRootPaneUI)},
		{"altProcessor", "Lcom/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor;", nullptr, $STATIC | $FINAL, $staticField(WindowsRootPaneUI, altProcessor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsRootPaneUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsRootPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor", "com.sun.java.swing.plaf.windows.WindowsRootPaneUI", "AltProcessor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsRootPaneUI",
		"javax.swing.plaf.basic.BasicRootPaneUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor"
	};
	$loadClass(WindowsRootPaneUI, name, initialize, &classInfo$$, WindowsRootPaneUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsRootPaneUI));
	});
	return class$;
}

$Class* WindowsRootPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com