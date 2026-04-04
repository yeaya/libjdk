#include <com/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks.h>
#include <com/sun/tools/javac/parser/TextBlockSupport.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INCONSISTENT
#undef TRAILING

using $TextBlockSupport$WhitespaceChecksArray = $Array<::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks>;
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

TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::INCONSISTENT = nullptr;
TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::TRAILING = nullptr;
$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::$VALUES = nullptr;

$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::$values() {
	$init(TextBlockSupport$WhitespaceChecks);
	return $new($TextBlockSupport$WhitespaceChecksArray, {
		TextBlockSupport$WhitespaceChecks::INCONSISTENT,
		TextBlockSupport$WhitespaceChecks::TRAILING
	});
}

$TextBlockSupport$WhitespaceChecksArray* TextBlockSupport$WhitespaceChecks::values() {
	$init(TextBlockSupport$WhitespaceChecks);
	return $cast($TextBlockSupport$WhitespaceChecksArray, TextBlockSupport$WhitespaceChecks::$VALUES->clone());
}

TextBlockSupport$WhitespaceChecks* TextBlockSupport$WhitespaceChecks::valueOf($String* name) {
	$init(TextBlockSupport$WhitespaceChecks);
	return $cast(TextBlockSupport$WhitespaceChecks, $Enum::valueOf(TextBlockSupport$WhitespaceChecks::class$, name));
}

void TextBlockSupport$WhitespaceChecks::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void TextBlockSupport$WhitespaceChecks::clinit$($Class* clazz) {
	$assignStatic(TextBlockSupport$WhitespaceChecks::INCONSISTENT, $new(TextBlockSupport$WhitespaceChecks, "INCONSISTENT"_s, 0));
	$assignStatic(TextBlockSupport$WhitespaceChecks::TRAILING, $new(TextBlockSupport$WhitespaceChecks, "TRAILING"_s, 1));
	$assignStatic(TextBlockSupport$WhitespaceChecks::$VALUES, TextBlockSupport$WhitespaceChecks::$values());
}

TextBlockSupport$WhitespaceChecks::TextBlockSupport$WhitespaceChecks() {
}

$Class* TextBlockSupport$WhitespaceChecks::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INCONSISTENT", "Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextBlockSupport$WhitespaceChecks, INCONSISTENT)},
		{"TRAILING", "Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextBlockSupport$WhitespaceChecks, TRAILING)},
		{"$VALUES", "[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TextBlockSupport$WhitespaceChecks, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TextBlockSupport$WhitespaceChecks, $values, $TextBlockSupport$WhitespaceChecksArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(TextBlockSupport$WhitespaceChecks, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextBlockSupport$WhitespaceChecks, valueOf, TextBlockSupport$WhitespaceChecks*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextBlockSupport$WhitespaceChecks, values, $TextBlockSupport$WhitespaceChecksArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks", "com.sun.tools.javac.parser.TextBlockSupport", "WhitespaceChecks", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.TextBlockSupport"
	};
	$loadClass(TextBlockSupport$WhitespaceChecks, name, initialize, &classInfo$$, TextBlockSupport$WhitespaceChecks::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextBlockSupport$WhitespaceChecks));
	});
	return class$;
}

$Class* TextBlockSupport$WhitespaceChecks::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com