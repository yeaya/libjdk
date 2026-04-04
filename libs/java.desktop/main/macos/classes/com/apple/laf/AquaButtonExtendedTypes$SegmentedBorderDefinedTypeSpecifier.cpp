#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier.h>
#include <apple/laf/JRSUIConstants$SegmentPosition.h>
#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$BorderDefinedTypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

#undef YES

using $JRSUIConstants$SegmentPosition = ::apple::laf::JRSUIConstants$SegmentPosition;
using $JRSUIConstants$SegmentTrailingSeparator = ::apple::laf::JRSUIConstants$SegmentTrailingSeparator;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaButtonExtendedTypes$BorderDefinedTypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$BorderDefinedTypeSpecifier;
using $AquaButtonExtendedTypes$SegmentedNamedBorder = ::com::apple::laf::AquaButtonExtendedTypes$SegmentedNamedBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $JRSUIConstants$SegmentPosition* position, $AquaUtilControlSize$SizeVariant* variant) {
	AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$(name, widget, position, variant, 0, 0, 0, 0);
}

void AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::init$($String* name, $JRSUIConstants$Widget* widget, $JRSUIConstants$SegmentPosition* position, $AquaUtilControlSize$SizeVariant* variant, int32_t smallW, int32_t smallH, int32_t miniW, int32_t miniH) {
	$AquaButtonExtendedTypes$BorderDefinedTypeSpecifier::init$(name, widget, variant, smallW, smallH, miniW, miniH);
	$init($JRSUIConstants$SegmentTrailingSeparator);
	$nc($nc($nc(this->border)->painter)->state)->set($JRSUIConstants$SegmentTrailingSeparator::YES);
	$nc(this->border->painter->state)->set(position);
}

$AquaBorder* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::initBorder($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* desc) {
	return $new($AquaButtonExtendedTypes$SegmentedNamedBorder, widget, desc);
}

AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier() {
}

$Class* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lapple/laf/JRSUIConstants$SegmentPosition;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, $PUBLIC, $method(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, init$, void, $String*, $JRSUIConstants$Widget*, $JRSUIConstants$SegmentPosition*, $AquaUtilControlSize$SizeVariant*)},
		{"<init>", "(Ljava/lang/String;Lapple/laf/JRSUIConstants$Widget;Lapple/laf/JRSUIConstants$SegmentPosition;Lcom/apple/laf/AquaUtilControlSize$SizeVariant;IIII)V", nullptr, $PUBLIC, $method(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, init$, void, $String*, $JRSUIConstants$Widget*, $JRSUIConstants$SegmentPosition*, $AquaUtilControlSize$SizeVariant*, int32_t, int32_t, int32_t, int32_t)},
		{"initBorder", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)Lcom/apple/laf/AquaBorder;", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, initBorder, $AquaBorder*, $JRSUIConstants$Widget*, $AquaUtilControlSize$SizeDescriptor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedBorderDefinedTypeSpecifier", $STATIC},
		{"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "BorderDefinedTypeSpecifier", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier",
		"com.apple.laf.AquaButtonExtendedTypes$BorderDefinedTypeSpecifier",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonExtendedTypes"
	};
	$loadClass(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$SegmentedBorderDefinedTypeSpecifier::class$ = nullptr;

		} // laf
	} // apple
} // com