#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneWindowFocusedState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void InternalFrameTitlePaneWindowFocusedState::init$() {
	$State::init$("WindowFocused"_s);
}

bool InternalFrameTitlePaneWindowFocusedState::isInState($JComponent* c) {
	return $instanceOf($JInternalFrame, c) && $cast($JInternalFrame, c)->isSelected();
}

InternalFrameTitlePaneWindowFocusedState::InternalFrameTitlePaneWindowFocusedState() {
}

$Class* InternalFrameTitlePaneWindowFocusedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternalFrameTitlePaneWindowFocusedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(InternalFrameTitlePaneWindowFocusedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.InternalFrameTitlePaneWindowFocusedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(InternalFrameTitlePaneWindowFocusedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameTitlePaneWindowFocusedState);
	});
	return class$;
}

$Class* InternalFrameTitlePaneWindowFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax