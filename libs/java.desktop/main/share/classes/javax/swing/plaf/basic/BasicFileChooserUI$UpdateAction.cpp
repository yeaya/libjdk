#include <javax/swing/plaf/basic/BasicFileChooserUI$UpdateAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$UpdateAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicFileChooserUI$UpdateAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$nc(fc)->setCurrentDirectory($($$nc($nc(fc)->getFileSystemView())->createFileObject($(this->this$0->getDirectoryName()))));
	fc->rescanCurrentDirectory();
}

BasicFileChooserUI$UpdateAction::BasicFileChooserUI$UpdateAction() {
}

$Class* BasicFileChooserUI$UpdateAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$UpdateAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(BasicFileChooserUI$UpdateAction, init$, void, $BasicFileChooserUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$UpdateAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction", "javax.swing.plaf.basic.BasicFileChooserUI", "UpdateAction", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction",
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
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$UpdateAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicFileChooserUI$UpdateAction));
	});
	return class$;
}

$Class* BasicFileChooserUI$UpdateAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax