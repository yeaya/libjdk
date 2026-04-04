#include <com/apple/laf/AquaSliderUI$1.h>
#include <com/apple/laf/AquaSliderUI$1$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaSliderUI$1$1 = ::com::apple::laf::AquaSliderUI$1$1;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaSliderUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaSliderUI$1::getInstance() {
	return $new($AquaSliderUI$1$1, this, $$new($AquaUtilControlSize$SizeVariant, 25, 25));
}

AquaSliderUI$1::AquaSliderUI$1() {
}

$Class* AquaSliderUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaSliderUI$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED, $virtualMethod(AquaSliderUI$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSliderUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSliderUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaSliderUI$1$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSliderUI$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSliderUI"
	};
	$loadClass(AquaSliderUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSliderUI$1);
	});
	return class$;
}

$Class* AquaSliderUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com