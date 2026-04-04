#include <apple/laf/JRSUIState$AnimationFrameState.h>
#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef ANIMATION_FRAME

using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIState$AnimationFrameState::init$(int64_t encodedState, int32_t animationFrame) {
	$JRSUIState::init$(encodedState);
	this->animationFrame = (this->derivedAnimationFrame = animationFrame);
}

bool JRSUIState$AnimationFrameState::isDerivationSame() {
	return $JRSUIState::isDerivationSame() && (this->animationFrame == this->derivedAnimationFrame);
}

$JRSUIState* JRSUIState$AnimationFrameState::createDerivation() {
	return $cast($JRSUIState, $new(JRSUIState$AnimationFrameState, this->derivedEncodedState, this->derivedAnimationFrame));
}

void JRSUIState$AnimationFrameState::reset() {
	$JRSUIState::reset();
	this->derivedAnimationFrame = this->animationFrame;
}

void JRSUIState$AnimationFrameState::setAnimationFrame(int32_t frame) {
	this->derivedAnimationFrame = frame;
}

void JRSUIState$AnimationFrameState::apply($JRSUIControl* control) {
	$JRSUIState::apply(control);
	$init($JRSUIConstants$Key);
	$nc(control)->set($JRSUIConstants$Key::ANIMATION_FRAME, (double)this->animationFrame);
}

bool JRSUIState$AnimationFrameState::equals(Object$* obj) {
	if (!($instanceOf(JRSUIState$AnimationFrameState, obj))) {
		return false;
	}
	return this->animationFrame == $nc($cast(JRSUIState$AnimationFrameState, obj))->animationFrame && $JRSUIState::equals(obj);
}

int32_t JRSUIState$AnimationFrameState::hashCode() {
	return $JRSUIState::hashCode() ^ this->animationFrame;
}

JRSUIState$AnimationFrameState::JRSUIState$AnimationFrameState() {
}

$Class* JRSUIState$AnimationFrameState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"animationFrame", "I", nullptr, $FINAL, $field(JRSUIState$AnimationFrameState, animationFrame)},
		{"derivedAnimationFrame", "I", nullptr, 0, $field(JRSUIState$AnimationFrameState, derivedAnimationFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JI)V", nullptr, 0, $method(JRSUIState$AnimationFrameState, init$, void, int64_t, int32_t)},
		{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, apply, void, $JRSUIControl*)},
		{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, createDerivation, $JRSUIState*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, hashCode, int32_t)},
		{"isDerivationSame", "()Z", nullptr, 0, $virtualMethod(JRSUIState$AnimationFrameState, isDerivationSame, bool)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, reset, void)},
		{"setAnimationFrame", "(I)V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$AnimationFrameState, setAnimationFrame, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIState$AnimationFrameState", "apple.laf.JRSUIState", "AnimationFrameState", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIState$AnimationFrameState",
		"apple.laf.JRSUIState",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIState"
	};
	$loadClass(JRSUIState$AnimationFrameState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIState$AnimationFrameState);
	});
	return class$;
}

$Class* JRSUIState$AnimationFrameState::class$ = nullptr;

	} // laf
} // apple