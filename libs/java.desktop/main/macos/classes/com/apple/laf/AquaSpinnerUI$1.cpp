#include <com/apple/laf/AquaSpinnerUI$1.h>
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

void AquaSpinnerUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSpinnerUI$1::getInstance() {
	return $of($new($AquaSpinnerUI$ArrowButtonHandler, "increment"_s, true));
}

AquaSpinnerUI$1::AquaSpinnerUI$1() {
}

$Class* AquaSpinnerUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaSpinnerUI$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaSpinnerUI$ArrowButtonHandler;", nullptr, $PROTECTED, $virtualMethod(AquaSpinnerUI$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSpinnerUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaSpinnerUI$ArrowButtonHandler", "com.apple.laf.AquaSpinnerUI", "ArrowButtonHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI$1",
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
	$loadClass(AquaSpinnerUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSpinnerUI$1);
	});
	return class$;
}

$Class* AquaSpinnerUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com