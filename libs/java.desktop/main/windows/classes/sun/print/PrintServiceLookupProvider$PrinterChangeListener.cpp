#include <sun/print/PrintServiceLookupProvider$PrinterChangeListener.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

void PrintServiceLookupProvider$PrinterChangeListener::init$($PrintServiceLookupProvider* this$0) {
	$set(this, this$0, this$0);
}

void PrintServiceLookupProvider$PrinterChangeListener::run() {
	this->this$0->notifyLocalPrinterChange();
}

PrintServiceLookupProvider$PrinterChangeListener::PrintServiceLookupProvider$PrinterChangeListener() {
}

$Class* PrintServiceLookupProvider$PrinterChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PrintServiceLookupProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PrintServiceLookupProvider$PrinterChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PrintServiceLookupProvider;)V", nullptr, $PRIVATE, $method(PrintServiceLookupProvider$PrinterChangeListener, init$, void, $PrintServiceLookupProvider*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrintServiceLookupProvider$PrinterChangeListener, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PrintServiceLookupProvider$PrinterChangeListener", "sun.print.PrintServiceLookupProvider", "PrinterChangeListener", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.print.PrintServiceLookupProvider$PrinterChangeListener",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PrintServiceLookupProvider"
	};
	$loadClass(PrintServiceLookupProvider$PrinterChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookupProvider$PrinterChangeListener);
	});
	return class$;
}

$Class* PrintServiceLookupProvider$PrinterChangeListener::class$ = nullptr;

	} // print
} // sun