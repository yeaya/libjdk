#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicScrollPaneUI$MouseWheelHandler::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$MouseWheelHandler::mouseWheelMoved($MouseWheelEvent* e) {
	$$nc(this->this$0->getHandler())->mouseWheelMoved(e);
}

BasicScrollPaneUI$MouseWheelHandler::BasicScrollPaneUI$MouseWheelHandler() {
}

$Class* BasicScrollPaneUI$MouseWheelHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$MouseWheelHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PROTECTED, $method(BasicScrollPaneUI$MouseWheelHandler, init$, void, $BasicScrollPaneUI*)},
		{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicScrollPaneUI$MouseWheelHandler, mouseWheelMoved, void, $MouseWheelEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "MouseWheelHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler",
		"java.lang.Object",
		"java.awt.event.MouseWheelListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicScrollPaneUI"
	};
	$loadClass(BasicScrollPaneUI$MouseWheelHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicScrollPaneUI$MouseWheelHandler);
	});
	return class$;
}

$Class* BasicScrollPaneUI$MouseWheelHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax