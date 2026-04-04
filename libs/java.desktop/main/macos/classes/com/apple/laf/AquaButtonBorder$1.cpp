#include <com/apple/laf/AquaButtonBorder$1.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef BUTTON_BEVEL

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonBorder$Named = ::com::apple::laf::AquaButtonBorder$Named;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonBorder$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonBorder$1::getInstance() {
	$useLocalObjectStack();
	$init($JRSUIConstants$Widget);
	return $of($new($AquaButtonBorder$Named, $JRSUIConstants$Widget::BUTTON_BEVEL, $$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant)->alterMargins(2, 4, 2, 4)))));
}

AquaButtonBorder$1::AquaButtonBorder$1() {
}

$Class* AquaButtonBorder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonBorder$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaButtonBorder$Named;", nullptr, $PROTECTED, $virtualMethod(AquaButtonBorder$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonBorder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonBorder$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonBorder$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaButtonBorder$Named;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonBorder"
	};
	$loadClass(AquaButtonBorder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonBorder$1);
	});
	return class$;
}

$Class* AquaButtonBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com