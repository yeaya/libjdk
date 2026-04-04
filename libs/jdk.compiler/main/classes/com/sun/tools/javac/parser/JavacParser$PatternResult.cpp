#include <com/sun/tools/javac/parser/JavacParser$PatternResult.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXPRESSION
#undef PATTERN

using $JavacParser$PatternResultArray = $Array<::com::sun::tools::javac::parser::JavacParser$PatternResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

JavacParser$PatternResult* JavacParser$PatternResult::EXPRESSION = nullptr;
JavacParser$PatternResult* JavacParser$PatternResult::PATTERN = nullptr;
$JavacParser$PatternResultArray* JavacParser$PatternResult::$VALUES = nullptr;

$JavacParser$PatternResultArray* JavacParser$PatternResult::$values() {
	$init(JavacParser$PatternResult);
	return $new($JavacParser$PatternResultArray, {
		JavacParser$PatternResult::EXPRESSION,
		JavacParser$PatternResult::PATTERN
	});
}

$JavacParser$PatternResultArray* JavacParser$PatternResult::values() {
	$init(JavacParser$PatternResult);
	return $cast($JavacParser$PatternResultArray, JavacParser$PatternResult::$VALUES->clone());
}

JavacParser$PatternResult* JavacParser$PatternResult::valueOf($String* name) {
	$init(JavacParser$PatternResult);
	return $cast(JavacParser$PatternResult, $Enum::valueOf(JavacParser$PatternResult::class$, name));
}

void JavacParser$PatternResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void JavacParser$PatternResult::clinit$($Class* clazz) {
	$assignStatic(JavacParser$PatternResult::EXPRESSION, $new(JavacParser$PatternResult, "EXPRESSION"_s, 0));
	$assignStatic(JavacParser$PatternResult::PATTERN, $new(JavacParser$PatternResult, "PATTERN"_s, 1));
	$assignStatic(JavacParser$PatternResult::$VALUES, JavacParser$PatternResult::$values());
}

JavacParser$PatternResult::JavacParser$PatternResult() {
}

$Class* JavacParser$PatternResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EXPRESSION", "Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$PatternResult, EXPRESSION)},
		{"PATTERN", "Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavacParser$PatternResult, PATTERN)},
		{"$VALUES", "[Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavacParser$PatternResult, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavacParser$PatternResult, $values, $JavacParser$PatternResultArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JavacParser$PatternResult, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavacParser$PatternResult, valueOf, JavacParser$PatternResult*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/parser/JavacParser$PatternResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavacParser$PatternResult, values, $JavacParser$PatternResultArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.JavacParser$PatternResult", "com.sun.tools.javac.parser.JavacParser", "PatternResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.JavacParser$PatternResult",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/JavacParser$PatternResult;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.JavacParser"
	};
	$loadClass(JavacParser$PatternResult, name, initialize, &classInfo$$, JavacParser$PatternResult::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacParser$PatternResult));
	});
	return class$;
}

$Class* JavacParser$PatternResult::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com