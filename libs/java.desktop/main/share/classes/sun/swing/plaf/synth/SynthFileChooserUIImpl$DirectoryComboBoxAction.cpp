#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$DirectoryComboBoxAction::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("DirectoryComboBoxAction"_s);
}

void SynthFileChooserUIImpl$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$nc(this->this$0->directoryComboBox)->hidePopup();
	$var($JComponent, cb, this->this$0->getDirectoryComboBox());
	if ($instanceOf($JComboBox, cb)) {
		$var($File, f, $cast($File, $cast($JComboBox, cb)->getSelectedItem()));
		$$nc(this->this$0->getFileChooser())->setCurrentDirectory(f);
	}
}

SynthFileChooserUIImpl$DirectoryComboBoxAction::SynthFileChooserUIImpl$DirectoryComboBoxAction() {
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$DirectoryComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, $PROTECTED, $method(SynthFileChooserUIImpl$DirectoryComboBoxAction, init$, void, $SynthFileChooserUIImpl*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$DirectoryComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction",
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
		"sun.swing.plaf.synth.SynthFileChooserUIImpl"
	};
	$loadClass(SynthFileChooserUIImpl$DirectoryComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthFileChooserUIImpl$DirectoryComboBoxAction));
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$DirectoryComboBoxAction::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun