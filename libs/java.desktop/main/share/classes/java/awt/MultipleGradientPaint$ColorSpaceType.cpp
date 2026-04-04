#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef SRGB

using $MultipleGradientPaint$ColorSpaceTypeArray = $Array<::java::awt::MultipleGradientPaint$ColorSpaceType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::SRGB = nullptr;
MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::LINEAR_RGB = nullptr;
$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::$VALUES = nullptr;

$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::$values() {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $new($MultipleGradientPaint$ColorSpaceTypeArray, {
		MultipleGradientPaint$ColorSpaceType::SRGB,
		MultipleGradientPaint$ColorSpaceType::LINEAR_RGB
	});
}

$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::values() {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $cast($MultipleGradientPaint$ColorSpaceTypeArray, MultipleGradientPaint$ColorSpaceType::$VALUES->clone());
}

MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::valueOf($String* name) {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $cast(MultipleGradientPaint$ColorSpaceType, $Enum::valueOf(MultipleGradientPaint$ColorSpaceType::class$, name));
}

void MultipleGradientPaint$ColorSpaceType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MultipleGradientPaint$ColorSpaceType::clinit$($Class* clazz) {
	$assignStatic(MultipleGradientPaint$ColorSpaceType::SRGB, $new(MultipleGradientPaint$ColorSpaceType, "SRGB"_s, 0));
	$assignStatic(MultipleGradientPaint$ColorSpaceType::LINEAR_RGB, $new(MultipleGradientPaint$ColorSpaceType, "LINEAR_RGB"_s, 1));
	$assignStatic(MultipleGradientPaint$ColorSpaceType::$VALUES, MultipleGradientPaint$ColorSpaceType::$values());
}

MultipleGradientPaint$ColorSpaceType::MultipleGradientPaint$ColorSpaceType() {
}

$Class* MultipleGradientPaint$ColorSpaceType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SRGB", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$ColorSpaceType, SRGB)},
		{"LINEAR_RGB", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$ColorSpaceType, LINEAR_RGB)},
		{"$VALUES", "[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultipleGradientPaint$ColorSpaceType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultipleGradientPaint$ColorSpaceType, $values, $MultipleGradientPaint$ColorSpaceTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MultipleGradientPaint$ColorSpaceType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleGradientPaint$ColorSpaceType, valueOf, MultipleGradientPaint$ColorSpaceType*, $String*)},
		{"values", "()[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC, $staticMethod(MultipleGradientPaint$ColorSpaceType, values, $MultipleGradientPaint$ColorSpaceTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MultipleGradientPaint$ColorSpaceType", "java.awt.MultipleGradientPaint", "ColorSpaceType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.awt.MultipleGradientPaint$ColorSpaceType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/awt/MultipleGradientPaint$ColorSpaceType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.MultipleGradientPaint"
	};
	$loadClass(MultipleGradientPaint$ColorSpaceType, name, initialize, &classInfo$$, MultipleGradientPaint$ColorSpaceType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultipleGradientPaint$ColorSpaceType));
	});
	return class$;
}

$Class* MultipleGradientPaint$ColorSpaceType::class$ = nullptr;

	} // awt
} // java