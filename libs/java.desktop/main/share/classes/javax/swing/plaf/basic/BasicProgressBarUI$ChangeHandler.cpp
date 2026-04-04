#include <javax/swing/plaf/basic/BasicProgressBarUI$ChangeHandler.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicProgressBarUI$ChangeHandler::init$($BasicProgressBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicProgressBarUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->stateChanged(e);
}

BasicProgressBarUI$ChangeHandler::BasicProgressBarUI$ChangeHandler() {
}

$Class* BasicProgressBarUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicProgressBarUI$ChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicProgressBarUI;)V", nullptr, $PUBLIC, $method(BasicProgressBarUI$ChangeHandler, init$, void, $BasicProgressBarUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicProgressBarUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler", "javax.swing.plaf.basic.BasicProgressBarUI", "ChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicProgressBarUI$ChangeHandler",
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
		"javax.swing.plaf.basic.BasicProgressBarUI"
	};
	$loadClass(BasicProgressBarUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicProgressBarUI$ChangeHandler);
	});
	return class$;
}

$Class* BasicProgressBarUI$ChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax