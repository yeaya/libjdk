#include <sun/print/ServiceDialog$5.h>
#include <java/net/URL.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

void ServiceDialog$5::init$($String* val$key) {
	$set(this, val$key, val$key);
}

$Object* ServiceDialog$5::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($ServiceDialog);
	$var($URL, url, $ServiceDialog::class$->getResource($$str({"resources/"_s, this->val$key})));
	return url;
}

ServiceDialog$5::ServiceDialog$5() {
}

$Class* ServiceDialog$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$key", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$5, val$key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(ServiceDialog$5, init$, void, $String*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.ServiceDialog",
		"getImageResource",
		"(Ljava/lang/String;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.ServiceDialog"
	};
	$loadClass(ServiceDialog$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceDialog$5);
	});
	return class$;
}

$Class* ServiceDialog$5::class$ = nullptr;

	} // print
} // sun