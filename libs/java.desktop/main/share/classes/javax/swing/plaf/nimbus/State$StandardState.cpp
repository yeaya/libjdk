#include <javax/swing/plaf/nimbus/State$StandardState.h>
#include <java/lang/AssertionError.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void State$StandardState::init$(int32_t state) {
	$useLocalObjectStack();
	$State::init$($(toString(state)));
	this->state = state;
	$init($State);
	$nc($State::standardStates)->put($(getName()), this);
}

int32_t State$StandardState::getState() {
	return this->state;
}

bool State$StandardState::isInState($JComponent* c, int32_t s) {
	return (s & this->state) == this->state;
}

bool State$StandardState::isInState($JComponent* c) {
	$throwNew($AssertionError, $of("This method should never be called"_s));
	$shouldNotReachHere();
}

$String* State$StandardState::toString(int32_t state) {
	$init(State$StandardState);
	$var($StringBuilder, sb, $new($StringBuilder));
	if ((state & $SynthConstants::DEFAULT) == $SynthConstants::DEFAULT) {
		sb->append("Default"_s);
	}
	if ((state & $SynthConstants::DISABLED) == $SynthConstants::DISABLED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Disabled"_s);
	}
	if ((state & $SynthConstants::ENABLED) == $SynthConstants::ENABLED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Enabled"_s);
	}
	if ((state & $SynthConstants::FOCUSED) == $SynthConstants::FOCUSED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Focused"_s);
	}
	if ((state & $SynthConstants::MOUSE_OVER) == $SynthConstants::MOUSE_OVER) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("MouseOver"_s);
	}
	if ((state & $SynthConstants::PRESSED) == $SynthConstants::PRESSED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Pressed"_s);
	}
	if ((state & $SynthConstants::SELECTED) == $SynthConstants::SELECTED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Selected"_s);
	}
	return sb->toString();
}

State$StandardState::State$StandardState() {
}

$Class* State$StandardState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"state", "I", nullptr, $PRIVATE, $field(State$StandardState, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(State$StandardState, init$, void, int32_t)},
		{"getState", "()I", nullptr, $PUBLIC, $method(State$StandardState, getState, int32_t)},
		{"isInState", "(Ljavax/swing/JComponent;I)Z", nullptr, 0, $virtualMethod(State$StandardState, isInState, bool, $JComponent*, int32_t)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(State$StandardState, isInState, bool, $JComponent*)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(State$StandardState, toString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.State$StandardState", "javax.swing.plaf.nimbus.State", "StandardState", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.nimbus.State$StandardState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.State"
	};
	$loadClass(State$StandardState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(State$StandardState);
	});
	return class$;
}

$Class* State$StandardState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax