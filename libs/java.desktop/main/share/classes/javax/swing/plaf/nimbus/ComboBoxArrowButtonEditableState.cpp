#include <javax/swing/plaf/nimbus/ComboBoxArrowButtonEditableState.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ComboBoxArrowButtonEditableState::init$() {
	$State::init$("Editable"_s);
}

bool ComboBoxArrowButtonEditableState::isInState($JComponent* c) {
	$var($Component, parent, $nc(c)->getParent());
	return $instanceOf($JComboBox, parent) && $cast($JComboBox, parent)->isEditable();
}

ComboBoxArrowButtonEditableState::ComboBoxArrowButtonEditableState() {
}

$Class* ComboBoxArrowButtonEditableState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ComboBoxArrowButtonEditableState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(ComboBoxArrowButtonEditableState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ComboBoxArrowButtonEditableState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(ComboBoxArrowButtonEditableState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComboBoxArrowButtonEditableState);
	});
	return class$;
}

$Class* ComboBoxArrowButtonEditableState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax