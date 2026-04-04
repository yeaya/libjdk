#include <com/apple/laf/AquaInternalFrameBorder$2.h>
#include <apple/laf/JRSUIConstants$WindowType.h>
#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef UTILITY

using $JRSUIConstants$WindowType = ::apple::laf::JRSUIConstants$WindowType;
using $AquaInternalFrameBorder = ::com::apple::laf::AquaInternalFrameBorder;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameBorder$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorder$2::getInstance() {
	$init($JRSUIConstants$WindowType);
	return $of($new($AquaInternalFrameBorder, $JRSUIConstants$WindowType::UTILITY));
}

AquaInternalFrameBorder$2::AquaInternalFrameBorder$2() {
}

$Class* AquaInternalFrameBorder$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameBorder$2, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorder$2, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorder$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorder$2",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaInternalFrameBorder;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameBorder"
	};
	$loadClass(AquaInternalFrameBorder$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorder$2);
	});
	return class$;
}

$Class* AquaInternalFrameBorder$2::class$ = nullptr;

		} // laf
	} // apple
} // com