#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI$1.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsRadioButtonMenuItemUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsRadioButtonMenuItemUI$1::init$($WindowsRadioButtonMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsRadioButtonMenuItemUI$1::getMenuItem() {
	return $WindowsRadioButtonMenuItemUI::access$000(this->this$0);
}

$TMSchema$State* WindowsRadioButtonMenuItemUI$1::getState($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getState(this, menuItem);
}

$TMSchema$Part* WindowsRadioButtonMenuItemUI$1::getPart($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getPart(this, menuItem);
}

WindowsRadioButtonMenuItemUI$1::WindowsRadioButtonMenuItemUI$1() {
}

$Class* WindowsRadioButtonMenuItemUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsRadioButtonMenuItemUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI;)V", nullptr, 0, $method(WindowsRadioButtonMenuItemUI$1, init$, void, $WindowsRadioButtonMenuItemUI*)},
		{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC, $virtualMethod(WindowsRadioButtonMenuItemUI$1, getMenuItem, $JMenuItem*)},
		{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC, $virtualMethod(WindowsRadioButtonMenuItemUI$1, getPart, $TMSchema$Part*, $JMenuItem*)},
		{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC, $virtualMethod(WindowsRadioButtonMenuItemUI$1, getState, $TMSchema$State*, $JMenuItem*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1",
		"java.lang.Object",
		"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI"
	};
	$loadClass(WindowsRadioButtonMenuItemUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsRadioButtonMenuItemUI$1);
	});
	return class$;
}

$Class* WindowsRadioButtonMenuItemUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com