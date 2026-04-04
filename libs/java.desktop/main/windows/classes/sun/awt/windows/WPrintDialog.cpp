#include <sun/awt/windows/WPrintDialog.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/PrintJob.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/print/PrinterJob.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WPrintDialog::init$($Frame* parent, $PrinterJob* control) {
	$Dialog::init$(parent, true);
	this->retval = false;
	$set(this, pjob, control);
	setLayout(nullptr);
}

void WPrintDialog::init$($Dialog* parent, $PrinterJob* control) {
	$Dialog::init$(parent, ""_s, true);
	this->retval = false;
	$set(this, pjob, control);
	setLayout(nullptr);
}

void WPrintDialog::setPeer($ComponentPeer* p) {
	$$nc($AWTAccessor::getComponentAccessor())->setPeer(this, p);
}

void WPrintDialog::addNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		$var($Container, parent, getParent());
		if (parent != nullptr && !parent->isDisplayable()) {
			parent->addNotify();
		}
		if (!isDisplayable()) {
			$var($ComponentPeer, peer, $cast($WComponentPeer, $$sure($WToolkit, $Toolkit::getDefaultToolkit())->createWPrintDialog(this)));
			setPeer(peer);
		}
		$Dialog::addNotify();
	}
}

void WPrintDialog::setRetVal(bool ret) {
	this->retval = ret;
}

bool WPrintDialog::getRetVal() {
	return this->retval;
}

void WPrintDialog::initIDs() {
	$init(WPrintDialog);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WPrintDialog::clinit$($Class* clazz) {
	{
		WPrintDialog::initIDs();
	}
}

WPrintDialog::WPrintDialog() {
}

$Class* WPrintDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"job", "Ljava/awt/PrintJob;", nullptr, $PROTECTED, $field(WPrintDialog, job)},
		{"pjob", "Ljava/awt/print/PrinterJob;", nullptr, $PROTECTED, $field(WPrintDialog, pjob)},
		{"retval", "Z", nullptr, $PRIVATE, $field(WPrintDialog, retval)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Ljava/awt/print/PrinterJob;)V", nullptr, 0, $method(WPrintDialog, init$, void, $Frame*, $PrinterJob*)},
		{"<init>", "(Ljava/awt/Dialog;Ljava/awt/print/PrinterJob;)V", nullptr, 0, $method(WPrintDialog, init$, void, $Dialog*, $PrinterJob*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(WPrintDialog, addNotify, void)},
		{"getRetVal", "()Z", nullptr, $FINAL, $method(WPrintDialog, getRetVal, bool)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WPrintDialog, initIDs, void)},
		{"setPeer", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $FINAL, $method(WPrintDialog, setPeer, void, $ComponentPeer*)},
		{"setRetVal", "(Z)V", nullptr, $FINAL, $method(WPrintDialog, setRetVal, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WPrintDialog",
		"java.awt.Dialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WPrintDialog, name, initialize, &classInfo$$, WPrintDialog::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WPrintDialog));
	});
	return class$;
}

$Class* WPrintDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun