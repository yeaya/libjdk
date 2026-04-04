#include <javax/swing/plaf/basic/BasicListUI$MouseInputHandler.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicListUI$MouseInputHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseClicked(e);
}

void BasicListUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseEntered(e);
}

void BasicListUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseExited(e);
}

void BasicListUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

void BasicListUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

void BasicListUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

void BasicListUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseReleased(e);
}

BasicListUI$MouseInputHandler::BasicListUI$MouseInputHandler() {
}

$Class* BasicListUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(BasicListUI$MouseInputHandler, init$, void, $BasicListUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicListUI$MouseInputHandler", "javax.swing.plaf.basic.BasicListUI", "MouseInputHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicListUI$MouseInputHandler",
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
		"javax.swing.plaf.basic.BasicListUI"
	};
	$loadClass(BasicListUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicListUI$MouseInputHandler));
	});
	return class$;
}

$Class* BasicListUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax