#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane$MetalPropertyChangeHandler.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane.h>
#include <jcpp.h>

#undef IS_SELECTED_PROPERTY

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;
using $MetalInternalFrameTitlePane = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalInternalFrameTitlePane$MetalPropertyChangeHandler::init$($MetalInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$0);
}

void MetalInternalFrameTitlePane$MetalPropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JInternalFrame);
	if ($nc(prop)->equals($JInternalFrame::IS_SELECTED_PROPERTY)) {
		$var($Boolean, b, $cast($Boolean, evt->getNewValue()));
		$$nc($MetalInternalFrameTitlePane::access$000(this->this$0))->putClientProperty("paintActive"_s, b);
		$$nc($MetalInternalFrameTitlePane::access$100(this->this$0))->putClientProperty("paintActive"_s, b);
		$$nc($MetalInternalFrameTitlePane::access$200(this->this$0))->putClientProperty("paintActive"_s, b);
	} else if ("JInternalFrame.messageType"_s->equals(prop)) {
		this->this$0->updateOptionPaneState();
		$$nc($MetalInternalFrameTitlePane::access$300(this->this$0))->repaint();
	}
	$BasicInternalFrameTitlePane$PropertyChangeHandler::propertyChange(evt);
}

MetalInternalFrameTitlePane$MetalPropertyChangeHandler::MetalInternalFrameTitlePane$MetalPropertyChangeHandler() {
}

$Class* MetalInternalFrameTitlePane$MetalPropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)V", nullptr, 0, $method(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, init$, void, $MetalInternalFrameTitlePane*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler", "javax.swing.plaf.metal.MetalInternalFrameTitlePane", "MetalPropertyChangeHandler", 0},
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler",
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalInternalFrameTitlePane"
	};
	$loadClass(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalInternalFrameTitlePane$MetalPropertyChangeHandler);
	});
	return class$;
}

$Class* MetalInternalFrameTitlePane$MetalPropertyChangeHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax