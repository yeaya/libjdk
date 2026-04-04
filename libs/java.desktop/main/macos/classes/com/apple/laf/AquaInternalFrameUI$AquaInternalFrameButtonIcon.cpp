#include <com/apple/laf/AquaInternalFrameUI$AquaInternalFrameButtonIcon.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

#undef ROLLOVER

using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaIcon$JRSUIIcon = ::com::apple::laf::AquaIcon$JRSUIIcon;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameUI$AquaInternalFrameButtonIcon::init$($JRSUIConstants$Widget* widget) {
	$AquaIcon$JRSUIIcon::init$();
	$nc($nc(this->painter)->state)->set(widget);
}

void AquaInternalFrameUI$AquaInternalFrameButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc($nc(this->painter)->state)->set($(getStateFor(c)));
	$AquaIcon$JRSUIIcon::paintIcon(c, g, x, y);
}

$JRSUIConstants$State* AquaInternalFrameUI$AquaInternalFrameButtonIcon::getStateFor($Component* c) {
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ROLLOVER;
}

int32_t AquaInternalFrameUI$AquaInternalFrameButtonIcon::getIconWidth() {
	return 19;
}

int32_t AquaInternalFrameUI$AquaInternalFrameButtonIcon::getIconHeight() {
	return 19;
}

AquaInternalFrameUI$AquaInternalFrameButtonIcon::AquaInternalFrameUI$AquaInternalFrameButtonIcon() {
}

$Class* AquaInternalFrameUI$AquaInternalFrameButtonIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lapple/laf/JRSUIConstants$Widget;)V", nullptr, $PUBLIC, $method(AquaInternalFrameUI$AquaInternalFrameButtonIcon, init$, void, $JRSUIConstants$Widget*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$AquaInternalFrameButtonIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$AquaInternalFrameButtonIcon, getIconWidth, int32_t)},
		{"getStateFor", "(Ljava/awt/Component;)Lapple/laf/JRSUIConstants$State;", nullptr, 0, $virtualMethod(AquaInternalFrameUI$AquaInternalFrameButtonIcon, getStateFor, $JRSUIConstants$State*, $Component*)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$AquaInternalFrameButtonIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon", "com.apple.laf.AquaInternalFrameUI", "AquaInternalFrameButtonIcon", $STATIC},
		{"com.apple.laf.AquaIcon$JRSUIIcon", "com.apple.laf.AquaIcon", "JRSUIIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon",
		"com.apple.laf.AquaIcon$JRSUIIcon",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$AquaInternalFrameButtonIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaInternalFrameUI$AquaInternalFrameButtonIcon));
	});
	return class$;
}

$Class* AquaInternalFrameUI$AquaInternalFrameButtonIcon::class$ = nullptr;

		} // laf
	} // apple
} // com