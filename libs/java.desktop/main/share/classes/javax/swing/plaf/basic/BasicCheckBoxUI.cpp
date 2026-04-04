#include <javax/swing/plaf/basic/BasicCheckBoxUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BASIC_CHECK_BOX_UI_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$Object* BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY = nullptr;
$String* BasicCheckBoxUI::propertyPrefix = nullptr;

void BasicCheckBoxUI::init$() {
	$BasicRadioButtonUI::init$();
}

$ComponentUI* BasicCheckBoxUI::createUI($JComponent* b) {
	$init(BasicCheckBoxUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicCheckBoxUI, checkboxUI, $cast(BasicCheckBoxUI, $nc(appContext)->get(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY)));
	if (checkboxUI == nullptr) {
		$assign(checkboxUI, $new(BasicCheckBoxUI));
		appContext->put(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY, checkboxUI);
	}
	return checkboxUI;
}

$String* BasicCheckBoxUI::getPropertyPrefix() {
	return BasicCheckBoxUI::propertyPrefix;
}

void BasicCheckBoxUI::clinit$($Class* clazz) {
	$assignStatic(BasicCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY, $new($Object));
}

BasicCheckBoxUI::BasicCheckBoxUI() {
}

$Class* BasicCheckBoxUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASIC_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicCheckBoxUI, BASIC_CHECK_BOX_UI_KEY)},
		{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicCheckBoxUI, propertyPrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicCheckBoxUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicCheckBoxUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicCheckBoxUI, getPropertyPrefix, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicCheckBoxUI",
		"javax.swing.plaf.basic.BasicRadioButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicCheckBoxUI, name, initialize, &classInfo$$, BasicCheckBoxUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicCheckBoxUI);
	});
	return class$;
}

$Class* BasicCheckBoxUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax