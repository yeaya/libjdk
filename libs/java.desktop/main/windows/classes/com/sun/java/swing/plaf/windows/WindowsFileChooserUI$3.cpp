#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$3.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$3::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton, $JPopupMenu* val$viewTypePopupMenu) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
	$set(this, val$viewTypePopupMenu, val$viewTypePopupMenu);
	$MouseAdapter::init$();
}

void WindowsFileChooserUI$3::mousePressed($MouseEvent* e) {
	bool var$0 = $SwingUtilities::isLeftMouseButton(e);
	if (var$0 && !$nc(this->val$viewMenuButton)->isSelected()) {
		this->val$viewMenuButton->setSelected(true);
		$nc(this->val$viewTypePopupMenu)->show(this->val$viewMenuButton, 0, this->val$viewMenuButton->getHeight());
	}
}

WindowsFileChooserUI$3::WindowsFileChooserUI$3() {
}

$Class* WindowsFileChooserUI$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, this$0)},
		{"val$viewTypePopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, val$viewTypePopupMenu)},
		{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, val$viewMenuButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(WindowsFileChooserUI$3, init$, void, $WindowsFileChooserUI*, $JButton*, $JPopupMenu*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$3, mousePressed, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3",
		"java.awt.event.MouseAdapter",
		nullptr,
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
	$loadClass(WindowsFileChooserUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$3));
	});
	return class$;
}

$Class* WindowsFileChooserUI$3::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com