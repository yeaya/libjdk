#include <com/apple/laf/AquaScrollPaneUI.h>
#include <com/apple/laf/AquaScrollPaneUI$XYMouseWheelHandler.h>
#include <java/awt/event/MouseWheelListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $AquaScrollPaneUI$XYMouseWheelHandler = ::com::apple::laf::AquaScrollPaneUI$XYMouseWheelHandler;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

$ComponentUI* AquaScrollPaneUI::createUI($JComponent* x) {
	$init(AquaScrollPaneUI);
	return $new(AquaScrollPaneUI);
}

$MouseWheelListener* AquaScrollPaneUI::createMouseWheelListener() {
	return $new($AquaScrollPaneUI$XYMouseWheelHandler, this);
}

AquaScrollPaneUI::AquaScrollPaneUI() {
}

$Class* AquaScrollPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaScrollPaneUI, init$, void)},
		{"createMouseWheelListener", "()Ljava/awt/event/MouseWheelListener;", nullptr, $PROTECTED, $virtualMethod(AquaScrollPaneUI, createMouseWheelListener, $MouseWheelListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaScrollPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler", "com.apple.laf.AquaScrollPaneUI", "XYMouseWheelHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaScrollPaneUI",
		"javax.swing.plaf.basic.BasicScrollPaneUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler"
	};
	$loadClass(AquaScrollPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaScrollPaneUI));
	});
	return class$;
}

$Class* AquaScrollPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com