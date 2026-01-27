#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Scanner.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef CHARTYPE_CARRET
#undef CHARTYPE_CLOSE_PAREN
#undef CHARTYPE_COLON
#undef CHARTYPE_DIGIT
#undef CHARTYPE_EQUAL
#undef CHARTYPE_INVALID
#undef CHARTYPE_LETTER
#undef CHARTYPE_MINUS
#undef CHARTYPE_NONASCII
#undef CHARTYPE_OPEN_PAREN
#undef CHARTYPE_OTHER
#undef CHARTYPE_PERIOD
#undef CHARTYPE_SLASH
#undef CHARTYPE_UNDERSCORE
#undef CHARTYPE_WHITESPACE
#undef EMPTY_STRING
#undef XPTRTOKEN_CLOSE_PAREN
#undef XPTRTOKEN_OPEN_PAREN
#undef XPTRTOKEN_SCHEMEDATA
#undef XPTRTOKEN_SCHEMENAME
#undef XPTRTOKEN_SHORTHAND

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XPointerHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler;
using $XPointerHandler$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _XPointerHandler$Scanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;", nullptr, $FINAL | $SYNTHETIC, $field(XPointerHandler$Scanner, this$0)},
	{"CHARTYPE_INVALID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_INVALID)},
	{"CHARTYPE_OTHER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_OTHER)},
	{"CHARTYPE_WHITESPACE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_WHITESPACE)},
	{"CHARTYPE_CARRET", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_CARRET)},
	{"CHARTYPE_OPEN_PAREN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_OPEN_PAREN)},
	{"CHARTYPE_CLOSE_PAREN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_CLOSE_PAREN)},
	{"CHARTYPE_MINUS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_MINUS)},
	{"CHARTYPE_PERIOD", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_PERIOD)},
	{"CHARTYPE_SLASH", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_SLASH)},
	{"CHARTYPE_DIGIT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_DIGIT)},
	{"CHARTYPE_COLON", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_COLON)},
	{"CHARTYPE_EQUAL", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_EQUAL)},
	{"CHARTYPE_LETTER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_LETTER)},
	{"CHARTYPE_UNDERSCORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_UNDERSCORE)},
	{"CHARTYPE_NONASCII", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPointerHandler$Scanner, CHARTYPE_NONASCII)},
	{"fASCIICharMap", "[B", nullptr, $PRIVATE | $FINAL, $field(XPointerHandler$Scanner, fASCIICharMap)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XPointerHandler$Scanner, fSymbolTable)},
	{}
};

$MethodInfo _XPointerHandler$Scanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PRIVATE, $method(XPointerHandler$Scanner, init$, void, $XPointerHandler*, $SymbolTable*)},
	{"addToken", "(Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(XPointerHandler$Scanner, addToken, void, $XPointerHandler$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanData", "(Ljava/lang/String;Ljava/lang/StringBuffer;II)I", nullptr, $PRIVATE, $method(XPointerHandler$Scanner, scanData, int32_t, $String*, $StringBuffer*, int32_t, int32_t)},
	{"scanExpr", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens;Ljava/lang/String;II)Z", nullptr, $PRIVATE, $method(XPointerHandler$Scanner, scanExpr, bool, $SymbolTable*, $XPointerHandler$Tokens*, $String*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanNCName", "(Ljava/lang/String;II)I", nullptr, $PRIVATE, $method(XPointerHandler$Scanner, scanNCName, int32_t, $String*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _XPointerHandler$Scanner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner", "com.sun.org.apache.xerces.internal.xpointer.XPointerHandler", "Scanner", $PRIVATE},
	{}
};

$ClassInfo _XPointerHandler$Scanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner",
	"java.lang.Object",
	nullptr,
	_XPointerHandler$Scanner_FieldInfo_,
	_XPointerHandler$Scanner_MethodInfo_,
	nullptr,
	nullptr,
	_XPointerHandler$Scanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler"
};

$Object* allocate$XPointerHandler$Scanner($Class* clazz) {
	return $of($alloc(XPointerHandler$Scanner));
}

void XPointerHandler$Scanner::init$($XPointerHandler* this$0, $SymbolTable* symbolTable) {
	$set(this, this$0, this$0);
	$set(this, fASCIICharMap, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)4,
		(int8_t)5,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)6,
		(int8_t)7,
		(int8_t)8,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)9,
		(int8_t)10,
		(int8_t)1,
		(int8_t)1,
		(int8_t)11,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)3,
		(int8_t)13,
		(int8_t)1,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)12,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1
	}));
	$set(this, fSymbolTable, symbolTable);
}

bool XPointerHandler$Scanner::scanExpr($SymbolTable* symbolTable, $XPointerHandler$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t ch = 0;
	int32_t openParen = 0;
	int32_t closeParen = 0;
	int32_t nameOffset = 0;
	int32_t dataOffset = 0;
	bool isQName = false;
	$var($String, name, nullptr);
	$var($String, prefix, nullptr);
	$var($String, schemeData, nullptr);
	$var($StringBuffer, schemeDataBuff, $new($StringBuffer));
	while (true) {
		if (currentOffset == endOffset) {
			break;
		}
		ch = $nc(data)->charAt(currentOffset);
		while (ch == u' ' || ch == 10 || ch == 9 || ch == 13) {
			if (++currentOffset == endOffset) {
				break;
			}
			ch = data->charAt(currentOffset);
		}
		if (currentOffset == endOffset) {
			break;
		}
		int8_t chartype = (ch >= 128) ? XPointerHandler$Scanner::CHARTYPE_NONASCII : $nc(this->fASCIICharMap)->get(ch);
		switch (chartype) {
		case XPointerHandler$Scanner::CHARTYPE_OPEN_PAREN:
			{
				addToken(tokens, $XPointerHandler$Tokens::XPTRTOKEN_OPEN_PAREN);
				++openParen;
				++currentOffset;
				break;
			}
		case XPointerHandler$Scanner::CHARTYPE_CLOSE_PAREN:
			{
				addToken(tokens, $XPointerHandler$Tokens::XPTRTOKEN_CLOSE_PAREN);
				++closeParen;
				++currentOffset;
				break;
			}
		case XPointerHandler$Scanner::CHARTYPE_CARRET:
			{}
		case XPointerHandler$Scanner::CHARTYPE_COLON:
			{}
		case XPointerHandler$Scanner::CHARTYPE_DIGIT:
			{}
		case XPointerHandler$Scanner::CHARTYPE_EQUAL:
			{}
		case XPointerHandler$Scanner::CHARTYPE_LETTER:
			{}
		case XPointerHandler$Scanner::CHARTYPE_MINUS:
			{}
		case XPointerHandler$Scanner::CHARTYPE_NONASCII:
			{}
		case XPointerHandler$Scanner::CHARTYPE_OTHER:
			{}
		case XPointerHandler$Scanner::CHARTYPE_PERIOD:
			{}
		case XPointerHandler$Scanner::CHARTYPE_SLASH:
			{}
		case XPointerHandler$Scanner::CHARTYPE_UNDERSCORE:
			{}
		case XPointerHandler$Scanner::CHARTYPE_WHITESPACE:
			{
				if (openParen == 0) {
					nameOffset = currentOffset;
					currentOffset = scanNCName(data, endOffset, currentOffset);
					if (currentOffset == nameOffset) {
						this->this$0->reportError("InvalidShortHandPointer"_s, $$new($ObjectArray, {$of(data)}));
						return false;
					}
					if (currentOffset < endOffset) {
						ch = data->charAt(currentOffset);
					} else {
						ch = -1;
					}
					$assign(name, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
					$init($XMLSymbols);
					$assign(prefix, $XMLSymbols::EMPTY_STRING);
					if (ch == u':') {
						if (++currentOffset == endOffset) {
							return false;
						}
						ch = data->charAt(currentOffset);
						$assign(prefix, name);
						nameOffset = currentOffset;
						currentOffset = scanNCName(data, endOffset, currentOffset);
						if (currentOffset == nameOffset) {
							return false;
						}
						if (currentOffset < endOffset) {
							ch = data->charAt(currentOffset);
						} else {
							ch = -1;
						}
						isQName = true;
						$assign(name, symbolTable->addSymbol($(data->substring(nameOffset, currentOffset))));
					}
					if (currentOffset != endOffset) {
						addToken(tokens, $XPointerHandler$Tokens::XPTRTOKEN_SCHEMENAME);
						$nc(tokens)->addToken(prefix);
						tokens->addToken(name);
						isQName = false;
					} else if (currentOffset == endOffset) {
						addToken(tokens, $XPointerHandler$Tokens::XPTRTOKEN_SHORTHAND);
						$nc(tokens)->addToken(name);
						isQName = false;
					}
					closeParen = 0;
					break;
				} else if (openParen > 0 && closeParen == 0 && name != nullptr) {
					dataOffset = currentOffset;
					currentOffset = scanData(data, schemeDataBuff, endOffset, currentOffset);
					if (currentOffset == dataOffset) {
						this->this$0->reportError("InvalidSchemeDataInXPointer"_s, $$new($ObjectArray, {$of(data)}));
						return false;
					}
					if (currentOffset < endOffset) {
						ch = data->charAt(currentOffset);
					} else {
						ch = -1;
					}
					$assign(schemeData, $nc(symbolTable)->addSymbol($(schemeDataBuff->toString())));
					addToken(tokens, $XPointerHandler$Tokens::XPTRTOKEN_SCHEMEDATA);
					$nc(tokens)->addToken(schemeData);
					openParen = 0;
					schemeDataBuff->delete$(0, schemeDataBuff->length());
				} else {
					return false;
				}
			}
		}
	}
	return true;
}

int32_t XPointerHandler$Scanner::scanNCName($String* data, int32_t endOffset, int32_t currentOffset) {
	int32_t ch = $nc(data)->charAt(currentOffset);
	if (ch >= 128) {
		if (!$XMLChar::isNameStart(ch)) {
			return currentOffset;
		}
	} else {
		int8_t chartype = $nc(this->fASCIICharMap)->get(ch);
		if (chartype != XPointerHandler$Scanner::CHARTYPE_LETTER && chartype != XPointerHandler$Scanner::CHARTYPE_UNDERSCORE) {
			return currentOffset;
		}
	}
	while (++currentOffset < endOffset) {
		ch = data->charAt(currentOffset);
		if (ch >= 128) {
			if (!$XMLChar::isName(ch)) {
				break;
			}
		} else {
			int8_t chartype = $nc(this->fASCIICharMap)->get(ch);
			if (chartype != XPointerHandler$Scanner::CHARTYPE_LETTER && chartype != XPointerHandler$Scanner::CHARTYPE_DIGIT && chartype != XPointerHandler$Scanner::CHARTYPE_PERIOD && chartype != XPointerHandler$Scanner::CHARTYPE_MINUS && chartype != XPointerHandler$Scanner::CHARTYPE_UNDERSCORE) {
				break;
			}
		}
	}
	return currentOffset;
}

int32_t XPointerHandler$Scanner::scanData($String* data, $StringBuffer* schemeData, int32_t endOffset, int32_t currentOffset) {
	while (true) {
		if (currentOffset == endOffset) {
			break;
		}
		int32_t ch = $nc(data)->charAt(currentOffset);
		int8_t chartype = (ch >= 128) ? XPointerHandler$Scanner::CHARTYPE_NONASCII : $nc(this->fASCIICharMap)->get(ch);
		if (chartype == XPointerHandler$Scanner::CHARTYPE_OPEN_PAREN) {
			$nc(schemeData)->append(ch);
			currentOffset = scanData(data, schemeData, endOffset, ++currentOffset);
			if (currentOffset == endOffset) {
				return currentOffset;
			}
			ch = data->charAt(currentOffset);
			chartype = (ch >= 128) ? XPointerHandler$Scanner::CHARTYPE_NONASCII : $nc(this->fASCIICharMap)->get(ch);
			if (chartype != XPointerHandler$Scanner::CHARTYPE_CLOSE_PAREN) {
				return endOffset;
			}
			schemeData->append((char16_t)ch);
			++currentOffset;
		} else if (chartype == XPointerHandler$Scanner::CHARTYPE_CLOSE_PAREN) {
			return currentOffset;
		} else if (chartype == XPointerHandler$Scanner::CHARTYPE_CARRET) {
			ch = data->charAt(++currentOffset);
			chartype = (ch >= 128) ? XPointerHandler$Scanner::CHARTYPE_NONASCII : $nc(this->fASCIICharMap)->get(ch);
			if (chartype != XPointerHandler$Scanner::CHARTYPE_CARRET && chartype != XPointerHandler$Scanner::CHARTYPE_OPEN_PAREN && chartype != XPointerHandler$Scanner::CHARTYPE_CLOSE_PAREN) {
				break;
			}
			$nc(schemeData)->append((char16_t)ch);
			++currentOffset;
		} else {
			$nc(schemeData)->append((char16_t)ch);
			++currentOffset;
		}
	}
	return currentOffset;
}

void XPointerHandler$Scanner::addToken($XPointerHandler$Tokens* tokens, int32_t token) {
	$nc(tokens)->addToken(token);
}

XPointerHandler$Scanner::XPointerHandler$Scanner() {
}

$Class* XPointerHandler$Scanner::load$($String* name, bool initialize) {
	$loadClass(XPointerHandler$Scanner, name, initialize, &_XPointerHandler$Scanner_ClassInfo_, allocate$XPointerHandler$Scanner);
	return class$;
}

$Class* XPointerHandler$Scanner::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com