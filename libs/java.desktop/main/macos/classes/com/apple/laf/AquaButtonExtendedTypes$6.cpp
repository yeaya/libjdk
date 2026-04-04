#include <com/apple/laf/AquaButtonExtendedTypes$6.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$6::init$($String* name, $JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH) {
	$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant, smallW, smallH, miniW, miniH);
}

void AquaButtonExtendedTypes$6::patchUp($AquaUtilControlSize$SizeDescriptor* descriptor) {
	$nc($nc(descriptor)->small)->alterMargins(0, 0, 0, -4);
	$nc(descriptor->mini)->alterMargins(0, 0, 0, -6);
}

AquaButtonExtendedTypes$6::AquaButtonExtendedTypes$6() {
}

$Class* AquaButtonExtendedTypes$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, 0, $method(AquaButtonExtendedTypes$6, init$, void, $String*, $JRSUIConstants$Widget*, $AquaUtilControlSize$SizeVariant*, int32_t, int32_t, int32_t, int32_t)},
		{"patchUp", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$6, patchUp, void, $AquaUtilControlSize$SizeDescriptor*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		"getAllTypes",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$6", nullptr, nullptr, 0},
		{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$6",
		"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonExtendedTypes"
	};
	$loadClass(AquaButtonExtendedTypes$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$6);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$6::class$ = nullptr;

		} // laf
	} // apple
} // com