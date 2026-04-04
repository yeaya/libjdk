#include <com/apple/laf/AquaUtils$3.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaUtils$3::getInstance() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, sizeProperty, $cast($String, $AccessController::doPrivileged($$cast($PrivilegedAction, $new($GetPropertyAction, "swing.enableAnimations"_s)))));
	return $of($Boolean::valueOf(!"false"_s->equals(sizeProperty)));
}

AquaUtils$3::AquaUtils$3() {
}

$Class* AquaUtils$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$3, init$, void)},
		{"getInstance", "()Ljava/lang/Boolean;", nullptr, $PROTECTED, $virtualMethod(AquaUtils$3, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaUtils",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$3",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$3);
	});
	return class$;
}

$Class* AquaUtils$3::class$ = nullptr;

		} // laf
	} // apple
} // com