#include <javax/swing/plaf/basic/BasicColorChooserUI$PropertyHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicColorChooserUI$PropertyHandler::init$($BasicColorChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicColorChooserUI$PropertyHandler::propertyChange($PropertyChangeEvent* e) {
	$$nc(this->this$0->getHandler())->propertyChange(e);
}

BasicColorChooserUI$PropertyHandler::BasicColorChooserUI$PropertyHandler() {
}

$Class* BasicColorChooserUI$PropertyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicColorChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicColorChooserUI$PropertyHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicColorChooserUI;)V", nullptr, $PUBLIC, $method(BasicColorChooserUI$PropertyHandler, init$, void, $BasicColorChooserUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicColorChooserUI$PropertyHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "PropertyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler",
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
		"javax.swing.plaf.basic.BasicColorChooserUI"
	};
	$loadClass(BasicColorChooserUI$PropertyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicColorChooserUI$PropertyHandler);
	});
	return class$;
}

$Class* BasicColorChooserUI$PropertyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax