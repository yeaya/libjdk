#include <com/sun/tools/javac/parser/Tokens$StringToken.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef STRING

using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Tokens$Token$Tag = ::com::sun::tools::javac::parser::Tokens$Token$Tag;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $List = ::com::sun::tools::javac::util::List;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void Tokens$StringToken::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, $List* comments) {
	$Tokens$Token::init$(kind, pos, endPos, comments);
	$set(this, stringVal$, stringVal);
}

void Tokens$StringToken::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::STRING) {
		$throwNew($AssertionError, $$of($str({"Bad token kind - expected "_s, $Tokens$Token$Tag::STRING})));
	}
}

$String* Tokens$StringToken::stringVal() {
	return this->stringVal$;
}

Tokens$StringToken::Tokens$StringToken() {
}

$Class* Tokens$StringToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stringVal", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Tokens$StringToken, stringVal$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", $PUBLIC, $method(Tokens$StringToken, init$, void, $Tokens$TokenKind*, int32_t, int32_t, $String*, $List*)},
		{"checkKind", "()V", nullptr, $PROTECTED, $virtualMethod(Tokens$StringToken, checkKind, void)},
		{"stringVal", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Tokens$StringToken, stringVal, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.Tokens$StringToken", "com.sun.tools.javac.parser.Tokens", "StringToken", $STATIC},
		{"com.sun.tools.javac.parser.Tokens$Token", "com.sun.tools.javac.parser.Tokens", "Token", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.Tokens$StringToken",
		"com.sun.tools.javac.parser.Tokens$Token",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.Tokens"
	};
	$loadClass(Tokens$StringToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tokens$StringToken);
	});
	return class$;
}

$Class* Tokens$StringToken::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com