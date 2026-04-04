#include <javax/swing/plaf/nimbus/Effect$EffectType.h>
#include <java/lang/Enum.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <jcpp.h>

#undef BLENDED
#undef OVER
#undef UNDER

using $Effect$EffectTypeArray = $Array<::javax::swing::plaf::nimbus::Effect$EffectType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

Effect$EffectType* Effect$EffectType::UNDER = nullptr;
Effect$EffectType* Effect$EffectType::BLENDED = nullptr;
Effect$EffectType* Effect$EffectType::OVER = nullptr;
$Effect$EffectTypeArray* Effect$EffectType::$VALUES = nullptr;

$Effect$EffectTypeArray* Effect$EffectType::$values() {
	$init(Effect$EffectType);
	return $new($Effect$EffectTypeArray, {
		Effect$EffectType::UNDER,
		Effect$EffectType::BLENDED,
		Effect$EffectType::OVER
	});
}

$Effect$EffectTypeArray* Effect$EffectType::values() {
	$init(Effect$EffectType);
	return $cast($Effect$EffectTypeArray, Effect$EffectType::$VALUES->clone());
}

Effect$EffectType* Effect$EffectType::valueOf($String* name) {
	$init(Effect$EffectType);
	return $cast(Effect$EffectType, $Enum::valueOf(Effect$EffectType::class$, name));
}

void Effect$EffectType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Effect$EffectType::clinit$($Class* clazz) {
	$assignStatic(Effect$EffectType::UNDER, $new(Effect$EffectType, "UNDER"_s, 0));
	$assignStatic(Effect$EffectType::BLENDED, $new(Effect$EffectType, "BLENDED"_s, 1));
	$assignStatic(Effect$EffectType::OVER, $new(Effect$EffectType, "OVER"_s, 2));
	$assignStatic(Effect$EffectType::$VALUES, Effect$EffectType::$values());
}

Effect$EffectType::Effect$EffectType() {
}

$Class* Effect$EffectType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNDER", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, UNDER)},
		{"BLENDED", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, BLENDED)},
		{"OVER", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, OVER)},
		{"$VALUES", "[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Effect$EffectType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Effect$EffectType, $values, $Effect$EffectTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Effect$EffectType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Effect$EffectType, valueOf, Effect$EffectType*, $String*)},
		{"values", "()[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Effect$EffectType, values, $Effect$EffectTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.Effect$EffectType", "javax.swing.plaf.nimbus.Effect", "EffectType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.plaf.nimbus.Effect$EffectType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/plaf/nimbus/Effect$EffectType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.Effect"
	};
	$loadClass(Effect$EffectType, name, initialize, &classInfo$$, Effect$EffectType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Effect$EffectType));
	});
	return class$;
}

$Class* Effect$EffectType::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax