#include <com/sun/java/swing/plaf/windows/WindowsEditorPaneUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
}

$ComponentUI* WindowsEditorPaneUI::createUI($JComponent* c) {
	$init(WindowsEditorPaneUI);
	return $new(WindowsEditorPaneUI);
}

$Caret* WindowsEditorPaneUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

WindowsEditorPaneUI::WindowsEditorPaneUI() {
}

$Class* WindowsEditorPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsEditorPaneUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(WindowsEditorPaneUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsEditorPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsEditorPaneUI",
		"javax.swing.plaf.basic.BasicEditorPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsEditorPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsEditorPaneUI));
	});
	return class$;
}

$Class* WindowsEditorPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com