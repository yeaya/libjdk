#include <javax/swing/plaf/basic/BasicComboBoxUI$KeyHandler.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboBoxUI$KeyHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void BasicComboBoxUI$KeyHandler::keyPressed($KeyEvent* e) {
	$$nc(this->this$0->getHandler())->keyPressed(e);
}

BasicComboBoxUI$KeyHandler::BasicComboBoxUI$KeyHandler() {
}

$Class* BasicComboBoxUI$KeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$KeyHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(BasicComboBoxUI$KeyHandler, init$, void, $BasicComboBoxUI*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$KeyHandler, keyPressed, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "KeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler",
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
		"javax.swing.plaf.basic.BasicComboBoxUI"
	};
	$loadClass(BasicComboBoxUI$KeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboBoxUI$KeyHandler);
	});
	return class$;
}

$Class* BasicComboBoxUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax