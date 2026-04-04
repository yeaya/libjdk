#include <sun/awt/NativeLibLoader.h>
#include <java/security/AccessController.h>
#include <sun/awt/NativeLibLoader$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $NativeLibLoader$1 = ::sun::awt::NativeLibLoader$1;

namespace sun {
	namespace awt {

void NativeLibLoader::init$() {
}

void NativeLibLoader::loadLibraries() {
	$load(NativeLibLoader);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($NativeLibLoader$1));
}

NativeLibLoader::NativeLibLoader() {
}

$Class* NativeLibLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeLibLoader, init$, void)},
		{"loadLibraries", "()V", nullptr, $STATIC, $staticMethod(NativeLibLoader, loadLibraries, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.NativeLibLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.NativeLibLoader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.NativeLibLoader$1"
	};
	$loadClass(NativeLibLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibLoader);
	});
	return class$;
}

$Class* NativeLibLoader::class$ = nullptr;

	} // awt
} // sun