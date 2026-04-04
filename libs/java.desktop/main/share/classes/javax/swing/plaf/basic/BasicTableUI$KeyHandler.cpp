#include <javax/swing/plaf/basic/BasicTableUI$KeyHandler.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTableUI$KeyHandler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTableUI$KeyHandler::keyPressed($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyPressed(e);
}

void BasicTableUI$KeyHandler::keyReleased($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyReleased(e);
}

void BasicTableUI$KeyHandler::keyTyped($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyTyped(e);
}

BasicTableUI$KeyHandler::BasicTableUI$KeyHandler() {
}

$Class* BasicTableUI$KeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$KeyHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PUBLIC, $method(BasicTableUI$KeyHandler, init$, void, $BasicTableUI*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$KeyHandler, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$KeyHandler, keyReleased, void, $KeyEvent*)},
		{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$KeyHandler, keyTyped, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTableUI$KeyHandler", "javax.swing.plaf.basic.BasicTableUI", "KeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTableUI$KeyHandler",
		"java.lang.Object",
		"java.awt.event.KeyListener",
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
	$loadClass(BasicTableUI$KeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTableUI$KeyHandler);
	});
	return class$;
}

$Class* BasicTableUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax