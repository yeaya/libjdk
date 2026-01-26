#include <com/sun/tools/javac/parser/Scanner.h>

#include <com/sun/tools/javac/parser/JavaTokenizer.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/Tokens$Token.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <java/nio/CharBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DUMMY

using $Tokens$TokenArray = $Array<::com::sun::tools::javac::parser::Tokens$Token>;
using $JavaTokenizer = ::com::sun::tools::javac::parser::JavaTokenizer;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Tokens$Token = ::com::sun::tools::javac::parser::Tokens$Token;
using $Position$LineMap = ::com::sun::tools::javac::util::Position$LineMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _Scanner_FieldInfo_[] = {
	{"tokens", "Lcom/sun/tools/javac/parser/Tokens;", nullptr, $PRIVATE, $field(Scanner, tokens)},
	{"token", "Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PRIVATE, $field(Scanner, token$)},
	{"prevToken", "Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PRIVATE, $field(Scanner, prevToken$)},
	{"savedTokens", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/parser/Tokens$Token;>;", $PRIVATE, $field(Scanner, savedTokens)},
	{"tokenizer", "Lcom/sun/tools/javac/parser/JavaTokenizer;", nullptr, $PRIVATE, $field(Scanner, tokenizer)},
	{}
};

$MethodInfo _Scanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;Ljava/nio/CharBuffer;)V", nullptr, $PROTECTED, $method(Scanner, init$, void, $ScannerFactory*, $CharBuffer*)},
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;[CI)V", nullptr, $PROTECTED, $method(Scanner, init$, void, $ScannerFactory*, $chars*, int32_t)},
	{"<init>", "(Lcom/sun/tools/javac/parser/ScannerFactory;Lcom/sun/tools/javac/parser/JavaTokenizer;)V", nullptr, $PROTECTED, $method(Scanner, init$, void, $ScannerFactory*, $JavaTokenizer*)},
	{"ensureLookahead", "(I)V", nullptr, $PRIVATE, $method(Scanner, ensureLookahead, void, int32_t)},
	{"errPos", "()I", nullptr, $PUBLIC, $virtualMethod(Scanner, errPos, int32_t)},
	{"errPos", "(I)V", nullptr, $PUBLIC, $virtualMethod(Scanner, errPos, void, int32_t)},
	{"getLineMap", "()Lcom/sun/tools/javac/util/Position$LineMap;", nullptr, $PUBLIC, $virtualMethod(Scanner, getLineMap, $Position$LineMap*)},
	{"nextToken", "()V", nullptr, $PUBLIC, $virtualMethod(Scanner, nextToken, void)},
	{"prevToken", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC, $virtualMethod(Scanner, prevToken, $Tokens$Token*)},
	{"split", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC, $virtualMethod(Scanner, split, $Tokens$Token*)},
	{"token", "()Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC, $virtualMethod(Scanner, token, $Tokens$Token*)},
	{"token", "(I)Lcom/sun/tools/javac/parser/Tokens$Token;", nullptr, $PUBLIC, $virtualMethod(Scanner, token, $Tokens$Token*, int32_t)},
	{}
};

$ClassInfo _Scanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.Scanner",
	"java.lang.Object",
	"com.sun.tools.javac.parser.Lexer",
	_Scanner_FieldInfo_,
	_Scanner_MethodInfo_
};

$Object* allocate$Scanner($Class* clazz) {
	return $of($alloc(Scanner));
}

void Scanner::init$($ScannerFactory* fac, $CharBuffer* buf) {
	Scanner::init$(fac, $$new($JavaTokenizer, fac, buf));
}

void Scanner::init$($ScannerFactory* fac, $chars* buf, int32_t inputLength) {
	Scanner::init$(fac, $$new($JavaTokenizer, fac, buf, inputLength));
}

void Scanner::init$($ScannerFactory* fac, $JavaTokenizer* tokenizer) {
	$set(this, savedTokens, $new($ArrayList));
	$set(this, tokenizer, tokenizer);
	$set(this, tokens, $nc(fac)->tokens);
	$init($Tokens);
	$set(this, token$, ($set(this, prevToken$, $Tokens::DUMMY)));
}

$Tokens$Token* Scanner::token() {
	return token(0);
}

$Tokens$Token* Scanner::token(int32_t lookahead) {
	if (lookahead == 0) {
		return this->token$;
	} else {
		ensureLookahead(lookahead);
		return $cast($Tokens$Token, $nc(this->savedTokens)->get(lookahead - 1));
	}
}

void Scanner::ensureLookahead(int32_t lookahead) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(this->savedTokens)->size(); i < lookahead; ++i) {
		$nc(this->savedTokens)->add($($nc(this->tokenizer)->readToken()));
	}
}

$Tokens$Token* Scanner::prevToken() {
	return this->prevToken$;
}

void Scanner::nextToken() {
	$set(this, prevToken$, this->token$);
	if (!$nc(this->savedTokens)->isEmpty()) {
		$set(this, token$, $cast($Tokens$Token, $nc(this->savedTokens)->remove(0)));
	} else {
		$set(this, token$, $nc(this->tokenizer)->readToken());
	}
}

$Tokens$Token* Scanner::split() {
	$var($Tokens$TokenArray, splitTokens, $nc(this->token$)->split(this->tokens));
	$set(this, prevToken$, $nc(splitTokens)->get(0));
	$set(this, token$, splitTokens->get(1));
	return this->token$;
}

$Position$LineMap* Scanner::getLineMap() {
	return $nc(this->tokenizer)->getLineMap();
}

int32_t Scanner::errPos() {
	return $nc(this->tokenizer)->errPos();
}

void Scanner::errPos(int32_t pos) {
	$nc(this->tokenizer)->errPos(pos);
}

Scanner::Scanner() {
}

$Class* Scanner::load$($String* name, bool initialize) {
	$loadClass(Scanner, name, initialize, &_Scanner_ClassInfo_, allocate$Scanner);
	return class$;
}

$Class* Scanner::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com