#include <java/awt/print/PrinterGraphics.h>
#include <java/awt/print/PrinterJob.h>
#include <jcpp.h>

using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$Class* PrinterGraphics::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPrinterJob", "()Ljava/awt/print/PrinterJob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrinterGraphics, getPrinterJob, $PrinterJob*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.print.PrinterGraphics",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PrinterGraphics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrinterGraphics);
	});
	return class$;
}

$Class* PrinterGraphics::class$ = nullptr;

		} // print
	} // awt
} // java