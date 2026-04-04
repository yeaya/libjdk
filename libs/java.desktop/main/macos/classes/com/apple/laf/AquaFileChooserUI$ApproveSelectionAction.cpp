#include <com/apple/laf/AquaFileChooserUI$ApproveSelectionAction.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$ApproveSelectionAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$ApproveSelectionAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->fSubPanel)->approveSelection($(this->this$0->getFileChooser()));
}

AquaFileChooserUI$ApproveSelectionAction::AquaFileChooserUI$ApproveSelectionAction() {
}

$Class* AquaFileChooserUI$ApproveSelectionAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$ApproveSelectionAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$ApproveSelectionAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$ApproveSelectionAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$ApproveSelectionAction", "com.apple.laf.AquaFileChooserUI", "ApproveSelectionAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$ApproveSelectionAction",
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
	$loadClass(AquaFileChooserUI$ApproveSelectionAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$ApproveSelectionAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$ApproveSelectionAction::class$ = nullptr;

		} // laf
	} // apple
} // com