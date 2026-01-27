#include <javax/swing/plaf/basic/BasicTextPaneUI.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BasicTextPaneUI, init$, void)},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicTextPaneUI, createUI, $ComponentUI*, $JComponent*)},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicTextPaneUI, getPropertyPrefix, $String*)},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTextPaneUI, installUI, void, $JComponent*)},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED, $virtualMethod(BasicTextPaneUI, propertyChange, void, $PropertyChangeEvent*)},
	{}
};

$ClassInfo _BasicTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	nullptr,
	nullptr,
	_BasicTextPaneUI_MethodInfo_
};

$Object* allocate$BasicTextPaneUI($Class* clazz) {
	return $of($alloc(BasicTextPaneUI));
}

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
	$loadClass(BasicTextPaneUI, name, initialize, &_BasicTextPaneUI_ClassInfo_, allocate$BasicTextPaneUI);
	return class$;
}

$Class* BasicTextPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax