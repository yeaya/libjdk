#include <com/sun/tools/javac/parser/Lexer.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <jcpp.h>

using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Class* Lexer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"errPos", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, errPos, int32_t)},
		{"errPos", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, errPos, void, int32_t)},
		{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, getLineMap, $Position$LineMap*)},
		{"nextToken", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, nextToken, void)},
		{"prevToken", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, prevToken, $Tokens$Token*)},
		{"split", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, split, $Tokens$Token*)},
		{"token", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, token, $Tokens$Token*)},
		{"token", "(I)Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lexer, token, $Tokens$Token*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.parser.Lexer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Lexer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lexer);
	});
	return class$;
}

$Class* Lexer::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com