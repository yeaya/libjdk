#include <com/sun/java/swing/plaf/windows/WindowsTextUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsHighlightPainter.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $WindowsTextUI$WindowsHighlightPainter = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsHighlightPainter;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$LayeredHighlighter$LayerPainter* WindowsTextUI::WindowsPainter = nullptr;

void WindowsTextUI::init$() {
	$BasicTextUI::init$();
}

$Caret* WindowsTextUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

void WindowsTextUI::clinit$($Class* clazz) {
	$assignStatic(WindowsTextUI::WindowsPainter, $new($WindowsTextUI$WindowsHighlightPainter, nullptr));
}

WindowsTextUI::WindowsTextUI() {
}

$Class* WindowsTextUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WindowsPainter", "Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $STATIC, $staticField(WindowsTextUI, WindowsPainter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsTextUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(WindowsTextUI, createCaret, $Caret*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsHighlightPainter", $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsCaret", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.java.swing.plaf.windows.WindowsTextUI",
		"javax.swing.plaf.basic.BasicTextUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter,com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret"
	};
	$loadClass(WindowsTextUI, name, initialize, &classInfo$$, WindowsTextUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsTextUI));
	});
	return class$;
}

$Class* WindowsTextUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com