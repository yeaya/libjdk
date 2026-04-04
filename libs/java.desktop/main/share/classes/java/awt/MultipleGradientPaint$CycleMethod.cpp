#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NO_CYCLE
#undef REFLECT
#undef REPEAT

using $MultipleGradientPaint$CycleMethodArray = $Array<::java::awt::MultipleGradientPaint$CycleMethod>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::NO_CYCLE = nullptr;
MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::REFLECT = nullptr;
MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::REPEAT = nullptr;
$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::$VALUES = nullptr;

$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::$values() {
	$init(MultipleGradientPaint$CycleMethod);
	return $new($MultipleGradientPaint$CycleMethodArray, {
		MultipleGradientPaint$CycleMethod::NO_CYCLE,
		MultipleGradientPaint$CycleMethod::REFLECT,
		MultipleGradientPaint$CycleMethod::REPEAT
	});
}

$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::values() {
	$init(MultipleGradientPaint$CycleMethod);
	return $cast($MultipleGradientPaint$CycleMethodArray, MultipleGradientPaint$CycleMethod::$VALUES->clone());
}

MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::valueOf($String* name) {
	$init(MultipleGradientPaint$CycleMethod);
	return $cast(MultipleGradientPaint$CycleMethod, $Enum::valueOf(MultipleGradientPaint$CycleMethod::class$, name));
}

void MultipleGradientPaint$CycleMethod::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MultipleGradientPaint$CycleMethod::clinit$($Class* clazz) {
	$assignStatic(MultipleGradientPaint$CycleMethod::NO_CYCLE, $new(MultipleGradientPaint$CycleMethod, "NO_CYCLE"_s, 0));
	$assignStatic(MultipleGradientPaint$CycleMethod::REFLECT, $new(MultipleGradientPaint$CycleMethod, "REFLECT"_s, 1));
	$assignStatic(MultipleGradientPaint$CycleMethod::REPEAT, $new(MultipleGradientPaint$CycleMethod, "REPEAT"_s, 2));
	$assignStatic(MultipleGradientPaint$CycleMethod::$VALUES, MultipleGradientPaint$CycleMethod::$values());
}

MultipleGradientPaint$CycleMethod::MultipleGradientPaint$CycleMethod() {
}

$Class* MultipleGradientPaint$CycleMethod::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_CYCLE", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, NO_CYCLE)},
		{"REFLECT", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, REFLECT)},
		{"REPEAT", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, REPEAT)},
		{"$VALUES", "[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultipleGradientPaint$CycleMethod, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultipleGradientPaint$CycleMethod, $values, $MultipleGradientPaint$CycleMethodArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MultipleGradientPaint$CycleMethod, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleGradientPaint$CycleMethod, valueOf, MultipleGradientPaint$CycleMethod*, $String*)},
		{"values", "()[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleGradientPaint$CycleMethod, values, $MultipleGradientPaint$CycleMethodArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MultipleGradientPaint$CycleMethod", "java.awt.MultipleGradientPaint", "CycleMethod", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.awt.MultipleGradientPaint$CycleMethod",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/awt/MultipleGradientPaint$CycleMethod;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.MultipleGradientPaint"
	};
	$loadClass(MultipleGradientPaint$CycleMethod, name, initialize, &classInfo$$, MultipleGradientPaint$CycleMethod::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultipleGradientPaint$CycleMethod));
	});
	return class$;
}

$Class* MultipleGradientPaint$CycleMethod::class$ = nullptr;

	} // awt
} // java