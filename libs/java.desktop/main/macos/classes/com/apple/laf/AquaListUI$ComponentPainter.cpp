#include <com/apple/laf/AquaListUI$ComponentPainter.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder$Default.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaListUI.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE

using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $AquaBorder$Default = ::com::apple::laf::AquaBorder$Default;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaListUI$ComponentPainter::init$() {
	$AquaBorder$Default::init$();
}

void AquaListUI$ComponentPainter::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($JComponent, jc, $instanceOf($JComponent, c) ? $cast($JComponent, c) : ($JComponent*)nullptr);
	if (jc != nullptr && !$AquaFocusHandler::isActive(jc)) {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::INACTIVE);
	} else {
		$init($JRSUIConstants$State);
		$nc($nc(this->painter)->state)->set($JRSUIConstants$State::ACTIVE);
	}
	$AquaBorder$Default::paintBorder(c, g, x, y, w, h);
}

AquaListUI$ComponentPainter::AquaListUI$ComponentPainter() {
}

$Class* AquaListUI$ComponentPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaListUI$ComponentPainter, init$, void)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaListUI$ComponentPainter, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaListUI$ComponentPainter", "com.apple.laf.AquaListUI", "ComponentPainter", $STATIC},
		{"com.apple.laf.AquaBorder$Default", "com.apple.laf.AquaBorder", "Default", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaListUI$ComponentPainter",
		"com.apple.laf.AquaBorder$Default",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaListUI"
	};
	$loadClass(AquaListUI$ComponentPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaListUI$ComponentPainter));
	});
	return class$;
}

$Class* AquaListUI$ComponentPainter::class$ = nullptr;

		} // laf
	} // apple
} // com