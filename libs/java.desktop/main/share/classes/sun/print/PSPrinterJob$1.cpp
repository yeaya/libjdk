#include <sun/print/PSPrinterJob$1.h>
#include <java/util/Properties.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

void PSPrinterJob$1::init$() {
}

$Object* PSPrinterJob$1::run() {
	$init($PSPrinterJob);
	$assignStatic($PSPrinterJob::mFontProps, $PSPrinterJob::initProps());
	$var($String, osName, $System::getProperty("os.name"_s));
	$PSPrinterJob::isMac = $nc(osName)->startsWith("Mac"_s);
	return nullptr;
}

PSPrinterJob$1::PSPrinterJob$1() {
}

$Class* PSPrinterJob$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PSPrinterJob$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PSPrinterJob$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.PSPrinterJob",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PSPrinterJob$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PSPrinterJob$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PSPrinterJob"
	};
	$loadClass(PSPrinterJob$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSPrinterJob$1);
	});
	return class$;
}

$Class* PSPrinterJob$1::class$ = nullptr;

	} // print
} // sun