#include <com/sun/tools/javac/comp/Flow$FlowKind.h>
#include <com/sun/tools/javac/comp/Flow.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef SPECULATIVE_LOOP

using $Flow$FlowKindArray = $Array<::com::sun::tools::javac::comp::Flow$FlowKind>;
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

Flow$FlowKind* Flow$FlowKind::NORMAL = nullptr;
Flow$FlowKind* Flow$FlowKind::SPECULATIVE_LOOP = nullptr;
$Flow$FlowKindArray* Flow$FlowKind::$VALUES = nullptr;

$Flow$FlowKindArray* Flow$FlowKind::$values() {
	$init(Flow$FlowKind);
	return $new($Flow$FlowKindArray, {
		Flow$FlowKind::NORMAL,
		Flow$FlowKind::SPECULATIVE_LOOP
	});
}

$Flow$FlowKindArray* Flow$FlowKind::values() {
	$init(Flow$FlowKind);
	return $cast($Flow$FlowKindArray, Flow$FlowKind::$VALUES->clone());
}

Flow$FlowKind* Flow$FlowKind::valueOf($String* name) {
	$init(Flow$FlowKind);
	return $cast(Flow$FlowKind, $Enum::valueOf(Flow$FlowKind::class$, name));
}

void Flow$FlowKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* errKey, bool isFinal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, errKey, errKey);
	this->isFinal$ = isFinal;
}

bool Flow$FlowKind::isFinal() {
	return this->isFinal$;
}

void Flow$FlowKind::clinit$($Class* clazz) {
	$assignStatic(Flow$FlowKind::NORMAL, $new(Flow$FlowKind, "NORMAL"_s, 0, "var.might.already.be.assigned"_s, false));
	$assignStatic(Flow$FlowKind::SPECULATIVE_LOOP, $new(Flow$FlowKind, "SPECULATIVE_LOOP"_s, 1, "var.might.be.assigned.in.loop"_s, true));
	$assignStatic(Flow$FlowKind::$VALUES, Flow$FlowKind::$values());
}

Flow$FlowKind::Flow$FlowKind() {
}

$Class* Flow$FlowKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NORMAL", "Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$FlowKind, NORMAL)},
		{"SPECULATIVE_LOOP", "Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Flow$FlowKind, SPECULATIVE_LOOP)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Flow$FlowKind, $VALUES)},
		{"errKey", "Ljava/lang/String;", nullptr, $FINAL, $field(Flow$FlowKind, errKey)},
		{"isFinal", "Z", nullptr, $FINAL, $field(Flow$FlowKind, isFinal$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Flow$FlowKind, $values, $Flow$FlowKindArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Z)V", "(Ljava/lang/String;Z)V", $PRIVATE, $method(Flow$FlowKind, init$, void, $String*, int32_t, $String*, bool)},
		{"isFinal", "()Z", nullptr, 0, $method(Flow$FlowKind, isFinal, bool)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow$FlowKind, valueOf, Flow$FlowKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Flow$FlowKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Flow$FlowKind, values, $Flow$FlowKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$FlowKind", "com.sun.tools.javac.comp.Flow", "FlowKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Flow$FlowKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Flow$FlowKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$FlowKind, name, initialize, &classInfo$$, Flow$FlowKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Flow$FlowKind));
	});
	return class$;
}

$Class* Flow$FlowKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com