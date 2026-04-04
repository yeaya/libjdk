#include <sun/print/RasterPrinterJob$1.h>
#include <java/awt/GraphicsConfiguration.h>
#include <javax/print/PrintService.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintService = ::javax::print::PrintService;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

void RasterPrinterJob$1::init$($RasterPrinterJob* this$0, $GraphicsConfiguration* val$gc) {
	$set(this, this$0, this$0);
	$set(this, val$gc, val$gc);
}

$Object* RasterPrinterJob$1::run() {
	$var($PrintService, service, this->this$0->getPrintService());
	if (service == nullptr) {
		$ServiceDialog::showNoPrintService(this->val$gc);
		return nullptr;
	}
	return service;
}

RasterPrinterJob$1::RasterPrinterJob$1() {
}

$Class* RasterPrinterJob$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/RasterPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$1, this$0)},
		{"val$gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL | $SYNTHETIC, $field(RasterPrinterJob$1, val$gc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/RasterPrinterJob;Ljava/awt/GraphicsConfiguration;)V", "()V", 0, $method(RasterPrinterJob$1, init$, void, $RasterPrinterJob*, $GraphicsConfiguration*)},
		{"run", "()Ljavax/print/PrintService;", nullptr, $PUBLIC, $virtualMethod(RasterPrinterJob$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.RasterPrinterJob",
		"pageDialog",
		"(Ljava/awt/print/PageFormat;)Ljava/awt/print/PageFormat;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.RasterPrinterJob$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.RasterPrinterJob$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/print/PrintService;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.RasterPrinterJob"
	};
	$loadClass(RasterPrinterJob$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RasterPrinterJob$1);
	});
	return class$;
}

$Class* RasterPrinterJob$1::class$ = nullptr;

	} // print
} // sun