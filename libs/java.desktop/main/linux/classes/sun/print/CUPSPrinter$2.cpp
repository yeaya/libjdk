#include <sun/print/CUPSPrinter$2.h>
#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <sun/print/CUPSPrinter.h>
#include <sun/print/IPPPrintService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

void CUPSPrinter$2::init$($HttpURLConnection* val$urlConnection) {
	$set(this, val$urlConnection, val$urlConnection);
}

$Object* CUPSPrinter$2::run() {
	try {
		return $of($nc(this->val$urlConnection)->getOutputStream());
	} catch ($Exception& e) {
		$IPPPrintService::debug_println($$str({"CUPSPrinter>> "_s, e}));
	}
	return nullptr;
}

CUPSPrinter$2::CUPSPrinter$2() {
}

$Class* CUPSPrinter$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$urlConnection", "Ljava/net/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(CUPSPrinter$2, val$urlConnection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/HttpURLConnection;)V", "()V", 0, $method(CUPSPrinter$2, init$, void, $HttpURLConnection*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(CUPSPrinter$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.CUPSPrinter",
		"getDefaultPrinter",
		"()[Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.CUPSPrinter$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.CUPSPrinter$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.CUPSPrinter"
	};
	$loadClass(CUPSPrinter$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CUPSPrinter$2);
	});
	return class$;
}

$Class* CUPSPrinter$2::class$ = nullptr;

	} // print
} // sun