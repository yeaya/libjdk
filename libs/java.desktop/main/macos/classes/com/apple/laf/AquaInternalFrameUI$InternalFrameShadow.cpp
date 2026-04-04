#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>
#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow$1.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaInternalFrameUI$InternalFrameShadow$1 = ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameUI$InternalFrameShadow::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$InternalFrameShadow::getInstance() {
	$useLocalObjectStack();
	$var($Border, fgShadow, getForegroundShadowBorder());
	$var($Border, bgShadow, getBackgroundShadowBorder());
	return $new($AquaInternalFrameUI$InternalFrameShadow$1, this, fgShadow, bgShadow);
}

AquaInternalFrameUI$InternalFrameShadow::AquaInternalFrameUI$InternalFrameShadow() {
}

$Class* AquaInternalFrameUI$InternalFrameShadow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameUI$InternalFrameShadow, init$, void)},
		{"getBackgroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT, $virtualMethod(AquaInternalFrameUI$InternalFrameShadow, getBackgroundShadowBorder, $Border*)},
		{"getForegroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, $ABSTRACT, $virtualMethod(AquaInternalFrameUI$InternalFrameShadow, getForegroundShadowBorder, $Border*)},
		{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameUI$InternalFrameShadow, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$InternalFrameShadow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameUI$InternalFrameShadow);
	});
	return class$;
}

$Class* AquaInternalFrameUI$InternalFrameShadow::class$ = nullptr;

		} // laf
	} // apple
} // com