#include <javax/swing/plaf/basic/BasicListUI$PropertyChangeHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicListUI$PropertyChangeHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$$nc(this->this$0->getHandler())->propertyChange(e);
}

BasicListUI$PropertyChangeHandler::BasicListUI$PropertyChangeHandler() {
}

$Class* BasicListUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(BasicListUI$PropertyChangeHandler, init$, void, $BasicListUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicListUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler",
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
		"javax.swing.plaf.basic.BasicListUI"
	};
	$loadClass(BasicListUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* BasicListUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax