#include <com/apple/laf/AquaNativeResources$1.h>
#include <com/apple/laf/AquaNativeResources.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaNativeResources$1::init$() {
}

$Object* AquaNativeResources$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return nullptr;
}

AquaNativeResources$1::AquaNativeResources$1() {
}

$Class* AquaNativeResources$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaNativeResources$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AquaNativeResources$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaNativeResources",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaNativeResources$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaNativeResources$1",
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
		"com.apple.laf.AquaNativeResources"
	};
	$loadClass(AquaNativeResources$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaNativeResources$1);
	});
	return class$;
}

$Class* AquaNativeResources$1::class$ = nullptr;

		} // laf
	} // apple
} // com