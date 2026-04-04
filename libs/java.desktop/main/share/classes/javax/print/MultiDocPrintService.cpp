#include <javax/print/MultiDocPrintService.h>
#include <javax/print/MultiDocPrintJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MultiDocPrintJob = ::javax::print::MultiDocPrintJob;

namespace javax {
	namespace print {

$Class* MultiDocPrintService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createMultiDocPrintJob", "()Ljavax/print/MultiDocPrintJob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiDocPrintService, createMultiDocPrintJob, $MultiDocPrintJob*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.MultiDocPrintService",
		nullptr,
		"javax.print.PrintService",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiDocPrintService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiDocPrintService);
	});
	return class$;
}

$Class* MultiDocPrintService::class$ = nullptr;

	} // print
} // javax