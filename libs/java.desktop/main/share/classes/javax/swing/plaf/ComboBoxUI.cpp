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

$MethodInfo _ComboBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ComboBoxUI, init$, void)},
	{"isFocusTraversable", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, isFocusTraversable, bool, $JComboBox*)},
	{"isPopupVisible", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, isPopupVisible, bool, $JComboBox*)},
	{"setPopupVisible", "(Ljavax/swing/JComboBox;Z)V", "(Ljavax/swing/JComboBox<*>;Z)V", $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxUI, setPopupVisible, void, $JComboBox*, bool)},
	{}
};

$ClassInfo _ComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ComboBoxUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ComboBoxUI_MethodInfo_
};

$Object* allocate$ComboBoxUI($Class* clazz) {
	return $of($alloc(ComboBoxUI));
}

void ComboBoxUI::init$() {
	$ComponentUI::init$();
}

ComboBoxUI::ComboBoxUI() {
}

$Class* ComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(ComboBoxUI, name, initialize, &_ComboBoxUI_ClassInfo_, allocate$ComboBoxUI);
	return class$;
}

$Class* ComboBoxUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax