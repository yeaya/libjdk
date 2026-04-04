#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$ComponentUI* BasicTextPaneUI::createUI($JComponent* c) {
	$init(BasicTextPaneUI);
	return $new(BasicTextPaneUI);
}

void BasicTextPaneUI::init$() {
	$BasicEditorPaneUI::init$();
}

$String* BasicTextPaneUI::getPropertyPrefix() {
	return "TextPane"_s;
}

void BasicTextPaneUI::installUI($JComponent* c) {
	$BasicEditorPaneUI::installUI(c);
}

void BasicTextPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$BasicEditorPaneUI::propertyChange(evt);
}

BasicTextPaneUI::BasicTextPaneUI() {
}

$Class* BasicTextPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicTextPaneUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicTextPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicTextPaneUI, getPropertyPrefix, $String*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTextPaneUI, installUI, void, $JComponent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(BasicTextPaneUI, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextPaneUI",
		"javax.swing.plaf.basic.BasicEditorPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicTextPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextPaneUI));
	});
	return class$;
}

$Class* BasicTextPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax