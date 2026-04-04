#include <javax/sound/sampled/ReverbType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

void ReverbType::init$($String* name, int32_t earlyReflectionDelay, float earlyReflectionIntensity, int32_t lateReflectionDelay, float lateReflectionIntensity, int32_t decayTime) {
	$set(this, name, name);
	this->earlyReflectionDelay = earlyReflectionDelay;
	this->earlyReflectionIntensity = earlyReflectionIntensity;
	this->lateReflectionDelay = lateReflectionDelay;
	this->lateReflectionIntensity = lateReflectionIntensity;
	this->decayTime = decayTime;
}

$String* ReverbType::getName() {
	return this->name;
}

int32_t ReverbType::getEarlyReflectionDelay() {
	return this->earlyReflectionDelay;
}

float ReverbType::getEarlyReflectionIntensity() {
	return this->earlyReflectionIntensity;
}

int32_t ReverbType::getLateReflectionDelay() {
	return this->lateReflectionDelay;
}

float ReverbType::getLateReflectionIntensity() {
	return this->lateReflectionIntensity;
}

int32_t ReverbType::getDecayTime() {
	return this->decayTime;
}

bool ReverbType::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t ReverbType::hashCode() {
	return $Object::hashCode();
}

$String* ReverbType::toString() {
	$useLocalObjectStack();
	return $String::format("%s, early reflection delay %d ns, early reflection intensity %s dB, late deflection delay %d ns, late reflection intensity %s dB, decay time %d"_s, $$new($ObjectArray, {
		$(getName()),
		$($Integer::valueOf(this->earlyReflectionDelay)),
		$($Float::valueOf(this->earlyReflectionIntensity)),
		$($Integer::valueOf(this->lateReflectionDelay)),
		$($Float::valueOf(this->lateReflectionIntensity)),
		$($Integer::valueOf(this->decayTime))
	}));
}

ReverbType::ReverbType() {
}

$Class* ReverbType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ReverbType, name)},
		{"earlyReflectionDelay", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, earlyReflectionDelay)},
		{"earlyReflectionIntensity", "F", nullptr, $PRIVATE | $FINAL, $field(ReverbType, earlyReflectionIntensity)},
		{"lateReflectionDelay", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, lateReflectionDelay)},
		{"lateReflectionIntensity", "F", nullptr, $PRIVATE | $FINAL, $field(ReverbType, lateReflectionIntensity)},
		{"decayTime", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, decayTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IFIFI)V", nullptr, $PROTECTED, $method(ReverbType, init$, void, $String*, int32_t, float, int32_t, float, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ReverbType, equals, bool, Object$*)},
		{"getDecayTime", "()I", nullptr, $PUBLIC | $FINAL, $method(ReverbType, getDecayTime, int32_t)},
		{"getEarlyReflectionDelay", "()I", nullptr, $PUBLIC | $FINAL, $method(ReverbType, getEarlyReflectionDelay, int32_t)},
		{"getEarlyReflectionIntensity", "()F", nullptr, $PUBLIC | $FINAL, $method(ReverbType, getEarlyReflectionIntensity, float)},
		{"getLateReflectionDelay", "()I", nullptr, $PUBLIC | $FINAL, $method(ReverbType, getLateReflectionDelay, int32_t)},
		{"getLateReflectionIntensity", "()F", nullptr, $PUBLIC | $FINAL, $method(ReverbType, getLateReflectionIntensity, float)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReverbType, getName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(ReverbType, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ReverbType, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.ReverbType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReverbType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReverbType);
	});
	return class$;
}

$Class* ReverbType::class$ = nullptr;

		} // sampled
	} // sound
} // javax