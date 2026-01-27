#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef INITIAL_TOKEN_COUNT
#undef XPTRTOKEN_CLOSE_PAREN
#undef XPTRTOKEN_OPEN_PAREN
#undef XPTRTOKEN_SCHEMEDATA
#undef XPTRTOKEN_SCHEMENAME
#undef XPTRTOKEN_SHORTHAND

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XPointerHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _XPointerHandler$Tokens_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;", nullptr, $FINAL | $SYNTHETIC, $field(XPointerHandler$Tokens, this$0)},
	{"XPTRTOKEN_OPEN_PAREN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, XPTRTOKEN_OPEN_PAREN)},
	{"XPTRTOKEN_CLOSE_PAREN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, XPTRTOKEN_CLOSE_PAREN)},
	{"XPTRTOKEN_SHORTHAND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, XPTRTOKEN_SHORTHAND)},
	{"XPTRTOKEN_SCHEMENAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, XPTRTOKEN_SCHEMENAME)},
	{"XPTRTOKEN_SCHEMEDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, XPTRTOKEN_SCHEMEDATA)},
	{"fgTokenNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPointerHandler$Tokens, fgTokenNames)},
	{"INITIAL_TOKEN_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Tokens, INITIAL_TOKEN_COUNT)},
	{"fTokens", "[I", nullptr, $PRIVATE, $field(XPointerHandler$Tokens, fTokens)},
	{"fTokenCount", "I", nullptr, $PRIVATE, $field(XPointerHandler$Tokens, fTokenCount)},
	{"fCurrentTokenIndex", "I", nullptr, $PRIVATE, $field(XPointerHandler$Tokens, fCurrentTokenIndex)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XPointerHandler$Tokens, fSymbolTable)},
	{"fTokenNames", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/String;>;", $PRIVATE, $field(XPointerHandler$Tokens, fTokenNames)},
	{}
};

$MethodInfo _XPointerHandler$Tokens_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, init$, void, $XPointerHandler*, $SymbolTable*)},
	{"addToken", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, addToken, void, $String*)},
	{"addToken", "(I)V", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, addToken, void, int32_t)},
	{"getTokenString", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, getTokenString, $String*, int32_t)},
	{"hasMore", "()Z", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, hasMore, bool)},
	{"nextToken", "()I", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, nextToken, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"nextTokenAsString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, nextTokenAsString, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"peekToken", "()I", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, peekToken, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"rewind", "()V", nullptr, $PRIVATE, $method(XPointerHandler$Tokens, rewind, void)},
	{}
};

$InnerClassInfo _XPointerHandler$Tokens_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Tokens", "com.sun.org.apache.xerces.internal.xpointer.XPointerHandler", "Tokens", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _XPointerHandler$Tokens_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Tokens",
	"java.lang.Object",
	nullptr,
	_XPointerHandler$Tokens_FieldInfo_,
	_XPointerHandler$Tokens_MethodInfo_,
	nullptr,
	nullptr,
	_XPointerHandler$Tokens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler"
};

$Object* allocate$XPointerHandler$Tokens($Class* clazz) {
	return $of($alloc(XPointerHandler$Tokens));
}

void XPointerHandler$Tokens::init$($XPointerHandler* this$0, $SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, fgTokenNames, $new($StringArray, {
		"XPTRTOKEN_OPEN_PAREN"_s,
		"XPTRTOKEN_CLOSE_PAREN"_s,
		"XPTRTOKEN_SHORTHAND"_s,
		"XPTRTOKEN_SCHEMENAME"_s,
		"XPTRTOKEN_SCHEMEDATA"_s
	}));
	$set(this, fTokens, $new($ints, XPointerHandler$Tokens::INITIAL_TOKEN_COUNT));
	this->fTokenCount = 0;
	$set(this, fTokenNames, $new($HashMap));
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPointerHandler$Tokens::XPTRTOKEN_OPEN_PAREN)), "XPTRTOKEN_OPEN_PAREN"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPointerHandler$Tokens::XPTRTOKEN_CLOSE_PAREN)), "XPTRTOKEN_CLOSE_PAREN"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPointerHandler$Tokens::XPTRTOKEN_SHORTHAND)), "XPTRTOKEN_SHORTHAND"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPointerHandler$Tokens::XPTRTOKEN_SCHEMENAME)), "XPTRTOKEN_SCHEMENAME"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPointerHandler$Tokens::XPTRTOKEN_SCHEMEDATA)), "XPTRTOKEN_SCHEMEDATA"_s);
}

$String* XPointerHandler$Tokens::getTokenString(int32_t token) {
	return $cast($String, $nc(this->fTokenNames)->get($($Integer::valueOf(token))));
}

void XPointerHandler$Tokens::addToken($String* tokenStr) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $cast($String, $nc(this->fTokenNames)->get(tokenStr)));
	$var($Integer, tokenInt, str == nullptr ? ($Integer*)nullptr : $Integer::valueOf($Integer::parseInt(str)));
	if (tokenInt == nullptr) {
		$assign(tokenInt, $Integer::valueOf($nc(this->fTokenNames)->size()));
		$nc(this->fTokenNames)->put(tokenInt, tokenStr);
	}
	addToken($nc(tokenInt)->intValue());
}

void XPointerHandler$Tokens::addToken(int32_t token) {
	try {
		$nc(this->fTokens)->set(this->fTokenCount, token);
	} catch ($ArrayIndexOutOfBoundsException& ex) {
		$var($ints, oldList, this->fTokens);
		$set(this, fTokens, $new($ints, this->fTokenCount << 1));
		$System::arraycopy(oldList, 0, this->fTokens, 0, this->fTokenCount);
		$nc(this->fTokens)->set(this->fTokenCount, token);
	}
	++this->fTokenCount;
}

void XPointerHandler$Tokens::rewind() {
	this->fCurrentTokenIndex = 0;
}

bool XPointerHandler$Tokens::hasMore() {
	return this->fCurrentTokenIndex < this->fTokenCount;
}

int32_t XPointerHandler$Tokens::nextToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		this->this$0->reportError("XPointerProcessingError"_s, nullptr);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex++);
}

int32_t XPointerHandler$Tokens::peekToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		this->this$0->reportError("XPointerProcessingError"_s, nullptr);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex);
}

$String* XPointerHandler$Tokens::nextTokenAsString() {
	$var($String, tokenStrint, getTokenString(nextToken()));
	if (tokenStrint == nullptr) {
		this->this$0->reportError("XPointerProcessingError"_s, nullptr);
	}
	return tokenStrint;
}

XPointerHandler$Tokens::XPointerHandler$Tokens() {
}

$Class* XPointerHandler$Tokens::load$($String* name, bool initialize) {
	$loadClass(XPointerHandler$Tokens, name, initialize, &_XPointerHandler$Tokens_ClassInfo_, allocate$XPointerHandler$Tokens);
	return class$;
}

$Class* XPointerHandler$Tokens::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com