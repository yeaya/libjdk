#include <javax/print/MultiDocPrintJob.h>
#include <javax/print/MultiDoc.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MultiDoc = ::javax::print::MultiDoc;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace javax {
	namespace print {

$Class* MultiDocPrintJob::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"print", "(Ljavax/print/MultiDoc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiDocPrintJob, print, void, $MultiDoc*, $PrintRequestAttributeSet*), "javax.print.PrintException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.MultiDocPrintJob",
		nullptr,
		"javax.print.DocPrintJob",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiDocPrintJob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiDocPrintJob);
	});
	return class$;
}

$Class* MultiDocPrintJob::class$ = nullptr;

	} // print
} // javax