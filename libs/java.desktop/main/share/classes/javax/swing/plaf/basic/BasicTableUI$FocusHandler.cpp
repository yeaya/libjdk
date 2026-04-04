#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTableUI$FocusHandler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTableUI$FocusHandler::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void BasicTableUI$FocusHandler::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

BasicTableUI$FocusHandler::BasicTableUI$FocusHandler() {
}

$Class* BasicTableUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PUBLIC, $method(BasicTableUI$FocusHandler, init$, void, $BasicTableUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTableUI$FocusHandler", "javax.swing.plaf.basic.BasicTableUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTableUI$FocusHandler",
		"java.lang.Object",
		"java.awt.event.FocusListener",
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
	$loadClass(BasicTableUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTableUI$FocusHandler);
	});
	return class$;
}

$Class* BasicTableUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax