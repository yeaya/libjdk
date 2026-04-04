#include <java/awt/Toolkit$2.h>
#include <java/awt/Toolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Toolkit$2::init$() {
}

$Object* Toolkit$2::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

Toolkit$2::Toolkit$2() {
}

$Class* Toolkit$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Toolkit$2, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Toolkit$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Toolkit",
		"loadLibraries",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Toolkit$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Toolkit$2",
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
	$loadClass(Toolkit$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Toolkit$2);
	});
	return class$;
}

$Class* Toolkit$2::class$ = nullptr;

	} // awt
} // java