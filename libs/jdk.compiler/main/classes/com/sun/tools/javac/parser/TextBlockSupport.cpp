#include <com/sun/tools/javac/parser/TextBlockSupport.h>
#include <com/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef INCONSISTENT
#undef TRAILING

using $TextBlockSupport$WhitespaceChecks = ::com::sun::tools::javac::parser::TextBlockSupport$WhitespaceChecks;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void TextBlockSupport::init$() {
}

$Set* TextBlockSupport::checkWhitespace($String* string) {
	$useLocalObjectStack();
	$var($Set, checks, $new($HashSet));
	if ($nc(string)->isEmpty()) {
		return checks;
	}
	int32_t outdent = 0;
	char16_t lastChar = string->charAt(string->length() - 1);
	bool optOut = lastChar == u'\n' || lastChar == u'\r';
	$var($StringArray, lines, string->split("\\R"_s));
	int32_t length = lines->length;
	$var($String, lastLine, length == 0 ? ""_s : lines->get(length - 1));
	if (!optOut) {
		outdent = indexOfNonWhitespace(lastLine);
		{
			$var($StringArray, arr$, lines);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, line, arr$->get(i$));
				if (!$nc(line)->isBlank()) {
					outdent = $Integer::min(outdent, indexOfNonWhitespace(line));
					if (outdent == 0) {
						break;
					}
				}
			}
		}
	}
	$var($String, start, $nc(lastLine)->substring(0, outdent));
	{
		$var($StringArray, arr$, lines);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, line, arr$->get(i$));
			{
				bool var$0 = !$nc(line)->isBlank();
				if (var$0 && !line->startsWith(start)) {
					$init($TextBlockSupport$WhitespaceChecks);
					checks->add($TextBlockSupport$WhitespaceChecks::INCONSISTENT);
				}
				if (outdent < line->length()) {
					lastChar = line->charAt(line->length() - 1);
					if ($Character::isWhitespace(lastChar)) {
						$init($TextBlockSupport$WhitespaceChecks);
						checks->add($TextBlockSupport$WhitespaceChecks::TRAILING);
					}
				}
			}
		}
	}
	return checks;
}

int32_t TextBlockSupport::indexOfNonWhitespace($String* string) {
	int32_t var$0 = $nc(string)->length();
	return var$0 - $(string->stripLeading())->length();
}

TextBlockSupport::TextBlockSupport() {
}

$Class* TextBlockSupport::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TextBlockSupport, init$, void)},
		{"checkWhitespace", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Lcom/sun/tools/javac/parser/TextBlockSupport$WhitespaceChecks;>;", $STATIC, $staticMethod(TextBlockSupport, checkWhitespace, $Set*, $String*)},
		{"indexOfNonWhitespace", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TextBlockSupport, indexOfNonWhitespace, int32_t, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks", "com.sun.tools.javac.parser.TextBlockSupport", "WhitespaceChecks", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.TextBlockSupport",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.TextBlockSupport$WhitespaceChecks"
	};
	$loadClass(TextBlockSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextBlockSupport);
	});
	return class$;
}

$Class* TextBlockSupport::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com