#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$DirectoryComboBoxAction::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void GTKFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($File, f, $cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
	$$nc(this->this$0->getFileChooser())->setCurrentDirectory(f);
}

GTKFileChooserUI$DirectoryComboBoxAction::GTKFileChooserUI$DirectoryComboBoxAction() {
}

$Class* GTKFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$DirectoryComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PROTECTED, $method(GTKFileChooserUI$DirectoryComboBoxAction, init$, void, $GTKFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$DirectoryComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$DirectoryComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$DirectoryComboBoxAction));
	});
	return class$;
}

$Class* GTKFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com