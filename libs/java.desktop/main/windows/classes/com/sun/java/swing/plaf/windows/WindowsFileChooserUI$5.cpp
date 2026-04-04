#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $WindowsFileChooserUI$5$1 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$5::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
}

void WindowsFileChooserUI$5::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void WindowsFileChooserUI$5::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$SwingUtilities::invokeLater($$new($WindowsFileChooserUI$5$1, this));
}

void WindowsFileChooserUI$5::popupMenuCanceled($PopupMenuEvent* e) {
}

WindowsFileChooserUI$5::WindowsFileChooserUI$5() {
}

$Class* WindowsFileChooserUI$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$5, this$0)},
		{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$5, val$viewMenuButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;)V", "()V", 0, $method(WindowsFileChooserUI$5, init$, void, $WindowsFileChooserUI*, $JButton*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$5, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$5, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$5, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5",
		"java.lang.Object",
		"javax.swing.event.PopupMenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$5);
	});
	return class$;
}

$Class* WindowsFileChooserUI$5::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com