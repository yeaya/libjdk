#include <javax/swing/plaf/nimbus/SliderArrowShapeState.h>
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

void SliderArrowShapeState::init$() {
	$State::init$("ArrowShape"_s);
}

bool SliderArrowShapeState::isInState($JComponent* c) {
	return $equals($nc(c)->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE);
}

SliderArrowShapeState::SliderArrowShapeState() {
}

$Class* SliderArrowShapeState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SliderArrowShapeState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(SliderArrowShapeState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.SliderArrowShapeState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(SliderArrowShapeState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderArrowShapeState);
	});
	return class$;
}

$Class* SliderArrowShapeState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax