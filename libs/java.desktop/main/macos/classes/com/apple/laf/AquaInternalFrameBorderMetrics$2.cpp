#include <com/apple/laf/AquaInternalFrameBorderMetrics$2.h>
#include <com/apple/laf/AquaInternalFrameBorderMetrics$2$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaInternalFrameBorderMetrics$2$1 = ::com::apple::laf::AquaInternalFrameBorderMetrics$2$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameBorderMetrics$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorderMetrics$2::getInstance() {
	return $new($AquaInternalFrameBorderMetrics$2$1, this);
}

AquaInternalFrameBorderMetrics$2::AquaInternalFrameBorderMetrics$2() {
}

$Class* AquaInternalFrameBorderMetrics$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameBorderMetrics$2, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorderMetrics;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorderMetrics$2, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorderMetrics",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorderMetrics$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaInternalFrameBorderMetrics$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorderMetrics$2",
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
	$loadClass(AquaInternalFrameBorderMetrics$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorderMetrics$2);
	});
	return class$;
}

$Class* AquaInternalFrameBorderMetrics$2::class$ = nullptr;

		} // laf
	} // apple
} // com