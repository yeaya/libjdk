#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Scanner.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer.h>
#include <jcpp.h>

#undef CHARTYPE_DIGIT
#undef CHARTYPE_INVALID
#undef CHARTYPE_LETTER
#undef CHARTYPE_MINUS
#undef CHARTYPE_NONASCII
#undef CHARTYPE_OTHER
#undef CHARTYPE_PERIOD
#undef CHARTYPE_SLASH
#undef CHARTYPE_UNDERSCORE
#undef XPTRTOKEN_ELEM_CHILD
#undef XPTRTOKEN_ELEM_NCNAME

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $ElementSchemePointer = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer;
using $ElementSchemePointer$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _ElementSchemePointer$Scanner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;", nullptr, $FINAL | $SYNTHETIC, $field(ElementSchemePointer$Scanner, this$0)},
	{"CHARTYPE_INVALID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_INVALID)},
	{"CHARTYPE_OTHER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_OTHER)},
	{"CHARTYPE_MINUS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_MINUS)},
	{"CHARTYPE_PERIOD", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_PERIOD)},
	{"CHARTYPE_SLASH", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_SLASH)},
	{"CHARTYPE_DIGIT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_DIGIT)},
	{"CHARTYPE_LETTER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_LETTER)},
	{"CHARTYPE_UNDERSCORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_UNDERSCORE)},
	{"CHARTYPE_NONASCII", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElementSchemePointer$Scanner, CHARTYPE_NONASCII)},
	{"fASCIICharMap", "[B", nullptr, $PRIVATE | $FINAL, $field(ElementSchemePointer$Scanner, fASCIICharMap)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ElementSchemePointer$Scanner, fSymbolTable)},
	{}
};

$MethodInfo _ElementSchemePointer$Scanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PRIVATE, $method(ElementSchemePointer$Scanner, init$, void, $ElementSchemePointer*, $SymbolTable*)},
	{"addToken", "(Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(ElementSchemePointer$Scanner, addToken, void, $ElementSchemePointer$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanExpr", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens;Ljava/lang/String;II)Z", nullptr, $PRIVATE, $method(ElementSchemePointer$Scanner, scanExpr, bool, $SymbolTable*, $ElementSchemePointer$Tokens*, $String*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"scanNCName", "(Ljava/lang/String;II)I", nullptr, $PRIVATE, $method(ElementSchemePointer$Scanner, scanNCName, int32_t, $String*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _ElementSchemePointer$Scanner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner", "com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer", "Scanner", $PRIVATE},
	{}
};

$ClassInfo _ElementSchemePointer$Scanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner",
	"java.lang.Object",
	nullptr,
	_ElementSchemePointer$Scanner_FieldInfo_,
	_ElementSchemePointer$Scanner_MethodInfo_,
	nullptr,
	nullptr,
	_ElementSchemePointer$Scanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer"
};

$Object* allocate$ElementSchemePointer$Scanner($Class* clazz) {
	return $of($alloc(ElementSchemePointer$Scanner));
}

void ElementSchemePointer$Scanner::init$($ElementSchemePointer* this$0, $SymbolTable* symbolTable) {
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
		(int8_t)1,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1,
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
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)2,
		(int8_t)2,
		(int8_t)4,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)7,
		(int8_t)1,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)6,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1
	}));
	$set(this, fSymbolTable, symbolTable);
}

bool ElementSchemePointer$Scanner::scanExpr($SymbolTable* symbolTable, $ElementSchemePointer$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t ch = 0;
	int32_t nameOffset = 0;
	$var($String, nameHandle, nullptr);
	while (true) {
		if (currentOffset == endOffset) {
			break;
		}
		ch = $nc(data)->charAt(currentOffset);
		int8_t chartype = (ch >= 128) ? ElementSchemePointer$Scanner::CHARTYPE_NONASCII : $nc(this->fASCIICharMap)->get(ch);
		{
			int32_t child = 0;
			switch (chartype) {
			case ElementSchemePointer$Scanner::CHARTYPE_SLASH:
				{
					if (++currentOffset == endOffset) {
						return false;
					}
					addToken(tokens, $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_CHILD);
					ch = data->charAt(currentOffset);
					child = 0;
					while (ch >= u'0' && ch <= u'9') {
						child = (child * 10) + (ch - u'0');
						if (++currentOffset == endOffset) {
							break;
						}
						ch = data->charAt(currentOffset);
					}
					if (child == 0) {
						this->this$0->reportError("InvalidChildSequenceCharacter"_s, $$new($ObjectArray, {$($of($Character::valueOf((char16_t)ch)))}));
						return false;
					}
					$nc(tokens)->addToken(child);
					break;
				}
			case ElementSchemePointer$Scanner::CHARTYPE_DIGIT:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_LETTER:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_MINUS:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_NONASCII:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_OTHER:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_PERIOD:
				{}
			case ElementSchemePointer$Scanner::CHARTYPE_UNDERSCORE:
				{
					nameOffset = currentOffset;
					currentOffset = scanNCName(data, endOffset, currentOffset);
					if (currentOffset == nameOffset) {
						this->this$0->reportError("InvalidNCNameInElementSchemeData"_s, $$new($ObjectArray, {$of(data)}));
						return false;
					}
					if (currentOffset < endOffset) {
						ch = data->charAt(currentOffset);
					} else {
						ch = -1;
					}
					$assign(nameHandle, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
					addToken(tokens, $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_NCNAME);
					$nc(tokens)->addToken(nameHandle);
					break;
				}
			}
		}
	}
	return true;
}

int32_t ElementSchemePointer$Scanner::scanNCName($String* data, int32_t endOffset, int32_t currentOffset) {
	int32_t ch = $nc(data)->charAt(currentOffset);
	if (ch >= 128) {
		if (!$XMLChar::isNameStart(ch)) {
			return currentOffset;
		}
	} else {
		int8_t chartype = $nc(this->fASCIICharMap)->get(ch);
		if (chartype != ElementSchemePointer$Scanner::CHARTYPE_LETTER && chartype != ElementSchemePointer$Scanner::CHARTYPE_UNDERSCORE) {
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
			if (chartype != ElementSchemePointer$Scanner::CHARTYPE_LETTER && chartype != ElementSchemePointer$Scanner::CHARTYPE_DIGIT && chartype != ElementSchemePointer$Scanner::CHARTYPE_PERIOD && chartype != ElementSchemePointer$Scanner::CHARTYPE_MINUS && chartype != ElementSchemePointer$Scanner::CHARTYPE_UNDERSCORE) {
				break;
			}
		}
	}
	return currentOffset;
}

void ElementSchemePointer$Scanner::addToken($ElementSchemePointer$Tokens* tokens, int32_t token) {
	$nc(tokens)->addToken(token);
}

ElementSchemePointer$Scanner::ElementSchemePointer$Scanner() {
}

$Class* ElementSchemePointer$Scanner::load$($String* name, bool initialize) {
	$loadClass(ElementSchemePointer$Scanner, name, initialize, &_ElementSchemePointer$Scanner_ClassInfo_, allocate$ElementSchemePointer$Scanner);
	return class$;
}

$Class* ElementSchemePointer$Scanner::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com