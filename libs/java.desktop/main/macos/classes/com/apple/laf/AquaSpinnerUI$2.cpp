#include <com/apple/laf/AquaSpinnerUI$2.h>
#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaSpinnerUI$ArrowButtonHandler = ::com::apple::laf::AquaSpinnerUI$ArrowButtonHandler;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaSpinnerUI$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSpinnerUI$2::getInstance() {
	return $of($new($AquaSpinnerUI$ArrowButtonHandler, "decrement"_s, false));
}

AquaSpinnerUI$2::AquaSpinnerUI$2() {
}

$Class* AquaSpinnerUI$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaSpinnerUI$2, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI$2, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSpinnerUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI$2",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSpinnerUI"
	};
	$loadClass(AquaSpinnerUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSpinnerUI$2);
	});
	return class$;
}

$Class* AquaSpinnerUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com