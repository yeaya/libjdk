#include <sun/awt/windows/WPrinterJob$HandleRecord.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;

namespace sun {
	namespace awt {
		namespace windows {

void WPrinterJob$HandleRecord::init$() {
}

void WPrinterJob$HandleRecord::dispose() {
	$WPrinterJob::deleteDC(this->mPrintDC, this->mPrintHDevMode, this->mPrintHDevNames);
}

WPrinterJob$HandleRecord::WPrinterJob$HandleRecord() {
}

$Class* WPrinterJob$HandleRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mPrintDC", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintDC)},
		{"mPrintHDevMode", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintHDevMode)},
		{"mPrintHDevNames", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintHDevNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WPrinterJob$HandleRecord, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(WPrinterJob$HandleRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WPrinterJob$HandleRecord", "sun.awt.windows.WPrinterJob", "HandleRecord", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WPrinterJob$HandleRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WPrinterJob"
	};
	$loadClass(WPrinterJob$HandleRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WPrinterJob$HandleRecord);
	});
	return class$;
}

$Class* WPrinterJob$HandleRecord::class$ = nullptr;

		} // windows
	} // awt
} // sun