#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$$nc(this->this$0->getHandler())->propertyChange(e);
}

AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, init$, void, $AquaTabbedPaneCopyFromBasicUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler",
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
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
	};
	$loadClass(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com