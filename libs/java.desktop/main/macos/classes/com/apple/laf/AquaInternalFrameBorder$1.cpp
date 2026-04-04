#include <com/apple/laf/AquaInternalFrameBorder$1.h>
#include <apple/laf/JRSUIConstants$WindowType.h>
#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef DOCUMENT

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

void AquaInternalFrameBorder$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameBorder$1::getInstance() {
	$init($JRSUIConstants$WindowType);
	return $of($new($AquaInternalFrameBorder, $JRSUIConstants$WindowType::DOCUMENT));
}

AquaInternalFrameBorder$1::AquaInternalFrameBorder$1() {
}

$Class* AquaInternalFrameBorder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameBorder$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameBorder$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameBorder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameBorder$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameBorder$1",
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
	$loadClass(AquaInternalFrameBorder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameBorder$1);
	});
	return class$;
}

$Class* AquaInternalFrameBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com