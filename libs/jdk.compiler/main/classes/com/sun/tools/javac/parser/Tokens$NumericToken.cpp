#include <com/sun/tools/javac/parser/Tokens$NumericToken.h>
#include <com/sun/tools/javac/parser/Tokens$StringToken.h>
#include <com/sun/tools/javac/parser/Tokens$Token$Tag.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef NUMERIC

using $Tokens$StringToken = ::com::sun::tools::javac::parser::Tokens$StringToken;
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

void Tokens$NumericToken::init$($Tokens$TokenKind* kind, int32_t pos, int32_t endPos, $String* stringVal, int32_t radix, $List* comments) {
	$Tokens$StringToken::init$(kind, pos, endPos, stringVal, comments);
	this->radix$ = radix;
}

void Tokens$NumericToken::checkKind() {
	$init($Tokens$Token$Tag);
	if (this->kind->tag != $Tokens$Token$Tag::NUMERIC) {
		$throwNew($AssertionError, $$of($str({"Bad token kind - expected "_s, $Tokens$Token$Tag::NUMERIC})));
	}
}

int32_t Tokens$NumericToken::radix() {
	return this->radix$;
}

Tokens$NumericToken::Tokens$NumericToken() {
}

$Class* Tokens$NumericToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"radix", "I", nullptr, $PUBLIC | $FINAL, $field(Tokens$NumericToken, radix$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;ILcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;IILjava/lang/String;ILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/parser/Tokens$Comment;>;)V", $PUBLIC, $method(Tokens$NumericToken, init$, void, $Tokens$TokenKind*, int32_t, int32_t, $String*, int32_t, $List*)},
		{"checkKind", "()V", nullptr, $PROTECTED, $virtualMethod(Tokens$NumericToken, checkKind, void)},
		{"radix", "()I", nullptr, $PUBLIC, $virtualMethod(Tokens$NumericToken, radix, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.Tokens$NumericToken", "com.sun.tools.javac.parser.Tokens", "NumericToken", $STATIC | $FINAL},
		{"com.sun.tools.javac.parser.Tokens$StringToken", "com.sun.tools.javac.parser.Tokens", "StringToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.tools.javac.parser.Tokens$NumericToken",
		"com.sun.tools.javac.parser.Tokens$StringToken",
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
	$loadClass(Tokens$NumericToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tokens$NumericToken);
	});
	return class$;
}

$Class* Tokens$NumericToken::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com