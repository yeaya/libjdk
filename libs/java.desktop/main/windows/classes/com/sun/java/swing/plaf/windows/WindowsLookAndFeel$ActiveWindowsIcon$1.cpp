#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$ActiveWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
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

void WindowsLookAndFeel$ActiveWindowsIcon$1::init$($WindowsLookAndFeel$ActiveWindowsIcon* this$1, $String* key, $WindowsLookAndFeel* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$WindowsLookAndFeel$TriggerDesktopProperty::init$(this$1->this$0, key);
}

void WindowsLookAndFeel$ActiveWindowsIcon$1::updateUI() {
	$set(this->this$1, icon, nullptr);
	$WindowsLookAndFeel$TriggerDesktopProperty::updateUI();
}

WindowsLookAndFeel$ActiveWindowsIcon$1::WindowsLookAndFeel$ActiveWindowsIcon$1() {
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$ActiveWindowsIcon$1, this$1)},
		{"val$this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$ActiveWindowsIcon$1, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon;Ljava/lang/String;Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, 0, $method(WindowsLookAndFeel$ActiveWindowsIcon$1, init$, void, $WindowsLookAndFeel$ActiveWindowsIcon*, $String*, $WindowsLookAndFeel*)},
		{"updateUI", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel$ActiveWindowsIcon$1, updateUI, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon",
		"<init>",
		"(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "ActiveWindowsIcon", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1",
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$ActiveWindowsIcon$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$ActiveWindowsIcon$1);
	});
	return class$;
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com