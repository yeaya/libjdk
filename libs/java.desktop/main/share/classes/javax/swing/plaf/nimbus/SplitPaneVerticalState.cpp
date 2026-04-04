#include <javax/swing/plaf/nimbus/SplitPaneVerticalState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void SplitPaneVerticalState::init$() {
	$State::init$("Vertical"_s);
}

bool SplitPaneVerticalState::isInState($JComponent* c) {
	return $instanceOf($JSplitPane, c) && ($cast($JSplitPane, c)->getOrientation() == 1);
}

SplitPaneVerticalState::SplitPaneVerticalState() {
}

$Class* SplitPaneVerticalState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SplitPaneVerticalState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(SplitPaneVerticalState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.SplitPaneVerticalState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(SplitPaneVerticalState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SplitPaneVerticalState);
	});
	return class$;
}

$Class* SplitPaneVerticalState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax