#include <javax/swing/plaf/nimbus/SplitPaneDividerVerticalState.h>
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

void SplitPaneDividerVerticalState::init$() {
	$State::init$("Vertical"_s);
}

bool SplitPaneDividerVerticalState::isInState($JComponent* c) {
	return $instanceOf($JSplitPane, c) && ($cast($JSplitPane, c)->getOrientation() == 1);
}

SplitPaneDividerVerticalState::SplitPaneDividerVerticalState() {
}

$Class* SplitPaneDividerVerticalState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SplitPaneDividerVerticalState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(SplitPaneDividerVerticalState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.SplitPaneDividerVerticalState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(SplitPaneDividerVerticalState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SplitPaneDividerVerticalState);
	});
	return class$;
}

$Class* SplitPaneDividerVerticalState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax