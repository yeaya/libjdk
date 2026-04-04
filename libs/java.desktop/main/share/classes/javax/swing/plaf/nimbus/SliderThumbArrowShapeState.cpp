#include <javax/swing/plaf/nimbus/SliderThumbArrowShapeState.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void SliderThumbArrowShapeState::init$() {
	$State::init$("ArrowShape"_s);
}

bool SliderThumbArrowShapeState::isInState($JComponent* c) {
	return $equals($nc(c)->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE);
}

SliderThumbArrowShapeState::SliderThumbArrowShapeState() {
}

$Class* SliderThumbArrowShapeState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SliderThumbArrowShapeState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(SliderThumbArrowShapeState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.SliderThumbArrowShapeState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(SliderThumbArrowShapeState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderThumbArrowShapeState);
	});
	return class$;
}

$Class* SliderThumbArrowShapeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax