#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef INITIAL_TOKEN_COUNT
#undef XPTRTOKEN_ELEM_CHILD
#undef XPTRTOKEN_ELEM_NCNAME

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ElementSchemePointer = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer;
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

$FieldInfo _ElementSchemePointer$Tokens_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;", nullptr, $FINAL | $SYNTHETIC, $field(ElementSchemePointer$Tokens, this$0)},
	{"XPTRTOKEN_ELEM_NCNAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Tokens, XPTRTOKEN_ELEM_NCNAME)},
	{"XPTRTOKEN_ELEM_CHILD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Tokens, XPTRTOKEN_ELEM_CHILD)},
	{"fgTokenNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ElementSchemePointer$Tokens, fgTokenNames)},
	{"INITIAL_TOKEN_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Tokens, INITIAL_TOKEN_COUNT)},
	{"fTokens", "[I", nullptr, $PRIVATE, $field(ElementSchemePointer$Tokens, fTokens)},
	{"fTokenCount", "I", nullptr, $PRIVATE, $field(ElementSchemePointer$Tokens, fTokenCount)},
	{"fCurrentTokenIndex", "I", nullptr, $PRIVATE, $field(ElementSchemePointer$Tokens, fCurrentTokenIndex)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ElementSchemePointer$Tokens, fSymbolTable)},
	{"fTokenNames", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/String;>;", $PRIVATE, $field(ElementSchemePointer$Tokens, fTokenNames)},
	{}
};

$MethodInfo _ElementSchemePointer$Tokens_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, init$, void, $ElementSchemePointer*, $SymbolTable*)},
	{"addToken", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, addToken, void, $String*)},
	{"addToken", "(I)V", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, addToken, void, int32_t)},
	{"getTokenCount", "()I", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, getTokenCount, int32_t)},
	{"getTokenString", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, getTokenString, $String*, int32_t)},
	{"hasMore", "()Z", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, hasMore, bool)},
	{"nextToken", "()I", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, nextToken, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"nextTokenAsString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, nextTokenAsString, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"peekToken", "()I", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, peekToken, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"rewind", "()V", nullptr, $PRIVATE, $method(ElementSchemePointer$Tokens, rewind, void)},
	{}
};

$InnerClassInfo _ElementSchemePointer$Tokens_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Tokens", "com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer", "Tokens", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ElementSchemePointer$Tokens_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Tokens",
	"java.lang.Object",
	nullptr,
	_ElementSchemePointer$Tokens_FieldInfo_,
	_ElementSchemePointer$Tokens_MethodInfo_,
	nullptr,
	nullptr,
	_ElementSchemePointer$Tokens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer"
};

$Object* allocate$ElementSchemePointer$Tokens($Class* clazz) {
	return $of($alloc(ElementSchemePointer$Tokens));
}

void ElementSchemePointer$Tokens::init$($ElementSchemePointer* this$0, $SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, fgTokenNames, $new($StringArray, {
		"XPTRTOKEN_ELEM_NCNAME"_s,
		"XPTRTOKEN_ELEM_CHILD"_s
	}));
	$set(this, fTokens, $new($ints, ElementSchemePointer$Tokens::INITIAL_TOKEN_COUNT));
	this->fTokenCount = 0;
	$set(this, fTokenNames, $new($HashMap));
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fTokenNames)->put($($Integer::valueOf(ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_NCNAME)), "XPTRTOKEN_ELEM_NCNAME"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_CHILD)), "XPTRTOKEN_ELEM_CHILD"_s);
}

$String* ElementSchemePointer$Tokens::getTokenString(int32_t token) {
	return $cast($String, $nc(this->fTokenNames)->get($($Integer::valueOf(token))));
}

void ElementSchemePointer$Tokens::addToken($String* tokenStr) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $cast($String, $nc(this->fTokenNames)->get(tokenStr)));
	$var($Integer, tokenInt, str == nullptr ? ($Integer*)nullptr : $Integer::valueOf($Integer::parseInt(str)));
	if (tokenInt == nullptr) {
		$assign(tokenInt, $Integer::valueOf($nc(this->fTokenNames)->size()));
		$nc(this->fTokenNames)->put(tokenInt, tokenStr);
	}
	addToken($nc(tokenInt)->intValue());
}

void ElementSchemePointer$Tokens::addToken(int32_t token) {
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

void ElementSchemePointer$Tokens::rewind() {
	this->fCurrentTokenIndex = 0;
}

bool ElementSchemePointer$Tokens::hasMore() {
	return this->fCurrentTokenIndex < this->fTokenCount;
}

int32_t ElementSchemePointer$Tokens::nextToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		this->this$0->reportError("XPointerElementSchemeProcessingError"_s, nullptr);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex++);
}

int32_t ElementSchemePointer$Tokens::peekToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		this->this$0->reportError("XPointerElementSchemeProcessingError"_s, nullptr);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex);
}

$String* ElementSchemePointer$Tokens::nextTokenAsString() {
	$var($String, s, getTokenString(nextToken()));
	if (s == nullptr) {
		this->this$0->reportError("XPointerElementSchemeProcessingError"_s, nullptr);
	}
	return s;
}

int32_t ElementSchemePointer$Tokens::getTokenCount() {
	return this->fTokenCount;
}

ElementSchemePointer$Tokens::ElementSchemePointer$Tokens() {
}

$Class* ElementSchemePointer$Tokens::load$($String* name, bool initialize) {
	$loadClass(ElementSchemePointer$Tokens, name, initialize, &_ElementSchemePointer$Tokens_ClassInfo_, allocate$ElementSchemePointer$Tokens);
	return class$;
}

$Class* ElementSchemePointer$Tokens::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com