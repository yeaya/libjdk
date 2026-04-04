#include <javax/swing/plaf/basic/BasicInternalFrameUI$InternalFramePropertyChangeListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$InternalFramePropertyChangeListener::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$InternalFramePropertyChangeListener::propertyChange($PropertyChangeEvent* evt) {
	$$nc(this->this$0->getHandler())->propertyChange(evt);
}

BasicInternalFrameUI$InternalFramePropertyChangeListener::BasicInternalFrameUI$InternalFramePropertyChangeListener() {
}

$Class* BasicInternalFrameUI$InternalFramePropertyChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$InternalFramePropertyChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PUBLIC, $method(BasicInternalFrameUI$InternalFramePropertyChangeListener, init$, void, $BasicInternalFrameUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFramePropertyChangeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFramePropertyChangeListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener",
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
		"javax.swing.plaf.basic.BasicInternalFrameUI"
	};
	$loadClass(BasicInternalFrameUI$InternalFramePropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameUI$InternalFramePropertyChangeListener);
	});
	return class$;
}

$Class* BasicInternalFrameUI$InternalFramePropertyChangeListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax