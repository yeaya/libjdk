#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonWindowMaximizedState.h>
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

void InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::init$() {
	$State::init$("WindowMaximized"_s);
}

bool InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::isInState($JComponent* c) {
	$var($Component, parent, c);
	while ($nc(parent)->getParent() != nullptr) {
		if ($instanceOf($JInternalFrame, parent)) {
			break;
		}
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($JInternalFrame, parent)) {
		return $cast($JInternalFrame, parent)->isMaximum();
	}
	return false;
}

InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::InternalFrameTitlePaneMaximizeButtonWindowMaximizedState() {
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonWindowMaximizedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameTitlePaneMaximizeButtonWindowMaximizedState);
	});
	return class$;
}

$Class* InternalFrameTitlePaneMaximizeButtonWindowMaximizedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax