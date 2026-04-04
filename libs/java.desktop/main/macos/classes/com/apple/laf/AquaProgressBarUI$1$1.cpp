#include <com/apple/laf/AquaProgressBarUI$1$1.h>
#include <com/apple/laf/AquaProgressBarUI$1.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaProgressBarUI$1 = ::com::apple::laf::AquaProgressBarUI$1;
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

void AquaProgressBarUI$1$1::init$($AquaProgressBarUI$1* this$0, $AquaUtilControlSize$SizeVariant* variant) {
	$set(this, this$0, this$0);
	$AquaUtilControlSize$SizeDescriptor::init$(variant);
}

$AquaUtilControlSize$SizeVariant* AquaProgressBarUI$1$1::deriveSmall($AquaUtilControlSize$SizeVariant* v) {
	$nc(v)->alterMinSize(0, -6);
	return $AquaUtilControlSize$SizeDescriptor::deriveSmall(v);
}

AquaProgressBarUI$1$1::AquaProgressBarUI$1$1() {
}

$Class* AquaProgressBarUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaProgressBarUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(AquaProgressBarUI$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaProgressBarUI$1;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, 0, $method(AquaProgressBarUI$1$1, init$, void, $AquaProgressBarUI$1*, $AquaUtilControlSize$SizeVariant*)},
		{"deriveSmall", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC, $virtualMethod(AquaProgressBarUI$1$1, deriveSmall, $AquaUtilControlSize$SizeVariant*, $AquaUtilControlSize$SizeVariant*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaProgressBarUI$1",
		"getInstance",
		"()Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaProgressBarUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaProgressBarUI$1$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaProgressBarUI$1$1",
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
		"com.apple.laf.AquaProgressBarUI"
	};
	$loadClass(AquaProgressBarUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaProgressBarUI$1$1);
	});
	return class$;
}

$Class* AquaProgressBarUI$1$1::class$ = nullptr;

		} // laf
	} // apple
} // com