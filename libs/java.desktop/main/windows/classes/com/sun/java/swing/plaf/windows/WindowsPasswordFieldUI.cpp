#include <com/sun/java/swing/plaf/windows/WindowsPasswordFieldUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicPasswordFieldUI = ::javax::swing::plaf::basic::BasicPasswordFieldUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsPasswordFieldUI::init$() {
	$BasicPasswordFieldUI::init$();
}

$ComponentUI* WindowsPasswordFieldUI::createUI($JComponent* c) {
	$init(WindowsPasswordFieldUI);
	return $new(WindowsPasswordFieldUI);
}

$Caret* WindowsPasswordFieldUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

WindowsPasswordFieldUI::WindowsPasswordFieldUI() {
}

$Class* WindowsPasswordFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsPasswordFieldUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(WindowsPasswordFieldUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsPasswordFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsPasswordFieldUI",
		"javax.swing.plaf.basic.BasicPasswordFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsPasswordFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsPasswordFieldUI));
	});
	return class$;
}

$Class* WindowsPasswordFieldUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com