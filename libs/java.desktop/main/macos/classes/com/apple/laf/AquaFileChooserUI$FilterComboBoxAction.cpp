#include <com/apple/laf/AquaFileChooserUI$FilterComboBoxAction.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$FilterComboBoxAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("FilterComboBoxAction"_s);
}

void AquaFileChooserUI$FilterComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($Object, selectedFilter, $nc(this->this$0->filterComboBox)->getSelectedItem());
	if (!this->this$0->containsFileFilter(selectedFilter)) {
		$$nc(this->this$0->getFileChooser())->setFileFilter($cast($FileFilter, selectedFilter));
	}
}

AquaFileChooserUI$FilterComboBoxAction::AquaFileChooserUI$FilterComboBoxAction() {
}

$Class* AquaFileChooserUI$FilterComboBoxAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FilterComboBoxAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$FilterComboBoxAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$FilterComboBoxAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$FilterComboBoxAction", "com.apple.laf.AquaFileChooserUI", "FilterComboBoxAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$FilterComboBoxAction",
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
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$FilterComboBoxAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$FilterComboBoxAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$FilterComboBoxAction::class$ = nullptr;

		} // laf
	} // apple
} // com