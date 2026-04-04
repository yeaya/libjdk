#include <javax/swing/plaf/basic/BasicToolBarUI$PropertyListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$PropertyListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicToolBarUI$PropertyListener::propertyChange($PropertyChangeEvent* e) {
	$$nc(this->this$0->getHandler())->propertyChange(e);
}

BasicToolBarUI$PropertyListener::BasicToolBarUI$PropertyListener() {
}

$Class* BasicToolBarUI$PropertyListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$PropertyListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(BasicToolBarUI$PropertyListener, init$, void, $BasicToolBarUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$PropertyListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener", "javax.swing.plaf.basic.BasicToolBarUI", "PropertyListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener",
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
		"javax.swing.plaf.basic.BasicToolBarUI"
	};
	$loadClass(BasicToolBarUI$PropertyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolBarUI$PropertyListener);
	});
	return class$;
}

$Class* BasicToolBarUI$PropertyListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax