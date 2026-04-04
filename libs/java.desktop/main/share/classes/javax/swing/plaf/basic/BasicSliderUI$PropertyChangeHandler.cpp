#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$PropertyChangeHandler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$$nc(this->this$0->getHandler())->propertyChange(e);
}

BasicSliderUI$PropertyChangeHandler::BasicSliderUI$PropertyChangeHandler() {
}

$Class* BasicSliderUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$PropertyChangeHandler, init$, void, $BasicSliderUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(BasicSliderUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSliderUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* BasicSliderUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax