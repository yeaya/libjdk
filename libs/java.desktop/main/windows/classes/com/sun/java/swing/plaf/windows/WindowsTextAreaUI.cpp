#include <com/sun/java/swing/plaf/windows/WindowsTextAreaUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
}

$Caret* WindowsTextAreaUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

$ComponentUI* WindowsTextAreaUI::createUI($JComponent* c) {
	$init(WindowsTextAreaUI);
	return $new(WindowsTextAreaUI);
}

WindowsTextAreaUI::WindowsTextAreaUI() {
}

$Class* WindowsTextAreaUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTextAreaUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(WindowsTextAreaUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsTextAreaUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsTextAreaUI",
		"javax.swing.plaf.basic.BasicTextAreaUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsTextAreaUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsTextAreaUI));
	});
	return class$;
}

$Class* WindowsTextAreaUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com