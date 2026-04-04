#include <javax/swing/plaf/nimbus/InternalFrameWindowFocusedState.h>
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

void InternalFrameWindowFocusedState::init$() {
	$State::init$("WindowFocused"_s);
}

bool InternalFrameWindowFocusedState::isInState($JComponent* c) {
	return $instanceOf($JInternalFrame, c) && $cast($JInternalFrame, c)->isSelected();
}

InternalFrameWindowFocusedState::InternalFrameWindowFocusedState() {
}

$Class* InternalFrameWindowFocusedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternalFrameWindowFocusedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(InternalFrameWindowFocusedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.InternalFrameWindowFocusedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(InternalFrameWindowFocusedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameWindowFocusedState);
	});
	return class$;
}

$Class* InternalFrameWindowFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax