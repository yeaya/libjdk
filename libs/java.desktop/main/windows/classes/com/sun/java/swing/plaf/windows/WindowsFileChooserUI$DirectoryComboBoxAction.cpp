#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxAction.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$DirectoryComboBoxAction::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($File, f, $cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
	$$nc(this->this$0->getFileChooser())->setCurrentDirectory(f);
}

WindowsFileChooserUI$DirectoryComboBoxAction::WindowsFileChooserUI$DirectoryComboBoxAction() {
}

$Class* WindowsFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$DirectoryComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PROTECTED, $method(WindowsFileChooserUI$DirectoryComboBoxAction, init$, void, $WindowsFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$DirectoryComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$DirectoryComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$DirectoryComboBoxAction);
	});
	return class$;
}

$Class* WindowsFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com