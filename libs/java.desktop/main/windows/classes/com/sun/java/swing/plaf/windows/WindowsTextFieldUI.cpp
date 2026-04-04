#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $WindowsTextFieldUI$WindowsFieldCaret = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* WindowsTextFieldUI::createUI($JComponent* c) {
	$init(WindowsTextFieldUI);
	return $new(WindowsTextFieldUI);
}

void WindowsTextFieldUI::paintBackground($Graphics* g) {
	$BasicTextFieldUI::paintBackground(g);
}

$Caret* WindowsTextFieldUI::createCaret() {
	return $new($WindowsTextFieldUI$WindowsFieldCaret);
}

WindowsTextFieldUI::WindowsTextFieldUI() {
}

$Class* WindowsTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTextFieldUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(WindowsTextFieldUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(WindowsTextFieldUI, paintBackground, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI", "WindowsFieldCaret", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsTextFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret,com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller"
	};
	$loadClass(WindowsTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsTextFieldUI));
	});
	return class$;
}

$Class* WindowsTextFieldUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com