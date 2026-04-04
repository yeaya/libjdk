#include <java/awt/event/NativeLibLoader.h>
#include <java/awt/event/NativeLibLoader$1.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $NativeLibLoader$1 = ::java::awt::event::NativeLibLoader$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;

namespace java {
	namespace awt {
		namespace event {

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
		{"java.awt.event.NativeLibLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.event.NativeLibLoader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.event.NativeLibLoader$1"
	};
	$loadClass(NativeLibLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibLoader);
	});
	return class$;
}

$Class* NativeLibLoader::class$ = nullptr;

		} // event
	} // awt
} // java