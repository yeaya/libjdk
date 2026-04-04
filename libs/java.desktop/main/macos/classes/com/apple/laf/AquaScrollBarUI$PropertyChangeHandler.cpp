#include <com/apple/laf/AquaScrollBarUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaScrollBarUI$ModelListener.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaScrollBarUI$PropertyChangeHandler::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaScrollBarUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ("model"_s->equals(propertyName)) {
		$var($BoundedRangeModel, oldModel, $cast($BoundedRangeModel, e->getOldValue()));
		$var($BoundedRangeModel, newModel, $cast($BoundedRangeModel, e->getNewValue()));
		$nc(oldModel)->removeChangeListener(this->this$0->fModelListener);
		$nc(newModel)->addChangeListener(this->this$0->fModelListener);
		$nc(this->this$0->fScrollBar)->repaint();
		$nc(this->this$0->fScrollBar)->revalidate();
	} else {
		$init($AquaFocusHandler);
		if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(propertyName)) {
			$nc(this->this$0->fScrollBar)->repaint();
		}
	}
}

AquaScrollBarUI$PropertyChangeHandler::AquaScrollBarUI$PropertyChangeHandler() {
}

$Class* AquaScrollBarUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(AquaScrollBarUI$PropertyChangeHandler, init$, void, $AquaScrollBarUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaScrollBarUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaScrollBarUI$PropertyChangeHandler", "com.apple.laf.AquaScrollBarUI", "PropertyChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaScrollBarUI$PropertyChangeHandler",
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
		"com.apple.laf.AquaScrollBarUI"
	};
	$loadClass(AquaScrollBarUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaScrollBarUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* AquaScrollBarUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com