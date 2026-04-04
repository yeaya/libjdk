#include <com/apple/laf/AquaInternalFrameBorderMetrics$1.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$1$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$1$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$1$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameBorderMetrics$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$1::getInstance() {
	return $new($AquaInternalFrameBorderMetrics$1$1, this);
}

AquaInternalFrameBorderMetrics$1::AquaInternalFrameBorderMetrics$1() {
}

$Class* AquaInternalFrameBorderMetrics$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameBorderMetrics$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorderMetrics$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorderMetrics",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorderMetrics$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaInternalFrameBorderMetrics$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorderMetrics$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorderMetrics;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameBorderMetrics"
	};
	$loadClass(AquaInternalFrameBorderMetrics$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorderMetrics$1);
	});
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$1::class$ = nullptr;

		} // laf
	} // apple
} // com