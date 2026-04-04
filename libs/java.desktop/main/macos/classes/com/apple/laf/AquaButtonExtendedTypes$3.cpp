#include <com/apple/laf/AquaButtonExtendedTypes$3.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$3::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$3::getBorder() {
	return $AquaButtonBorder::getToggleButtonBorder();
}

AquaButtonExtendedTypes$3::AquaButtonExtendedTypes$3() {
}

$Class* AquaButtonExtendedTypes$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaButtonExtendedTypes$3, init$, void, $String*, bool)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$3, getBorder, $Border*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		"getAllTypes",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$3",
		"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier",
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
	$loadClass(AquaButtonExtendedTypes$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$3);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$3::class$ = nullptr;

		} // laf
	} // apple
} // com