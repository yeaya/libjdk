#include <javax/print/CancelablePrintJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$Class* CancelablePrintJob::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CancelablePrintJob, cancel, void), "javax.print.PrintException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.CancelablePrintJob",
		nullptr,
		"javax.print.DocPrintJob",
		nullptr,
		methodInfos$$
	};
	$loadClass(CancelablePrintJob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CancelablePrintJob);
	});
	return class$;
}

$Class* CancelablePrintJob::class$ = nullptr;

	} // print
} // javax