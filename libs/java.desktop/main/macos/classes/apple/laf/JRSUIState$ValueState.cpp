#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIConstants$Key.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <jcpp.h>

#undef VALUE

using $JRSUIConstants$Key = ::apple::laf::JRSUIConstants$Key;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIState$ValueState::init$(int64_t encodedState, double value) {
	$JRSUIState::init$(encodedState);
	this->value = (this->derivedValue = value);
}

bool JRSUIState$ValueState::isDerivationSame() {
	return $JRSUIState::isDerivationSame() && (this->value == this->derivedValue);
}

$JRSUIState* JRSUIState$ValueState::createDerivation() {
	return $cast($JRSUIState, $new(JRSUIState$ValueState, this->derivedEncodedState, this->derivedValue));
}

void JRSUIState$ValueState::reset() {
	$JRSUIState::reset();
	this->derivedValue = this->value;
}

void JRSUIState$ValueState::setValue(double value) {
	this->derivedValue = value;
}

void JRSUIState$ValueState::apply($JRSUIControl* control) {
	$JRSUIState::apply(control);
	$init($JRSUIConstants$Key);
	$nc(control)->set($JRSUIConstants$Key::VALUE, this->value);
}

bool JRSUIState$ValueState::equals(Object$* obj) {
	if (!($instanceOf(JRSUIState$ValueState, obj))) {
		return false;
	}
	return this->value == $nc($cast(JRSUIState$ValueState, obj))->value && $JRSUIState::equals(obj);
}

int32_t JRSUIState$ValueState::hashCode() {
	int64_t bits = $Double::doubleToRawLongBits(this->value);
	return ($JRSUIState::hashCode() ^ (int32_t)bits) ^ (int32_t)((int64_t)((uint64_t)bits >> 32));
}

JRSUIState$ValueState::JRSUIState$ValueState() {
}

$Class* JRSUIState$ValueState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "D", nullptr, $FINAL, $field(JRSUIState$ValueState, value)},
		{"derivedValue", "D", nullptr, 0, $field(JRSUIState$ValueState, derivedValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JD)V", nullptr, 0, $method(JRSUIState$ValueState, init$, void, int64_t, double)},
		{"apply", "(Lapple/laf/JRSUIControl;)V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$ValueState, apply, void, $JRSUIControl*)},
		{"createDerivation", "()Lapple/laf/JRSUIState;", "<T:Lapple/laf/JRSUIState;>()TT;", $PUBLIC, $virtualMethod(JRSUIState$ValueState, createDerivation, $JRSUIState*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JRSUIState$ValueState, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JRSUIState$ValueState, hashCode, int32_t)},
		{"isDerivationSame", "()Z", nullptr, 0, $virtualMethod(JRSUIState$ValueState, isDerivationSame, bool)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$ValueState, reset, void)},
		{"setValue", "(D)V", nullptr, $PUBLIC, $virtualMethod(JRSUIState$ValueState, setValue, void, double)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIState$ValueState", "apple.laf.JRSUIState", "ValueState", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIState$ValueState",
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
	$loadClass(JRSUIState$ValueState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIState$ValueState);
	});
	return class$;
}

$Class* JRSUIState$ValueState::class$ = nullptr;

	} // laf
} // apple