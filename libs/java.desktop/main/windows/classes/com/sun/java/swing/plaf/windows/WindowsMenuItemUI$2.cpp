#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
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

void WindowsMenuItemUI$2::init$($WindowsMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsMenuItemUI$2::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	if (name == "horizontalTextPosition"_s) {
		this->this$0->updateCheckIcon();
	}
}

WindowsMenuItemUI$2::WindowsMenuItemUI$2() {
}

$Class* WindowsMenuItemUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuItemUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;)V", nullptr, 0, $method(WindowsMenuItemUI$2, init$, void, $WindowsMenuItemUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsMenuItemUI$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsMenuItemUI",
		"installListeners",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsMenuItemUI"
	};
	$loadClass(WindowsMenuItemUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsMenuItemUI$2);
	});
	return class$;
}

$Class* WindowsMenuItemUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com