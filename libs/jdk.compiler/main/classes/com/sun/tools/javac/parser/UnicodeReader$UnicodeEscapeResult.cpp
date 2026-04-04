#include <com/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult.h>
#include <com/sun/tools/javac/parser/UnicodeReader.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BACKSLASH
#undef BROKEN_ESCAPE
#undef VALID_ESCAPE

using $UnicodeReader$UnicodeEscapeResultArray = $Array<::com::sun::tools::javac::parser::UnicodeReader$UnicodeEscapeResult>;
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

UnicodeReader$UnicodeEscapeResult* UnicodeReader$UnicodeEscapeResult::BACKSLASH = nullptr;
UnicodeReader$UnicodeEscapeResult* UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE = nullptr;
UnicodeReader$UnicodeEscapeResult* UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE = nullptr;
$UnicodeReader$UnicodeEscapeResultArray* UnicodeReader$UnicodeEscapeResult::$VALUES = nullptr;

$UnicodeReader$UnicodeEscapeResultArray* UnicodeReader$UnicodeEscapeResult::$values() {
	$init(UnicodeReader$UnicodeEscapeResult);
	return $new($UnicodeReader$UnicodeEscapeResultArray, {
		UnicodeReader$UnicodeEscapeResult::BACKSLASH,
		UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE,
		UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE
	});
}

$UnicodeReader$UnicodeEscapeResultArray* UnicodeReader$UnicodeEscapeResult::values() {
	$init(UnicodeReader$UnicodeEscapeResult);
	return $cast($UnicodeReader$UnicodeEscapeResultArray, UnicodeReader$UnicodeEscapeResult::$VALUES->clone());
}

UnicodeReader$UnicodeEscapeResult* UnicodeReader$UnicodeEscapeResult::valueOf($String* name) {
	$init(UnicodeReader$UnicodeEscapeResult);
	return $cast(UnicodeReader$UnicodeEscapeResult, $Enum::valueOf(UnicodeReader$UnicodeEscapeResult::class$, name));
}

void UnicodeReader$UnicodeEscapeResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void UnicodeReader$UnicodeEscapeResult::clinit$($Class* clazz) {
	$assignStatic(UnicodeReader$UnicodeEscapeResult::BACKSLASH, $new(UnicodeReader$UnicodeEscapeResult, "BACKSLASH"_s, 0));
	$assignStatic(UnicodeReader$UnicodeEscapeResult::VALID_ESCAPE, $new(UnicodeReader$UnicodeEscapeResult, "VALID_ESCAPE"_s, 1));
	$assignStatic(UnicodeReader$UnicodeEscapeResult::BROKEN_ESCAPE, $new(UnicodeReader$UnicodeEscapeResult, "BROKEN_ESCAPE"_s, 2));
	$assignStatic(UnicodeReader$UnicodeEscapeResult::$VALUES, UnicodeReader$UnicodeEscapeResult::$values());
}

UnicodeReader$UnicodeEscapeResult::UnicodeReader$UnicodeEscapeResult() {
}

$Class* UnicodeReader$UnicodeEscapeResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BACKSLASH", "Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeReader$UnicodeEscapeResult, BACKSLASH)},
		{"VALID_ESCAPE", "Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeReader$UnicodeEscapeResult, VALID_ESCAPE)},
		{"BROKEN_ESCAPE", "Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnicodeReader$UnicodeEscapeResult, BROKEN_ESCAPE)},
		{"$VALUES", "[Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeReader$UnicodeEscapeResult, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnicodeReader$UnicodeEscapeResult, $values, $UnicodeReader$UnicodeEscapeResultArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UnicodeReader$UnicodeEscapeResult, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnicodeReader$UnicodeEscapeResult, valueOf, UnicodeReader$UnicodeEscapeResult*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnicodeReader$UnicodeEscapeResult, values, $UnicodeReader$UnicodeEscapeResultArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.UnicodeReader$UnicodeEscapeResult", "com.sun.tools.javac.parser.UnicodeReader", "UnicodeEscapeResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.UnicodeReader$UnicodeEscapeResult",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/UnicodeReader$UnicodeEscapeResult;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.UnicodeReader"
	};
	$loadClass(UnicodeReader$UnicodeEscapeResult, name, initialize, &classInfo$$, UnicodeReader$UnicodeEscapeResult::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnicodeReader$UnicodeEscapeResult));
	});
	return class$;
}

$Class* UnicodeReader$UnicodeEscapeResult::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com