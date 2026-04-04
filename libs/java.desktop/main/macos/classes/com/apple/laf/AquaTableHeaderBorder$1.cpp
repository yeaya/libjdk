#include <com/apple/laf/AquaTableHeaderBorder$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;

namespace com {
	namespace apple {
		namespace laf {

void AquaTableHeaderBorder$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaTableHeaderBorder$1::getInstance() {
	return $BorderFactory::createRaisedBevelBorder();
}

AquaTableHeaderBorder$1::AquaTableHeaderBorder$1() {
}

$Class* AquaTableHeaderBorder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaTableHeaderBorder$1, init$, void)},
		{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(AquaTableHeaderBorder$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTableHeaderBorder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableHeaderBorder$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTableHeaderBorder$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableHeaderBorder"
	};
	$loadClass(AquaTableHeaderBorder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTableHeaderBorder$1);
	});
	return class$;
}

$Class* AquaTableHeaderBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com