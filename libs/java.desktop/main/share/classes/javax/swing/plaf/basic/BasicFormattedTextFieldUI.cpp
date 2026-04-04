#include <javax/swing/plaf/basic/BasicFormattedTextFieldUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFormattedTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* BasicFormattedTextFieldUI::createUI($JComponent* c) {
	$init(BasicFormattedTextFieldUI);
	return $new(BasicFormattedTextFieldUI);
}

$String* BasicFormattedTextFieldUI::getPropertyPrefix() {
	return "FormattedTextField"_s;
}

BasicFormattedTextFieldUI::BasicFormattedTextFieldUI() {
}

$Class* BasicFormattedTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicFormattedTextFieldUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicFormattedTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BasicFormattedTextFieldUI, getPropertyPrefix, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFormattedTextFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicFormattedTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicFormattedTextFieldUI));
	});
	return class$;
}

$Class* BasicFormattedTextFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax