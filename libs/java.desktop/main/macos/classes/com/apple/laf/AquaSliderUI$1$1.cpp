#include <com/apple/laf/AquaSliderUI$1$1.h>
#include <com/apple/laf/AquaSliderUI$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaSliderUI$1 = ::com::apple::laf::AquaSliderUI$1;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaSliderUI$1$1::init$($AquaSliderUI$1* this$0, $AquaUtilControlSize$SizeVariant* variant) {
	$set(this, this$0, this$0);
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$1$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall($($nc(v)->alterMinSize(-2, -2)));
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$1$1::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveMini($($nc(v)->alterMinSize(-2, -2)));
}

AquaSliderUI$1$1::AquaSliderUI$1$1() {
}

$Class* AquaSliderUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaSliderUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSliderUI$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaSliderUI$1;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(AquaSliderUI$1$1, init$, void, $AquaSliderUI$1*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaSliderUI$1$1, deriveMini, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaSliderUI$1$1, deriveSmall, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSliderUI$1",
		"getInstance",
		"()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSliderUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaSliderUI$1$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSliderUI$1$1",
		"com.apple.laf.AquaUtilControlSize$SizeDescriptor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSliderUI"
	};
	$loadClass(AquaSliderUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSliderUI$1$1);
	});
	return class$;
}

$Class* AquaSliderUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com