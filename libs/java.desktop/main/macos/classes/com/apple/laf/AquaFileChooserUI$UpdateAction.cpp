#include <com/apple/laf/AquaFileChooserUI$UpdateAction.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$UpdateAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$UpdateAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$nc(fc)->setCurrentDirectory($($$nc($nc(fc)->getFileSystemView())->createFileObject($(this->this$0->getDirectoryName()))));
	fc->rescanCurrentDirectory();
}

AquaFileChooserUI$UpdateAction::AquaFileChooserUI$UpdateAction() {
}

$Class* AquaFileChooserUI$UpdateAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$UpdateAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$UpdateAction, init$, void, $AquaFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFileChooserUI$UpdateAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$UpdateAction", "com.apple.laf.AquaFileChooserUI", "UpdateAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$UpdateAction",
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
	$loadClass(AquaFileChooserUI$UpdateAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$UpdateAction));
	});
	return class$;
}

$Class* AquaFileChooserUI$UpdateAction::class$ = nullptr;

		} // laf
	} // apple
} // com