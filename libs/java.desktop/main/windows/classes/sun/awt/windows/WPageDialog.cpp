#include <sun/awt/windows/WPageDialog.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPageDialogPeer.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WPageDialog::init$($Frame* parent, $PrinterJob* control, $PageFormat* page, $Printable* painter) {
	$WPrintDialog::init$(parent, control);
	$set(this, page, page);
	$set(this, painter, painter);
}

void WPageDialog::init$($Dialog* parent, $PrinterJob* control, $PageFormat* page, $Printable* painter) {
	$WPrintDialog::init$(parent, control);
	$set(this, page, page);
	$set(this, painter, painter);
}

void WPageDialog::addNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		$var($Container, parent, getParent());
		if (parent != nullptr && !parent->isDisplayable()) {
			parent->addNotify();
		}
		if (!isDisplayable()) {
			$var($ComponentPeer, peer, $cast($WComponentPeer, $$sure($WToolkit, $Toolkit::getDefaultToolkit())->createWPageDialog(this)));
			setPeer(peer);
		}
		$WPrintDialog::addNotify();
	}
}

void WPageDialog::initIDs() {
	$init(WPageDialog);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void WPageDialog::clinit$($Class* clazz) {
	{
		WPageDialog::initIDs();
	}
}

WPageDialog::WPageDialog() {
}

$Class* WPageDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"page", "Ljava/awt/print/PageFormat;", nullptr, 0, $field(WPageDialog, page)},
		{"painter", "Ljava/awt/print/Printable;", nullptr, 0, $field(WPageDialog, painter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Ljava/awt/print/PrinterJob;Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(WPageDialog, init$, void, $Frame*, $PrinterJob*, $PageFormat*, $Printable*)},
		{"<init>", "(Ljava/awt/Dialog;Ljava/awt/print/PrinterJob;Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(WPageDialog, init$, void, $Dialog*, $PrinterJob*, $PageFormat*, $Printable*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(WPageDialog, addNotify, void)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WPageDialog, initIDs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WPageDialog",
		"sun.awt.windows.WPrintDialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WPageDialog, name, initialize, &classInfo$$, WPageDialog::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WPageDialog));
	});
	return class$;
}

$Class* WPageDialog::class$ = nullptr;

		} // windows
	} // awt
} // sun