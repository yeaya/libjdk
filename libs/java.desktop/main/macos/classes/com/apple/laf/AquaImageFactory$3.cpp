#include <com/apple/laf/AquaImageFactory$3.h>
#include <com/apple/eio/FileManager.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <jcpp.h>

using $FileManager = ::com::apple::eio::FileManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$3::init$() {
}

$Object* AquaImageFactory$3::run() {
	return $of($FileManager::getPathToApplicationBundle());
}

AquaImageFactory$3::AquaImageFactory$3() {
}

$Class* AquaImageFactory$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaImageFactory$3, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaImageFactory$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaImageFactory",
		"getPathToThisApplication",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$3);
	});
	return class$;
}

$Class* AquaImageFactory$3::class$ = nullptr;

		} // laf
	} // apple
} // com