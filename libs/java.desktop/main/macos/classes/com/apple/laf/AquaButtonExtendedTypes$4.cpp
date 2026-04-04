#include <com/apple/laf/AquaButtonExtendedTypes$4.h>
#include <com/apple/laf/AquaButtonExtendedTypes$TypeSpecifier.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaButtonExtendedTypes$TypeSpecifier = ::com::apple::laf::AquaButtonExtendedTypes$TypeSpecifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$4::init$($String* name, bool setIconFont) {
	$AquaButtonExtendedTypes$TypeSpecifier::init$(name, setIconFont);
}

$Border* AquaButtonExtendedTypes$4::getBorder() {
	return $UIManager::getBorder("Button.border"_s);
}

AquaButtonExtendedTypes$4::AquaButtonExtendedTypes$4() {
}

$Class* AquaButtonExtendedTypes$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(AquaButtonExtendedTypes$4, init$, void, $String*, bool)},
		{"getBorder", "()Ljavax/swing/border/Border;", nullptr, 0, $virtualMethod(AquaButtonExtendedTypes$4, getBorder, $Border*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		"getAllTypes",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$4",
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
	$loadClass(AquaButtonExtendedTypes$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$4);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$4::class$ = nullptr;

		} // laf
	} // apple
} // com