#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/HierarchyEvent.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

#undef DISPLAYABILITY_CHANGED

using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
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

void WindowsMenuBarUI$2::init$($WindowsMenuBarUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsMenuBarUI$2::hierarchyChanged($HierarchyEvent* e) {
	if (($nc(e)->getChangeFlags() & $HierarchyEvent::DISPLAYABILITY_CHANGED) != 0) {
		if ($$nc($WindowsMenuBarUI::access$200(this->this$0))->isDisplayable()) {
			this->this$0->installWindowListener();
		} else {
			this->this$0->uninstallWindowListener();
		}
	}
}

WindowsMenuBarUI$2::WindowsMenuBarUI$2() {
}

$Class* WindowsMenuBarUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuBarUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)V", nullptr, 0, $method(WindowsMenuBarUI$2, init$, void, $WindowsMenuBarUI*)},
		{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuBarUI$2, hierarchyChanged, void, $HierarchyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI",
		"installListeners",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2",
		"java.lang.Object",
		"java.awt.event.HierarchyListener",
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
	$loadClass(WindowsMenuBarUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsMenuBarUI$2);
	});
	return class$;
}

$Class* WindowsMenuBarUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com