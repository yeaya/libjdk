#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <com/sun/tools/javac/comp/Flow$Liveness$1.h>
#include <com/sun/tools/javac/comp/Flow$Liveness$2.h>
#include <com/sun/tools/javac/comp/Flow$Liveness$3.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALIVE
#undef DEAD
#undef RECOVERY

using $Flow$LivenessArray = $Array<::com::sun::tools::javac::comp::Flow$Liveness>;
using $Flow$Liveness$1 = ::com::sun::tools::javac::comp::Flow$Liveness$1;
using $Flow$Liveness$2 = ::com::sun::tools::javac::comp::Flow$Liveness$2;
using $Flow$Liveness$3 = ::com::sun::tools::javac::comp::Flow$Liveness$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

Flow$Liveness* Flow$Liveness::ALIVE = nullptr;
Flow$Liveness* Flow$Liveness::DEAD = nullptr;
Flow$Liveness* Flow$Liveness::RECOVERY = nullptr;
$Flow$LivenessArray* Flow$Liveness::$VALUES = nullptr;

$Flow$LivenessArray* Flow$Liveness::$values() {
	$init(Flow$Liveness);
	return $new($Flow$LivenessArray, {
		Flow$Liveness::ALIVE,
		Flow$Liveness::DEAD,
		Flow$Liveness::RECOVERY
	});
}

$Flow$LivenessArray* Flow$Liveness::values() {
	$init(Flow$Liveness);
	return $cast($Flow$LivenessArray, Flow$Liveness::$VALUES->clone());
}

Flow$Liveness* Flow$Liveness::valueOf($String* name) {
	$init(Flow$Liveness);
	return $cast(Flow$Liveness, $Enum::valueOf(Flow$Liveness::class$, name));
}

void Flow$Liveness::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Flow$Liveness* Flow$Liveness::or$(bool value) {
	return or$($(from(value)));
}

Flow$Liveness* Flow$Liveness::and$(bool value) {
	return and$($(from(value)));
}

Flow$Liveness* Flow$Liveness::from(bool value) {
	$init(Flow$Liveness);
	return value ? Flow$Liveness::ALIVE : Flow$Liveness::DEAD;
}

void Flow$Liveness::clinit$($Class* clazz) {
	$assignStatic(Flow$Liveness::ALIVE, $new($Flow$Liveness$1, "ALIVE"_s, 0));
	$assignStatic(Flow$Liveness::DEAD, $new($Flow$Liveness$2, "DEAD"_s, 1));
	$assignStatic(Flow$Liveness::RECOVERY, $new($Flow$Liveness$3, "RECOVERY"_s, 2));
	$assignStatic(Flow$Liveness::$VALUES, Flow$Liveness::$values());
}

Flow$Liveness::Flow$Liveness() {
}

$Class* Flow$Liveness::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALIVE", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, ALIVE)},
		{"DEAD", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, DEAD)},
		{"RECOVERY", "Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$Liveness, RECOVERY)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$Liveness, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Flow$Liveness, $values, $Flow$LivenessArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Flow$Liveness, init$, void, $String*, int32_t)},
		{"and", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Liveness, and$, Flow$Liveness*, Flow$Liveness*)},
		{"and", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC, $virtualMethod(Flow$Liveness, and$, Flow$Liveness*, bool)},
		{"from", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow$Liveness, from, Flow$Liveness*, bool)},
		{"or", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flow$Liveness, or$, Flow$Liveness*, Flow$Liveness*)},
		{"or", "(Z)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC, $virtualMethod(Flow$Liveness, or$, Flow$Liveness*, bool)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow$Liveness, valueOf, Flow$Liveness*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow$Liveness, values, $Flow$LivenessArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Flow$Liveness$3", nullptr, nullptr, $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Flow$Liveness$2", nullptr, nullptr, $FINAL | $ENUM},
		{"com.sun.tools.javac.comp.Flow$Liveness$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"com.sun.tools.javac.comp.Flow$Liveness",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Flow$Liveness;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$Liveness, name, initialize, &classInfo$$, Flow$Liveness::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Flow$Liveness));
	});
	return class$;
}

$Class* Flow$Liveness::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com