#include <com/apple/laf/AquaButtonExtendedTypes$2.h>
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

void AquaButtonExtendedTypes$2::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$2::getBorder() {
	return $AquaButtonBorder::getToolBarButtonBorder();
}

AquaButtonExtendedTypes$2::AquaButtonExtendedTypes$2() {
}

$Class* AquaButtonExtendedTypes$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaButtonExtendedTypes$2, init$, void, $String*, bool)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$2, getBorder, $Border*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		"getAllTypes",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$2",
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
	$loadClass(AquaButtonExtendedTypes$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$2);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$2::class$ = nullptr;

		} // laf
	} // apple
} // com