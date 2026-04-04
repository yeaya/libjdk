#include <com/apple/laf/AquaUtils$4.h>
#include <com/apple/laf/AquaUtils$4$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $AquaUtils$4$1 = ::com::apple::laf::AquaUtils$4$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$4::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaUtils$4::getInstance() {
	$beforeCallerSensitive();
	return $of($cast($Method, $AccessController::doPrivileged($$new($AquaUtils$4$1, this))));
}

AquaUtils$4::AquaUtils$4() {
}

$Class* AquaUtils$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$4, init$, void)},
		{"getInstance", "()Ljava/lang/reflect/Method;", nullptr, $PROTECTED, $virtualMethod(AquaUtils$4, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaUtils",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaUtils$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$4",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$4);
	});
	return class$;
}

$Class* AquaUtils$4::class$ = nullptr;

		} // laf
	} // apple
} // com