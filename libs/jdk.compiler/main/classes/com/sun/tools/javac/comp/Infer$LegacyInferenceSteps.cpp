#include <com/sun/tools/javac/comp/Infer$LegacyInferenceSteps.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <java/lang/Enum.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

#undef EQ
#undef EQ_LOWER
#undef EQ_UPPER
#undef LOWER
#undef UPPER_LEGACY

using $Infer$LegacyInferenceStepsArray = $Array<::com::sun::tools::javac::comp::Infer$LegacyInferenceSteps>;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

Infer$LegacyInferenceSteps* Infer$LegacyInferenceSteps::EQ_LOWER = nullptr;
Infer$LegacyInferenceSteps* Infer$LegacyInferenceSteps::EQ_UPPER = nullptr;
$Infer$LegacyInferenceStepsArray* Infer$LegacyInferenceSteps::$VALUES = nullptr;

$Infer$LegacyInferenceStepsArray* Infer$LegacyInferenceSteps::$values() {
	$init(Infer$LegacyInferenceSteps);
	return $new($Infer$LegacyInferenceStepsArray, {
		Infer$LegacyInferenceSteps::EQ_LOWER,
		Infer$LegacyInferenceSteps::EQ_UPPER
	});
}

$Infer$LegacyInferenceStepsArray* Infer$LegacyInferenceSteps::values() {
	$init(Infer$LegacyInferenceSteps);
	return $cast($Infer$LegacyInferenceStepsArray, Infer$LegacyInferenceSteps::$VALUES->clone());
}

Infer$LegacyInferenceSteps* Infer$LegacyInferenceSteps::valueOf($String* name) {
	$init(Infer$LegacyInferenceSteps);
	return $cast(Infer$LegacyInferenceSteps, $Enum::valueOf(Infer$LegacyInferenceSteps::class$, name));
}

void Infer$LegacyInferenceSteps::init$($String* $enum$name, int32_t $enum$ordinal, $EnumSet* steps) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, steps, steps);
}

void Infer$LegacyInferenceSteps::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($Infer$InferenceStep);
	$assignStatic(Infer$LegacyInferenceSteps::EQ_LOWER, $new(Infer$LegacyInferenceSteps, "EQ_LOWER"_s, 0, $($EnumSet::of($Infer$InferenceStep::EQ, $Infer$InferenceStep::LOWER))));
	$assignStatic(Infer$LegacyInferenceSteps::EQ_UPPER, $new(Infer$LegacyInferenceSteps, "EQ_UPPER"_s, 1, $($EnumSet::of($Infer$InferenceStep::EQ, $Infer$InferenceStep::UPPER_LEGACY))));
	$assignStatic(Infer$LegacyInferenceSteps::$VALUES, Infer$LegacyInferenceSteps::$values());
}

Infer$LegacyInferenceSteps::Infer$LegacyInferenceSteps() {
}

$Class* Infer$LegacyInferenceSteps::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EQ_LOWER", "Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$LegacyInferenceSteps, EQ_LOWER)},
		{"EQ_UPPER", "Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Infer$LegacyInferenceSteps, EQ_UPPER)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Infer$LegacyInferenceSteps, $VALUES)},
		{"steps", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;", $FINAL, $field(Infer$LegacyInferenceSteps, steps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Infer$LegacyInferenceSteps, $values, $Infer$LegacyInferenceStepsArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/util/EnumSet;)V", "(Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Infer$InferenceStep;>;)V", $PRIVATE, $method(Infer$LegacyInferenceSteps, init$, void, $String*, int32_t, $EnumSet*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PUBLIC | $STATIC, $staticMethod(Infer$LegacyInferenceSteps, valueOf, Infer$LegacyInferenceSteps*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;", nullptr, $PUBLIC | $STATIC, $staticMethod(Infer$LegacyInferenceSteps, values, $Infer$LegacyInferenceStepsArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$LegacyInferenceSteps", "com.sun.tools.javac.comp.Infer", "LegacyInferenceSteps", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$LegacyInferenceSteps",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Infer$LegacyInferenceSteps;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$LegacyInferenceSteps, name, initialize, &classInfo$$, Infer$LegacyInferenceSteps::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$LegacyInferenceSteps));
	});
	return class$;
}

$Class* Infer$LegacyInferenceSteps::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com