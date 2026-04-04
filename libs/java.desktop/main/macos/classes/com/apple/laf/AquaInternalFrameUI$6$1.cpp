#include <com/apple/laf/AquaInternalFrameUI$6$1.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIConstants$WindowType.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>
#include <com/apple/laf/AquaInternalFrameUI$6.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

#undef GROW_BOX_TEXTURED
#undef UTILITY

using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIConstants$WindowType = ::apple::laf::JRSUIConstants$WindowType;
using $AquaIcon$ScalingJRSUIIcon = ::com::apple::laf::AquaIcon$ScalingJRSUIIcon;
using $AquaInternalFrameUI$6 = ::com::apple::laf::AquaInternalFrameUI$6;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameUI$6$1::init$($AquaInternalFrameUI$6* this$0, int32_t width, int32_t height) {
	$set(this, this$0, this$0);
	$AquaIcon$ScalingJRSUIIcon::init$(width, height);
}

void AquaInternalFrameUI$6$1::initIconPainter($AquaPainter* iconState) {
	$init($JRSUIConstants$Widget);
	$nc($nc(iconState)->state)->set($JRSUIConstants$Widget::GROW_BOX_TEXTURED);
	$init($JRSUIConstants$WindowType);
	$nc(iconState->state)->set($JRSUIConstants$WindowType::UTILITY);
}

AquaInternalFrameUI$6$1::AquaInternalFrameUI$6$1() {
}

$Class* AquaInternalFrameUI$6$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFrameUI$6;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$6$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI$6;II)V", nullptr, 0, $method(AquaInternalFrameUI$6$1, init$, void, $AquaInternalFrameUI$6*, int32_t, int32_t)},
		{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;)V", $PUBLIC, $virtualMethod(AquaInternalFrameUI$6$1, initIconPainter, void, $AquaPainter*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaInternalFrameUI$6",
		"getInstance",
		"()Ljavax/swing/Icon;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$6", nullptr, nullptr, 0},
		{"com.apple.laf.AquaInternalFrameUI$6$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$ScalingJRSUIIcon", "com.apple.laf.AquaIcon", "ScalingJRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameUI$6$1",
		"com.apple.laf.AquaIcon$ScalingJRSUIIcon",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$6$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaInternalFrameUI$6$1));
	});
	return class$;
}

$Class* AquaInternalFrameUI$6$1::class$ = nullptr;

		} // laf
	} // apple
} // com