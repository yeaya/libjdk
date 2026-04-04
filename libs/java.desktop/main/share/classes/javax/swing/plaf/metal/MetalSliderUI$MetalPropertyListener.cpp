#include <javax/swing/plaf/metal/MetalSliderUI$MetalPropertyListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/metal/MetalSliderUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler;
using $MetalSliderUI = ::javax::swing::plaf::metal::MetalSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalSliderUI$MetalPropertyListener::init$($MetalSliderUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSliderUI$PropertyChangeHandler::init$(this$0);
}

void MetalSliderUI$MetalPropertyListener::propertyChange($PropertyChangeEvent* e) {
	$BasicSliderUI$PropertyChangeHandler::propertyChange(e);
	if ($$nc($nc(e)->getPropertyName())->equals("JSlider.isFilled"_s)) {
		this->this$0->prepareFilledSliderField();
	}
}

MetalSliderUI$MetalPropertyListener::MetalSliderUI$MetalPropertyListener() {
}

$Class* MetalSliderUI$MetalPropertyListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalSliderUI$MetalPropertyListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalSliderUI;)V", nullptr, $PROTECTED, $method(MetalSliderUI$MetalPropertyListener, init$, void, $MetalSliderUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalSliderUI$MetalPropertyListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener", "javax.swing.plaf.metal.MetalSliderUI", "MetalPropertyListener", $PROTECTED},
		{"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener",
		"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalSliderUI"
	};
	$loadClass(MetalSliderUI$MetalPropertyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalSliderUI$MetalPropertyListener);
	});
	return class$;
}

$Class* MetalSliderUI$MetalPropertyListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax