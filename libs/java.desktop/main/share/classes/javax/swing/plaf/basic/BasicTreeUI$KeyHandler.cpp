#include <javax/swing/plaf/basic/BasicTreeUI$KeyHandler.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$KeyHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicTreeUI$KeyHandler::keyTyped($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyTyped(e);
}

void BasicTreeUI$KeyHandler::keyPressed($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyPressed(e);
}

void BasicTreeUI$KeyHandler::keyReleased($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyReleased(e);
}

BasicTreeUI$KeyHandler::BasicTreeUI$KeyHandler() {
}

$Class* BasicTreeUI$KeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$KeyHandler, this$0)},
		{"repeatKeyAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicTreeUI$KeyHandler, repeatKeyAction)},
		{"isKeyDown", "Z", nullptr, $PROTECTED, $field(BasicTreeUI$KeyHandler, isKeyDown)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$KeyHandler, init$, void, $BasicTreeUI*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$KeyHandler, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$KeyHandler, keyReleased, void, $KeyEvent*)},
		{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$KeyHandler, keyTyped, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$KeyHandler", "javax.swing.plaf.basic.BasicTreeUI", "KeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$KeyHandler",
		"java.awt.event.KeyAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTreeUI"
	};
	$loadClass(BasicTreeUI$KeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$KeyHandler);
	});
	return class$;
}

$Class* BasicTreeUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax