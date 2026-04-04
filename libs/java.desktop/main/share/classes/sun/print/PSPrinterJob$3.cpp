#include <sun/print/PSPrinterJob$3.h>
#include <java/io/File.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

void PSPrinterJob$3::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* PSPrinterJob$3::run() {
	if (this->this$0->spoolFile != nullptr && this->this$0->spoolFile->exists()) {
		this->this$0->spoolFile->delete$();
	}
	return nullptr;
}

PSPrinterJob$3::PSPrinterJob$3() {
}

$Class* PSPrinterJob$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, 0, $method(PSPrinterJob$3, init$, void, $PSPrinterJob*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PSPrinterJob$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.PSPrinterJob",
		"abortDoc",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PSPrinterJob$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PSPrinterJob$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PSPrinterJob"
	};
	$loadClass(PSPrinterJob$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSPrinterJob$3);
	});
	return class$;
}

$Class* PSPrinterJob$3::class$ = nullptr;

	} // print
} // sun