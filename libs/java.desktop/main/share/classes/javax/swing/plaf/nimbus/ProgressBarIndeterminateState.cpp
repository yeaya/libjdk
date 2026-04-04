#include <javax/swing/plaf/nimbus/ProgressBarIndeterminateState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ProgressBarIndeterminateState::init$() {
	$State::init$("Indeterminate"_s);
}

bool ProgressBarIndeterminateState::isInState($JComponent* c) {
	return $instanceOf($JProgressBar, c) && $cast($JProgressBar, c)->isIndeterminate();
}

ProgressBarIndeterminateState::ProgressBarIndeterminateState() {
}

$Class* ProgressBarIndeterminateState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProgressBarIndeterminateState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(ProgressBarIndeterminateState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ProgressBarIndeterminateState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(ProgressBarIndeterminateState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressBarIndeterminateState);
	});
	return class$;
}

$Class* ProgressBarIndeterminateState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax