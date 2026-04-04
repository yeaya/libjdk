#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMenuButtonWindowNotFocusedState.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void InternalFrameTitlePaneMenuButtonWindowNotFocusedState::init$() {
	$State::init$("WindowNotFocused"_s);
}

bool InternalFrameTitlePaneMenuButtonWindowNotFocusedState::isInState($JComponent* c) {
	$var($Component, parent, c);
	while ($nc(parent)->getParent() != nullptr) {
		if ($instanceOf($JInternalFrame, parent)) {
			break;
		}
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($JInternalFrame, parent)) {
		return !($cast($JInternalFrame, parent)->isSelected());
	}
	return false;
}

InternalFrameTitlePaneMenuButtonWindowNotFocusedState::InternalFrameTitlePaneMenuButtonWindowNotFocusedState() {
}

$Class* InternalFrameTitlePaneMenuButtonWindowNotFocusedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternalFrameTitlePaneMenuButtonWindowNotFocusedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(InternalFrameTitlePaneMenuButtonWindowNotFocusedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonWindowNotFocusedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(InternalFrameTitlePaneMenuButtonWindowNotFocusedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameTitlePaneMenuButtonWindowNotFocusedState);
	});
	return class$;
}

$Class* InternalFrameTitlePaneMenuButtonWindowNotFocusedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax