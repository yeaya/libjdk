#include <javax/swing/plaf/nimbus/ProgressBarFinishedState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ProgressBarFinishedState::init$() {
	$State::init$("Finished"_s);
}

bool ProgressBarFinishedState::isInState($JComponent* c) {
	return $instanceOf($JProgressBar, c) && $cast($JProgressBar, c)->getPercentComplete() == 1.0;
}

ProgressBarFinishedState::ProgressBarFinishedState() {
}

$Class* ProgressBarFinishedState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProgressBarFinishedState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(ProgressBarFinishedState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ProgressBarFinishedState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(ProgressBarFinishedState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressBarFinishedState);
	});
	return class$;
}

$Class* ProgressBarFinishedState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax