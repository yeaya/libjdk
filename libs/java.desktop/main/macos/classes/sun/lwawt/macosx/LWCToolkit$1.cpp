#include <sun/lwawt/macosx/LWCToolkit$1.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$1::init$() {
}

$Object* LWCToolkit$1::run() {
	$beforeCallerSensitive();
	$var($ResourceBundle, platformResources, nullptr);
	try {
		$assign(platformResources, $ResourceBundle::getBundle("sun.awt.resources.awtosx"_s));
	} catch ($MissingResourceException& e) {
	}
	$System::loadLibrary("awt"_s);
	$System::loadLibrary("fontmanager"_s);
	return platformResources;
}

LWCToolkit$1::LWCToolkit$1() {
}

$Class* LWCToolkit$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LWCToolkit$1, init$, void)},
		{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(LWCToolkit$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.LWCToolkit",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCToolkit$1);
	});
	return class$;
}

$Class* LWCToolkit$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun