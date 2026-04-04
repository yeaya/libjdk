#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp.h>
#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <jcpp.h>

using $WindowsComboBoxUI$WinComboPopUp = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WinComboPopUp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup$InvocationKeyHandler = ::javax::swing::plaf::basic::BasicComboPopup$InvocationKeyHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::init$($WindowsComboBoxUI$WinComboPopUp* this$1) {
	$set(this, this$1, this$1);
	$BasicComboPopup$InvocationKeyHandler::init$(this$1);
}

WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler() {
}

$Class* WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp;)V", nullptr, $PROTECTED, $method(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, init$, void, $WindowsComboBoxUI$WinComboPopUp*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WinComboPopUp", $PROTECTED},
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "InvocationKeyHandler", $PROTECTED},
		{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler",
		"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
	};
	$loadClass(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler);
	});
	return class$;
}

$Class* WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com