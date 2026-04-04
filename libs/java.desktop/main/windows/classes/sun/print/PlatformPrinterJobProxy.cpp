#include <sun/print/PlatformPrinterJobProxy.h>
#include <java/awt/print/PrinterJob.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;

namespace sun {
	namespace print {

void PlatformPrinterJobProxy::init$() {
}

$PrinterJob* PlatformPrinterJobProxy::getPrinterJob() {
	return $new($WPrinterJob);
}

PlatformPrinterJobProxy::PlatformPrinterJobProxy() {
}

$Class* PlatformPrinterJobProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformPrinterJobProxy, init$, void)},
		{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformPrinterJobProxy, getPrinterJob, $PrinterJob*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.PlatformPrinterJobProxy",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformPrinterJobProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformPrinterJobProxy);
	});
	return class$;
}

$Class* PlatformPrinterJobProxy::class$ = nullptr;

	} // print
} // sun