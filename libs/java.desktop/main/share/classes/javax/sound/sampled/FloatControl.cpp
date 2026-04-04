#include <javax/sound/sampled/FloatControl.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace javax {
	namespace sound {
		namespace sampled {

void FloatControl::init$($FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units, $String* minLabel, $String* midLabel, $String* maxLabel) {
	$useLocalObjectStack();
	$Control::init$(type);
	if (minimum > maximum) {
		$throwNew($IllegalArgumentException, $$str({"Minimum value "_s, $$str(minimum), " exceeds maximum value "_s, $$str(maximum), "."_s}));
	}
	if (initialValue < minimum) {
		$throwNew($IllegalArgumentException, $$str({"Initial value "_s, $$str(initialValue), " smaller than allowable minimum value "_s, $$str(minimum), "."_s}));
	}
	if (initialValue > maximum) {
		$throwNew($IllegalArgumentException, $$str({"Initial value "_s, $$str(initialValue), " exceeds allowable maximum value "_s, $$str(maximum), "."_s}));
	}
	this->minimum = minimum;
	this->maximum = maximum;
	this->precision = precision;
	this->updatePeriod = updatePeriod;
	this->value = initialValue;
	$set(this, units, units);
	$set(this, minLabel, (minLabel == nullptr) ? ""_s : minLabel);
	$set(this, midLabel, (midLabel == nullptr) ? ""_s : midLabel);
	$set(this, maxLabel, (maxLabel == nullptr) ? ""_s : maxLabel);
}

void FloatControl::init$($FloatControl$Type* type, float minimum, float maximum, float precision, int32_t updatePeriod, float initialValue, $String* units) {
	FloatControl::init$(type, minimum, maximum, precision, updatePeriod, initialValue, units, ""_s, ""_s, ""_s);
}

void FloatControl::setValue(float newValue) {
	$useLocalObjectStack();
	if (newValue > this->maximum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(newValue), " exceeds allowable maximum value "_s, $$str(this->maximum), "."_s}));
	}
	if (newValue < this->minimum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(newValue), " smaller than allowable minimum value "_s, $$str(this->minimum), "."_s}));
	}
	this->value = newValue;
}

float FloatControl::getValue() {
	return this->value;
}

float FloatControl::getMaximum() {
	return this->maximum;
}

float FloatControl::getMinimum() {
	return this->minimum;
}

$String* FloatControl::getUnits() {
	return this->units;
}

$String* FloatControl::getMinLabel() {
	return this->minLabel;
}

$String* FloatControl::getMidLabel() {
	return this->midLabel;
}

$String* FloatControl::getMaxLabel() {
	return this->maxLabel;
}

float FloatControl::getPrecision() {
	return this->precision;
}

int32_t FloatControl::getUpdatePeriod() {
	return this->updatePeriod;
}

void FloatControl::shift(float from, float to, int32_t microseconds) {
	$useLocalObjectStack();
	if (from < this->minimum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(from), " smaller than allowable minimum value "_s, $$str(this->minimum), "."_s}));
	}
	if (from > this->maximum) {
		$throwNew($IllegalArgumentException, $$str({"Requested value "_s, $$str(from), " exceeds allowable maximum value "_s, $$str(this->maximum), "."_s}));
	}
	setValue(to);
}

$String* FloatControl::toString() {
	$useLocalObjectStack();
	return $String::format("%s with current value: %s %s (range: %s - %s)"_s, $$new($ObjectArray, {
		$($Control::toString()),
		$($Float::valueOf(getValue())),
		$(getUnits()),
		$($Float::valueOf(getMinimum())),
		$($Float::valueOf(getMaximum()))
	}));
}

FloatControl::FloatControl() {
}

$Class* FloatControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"minimum", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, minimum)},
		{"maximum", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, maximum)},
		{"precision", "F", nullptr, $PRIVATE | $FINAL, $field(FloatControl, precision)},
		{"updatePeriod", "I", nullptr, $PRIVATE | $FINAL, $field(FloatControl, updatePeriod)},
		{"units", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, units)},
		{"minLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, minLabel)},
		{"maxLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, maxLabel)},
		{"midLabel", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FloatControl, midLabel)},
		{"value", "F", nullptr, $PRIVATE, $field(FloatControl, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/FloatControl$Type;FFFIFLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(FloatControl, init$, void, $FloatControl$Type*, float, float, float, int32_t, float, $String*, $String*, $String*, $String*)},
		{"<init>", "(Ljavax/sound/sampled/FloatControl$Type;FFFIFLjava/lang/String;)V", nullptr, $PROTECTED, $method(FloatControl, init$, void, $FloatControl$Type*, float, float, float, int32_t, float, $String*)},
		{"getMaxLabel", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatControl, getMaxLabel, $String*)},
		{"getMaximum", "()F", nullptr, $PUBLIC, $virtualMethod(FloatControl, getMaximum, float)},
		{"getMidLabel", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatControl, getMidLabel, $String*)},
		{"getMinLabel", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatControl, getMinLabel, $String*)},
		{"getMinimum", "()F", nullptr, $PUBLIC, $virtualMethod(FloatControl, getMinimum, float)},
		{"getPrecision", "()F", nullptr, $PUBLIC, $virtualMethod(FloatControl, getPrecision, float)},
		{"getUnits", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatControl, getUnits, $String*)},
		{"getUpdatePeriod", "()I", nullptr, $PUBLIC, $virtualMethod(FloatControl, getUpdatePeriod, int32_t)},
		{"getValue", "()F", nullptr, $PUBLIC, $virtualMethod(FloatControl, getValue, float)},
		{"setValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(FloatControl, setValue, void, float)},
		{"shift", "(FFI)V", nullptr, $PUBLIC, $virtualMethod(FloatControl, shift, void, float, float, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FloatControl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.FloatControl",
		"javax.sound.sampled.Control",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.FloatControl$Type"
	};
	$loadClass(FloatControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FloatControl);
	});
	return class$;
}

$Class* FloatControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax