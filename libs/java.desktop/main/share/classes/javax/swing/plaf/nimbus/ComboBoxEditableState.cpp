#include <javax/swing/plaf/nimbus/ComboBoxEditableState.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ComboBoxEditableState::init$() {
	$State::init$("Editable"_s);
}

bool ComboBoxEditableState::isInState($JComponent* c) {
	return $instanceOf($JComboBox, c) && $cast($JComboBox, c)->isEditable();
}

ComboBoxEditableState::ComboBoxEditableState() {
}

$Class* ComboBoxEditableState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ComboBoxEditableState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(ComboBoxEditableState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ComboBoxEditableState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(ComboBoxEditableState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComboBoxEditableState);
	});
	return class$;
}

$Class* ComboBoxEditableState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax