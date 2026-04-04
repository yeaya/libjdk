#include <com/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaButtonBorder$Named.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <jcpp.h>

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaButtonBorder$Named = ::com::apple::laf::AquaButtonBorder$Named;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$SegmentedNamedBorder::init$(AquaButtonExtendedTypes$SegmentedNamedBorder* sizeDescriptor) {
	$AquaButtonBorder$Named::init$(sizeDescriptor);
}

void AquaButtonExtendedTypes$SegmentedNamedBorder::init$($JRSUIConstants$Widget* widget, $AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaButtonBorder$Named::init$(widget, sizeDescriptor);
}

bool AquaButtonExtendedTypes$SegmentedNamedBorder::isSelectionPressing() {
	return false;
}

AquaButtonExtendedTypes$SegmentedNamedBorder::AquaButtonExtendedTypes$SegmentedNamedBorder() {
}

$Class* AquaButtonExtendedTypes$SegmentedNamedBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaButtonExtendedTypes$SegmentedNamedBorder;)V", nullptr, $PUBLIC, $method(AquaButtonExtendedTypes$SegmentedNamedBorder, init$, void, AquaButtonExtendedTypes$SegmentedNamedBorder*)},
		{"<init>", "(Lapple/laf/JRSUIConstants$Widget;Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(AquaButtonExtendedTypes$SegmentedNamedBorder, init$, void, $JRSUIConstants$Widget*, $AquaUtilControlSize$SizeDescriptor*)},
		{"isSelectionPressing", "()Z", nullptr, $PROTECTED, $virtualMethod(AquaButtonExtendedTypes$SegmentedNamedBorder, isSelectionPressing, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder", "com.apple.laf.AquaButtonExtendedTypes", "SegmentedNamedBorder", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaButtonBorder$Named", "com.apple.laf.AquaButtonBorder", "Named", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder",
		"com.apple.laf.AquaButtonBorder$Named",
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
	$loadClass(AquaButtonExtendedTypes$SegmentedNamedBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaButtonExtendedTypes$SegmentedNamedBorder));
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$SegmentedNamedBorder::class$ = nullptr;

		} // laf
	} // apple
} // com