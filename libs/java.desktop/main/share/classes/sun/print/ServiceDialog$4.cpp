#include <sun/print/ServiceDialog$4.h>
#include <java/lang/Error.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

void ServiceDialog$4::init$() {
}

$Object* ServiceDialog$4::run() {
	$beforeCallerSensitive();
	try {
		$init($ServiceDialog);
		$assignStatic($ServiceDialog::messageRB, $ResourceBundle::getBundle("sun.print.resources.serviceui"_s));
		return nullptr;
	} catch ($MissingResourceException& e) {
		$throwNew($Error, "Fatal: Resource for ServiceUI is missing"_s);
	}
	$shouldNotReachHere();
}

ServiceDialog$4::ServiceDialog$4() {
}

$Class* ServiceDialog$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ServiceDialog$4, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.ServiceDialog",
		"initResource",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$4",
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
		"sun.print.ServiceDialog"
	};
	$loadClass(ServiceDialog$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceDialog$4);
	});
	return class$;
}

$Class* ServiceDialog$4::class$ = nullptr;

	} // print
} // sun