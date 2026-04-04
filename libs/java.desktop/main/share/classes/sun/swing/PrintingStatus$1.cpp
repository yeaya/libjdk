#include <sun/swing/PrintingStatus$1.h>
#include <java/awt/Dialog.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/print/PrinterJob.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

void PrintingStatus$1::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void PrintingStatus$1::actionPerformed($ActionEvent* ae) {
	$useLocalObjectStack();
	if (!$nc(this->this$0->isAborted$)->get()) {
		this->this$0->isAborted$->set(true);
		$nc(this->this$0->abortButton)->setEnabled(false);
		$nc(this->this$0->abortDialog)->setTitle($($UIManager::getString("PrintingDialog.titleAbortingText"_s)));
		$nc(this->this$0->statusLabel)->setText($($UIManager::getString("PrintingDialog.contentAbortingText"_s)));
		$nc(this->this$0->job)->cancel();
	}
}

PrintingStatus$1::PrintingStatus$1() {
}

$Class* PrintingStatus$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(PrintingStatus$1, init$, void, $PrintingStatus*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintingStatus$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.PrintingStatus",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.PrintingStatus$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.PrintingStatus$1",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.PrintingStatus"
	};
	$loadClass(PrintingStatus$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintingStatus$1));
	});
	return class$;
}

$Class* PrintingStatus$1::class$ = nullptr;

	} // swing
} // sun