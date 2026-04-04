#include <javax/swing/plaf/metal/MetalTitlePane$PropertyChangeHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTitlePane$PropertyChangeHandler::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void MetalTitlePane$PropertyChangeHandler::propertyChange($PropertyChangeEvent* pce) {
	$useLocalObjectStack();
	$var($String, name, $nc(pce)->getPropertyName());
	bool var$0 = "resizable"_s->equals(name);
	if (var$0 || "state"_s->equals(name)) {
		$var($Frame, frame, this->this$0->getFrame());
		if (frame != nullptr) {
			this->this$0->setState(frame->getExtendedState(), true);
		}
		if ("resizable"_s->equals(name)) {
			$$nc(this->this$0->getRootPane())->repaint();
		}
	} else if ("title"_s->equals(name)) {
		this->this$0->repaint();
	} else if ("componentOrientation"_s == name) {
		this->this$0->revalidate();
		this->this$0->repaint();
	} else if ("iconImage"_s == name) {
		this->this$0->updateSystemIcon();
		this->this$0->revalidate();
		this->this$0->repaint();
	}
}

MetalTitlePane$PropertyChangeHandler::MetalTitlePane$PropertyChangeHandler() {
}

$Class* MetalTitlePane$PropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$PropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(MetalTitlePane$PropertyChangeHandler, init$, void, $MetalTitlePane*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTitlePane$PropertyChangeHandler", "javax.swing.plaf.metal.MetalTitlePane", "PropertyChangeHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTitlePane$PropertyChangeHandler",
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
		"javax.swing.plaf.metal.MetalTitlePane"
	};
	$loadClass(MetalTitlePane$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalTitlePane$PropertyChangeHandler);
	});
	return class$;
}

$Class* MetalTitlePane$PropertyChangeHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax