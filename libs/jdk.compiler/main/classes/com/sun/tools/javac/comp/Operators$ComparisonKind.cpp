#include <com/sun/tools/javac/comp/Operators$ComparisonKind.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INVALID
#undef NUMERIC_OR_BOOLEAN
#undef REFERENCE

using $Operators$ComparisonKindArray = $Array<::com::sun::tools::javac::comp::Operators$ComparisonKind>;
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

Operators$ComparisonKind* Operators$ComparisonKind::NUMERIC_OR_BOOLEAN = nullptr;
Operators$ComparisonKind* Operators$ComparisonKind::REFERENCE = nullptr;
Operators$ComparisonKind* Operators$ComparisonKind::INVALID = nullptr;
$Operators$ComparisonKindArray* Operators$ComparisonKind::$VALUES = nullptr;

$Operators$ComparisonKindArray* Operators$ComparisonKind::$values() {
	$init(Operators$ComparisonKind);
	return $new($Operators$ComparisonKindArray, {
		Operators$ComparisonKind::NUMERIC_OR_BOOLEAN,
		Operators$ComparisonKind::REFERENCE,
		Operators$ComparisonKind::INVALID
	});
}

$Operators$ComparisonKindArray* Operators$ComparisonKind::values() {
	$init(Operators$ComparisonKind);
	return $cast($Operators$ComparisonKindArray, Operators$ComparisonKind::$VALUES->clone());
}

Operators$ComparisonKind* Operators$ComparisonKind::valueOf($String* name) {
	$init(Operators$ComparisonKind);
	return $cast(Operators$ComparisonKind, $Enum::valueOf(Operators$ComparisonKind::class$, name));
}

void Operators$ComparisonKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Operators$ComparisonKind::clinit$($Class* clazz) {
	$assignStatic(Operators$ComparisonKind::NUMERIC_OR_BOOLEAN, $new(Operators$ComparisonKind, "NUMERIC_OR_BOOLEAN"_s, 0));
	$assignStatic(Operators$ComparisonKind::REFERENCE, $new(Operators$ComparisonKind, "REFERENCE"_s, 1));
	$assignStatic(Operators$ComparisonKind::INVALID, $new(Operators$ComparisonKind, "INVALID"_s, 2));
	$assignStatic(Operators$ComparisonKind::$VALUES, Operators$ComparisonKind::$values());
}

Operators$ComparisonKind::Operators$ComparisonKind() {
}

$Class* Operators$ComparisonKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NUMERIC_OR_BOOLEAN", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, NUMERIC_OR_BOOLEAN)},
		{"REFERENCE", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, REFERENCE)},
		{"INVALID", "Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$ComparisonKind, INVALID)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$ComparisonKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$ComparisonKind, $values, $Operators$ComparisonKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Operators$ComparisonKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Operators$ComparisonKind, valueOf, Operators$ComparisonKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Operators$ComparisonKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Operators$ComparisonKind, values, $Operators$ComparisonKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$ComparisonKind", "com.sun.tools.javac.comp.Operators", "ComparisonKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Operators$ComparisonKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Operators$ComparisonKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Operators"
	};
	$loadClass(Operators$ComparisonKind, name, initialize, &classInfo$$, Operators$ComparisonKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$ComparisonKind));
	});
	return class$;
}

$Class* Operators$ComparisonKind::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com