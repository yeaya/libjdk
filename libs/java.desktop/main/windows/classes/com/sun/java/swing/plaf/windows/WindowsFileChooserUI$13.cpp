#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$13.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$13::init$($JButton* val$result) {
	$set(this, val$result, val$result);
	$FocusAdapter::init$();
}

void WindowsFileChooserUI$13::focusGained($FocusEvent* e) {
	$$nc($nc(this->val$result)->getModel())->setRollover(true);
}

void WindowsFileChooserUI$13::focusLost($FocusEvent* e) {
	$$nc($nc(this->val$result)->getModel())->setRollover(false);
}

WindowsFileChooserUI$13::WindowsFileChooserUI$13() {
}

$Class* WindowsFileChooserUI$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$13, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;)V", nullptr, 0, $method(WindowsFileChooserUI$13, init$, void, $JButton*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$13, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$13, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"createToolButton",
		"(Ljavax/swing/Action;Ljavax/swing/Icon;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13",
		"java.awt.event.FocusAdapter",
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
	$loadClass(WindowsFileChooserUI$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$13);
	});
	return class$;
}

$Class* WindowsFileChooserUI$13::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com