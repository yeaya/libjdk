#include <sun/print/RasterPrinterJob$4.h>
#include <java/awt/print/PrinterJob.h>
#include <javax/print/PrintService.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

void RasterPrinterJob$4::init$($RasterPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* RasterPrinterJob$4::run() {
	$var($PrintServiceArray, services, $PrinterJob::lookupPrintServices());
	return services;
}

RasterPrinterJob$4::RasterPrinterJob$4() {
}

$Class* RasterPrinterJob$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/RasterPrinterJob;)V", nullptr, 0, $method(RasterPrinterJob$4, init$, void, $RasterPrinterJob*)},
		{"run", "()[Ljavax/print/PrintService;", nullptr, $PUBLIC, $virtualMethod(RasterPrinterJob$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.RasterPrinterJob",
		"printDialog",
		"(Ljavax/print/attribute/PrintRequestAttributeSet;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.RasterPrinterJob$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.RasterPrinterJob$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljavax/print/PrintService;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.RasterPrinterJob"
	};
	$loadClass(RasterPrinterJob$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RasterPrinterJob$4);
	});
	return class$;
}

$Class* RasterPrinterJob$4::class$ = nullptr;

	} // print
} // sun