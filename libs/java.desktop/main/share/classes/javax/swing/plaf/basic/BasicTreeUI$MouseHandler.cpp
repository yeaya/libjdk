#include <javax/swing/plaf/basic/BasicTreeUI$MouseHandler.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$MouseHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicTreeUI$MouseHandler::mousePressed($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mousePressed(e);
}

void BasicTreeUI$MouseHandler::mouseDragged($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseDragged(e);
}

void BasicTreeUI$MouseHandler::mouseMoved($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseMoved(e);
}

void BasicTreeUI$MouseHandler::mouseReleased($MouseEvent* e) {
	$$nc(this->this$0->getHandler())->mouseReleased(e);
}

BasicTreeUI$MouseHandler::BasicTreeUI$MouseHandler() {
}

$Class* BasicTreeUI$MouseHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$MouseHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(BasicTreeUI$MouseHandler, init$, void, $BasicTreeUI*)},
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseHandler, mouseDragged, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseHandler, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseHandler, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$MouseHandler, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$MouseHandler", "javax.swing.plaf.basic.BasicTreeUI", "MouseHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$MouseHandler",
		"java.awt.event.MouseAdapter",
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
	$loadClass(BasicTreeUI$MouseHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTreeUI$MouseHandler));
	});
	return class$;
}

$Class* BasicTreeUI$MouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax