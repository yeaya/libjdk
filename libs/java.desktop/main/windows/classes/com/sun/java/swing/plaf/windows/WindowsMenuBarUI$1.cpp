#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsMenuBarUI$1::init$($WindowsMenuBarUI* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void WindowsMenuBarUI$1::windowActivated($WindowEvent* e) {
	$$nc($WindowsMenuBarUI::access$000(this->this$0))->repaint();
}

void WindowsMenuBarUI$1::windowDeactivated($WindowEvent* e) {
	$$nc($WindowsMenuBarUI::access$100(this->this$0))->repaint();
}

WindowsMenuBarUI$1::WindowsMenuBarUI$1() {
}

$Class* WindowsMenuBarUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuBarUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)V", nullptr, 0, $method(WindowsMenuBarUI$1, init$, void, $WindowsMenuBarUI*)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuBarUI$1, windowActivated, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuBarUI$1, windowDeactivated, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI",
		"installWindowListener",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI"
	};
	$loadClass(WindowsMenuBarUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsMenuBarUI$1));
	});
	return class$;
}

$Class* WindowsMenuBarUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com