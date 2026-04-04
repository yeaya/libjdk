#include <com/apple/laf/AquaButtonExtendedTypes$5.h>
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

void AquaButtonExtendedTypes$5::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$5::getBorder() {
	return $AquaButtonBorder::getToggleButtonBorder();
}

AquaButtonExtendedTypes$5::AquaButtonExtendedTypes$5() {
}

$Class* AquaButtonExtendedTypes$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaButtonExtendedTypes$5, init$, void, $String*, bool)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$5, getBorder, $Border*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		"getAllTypes",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$5", nullptr, nullptr, 0},
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$5",
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
	$loadClass(AquaButtonExtendedTypes$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$5);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$5::class$ = nullptr;

		} // laf
	} // apple
} // com