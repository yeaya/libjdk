#include <com/apple/laf/AquaInternalFrameUI$3.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

#undef TITLE_BAR_ZOOM_BOX

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaInternalFrameUI$AquaInternalFrameButtonIcon = ::com::apple::laf::AquaInternalFrameUI$AquaInternalFrameButtonIcon;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameUI$3::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaInternalFrameUI$3::getInstance() {
	$init($JRSUIConstants$Widget);
	return $of($new($AquaInternalFrameUI$AquaInternalFrameButtonIcon, $JRSUIConstants$Widget::TITLE_BAR_ZOOM_BOX));
}

AquaInternalFrameUI$3::AquaInternalFrameUI$3() {
}

$Class* AquaInternalFrameUI$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaInternalFrameUI$3, init$, void)},
		{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(AquaInternalFrameUI$3, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameUI$3",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameUI$3);
	});
	return class$;
}

$Class* AquaInternalFrameUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com