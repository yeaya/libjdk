#include <javax/swing/plaf/metal/MetalTextFieldUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* MetalTextFieldUI::createUI($JComponent* c) {
	$init(MetalTextFieldUI);
	return $new(MetalTextFieldUI);
}

void MetalTextFieldUI::propertyChange($PropertyChangeEvent* evt) {
	$BasicTextFieldUI::propertyChange(evt);
}

MetalTextFieldUI::MetalTextFieldUI() {
}

$Class* MetalTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalTextFieldUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTextFieldUI, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalTextFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalTextFieldUI));
	});
	return class$;
}

$Class* MetalTextFieldUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax