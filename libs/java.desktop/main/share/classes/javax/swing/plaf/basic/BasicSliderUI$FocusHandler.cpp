#include <javax/swing/plaf/basic/BasicSliderUI$FocusHandler.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$FocusHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$FocusHandler::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void BasicSliderUI$FocusHandler::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

BasicSliderUI$FocusHandler::BasicSliderUI$FocusHandler() {
}

$Class* BasicSliderUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$FocusHandler, init$, void, $BasicSliderUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$FocusHandler", "javax.swing.plaf.basic.BasicSliderUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$FocusHandler",
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
		"javax.swing.plaf.basic.BasicSliderUI"
	};
	$loadClass(BasicSliderUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSliderUI$FocusHandler);
	});
	return class$;
}

$Class* BasicSliderUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax