#include <sun/print/PrintServiceLookupProvider$RemotePrinterChangeListener.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

void PrintServiceLookupProvider$RemotePrinterChangeListener::init$($PrintServiceLookupProvider* this$0) {
	$set(this, this$0, this$0);
}

void PrintServiceLookupProvider$RemotePrinterChangeListener::run() {
	this->this$0->notifyRemotePrinterChange();
}

PrintServiceLookupProvider$RemotePrinterChangeListener::PrintServiceLookupProvider$RemotePrinterChangeListener() {
}

$Class* PrintServiceLookupProvider$RemotePrinterChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PrintServiceLookupProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PrintServiceLookupProvider$RemotePrinterChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PrintServiceLookupProvider;)V", nullptr, $PRIVATE, $method(PrintServiceLookupProvider$RemotePrinterChangeListener, init$, void, $PrintServiceLookupProvider*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrintServiceLookupProvider$RemotePrinterChangeListener, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener", "sun.print.PrintServiceLookupProvider", "RemotePrinterChangeListener", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener",
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
	$loadClass(PrintServiceLookupProvider$RemotePrinterChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookupProvider$RemotePrinterChangeListener);
	});
	return class$;
}

$Class* PrintServiceLookupProvider$RemotePrinterChangeListener::class$ = nullptr;

	} // print
} // sun