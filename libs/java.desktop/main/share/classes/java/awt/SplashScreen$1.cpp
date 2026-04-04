#include <java/awt/SplashScreen$1.h>
#include <java/awt/SplashScreen.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void SplashScreen$1::init$() {
}

$Object* SplashScreen$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("splashscreen"_s);
	return nullptr;
}

SplashScreen$1::SplashScreen$1() {
}

$Class* SplashScreen$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SplashScreen$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SplashScreen$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.SplashScreen",
		"getSplashScreen",
		"()Ljava/awt/SplashScreen;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SplashScreen$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.SplashScreen$1",
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
		"java.awt.SplashScreen"
	};
	$loadClass(SplashScreen$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SplashScreen$1);
	});
	return class$;
}

$Class* SplashScreen$1::class$ = nullptr;

	} // awt
} // java