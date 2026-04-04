#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicMenuUI$MouseInputHandler::init$($BasicMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseClicked(e);
}

void BasicMenuUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

void BasicMenuUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseReleased(e);
}

void BasicMenuUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseEntered(e);
}

void BasicMenuUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseExited(e);
}

void BasicMenuUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

void BasicMenuUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

BasicMenuUI$MouseInputHandler::BasicMenuUI$MouseInputHandler() {
}

$Class* BasicMenuUI$MouseInputHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuUI$MouseInputHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuUI;)V", nullptr, $PROTECTED, $method(BasicMenuUI$MouseInputHandler, init$, void, $BasicMenuUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseClicked, void, $MouseEvent*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicMenuUI$MouseInputHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler",
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
		"javax.swing.plaf.basic.BasicMenuUI"
	};
	$loadClass(BasicMenuUI$MouseInputHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicMenuUI$MouseInputHandler));
	});
	return class$;
}

$Class* BasicMenuUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax