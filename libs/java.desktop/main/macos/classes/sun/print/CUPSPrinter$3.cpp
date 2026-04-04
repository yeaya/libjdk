#include <sun/print/CUPSPrinter$3.h>
#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <sun/print/CUPSPrinter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;

namespace sun {
	namespace print {

void CUPSPrinter$3::init$($HttpURLConnection* val$urlConnection) {
	$set(this, val$urlConnection, val$urlConnection);
}

$Object* CUPSPrinter$3::run() {
	try {
		return $of($nc(this->val$urlConnection)->getOutputStream());
	} catch ($Exception& e) {
	}
	return nullptr;
}

CUPSPrinter$3::CUPSPrinter$3() {
}

$Class* CUPSPrinter$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$urlConnection", "Ljava/net/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(CUPSPrinter$3, val$urlConnection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/HttpURLConnection;)V", "()V", 0, $method(CUPSPrinter$3, init$, void, $HttpURLConnection*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(CUPSPrinter$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.CUPSPrinter",
		"getAllPrinters",
		"()[Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.CUPSPrinter$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.CUPSPrinter$3",
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
	$loadClass(CUPSPrinter$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CUPSPrinter$3);
	});
	return class$;
}

$Class* CUPSPrinter$3::class$ = nullptr;

	} // print
} // sun