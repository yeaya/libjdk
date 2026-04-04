#include <sun/print/IPPPrintService$1.h>
#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URLConnection.h>
#include <sun/print/IPPPrintService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

void IPPPrintService$1::init$($IPPPrintService* this$0) {
	$set(this, this$0, this$0);
}

$Object* IPPPrintService$1::run() {
	try {
		return $of($nc(this->this$0->urlConnection)->getOutputStream());
	} catch ($Exception& e) {
	}
	return nullptr;
}

IPPPrintService$1::IPPPrintService$1() {
}

$Class* IPPPrintService$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/IPPPrintService;", nullptr, $FINAL | $SYNTHETIC, $field(IPPPrintService$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/IPPPrintService;)V", nullptr, 0, $method(IPPPrintService$1, init$, void, $IPPPrintService*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(IPPPrintService$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.IPPPrintService",
		"opGetAttributes",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.IPPPrintService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.IPPPrintService$1",
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
		"sun.print.IPPPrintService"
	};
	$loadClass(IPPPrintService$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IPPPrintService$1);
	});
	return class$;
}

$Class* IPPPrintService$1::class$ = nullptr;

	} // print
} // sun