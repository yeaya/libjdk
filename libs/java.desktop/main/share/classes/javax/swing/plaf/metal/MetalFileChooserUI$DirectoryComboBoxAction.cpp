#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$DirectoryComboBoxAction::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void MetalFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$nc(this->this$0->directoryComboBox)->hidePopup();
	$var($File, f, $cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
	if (!$$nc($$nc(this->this$0->getFileChooser())->getCurrentDirectory())->equals(f)) {
		$$nc(this->this$0->getFileChooser())->setCurrentDirectory(f);
	}
}

MetalFileChooserUI$DirectoryComboBoxAction::MetalFileChooserUI$DirectoryComboBoxAction() {
}

$Class* MetalFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$DirectoryComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PROTECTED, $method(MetalFileChooserUI$DirectoryComboBoxAction, init$, void, $MetalFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$DirectoryComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction",
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
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$DirectoryComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$DirectoryComboBoxAction));
	});
	return class$;
}

$Class* MetalFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax