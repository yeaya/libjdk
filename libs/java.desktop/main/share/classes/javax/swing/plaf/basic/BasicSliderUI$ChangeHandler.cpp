#include <javax/swing/plaf/basic/BasicSliderUI$ChangeHandler.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$ChangeHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->stateChanged(e);
}

BasicSliderUI$ChangeHandler::BasicSliderUI$ChangeHandler() {
}

$Class* BasicSliderUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$ChangeHandler, init$, void, $BasicSliderUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$ChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "ChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$ChangeHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
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
	$loadClass(BasicSliderUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSliderUI$ChangeHandler);
	});
	return class$;
}

$Class* BasicSliderUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax