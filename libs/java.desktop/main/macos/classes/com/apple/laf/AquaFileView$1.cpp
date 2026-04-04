#include <com/apple/laf/AquaFileView$1.h>
#include <com/apple/laf/AquaFileView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileView$1::init$() {
}

$Object* AquaFileView$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return nullptr;
}

AquaFileView$1::AquaFileView$1() {
}

$Class* AquaFileView$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaFileView$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AquaFileView$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileView$1",
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
		"com.apple.laf.AquaFileView"
	};
	$loadClass(AquaFileView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileView$1);
	});
	return class$;
}

$Class* AquaFileView$1::class$ = nullptr;

		} // laf
	} // apple
} // com