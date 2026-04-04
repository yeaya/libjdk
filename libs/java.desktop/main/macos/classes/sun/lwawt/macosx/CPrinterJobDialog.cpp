#include <sun/lwawt/macosx/CPrinterJobDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/print/Pageable.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $Pageable = ::java::awt::print::Pageable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterJobDialog::init$($Frame* parent, $CPrinterJob* printerJob, $Pageable* doc, bool allowPrintToFile) {
	$CPrinterDialog::init$(parent, printerJob);
	$set(this, fPageable, doc);
	this->fAllowPrintToFile = allowPrintToFile;
}

bool CPrinterJobDialog::showDialog() {
	$prepareNative(showDialog, bool);
	bool $ret = $invokeNative();
	$finishNative();
	return $ret;
}

CPrinterJobDialog::CPrinterJobDialog() {
}

$Class* CPrinterJobDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fPageable", "Ljava/awt/print/Pageable;", nullptr, $PRIVATE, $field(CPrinterJobDialog, fPageable)},
		{"fAllowPrintToFile", "Z", nullptr, $PRIVATE, $field(CPrinterJobDialog, fAllowPrintToFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/print/Pageable;Z)V", nullptr, 0, $method(CPrinterJobDialog, init$, void, $Frame*, $CPrinterJob*, $Pageable*, bool)},
		{"showDialog", "()Z", nullptr, $PROTECTED | $NATIVE, $virtualMethod(CPrinterJobDialog, showDialog, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CPrinterJobDialog",
		"sun.lwawt.macosx.CPrinterDialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPrinterJobDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CPrinterJobDialog));
	});
	return class$;
}

$Class* CPrinterJobDialog::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun