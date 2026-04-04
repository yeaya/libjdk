#include <sun/print/PSPrinterJob$2.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/PrintService.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $PrintService = ::javax::print::PrintService;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

void PSPrinterJob$2::init$($PSPrinterJob* this$0, $PrintService* val$pservice) {
	$set(this, this$0, this$0);
	$set(this, val$pservice, val$pservice);
}

$Object* PSPrinterJob$2::run() {
	$beforeCallerSensitive();
	try {
		$Class* psClass = $Class::forName("sun.print.IPPPrintService"_s);
		if (psClass->isInstance(this->val$pservice)) {
			$var($Method, isPSMethod, psClass->getMethod("isPostscript"_s, ($ClassArray*)nullptr));
			return $of($cast($Boolean, $nc(isPSMethod)->invoke(this->val$pservice, ($ObjectArray*)nullptr)));
		}
	} catch ($Throwable& t) {
	}
	return $of($Boolean::TRUE);
}

PSPrinterJob$2::PSPrinterJob$2() {
}

$Class* PSPrinterJob$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$2, this$0)},
		{"val$pservice", "Ljavax/print/PrintService;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$2, val$pservice)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PSPrinterJob;Ljavax/print/PrintService;)V", "()V", 0, $method(PSPrinterJob$2, init$, void, $PSPrinterJob*, $PrintService*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(PSPrinterJob$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.PSPrinterJob",
		"startDoc",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PSPrinterJob$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PSPrinterJob$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PSPrinterJob"
	};
	$loadClass(PSPrinterJob$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSPrinterJob$2);
	});
	return class$;
}

$Class* PSPrinterJob$2::class$ = nullptr;

	} // print
} // sun