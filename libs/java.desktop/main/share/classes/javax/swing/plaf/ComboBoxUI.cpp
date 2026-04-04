#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

void ComboBoxUI::init$() {
	$ComponentUI::init$();
}

ComboBoxUI::ComboBoxUI() {
}

$Class* ComboBoxUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ComboBoxUI, init$, void)},
		{"isFocusTraversable", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, isFocusTraversable, bool, $JComboBox*)},
		{"isPopupVisible", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, isPopupVisible, bool, $JComboBox*)},
		{"setPopupVisible", "(Ljavax/swing/JComboBox;Z)V", "(Ljavax/swing/JComboBox<*>;Z)V", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, setPopupVisible, void, $JComboBox*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.ComboBoxUI",
		"javax.swing.plaf.ComponentUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ComboBoxUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComboBoxUI);
	});
	return class$;
}

$Class* ComboBoxUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax