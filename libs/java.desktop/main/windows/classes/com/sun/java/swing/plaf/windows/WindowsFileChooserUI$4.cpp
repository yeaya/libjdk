#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$4.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef VK_SPACE

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$4::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton, $JPopupMenu* val$viewTypePopupMenu) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
	$set(this, val$viewTypePopupMenu, val$viewTypePopupMenu);
	$KeyAdapter::init$();
}

void WindowsFileChooserUI$4::keyPressed($KeyEvent* e) {
	bool var$0 = $nc(e)->getKeyCode() == $KeyEvent::VK_SPACE;
	if (var$0 && $$nc($nc(this->val$viewMenuButton)->getModel())->isRollover()) {
		this->val$viewMenuButton->setSelected(true);
		$nc(this->val$viewTypePopupMenu)->show(this->val$viewMenuButton, 0, this->val$viewMenuButton->getHeight());
	}
}

WindowsFileChooserUI$4::WindowsFileChooserUI$4() {
}

$Class* WindowsFileChooserUI$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, this$0)},
		{"val$viewTypePopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, val$viewTypePopupMenu)},
		{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, val$viewMenuButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(WindowsFileChooserUI$4, init$, void, $WindowsFileChooserUI*, $JButton*, $JPopupMenu*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$4, keyPressed, void, $KeyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4",
		"java.awt.event.KeyAdapter",
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
	$loadClass(WindowsFileChooserUI$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$4);
	});
	return class$;
}

$Class* WindowsFileChooserUI$4::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com