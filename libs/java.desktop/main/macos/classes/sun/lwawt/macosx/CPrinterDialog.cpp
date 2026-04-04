#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterDialog::init$($Frame* parent, $CPrinterJob* printerJob) {
	$Dialog::init$(parent, true);
	this->retval = false;
	$set(this, fPrinterJob, printerJob);
	setLayout(nullptr);
}

void CPrinterDialog::setRetVal(bool ret) {
	this->retval = ret;
}

bool CPrinterDialog::getRetVal() {
	return this->retval;
}

CPrinterDialog::CPrinterDialog() {
}

$Class* CPrinterDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fPrinterJob", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $PRIVATE | $FINAL, $field(CPrinterDialog, fPrinterJob)},
		{"retval", "Z", nullptr, $PRIVATE, $field(CPrinterDialog, retval)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(CPrinterDialog, init$, void, $Frame*, $CPrinterJob*)},
		{"getRetVal", "()Z", nullptr, $PUBLIC, $virtualMethod(CPrinterDialog, getRetVal, bool)},
		{"setRetVal", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CPrinterDialog, setRetVal, void, bool)},
		{"showDialog", "()Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(CPrinterDialog, showDialog, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.lwawt.macosx.CPrinterDialog",
		"java.awt.Dialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPrinterDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CPrinterDialog));
	});
	return class$;
}

$Class* CPrinterDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun