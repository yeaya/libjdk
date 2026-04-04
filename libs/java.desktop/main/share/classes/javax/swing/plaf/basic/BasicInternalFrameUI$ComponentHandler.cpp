#include <javax/swing/plaf/basic/BasicInternalFrameUI$ComponentHandler.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$ComponentHandler::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$ComponentHandler::componentResized($ComponentEvent* e) {
	$$nc(this->this$0->getHandler())->componentResized(e);
}

void BasicInternalFrameUI$ComponentHandler::componentMoved($ComponentEvent* e) {
	$$nc(this->this$0->getHandler())->componentMoved(e);
}

void BasicInternalFrameUI$ComponentHandler::componentShown($ComponentEvent* e) {
	$$nc(this->this$0->getHandler())->componentShown(e);
}

void BasicInternalFrameUI$ComponentHandler::componentHidden($ComponentEvent* e) {
	$$nc(this->this$0->getHandler())->componentHidden(e);
}

BasicInternalFrameUI$ComponentHandler::BasicInternalFrameUI$ComponentHandler() {
}

$Class* BasicInternalFrameUI$ComponentHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$ComponentHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PROTECTED, $method(BasicInternalFrameUI$ComponentHandler, init$, void, $BasicInternalFrameUI*)},
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$ComponentHandler, componentHidden, void, $ComponentEvent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$ComponentHandler, componentMoved, void, $ComponentEvent*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$ComponentHandler, componentResized, void, $ComponentEvent*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$ComponentHandler, componentShown, void, $ComponentEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler", "javax.swing.plaf.basic.BasicInternalFrameUI", "ComponentHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler",
		"java.lang.Object",
		"java.awt.event.ComponentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicInternalFrameUI"
	};
	$loadClass(BasicInternalFrameUI$ComponentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameUI$ComponentHandler);
	});
	return class$;
}

$Class* BasicInternalFrameUI$ComponentHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax