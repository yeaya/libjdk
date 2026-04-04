#include <com/apple/laf/AquaScrollPaneUI$XYMouseWheelHandler.h>
#include <com/apple/laf/AquaScrollPaneUI.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>
#include <jcpp.h>

using $AquaScrollPaneUI = ::com::apple::laf::AquaScrollPaneUI;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI$MouseWheelHandler = ::javax::swing::plaf::basic::BasicScrollPaneUI$MouseWheelHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaScrollPaneUI$XYMouseWheelHandler::init$($AquaScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollPaneUI$MouseWheelHandler::init$(this$0);
}

void AquaScrollPaneUI$XYMouseWheelHandler::mouseWheelMoved($MouseWheelEvent* e) {
	$BasicScrollPaneUI$MouseWheelHandler::mouseWheelMoved(e);
	$nc(e)->consume();
}

AquaScrollPaneUI$XYMouseWheelHandler::AquaScrollPaneUI$XYMouseWheelHandler() {
}

$Class* AquaScrollPaneUI$XYMouseWheelHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollPaneUI$XYMouseWheelHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaScrollPaneUI;)V", nullptr, $PROTECTED, $method(AquaScrollPaneUI$XYMouseWheelHandler, init$, void, $AquaScrollPaneUI*)},
		{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaScrollPaneUI$XYMouseWheelHandler, mouseWheelMoved, void, $MouseWheelEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler", "com.apple.laf.AquaScrollPaneUI", "XYMouseWheelHandler", $PROTECTED},
		{"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "MouseWheelHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler",
		"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaScrollPaneUI"
	};
	$loadClass(AquaScrollPaneUI$XYMouseWheelHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaScrollPaneUI$XYMouseWheelHandler);
	});
	return class$;
}

$Class* AquaScrollPaneUI$XYMouseWheelHandler::class$ = nullptr;

		} // laf
	} // apple
} // com