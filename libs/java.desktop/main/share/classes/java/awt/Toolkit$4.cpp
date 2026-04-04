#include <java/awt/Toolkit$4.h>
#include <java/awt/Toolkit.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace awt {

void Toolkit$4::init$() {
}

$Object* Toolkit$4::run() {
	$beforeCallerSensitive();
	try {
		$init($Toolkit);
		$assignStatic($Toolkit::resources, $ResourceBundle::getBundle("sun.awt.resources.awt"_s));
	} catch ($MissingResourceException& e) {
	}
	return nullptr;
}

Toolkit$4::Toolkit$4() {
}

$Class* Toolkit$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Toolkit$4, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Toolkit$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Toolkit",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Toolkit$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Toolkit$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Toolkit"
	};
	$loadClass(Toolkit$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Toolkit$4);
	});
	return class$;
}

$Class* Toolkit$4::class$ = nullptr;

	} // awt
} // java