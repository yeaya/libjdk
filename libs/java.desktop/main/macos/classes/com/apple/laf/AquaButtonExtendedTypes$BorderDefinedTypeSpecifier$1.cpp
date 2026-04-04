#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
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

void AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::init$($AquaButtonExtendedTypes$BorderDefinedTypeSpecifier* this$0, $AquaUtilControlSize$SizeVariant* variant, int32_t val$smallW, int32_t val$smallH, int32_t val$miniW, int32_t val$miniH) {
	$set(this, this$0, this$0);
	this->val$smallW = val$smallW;
	this->val$smallH = val$smallH;
	this->val$miniW = val$miniW;
	this->val$miniH = val$miniH;
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	$nc(v)->alterMinSize(this->val$smallW, this->val$smallH);
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall(v);
}

$AquaUtilControlSize$SizeVariant* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::deriveMini($AquaUtilControlSize$SizeVariant* v) {
	$nc(v)->alterMinSize(this->val$miniW, this->val$miniH);
	return $AquaUtilControlSize$SizeDescriptor::deriveMini(v);
}

AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1() {
}

$Class* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, this$0)},
		{"val$miniH", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, val$miniH)},
		{"val$miniW", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, val$miniW)},
		{"val$smallH", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, val$smallH)},
		{"val$smallW", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, val$smallW)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, 0, $method(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, init$, void, $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier*, $AquaUtilControlSize$SizeVariant*, int32_t, int32_t, int32_t, int32_t)},
		{"deriveMini", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, deriveMini, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, deriveSmall, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
		"<init>",
		"(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
		{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Widget", "apple.laf.JRSUIConstants", "Widget", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaUtilControlSize$SizeVariant", "com.apple.laf.AquaUtilControlSize", "SizeVariant", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1",
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
		"com.apple.laf.AquaButtonExtendedTypes"
	};
	$loadClass(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$BorderDefinedTypeSpecifier$1::class$ = nullptr;

		} // laf
	} // apple
} // com