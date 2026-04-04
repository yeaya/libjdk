#include <sun/java2d/marlin/FloatMath.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef CHECK_NAN
#undef CHECK_OVERFLOW
#undef FLOAT_EXP_BIAS
#undef FLOAT_EXP_BIT_MASK
#undef FLOAT_SIGNIFICAND_WIDTH
#undef FLOAT_SIGNIF_BIT_MASK
#undef MAX_VALUE
#undef MIN_VALUE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

bool FloatMath::$assertionsDisabled = false;

void FloatMath::init$() {
}

int32_t FloatMath::max(int32_t a, int32_t b) {
	$init(FloatMath);
	return (a >= b) ? a : b;
}

int32_t FloatMath::min(int32_t a, int32_t b) {
	$init(FloatMath);
	return (a <= b) ? a : b;
}

float FloatMath::ceil_f(float a) {
	$init(FloatMath);
	int32_t doppel = $Float::floatToRawIntBits(a);
	int32_t exponent = ($sr(doppel & FloatMath::FLOAT_EXP_BIT_MASK, FloatMath::FLOAT_SIGNIFICAND_WIDTH - 1)) - FloatMath::FLOAT_EXP_BIAS;
	if (exponent < 0) {
		return ((a == 0.0f) ? a : ((a < 0.0f) ? -0.0f : 1.0f));
	}
	if (exponent >= 23) {
		return a;
	}
	if (!FloatMath::$assertionsDisabled && !(exponent >= 0 && exponent <= 22)) {
		$throwNew($AssertionError);
	}
	int32_t intpart = doppel & (~($sr(FloatMath::FLOAT_SIGNIF_BIT_MASK, exponent)));
	if (intpart == doppel) {
		return a;
	}
	return $Float::intBitsToFloat(intpart) + ((int32_t)((uint32_t)(~intpart) >> 31));
}

float FloatMath::floor_f(float a) {
	$init(FloatMath);
	int32_t doppel = $Float::floatToRawIntBits(a);
	int32_t exponent = ($sr(doppel & FloatMath::FLOAT_EXP_BIT_MASK, FloatMath::FLOAT_SIGNIFICAND_WIDTH - 1)) - FloatMath::FLOAT_EXP_BIAS;
	if (exponent < 0) {
		return ((a == 0.0f) ? a : ((a < 0.0f) ? -1.0f : 0.0f));
	}
	if (exponent >= 23) {
		return a;
	}
	if (!FloatMath::$assertionsDisabled && !(exponent >= 0 && exponent <= 22)) {
		$throwNew($AssertionError);
	}
	int32_t intpart = doppel & (~($sr(FloatMath::FLOAT_SIGNIF_BIT_MASK, exponent)));
	if (intpart == doppel) {
		return a;
	}
	return $Float::intBitsToFloat(intpart) + (intpart >> 31);
}

int32_t FloatMath::ceil_int(float a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a <= intpart || intpart == $Integer::MAX_VALUE || $Float::isNaN(a)) {
		return intpart;
	}
	return intpart + 1;
}

int32_t FloatMath::ceil_int(double a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a <= intpart || intpart == $Integer::MAX_VALUE || $Double::isNaN(a)) {
		return intpart;
	}
	return intpart + 1;
}

int32_t FloatMath::floor_int(float a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a >= intpart || intpart == $Integer::MIN_VALUE || $Float::isNaN(a)) {
		return intpart;
	}
	return intpart - 1;
}

int32_t FloatMath::floor_int(double a) {
	$init(FloatMath);
	int32_t intpart = $cast(int32_t, a);
	if (a >= intpart || intpart == $Integer::MIN_VALUE || $Double::isNaN(a)) {
		return intpart;
	}
	return intpart - 1;
}

void FloatMath::clinit$($Class* clazz) {
	FloatMath::$assertionsDisabled = !FloatMath::class$->desiredAssertionStatus();
}

FloatMath::FloatMath() {
}

$Class* FloatMath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatMath, $assertionsDisabled)},
		{"CHECK_OVERFLOW", "Z", nullptr, $STATIC | $FINAL, $constField(FloatMath, CHECK_OVERFLOW)},
		{"CHECK_NAN", "Z", nullptr, $STATIC | $FINAL, $constField(FloatMath, CHECK_NAN)},
		{"FLOAT_SIGNIFICAND_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_SIGNIFICAND_WIDTH)},
		{"FLOAT_EXP_BIAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_EXP_BIAS)},
		{"FLOAT_EXP_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_EXP_BIT_MASK)},
		{"FLOAT_SIGNIF_BIT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FloatMath, FLOAT_SIGNIF_BIT_MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FloatMath, init$, void)},
		{"ceil_f", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, ceil_f, float, float)},
		{"ceil_int", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, ceil_int, int32_t, float)},
		{"ceil_int", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, ceil_int, int32_t, double)},
		{"floor_f", "(F)F", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, floor_f, float, float)},
		{"floor_int", "(F)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, floor_int, int32_t, float)},
		{"floor_int", "(D)I", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatMath, floor_int, int32_t, double)},
		{"max", "(II)I", nullptr, $STATIC, $staticMethod(FloatMath, max, int32_t, int32_t, int32_t)},
		{"min", "(II)I", nullptr, $STATIC, $staticMethod(FloatMath, min, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.marlin.FloatMath",
		"java.lang.Object",
		"sun.java2d.marlin.MarlinConst",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FloatMath, name, initialize, &classInfo$$, FloatMath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FloatMath);
	});
	return class$;
}

$Class* FloatMath::class$ = nullptr;

		} // marlin
	} // java2d
} // sun