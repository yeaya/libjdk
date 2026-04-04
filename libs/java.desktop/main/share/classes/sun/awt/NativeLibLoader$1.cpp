#include <sun/awt/NativeLibLoader$1.h>
#include <sun/awt/NativeLibLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

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
		"sun.awt.NativeLibLoader",
		"loadLibraries",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.NativeLibLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.NativeLibLoader$1",
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
		"sun.awt.NativeLibLoader"
	};
	$loadClass(NativeLibLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeLibLoader$1);
	});
	return class$;
}

$Class* NativeLibLoader$1::class$ = nullptr;

	} // awt
} // sun