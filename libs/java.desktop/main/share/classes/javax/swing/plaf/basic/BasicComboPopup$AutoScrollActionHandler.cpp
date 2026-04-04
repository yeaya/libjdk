#include <javax/swing/plaf/basic/BasicComboPopup$AutoScrollActionHandler.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboPopup$AutoScrollActionHandler::init$($BasicComboPopup* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	this->direction = direction;
}

void BasicComboPopup$AutoScrollActionHandler::actionPerformed($ActionEvent* e) {
	if (this->direction == 0) {
		this->this$0->autoScrollUp();
	} else {
		this->this$0->autoScrollDown();
	}
}

BasicComboPopup$AutoScrollActionHandler::BasicComboPopup$AutoScrollActionHandler() {
}

$Class* BasicComboPopup$AutoScrollActionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$AutoScrollActionHandler, this$0)},
		{"direction", "I", nullptr, $PRIVATE, $field(BasicComboPopup$AutoScrollActionHandler, direction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;I)V", nullptr, 0, $method(BasicComboPopup$AutoScrollActionHandler, init$, void, $BasicComboPopup*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboPopup$AutoScrollActionHandler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler", "javax.swing.plaf.basic.BasicComboPopup", "AutoScrollActionHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboPopup"
	};
	$loadClass(BasicComboPopup$AutoScrollActionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboPopup$AutoScrollActionHandler);
	});
	return class$;
}

$Class* BasicComboPopup$AutoScrollActionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax