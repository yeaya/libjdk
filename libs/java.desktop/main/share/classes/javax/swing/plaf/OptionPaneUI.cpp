#include <javax/swing/plaf/OptionPaneUI.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void OptionPaneUI::init$() {
	$ComponentUI::init$();
}

OptionPaneUI::OptionPaneUI() {
}

$Class* OptionPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(OptionPaneUI, init$, void)},
		{"containsCustomComponents", "(Ljavax/swing/JOptionPane;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionPaneUI, containsCustomComponents, bool, $JOptionPane*)},
		{"selectInitialValue", "(Ljavax/swing/JOptionPane;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionPaneUI, selectInitialValue, void, $JOptionPane*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.OptionPaneUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OptionPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OptionPaneUI);
	});
	return class$;
}

$Class* OptionPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax