#include <com/apple/laf/AquaButtonExtendedTypes$1.h>
#include <com/apple/laf/AquaButtonExtendedTypes.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AquaButtonExtendedTypes = ::com::apple::laf::AquaButtonExtendedTypes;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonExtendedTypes$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonExtendedTypes$1::getInstance() {
	return $AquaButtonExtendedTypes::getAllTypes();
}

AquaButtonExtendedTypes$1::AquaButtonExtendedTypes$1() {
}

$Class* AquaButtonExtendedTypes$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonExtendedTypes$1, init$, void)},
		{"getInstance", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;", $PROTECTED, $virtualMethod(AquaButtonExtendedTypes$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonExtendedTypes",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonExtendedTypes$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaButtonExtendedTypes$TypeSpecifier", "com.apple.laf.AquaButtonExtendedTypes", "TypeSpecifier", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonExtendedTypes$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/AquaButtonExtendedTypes$TypeSpecifier;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonExtendedTypes"
	};
	$loadClass(AquaButtonExtendedTypes$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonExtendedTypes$1);
	});
	return class$;
}

$Class* AquaButtonExtendedTypes$1::class$ = nullptr;

		} // laf
	} // apple
} // com