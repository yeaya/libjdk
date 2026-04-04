#include <java/awt/event/NativeLibLoader$1.h>
#include <java/awt/event/NativeLibLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void NativeLibLoader$1::init$() {
}

$Object* NativeLibLoader$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

NativeLibLoader$1::NativeLibLoader$1() {
}

$Class* NativeLibLoader$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeLibLoader$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NativeLibLoader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.event.NativeLibLoader",
		"loadLibraries",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.event.NativeLibLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.event.NativeLibLoader$1",
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
		"java.awt.event.NativeLibLoader"
	};
	$loadClass(NativeLibLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibLoader$1);
	});
	return class$;
}

$Class* NativeLibLoader$1::class$ = nullptr;

		} // event
	} // awt
} // java