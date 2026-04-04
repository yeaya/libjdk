#include <javax/swing/plaf/basic/BasicTableUI$MouseInputHandler.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTableUI$MouseInputHandler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTableUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseClicked(e);
}

void BasicTableUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

void BasicTableUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseReleased(e);
}

void BasicTableUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseEntered(e);
}

void BasicTableUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseExited(e);
}

void BasicTableUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

void BasicTableUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

BasicTableUI$MouseInputHandler::BasicTableUI$MouseInputHandler() {
}

$Class* BasicTableUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PUBLIC, $method(BasicTableUI$MouseInputHandler, init$, void, $BasicTableUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableUI", "MouseInputHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler",
		"java.lang.Object",
		"javax.swing.event.MouseInputListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTableUI"
	};
	$loadClass(BasicTableUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTableUI$MouseInputHandler));
	});
	return class$;
}

$Class* BasicTableUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax