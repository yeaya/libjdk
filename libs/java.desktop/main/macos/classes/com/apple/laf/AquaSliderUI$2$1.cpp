#include <com/apple/laf/AquaSliderUI$2$1.h>
#include <com/apple/laf/AquaSliderUI$2.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaSliderUI$2 = ::com::apple::laf::AquaSliderUI$2;
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

void AquaSliderUI$2$1::init$($AquaSliderUI$2* this$0, $AquaUtilControlSize$SizeVariant* variant) {
	$set(this, this$0, this$0);
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$2$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall($($nc(v)->alterMinSize(-2, -2)));
}

$AquaUtilControlSize$SizeVariant* AquaSliderUI$2$1::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	return $AquaUtilControlSize$SizeDescriptor::deriveMini($($nc(v)->alterMinSize(-2, -2)));
}

AquaSliderUI$2$1::AquaSliderUI$2$1() {
}

$Class* AquaSliderUI$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaSliderUI$2;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSliderUI$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaSliderUI$2;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(AquaSliderUI$2$1, init$, void, $AquaSliderUI$2*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaSliderUI$2$1, deriveMini, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaSliderUI$2$1, deriveSmall, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSliderUI$2",
		"getInstance",
		"()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSliderUI$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaSliderUI$2$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSliderUI$2$1",
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
	$loadClass(AquaSliderUI$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSliderUI$2$1);
	});
	return class$;
}

$Class* AquaSliderUI$2$1::class$ = nullptr;

		} // laf
	} // apple
} // com