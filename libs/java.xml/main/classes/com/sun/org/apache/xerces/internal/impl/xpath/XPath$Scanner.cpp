#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <jcpp.h>

#undef CHARTYPE_ATSIGN
#undef CHARTYPE_CLOSE_BRACKET
#undef CHARTYPE_CLOSE_PAREN
#undef CHARTYPE_COLON
#undef CHARTYPE_COMMA
#undef CHARTYPE_DIGIT
#undef CHARTYPE_DOLLAR
#undef CHARTYPE_EQUAL
#undef CHARTYPE_EXCLAMATION
#undef CHARTYPE_GREATER
#undef CHARTYPE_INVALID
#undef CHARTYPE_LESS
#undef CHARTYPE_LETTER
#undef CHARTYPE_MINUS
#undef CHARTYPE_NONASCII
#undef CHARTYPE_OPEN_BRACKET
#undef CHARTYPE_OPEN_PAREN
#undef CHARTYPE_OTHER
#undef CHARTYPE_PERIOD
#undef CHARTYPE_PLUS
#undef CHARTYPE_QUOTE
#undef CHARTYPE_SLASH
#undef CHARTYPE_STAR
#undef CHARTYPE_UNDERSCORE
#undef CHARTYPE_UNION
#undef CHARTYPE_WHITESPACE
#undef EMPTY_STRING
#undef EXPRTOKEN_ATSIGN
#undef EXPRTOKEN_AXISNAME_ANCESTOR
#undef EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF
#undef EXPRTOKEN_AXISNAME_ATTRIBUTE
#undef EXPRTOKEN_AXISNAME_CHILD
#undef EXPRTOKEN_AXISNAME_DESCENDANT
#undef EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF
#undef EXPRTOKEN_AXISNAME_FOLLOWING
#undef EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING
#undef EXPRTOKEN_AXISNAME_NAMESPACE
#undef EXPRTOKEN_AXISNAME_PARENT
#undef EXPRTOKEN_AXISNAME_PRECEDING
#undef EXPRTOKEN_AXISNAME_PRECEDING_SIBLING
#undef EXPRTOKEN_AXISNAME_SELF
#undef EXPRTOKEN_CLOSE_BRACKET
#undef EXPRTOKEN_CLOSE_PAREN
#undef EXPRTOKEN_COMMA
#undef EXPRTOKEN_DOUBLE_COLON
#undef EXPRTOKEN_DOUBLE_PERIOD
#undef EXPRTOKEN_FUNCTION_NAME
#undef EXPRTOKEN_LITERAL
#undef EXPRTOKEN_NAMETEST_ANY
#undef EXPRTOKEN_NAMETEST_NAMESPACE
#undef EXPRTOKEN_NAMETEST_QNAME
#undef EXPRTOKEN_NODETYPE_COMMENT
#undef EXPRTOKEN_NODETYPE_NODE
#undef EXPRTOKEN_NODETYPE_PI
#undef EXPRTOKEN_NODETYPE_TEXT
#undef EXPRTOKEN_NUMBER
#undef EXPRTOKEN_OPEN_BRACKET
#undef EXPRTOKEN_OPEN_PAREN
#undef EXPRTOKEN_OPERATOR_AND
#undef EXPRTOKEN_OPERATOR_DIV
#undef EXPRTOKEN_OPERATOR_DOUBLE_SLASH
#undef EXPRTOKEN_OPERATOR_EQUAL
#undef EXPRTOKEN_OPERATOR_GREATER
#undef EXPRTOKEN_OPERATOR_GREATER_EQUAL
#undef EXPRTOKEN_OPERATOR_LESS
#undef EXPRTOKEN_OPERATOR_LESS_EQUAL
#undef EXPRTOKEN_OPERATOR_MINUS
#undef EXPRTOKEN_OPERATOR_MOD
#undef EXPRTOKEN_OPERATOR_MULT
#undef EXPRTOKEN_OPERATOR_NOT_EQUAL
#undef EXPRTOKEN_OPERATOR_OR
#undef EXPRTOKEN_OPERATOR_PLUS
#undef EXPRTOKEN_OPERATOR_SLASH
#undef EXPRTOKEN_OPERATOR_UNION
#undef EXPRTOKEN_PERIOD
#undef EXPRTOKEN_VARIABLE_REFERENCE

using $XPath$Tokens = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens;
using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

$FieldInfo _XPath$Scanner_FieldInfo_[] = {
	{"CHARTYPE_INVALID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_INVALID)},
	{"CHARTYPE_OTHER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_OTHER)},
	{"CHARTYPE_WHITESPACE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_WHITESPACE)},
	{"CHARTYPE_EXCLAMATION", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_EXCLAMATION)},
	{"CHARTYPE_QUOTE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_QUOTE)},
	{"CHARTYPE_DOLLAR", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_DOLLAR)},
	{"CHARTYPE_OPEN_PAREN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_OPEN_PAREN)},
	{"CHARTYPE_CLOSE_PAREN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_CLOSE_PAREN)},
	{"CHARTYPE_STAR", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_STAR)},
	{"CHARTYPE_PLUS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_PLUS)},
	{"CHARTYPE_COMMA", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_COMMA)},
	{"CHARTYPE_MINUS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_MINUS)},
	{"CHARTYPE_PERIOD", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_PERIOD)},
	{"CHARTYPE_SLASH", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_SLASH)},
	{"CHARTYPE_DIGIT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_DIGIT)},
	{"CHARTYPE_COLON", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_COLON)},
	{"CHARTYPE_LESS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_LESS)},
	{"CHARTYPE_EQUAL", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_EQUAL)},
	{"CHARTYPE_GREATER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_GREATER)},
	{"CHARTYPE_ATSIGN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_ATSIGN)},
	{"CHARTYPE_LETTER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_LETTER)},
	{"CHARTYPE_OPEN_BRACKET", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_OPEN_BRACKET)},
	{"CHARTYPE_CLOSE_BRACKET", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_CLOSE_BRACKET)},
	{"CHARTYPE_UNDERSCORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_UNDERSCORE)},
	{"CHARTYPE_UNION", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_UNION)},
	{"CHARTYPE_NONASCII", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Scanner, CHARTYPE_NONASCII)},
	{"fASCIICharMap", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fASCIICharMap)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XPath$Scanner, fSymbolTable)},
	{"fAndSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fAndSymbol)},
	{"fOrSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fOrSymbol)},
	{"fModSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fModSymbol)},
	{"fDivSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fDivSymbol)},
	{"fCommentSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fCommentSymbol)},
	{"fTextSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fTextSymbol)},
	{"fPISymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fPISymbol)},
	{"fNodeSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fNodeSymbol)},
	{"fAncestorSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fAncestorSymbol)},
	{"fAncestorOrSelfSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fAncestorOrSelfSymbol)},
	{"fAttributeSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fAttributeSymbol)},
	{"fChildSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fChildSymbol)},
	{"fDescendantSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fDescendantSymbol)},
	{"fDescendantOrSelfSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fDescendantOrSelfSymbol)},
	{"fFollowingSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fFollowingSymbol)},
	{"fFollowingSiblingSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fFollowingSiblingSymbol)},
	{"fNamespaceSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fNamespaceSymbol)},
	{"fParentSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fParentSymbol)},
	{"fPrecedingSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fPrecedingSymbol)},
	{"fPrecedingSiblingSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fPrecedingSiblingSymbol)},
	{"fSelfSymbol", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Scanner, fSelfSymbol)},
	{}
};

$MethodInfo _XPath$Scanner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XPath$Scanner, init$, void, $SymbolTable*)},
	{"addToken", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(XPath$Scanner, addToken, void, $XPath$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"scanExpr", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens;Ljava/lang/String;II)Z", nullptr, $PUBLIC, $virtualMethod(XPath$Scanner, scanExpr, bool, $SymbolTable*, $XPath$Tokens*, $String*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"scanNCName", "(Ljava/lang/String;II)I", nullptr, 0, $virtualMethod(XPath$Scanner, scanNCName, int32_t, $String*, int32_t, int32_t)},
	{"scanNumber", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens;Ljava/lang/String;II)I", nullptr, $PRIVATE, $method(XPath$Scanner, scanNumber, int32_t, $XPath$Tokens*, $String*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _XPath$Scanner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Scanner", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XPath$Scanner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner",
	"java.lang.Object",
	nullptr,
	_XPath$Scanner_FieldInfo_,
	_XPath$Scanner_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$Scanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$Scanner($Class* clazz) {
	return $of($alloc(XPath$Scanner));
}

$bytes* XPath$Scanner::fASCIICharMap = nullptr;
$String* XPath$Scanner::fAndSymbol = nullptr;
$String* XPath$Scanner::fOrSymbol = nullptr;
$String* XPath$Scanner::fModSymbol = nullptr;
$String* XPath$Scanner::fDivSymbol = nullptr;
$String* XPath$Scanner::fCommentSymbol = nullptr;
$String* XPath$Scanner::fTextSymbol = nullptr;
$String* XPath$Scanner::fPISymbol = nullptr;
$String* XPath$Scanner::fNodeSymbol = nullptr;
$String* XPath$Scanner::fAncestorSymbol = nullptr;
$String* XPath$Scanner::fAncestorOrSelfSymbol = nullptr;
$String* XPath$Scanner::fAttributeSymbol = nullptr;
$String* XPath$Scanner::fChildSymbol = nullptr;
$String* XPath$Scanner::fDescendantSymbol = nullptr;
$String* XPath$Scanner::fDescendantOrSelfSymbol = nullptr;
$String* XPath$Scanner::fFollowingSymbol = nullptr;
$String* XPath$Scanner::fFollowingSiblingSymbol = nullptr;
$String* XPath$Scanner::fNamespaceSymbol = nullptr;
$String* XPath$Scanner::fParentSymbol = nullptr;
$String* XPath$Scanner::fPrecedingSymbol = nullptr;
$String* XPath$Scanner::fPrecedingSiblingSymbol = nullptr;
$String* XPath$Scanner::fSelfSymbol = nullptr;

void XPath$Scanner::init$($SymbolTable* symbolTable) {
	$set(this, fSymbolTable, symbolTable);
}

bool XPath$Scanner::scanExpr($SymbolTable* symbolTable, $XPath$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t nameOffset = 0;
	$var($String, nameHandle, nullptr);
	$var($String, prefixHandle, nullptr);
	bool starIsMultiplyOperator = false;
	int32_t ch = 0;
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
		int8_t chartype = (ch >= 128) ? XPath$Scanner::CHARTYPE_NONASCII : $nc(XPath$Scanner::fASCIICharMap)->get(ch);
		{
			int32_t qchar = 0;
			int32_t litOffset = 0;
			int32_t litLength = 0;
			bool isNameTestNCName = false;
			bool isAxisName = false;
			switch (chartype) {
			case XPath$Scanner::CHARTYPE_OPEN_PAREN:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPEN_PAREN);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_CLOSE_PAREN:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_CLOSE_PAREN);
					starIsMultiplyOperator = true;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_OPEN_BRACKET:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPEN_BRACKET);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_CLOSE_BRACKET:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_CLOSE_BRACKET);
					starIsMultiplyOperator = true;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_PERIOD:
				{
					if (currentOffset + 1 == endOffset) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_PERIOD);
						starIsMultiplyOperator = true;
						++currentOffset;
						break;
					}
					ch = data->charAt(currentOffset + 1);
					if (ch == u'.') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_DOUBLE_PERIOD);
						starIsMultiplyOperator = true;
						currentOffset += 2;
					} else if (ch >= u'0' && ch <= u'9') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_NUMBER);
						starIsMultiplyOperator = true;
						currentOffset = scanNumber(tokens, data, endOffset, currentOffset);
					} else if (ch == u'/') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_PERIOD);
						starIsMultiplyOperator = true;
						++currentOffset;
					} else if (ch == u'|') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_PERIOD);
						starIsMultiplyOperator = true;
						++currentOffset;
						break;
					} else if (ch == u' ' || ch == 10 || ch == 9 || ch == 13) {
						do {
							if (++currentOffset == endOffset) {
								break;
							}
							ch = data->charAt(currentOffset);
						} while (ch == u' ' || ch == 10 || ch == 9 || ch == 13);
						if (currentOffset == endOffset || ch == u'|' || ch == u'/') {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_PERIOD);
							starIsMultiplyOperator = true;
							break;
						}
						$throwNew($XPathException, "c-general-xpath"_s);
					} else {
						$throwNew($XPathException, "c-general-xpath"_s);
					}
					if (currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_ATSIGN:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_ATSIGN);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_COMMA:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_COMMA);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_COLON:
				{
					if (++currentOffset == endOffset) {
						return false;
					}
					ch = data->charAt(currentOffset);
					if (ch != u':') {
						return false;
					}
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_SLASH:
				{
					if (++currentOffset == endOffset) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH);
						starIsMultiplyOperator = false;
						break;
					}
					ch = data->charAt(currentOffset);
					if (ch == u'/') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH);
						starIsMultiplyOperator = false;
						if (++currentOffset == endOffset) {
							break;
						}
					} else {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH);
						starIsMultiplyOperator = false;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_UNION:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_UNION);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_PLUS:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_PLUS);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_MINUS:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_MINUS);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_EQUAL:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_EQUAL);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_EXCLAMATION:
				{
					if (++currentOffset == endOffset) {
						return false;
					}
					ch = data->charAt(currentOffset);
					if (ch != u'=') {
						return false;
					}
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_NOT_EQUAL);
					starIsMultiplyOperator = false;
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_LESS:
				{
					if (++currentOffset == endOffset) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_LESS);
						starIsMultiplyOperator = false;
						break;
					}
					ch = data->charAt(currentOffset);
					if (ch == u'=') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_LESS_EQUAL);
						starIsMultiplyOperator = false;
						if (++currentOffset == endOffset) {
							break;
						}
					} else {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_LESS);
						starIsMultiplyOperator = false;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_GREATER:
				{
					if (++currentOffset == endOffset) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER);
						starIsMultiplyOperator = false;
						break;
					}
					ch = data->charAt(currentOffset);
					if (ch == u'=') {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER_EQUAL);
						starIsMultiplyOperator = false;
						if (++currentOffset == endOffset) {
							break;
						}
					} else {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER);
						starIsMultiplyOperator = false;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_QUOTE:
				{
					qchar = ch;
					if (++currentOffset == endOffset) {
						return false;
					}
					ch = data->charAt(currentOffset);
					litOffset = currentOffset;
					while (ch != qchar) {
						if (++currentOffset == endOffset) {
							return false;
						}
						ch = data->charAt(currentOffset);
					}
					litLength = currentOffset - litOffset;
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_LITERAL);
					starIsMultiplyOperator = true;
					$nc(tokens)->addToken($($nc(symbolTable)->addSymbol($(data->substring(litOffset, litOffset + litLength)))));
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_DIGIT:
				{
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_NUMBER);
					starIsMultiplyOperator = true;
					currentOffset = scanNumber(tokens, data, endOffset, currentOffset);
					break;
				}
			case XPath$Scanner::CHARTYPE_DOLLAR:
				{
					if (++currentOffset == endOffset) {
						return false;
					}
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
					$assign(nameHandle, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
					if (ch != u':') {
						$init($XMLSymbols);
						$assign(prefixHandle, $XMLSymbols::EMPTY_STRING);
					} else {
						$assign(prefixHandle, nameHandle);
						if (++currentOffset == endOffset) {
							return false;
						}
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
						$assign(nameHandle, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
					}
					addToken(tokens, $XPath$Tokens::EXPRTOKEN_VARIABLE_REFERENCE);
					starIsMultiplyOperator = true;
					$nc(tokens)->addToken(prefixHandle);
					$nc(tokens)->addToken(nameHandle);
					break;
				}
			case XPath$Scanner::CHARTYPE_STAR:
				{
					if (starIsMultiplyOperator) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_MULT);
						starIsMultiplyOperator = false;
					} else {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_NAMETEST_ANY);
						starIsMultiplyOperator = true;
					}
					if (++currentOffset == endOffset) {
						break;
					}
					break;
				}
			case XPath$Scanner::CHARTYPE_NONASCII:
				{}
			case XPath$Scanner::CHARTYPE_LETTER:
				{}
			case XPath$Scanner::CHARTYPE_UNDERSCORE:
				{
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
					$assign(nameHandle, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
					isNameTestNCName = false;
					isAxisName = false;
					$init($XMLSymbols);
					$assign(prefixHandle, $XMLSymbols::EMPTY_STRING);
					if (ch == u':') {
						if (++currentOffset == endOffset) {
							return false;
						}
						ch = data->charAt(currentOffset);
						if (ch == u'*') {
							if (++currentOffset < endOffset) {
								ch = data->charAt(currentOffset);
							}
							isNameTestNCName = true;
						} else if (ch == u':') {
							if (++currentOffset < endOffset) {
								ch = data->charAt(currentOffset);
							}
							isAxisName = true;
						} else {
							$assign(prefixHandle, nameHandle);
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
							$assign(nameHandle, $nc(symbolTable)->addSymbol($(data->substring(nameOffset, currentOffset))));
						}
					}
					while (ch == u' ' || ch == 10 || ch == 9 || ch == 13) {
						if (++currentOffset == endOffset) {
							break;
						}
						ch = data->charAt(currentOffset);
					}
					if (starIsMultiplyOperator) {
						if (nameHandle == XPath$Scanner::fAndSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_AND);
							starIsMultiplyOperator = false;
						} else if (nameHandle == XPath$Scanner::fOrSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_OR);
							starIsMultiplyOperator = false;
						} else if (nameHandle == XPath$Scanner::fModSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_MOD);
							starIsMultiplyOperator = false;
						} else if (nameHandle == XPath$Scanner::fDivSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPERATOR_DIV);
							starIsMultiplyOperator = false;
						} else {
							return false;
						}
						if (isNameTestNCName) {
							return false;
						} else if (isAxisName) {
							return false;
						}
						break;
					}
					if (ch == u'(' && !isNameTestNCName && !isAxisName) {
						if (nameHandle == XPath$Scanner::fCommentSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_NODETYPE_COMMENT);
						} else if (nameHandle == XPath$Scanner::fTextSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_NODETYPE_TEXT);
						} else if (nameHandle == XPath$Scanner::fPISymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_NODETYPE_PI);
						} else if (nameHandle == XPath$Scanner::fNodeSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_NODETYPE_NODE);
						} else {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_FUNCTION_NAME);
							$nc(tokens)->addToken(prefixHandle);
							tokens->addToken(nameHandle);
						}
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_OPEN_PAREN);
						starIsMultiplyOperator = false;
						if (++currentOffset == endOffset) {
							break;
						}
						break;
					}
					if (isAxisName || (ch == u':' && currentOffset + 1 < endOffset && data->charAt(currentOffset + 1) == u':')) {
						if (nameHandle == XPath$Scanner::fAncestorSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR);
						} else if (nameHandle == XPath$Scanner::fAncestorOrSelfSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF);
						} else if (nameHandle == XPath$Scanner::fAttributeSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_ATTRIBUTE);
						} else if (nameHandle == XPath$Scanner::fChildSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_CHILD);
						} else if (nameHandle == XPath$Scanner::fDescendantSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT);
						} else if (nameHandle == XPath$Scanner::fDescendantOrSelfSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF);
						} else if (nameHandle == XPath$Scanner::fFollowingSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING);
						} else if (nameHandle == XPath$Scanner::fFollowingSiblingSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING);
						} else if (nameHandle == XPath$Scanner::fNamespaceSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_NAMESPACE);
						} else if (nameHandle == XPath$Scanner::fParentSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_PARENT);
						} else if (nameHandle == XPath$Scanner::fPrecedingSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING);
						} else if (nameHandle == XPath$Scanner::fPrecedingSiblingSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING_SIBLING);
						} else if (nameHandle == XPath$Scanner::fSelfSymbol) {
							addToken(tokens, $XPath$Tokens::EXPRTOKEN_AXISNAME_SELF);
						} else {
							return false;
						}
						if (isNameTestNCName) {
							return false;
						}
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON);
						starIsMultiplyOperator = false;
						if (!isAxisName) {
							++currentOffset;
							if (++currentOffset == endOffset) {
								break;
							}
						}
						break;
					}
					if (isNameTestNCName) {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE);
						starIsMultiplyOperator = true;
						$nc(tokens)->addToken(nameHandle);
					} else {
						addToken(tokens, $XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME);
						starIsMultiplyOperator = true;
						$nc(tokens)->addToken(prefixHandle);
						tokens->addToken(nameHandle);
					}
					break;
				}
			default:
				{
					return false;
				}
			}
		}
	}
	return true;
}

int32_t XPath$Scanner::scanNCName($String* data, int32_t endOffset, int32_t currentOffset) {
	int32_t ch = $nc(data)->charAt(currentOffset);
	if (ch >= 128) {
		if (!$XMLChar::isNameStart(ch)) {
			return currentOffset;
		}
	} else {
		int8_t chartype = $nc(XPath$Scanner::fASCIICharMap)->get(ch);
		if (chartype != XPath$Scanner::CHARTYPE_LETTER && chartype != XPath$Scanner::CHARTYPE_UNDERSCORE) {
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
			int8_t chartype = $nc(XPath$Scanner::fASCIICharMap)->get(ch);
			if (chartype != XPath$Scanner::CHARTYPE_LETTER && chartype != XPath$Scanner::CHARTYPE_DIGIT && chartype != XPath$Scanner::CHARTYPE_PERIOD && chartype != XPath$Scanner::CHARTYPE_MINUS && chartype != XPath$Scanner::CHARTYPE_UNDERSCORE) {
				break;
			}
		}
	}
	return currentOffset;
}

int32_t XPath$Scanner::scanNumber($XPath$Tokens* tokens, $String* data, int32_t endOffset, int32_t currentOffset) {
	int32_t ch = $nc(data)->charAt(currentOffset);
	int32_t whole = 0;
	int32_t part = 0;
	while (ch >= u'0' && ch <= u'9') {
		whole = (whole * 10) + (ch - u'0');
		if (++currentOffset == endOffset) {
			break;
		}
		ch = data->charAt(currentOffset);
	}
	if (ch == u'.') {
		if (++currentOffset < endOffset) {
			ch = data->charAt(currentOffset);
			while (ch >= u'0' && ch <= u'9') {
				part = (part * 10) + (ch - u'0');
				if (++currentOffset == endOffset) {
					break;
				}
				ch = data->charAt(currentOffset);
			}
			if (part != 0) {
				$throwNew($RuntimeException, "find a solution!"_s);
			}
		}
	}
	$nc(tokens)->addToken(whole);
	tokens->addToken(part);
	return currentOffset;
}

void XPath$Scanner::addToken($XPath$Tokens* tokens, int32_t token) {
	$nc(tokens)->addToken(token);
}

void clinit$XPath$Scanner($Class* class$) {
	$assignStatic(XPath$Scanner::fASCIICharMap, $new($bytes, {
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
		(int8_t)3,
		(int8_t)4,
		(int8_t)1,
		(int8_t)5,
		(int8_t)1,
		(int8_t)1,
		(int8_t)4,
		(int8_t)6,
		(int8_t)7,
		(int8_t)8,
		(int8_t)9,
		(int8_t)10,
		(int8_t)11,
		(int8_t)12,
		(int8_t)13,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)14,
		(int8_t)15,
		(int8_t)1,
		(int8_t)16,
		(int8_t)17,
		(int8_t)18,
		(int8_t)1,
		(int8_t)19,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)21,
		(int8_t)1,
		(int8_t)22,
		(int8_t)1,
		(int8_t)23,
		(int8_t)1,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)20,
		(int8_t)1,
		(int8_t)24,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1
	}));
	$assignStatic(XPath$Scanner::fAndSymbol, "and"_s->intern());
	$assignStatic(XPath$Scanner::fOrSymbol, "or"_s->intern());
	$assignStatic(XPath$Scanner::fModSymbol, "mod"_s->intern());
	$assignStatic(XPath$Scanner::fDivSymbol, "div"_s->intern());
	$assignStatic(XPath$Scanner::fCommentSymbol, "comment"_s->intern());
	$assignStatic(XPath$Scanner::fTextSymbol, "text"_s->intern());
	$assignStatic(XPath$Scanner::fPISymbol, "processing-instruction"_s->intern());
	$assignStatic(XPath$Scanner::fNodeSymbol, "node"_s->intern());
	$assignStatic(XPath$Scanner::fAncestorSymbol, "ancestor"_s->intern());
	$assignStatic(XPath$Scanner::fAncestorOrSelfSymbol, "ancestor-or-self"_s->intern());
	$assignStatic(XPath$Scanner::fAttributeSymbol, "attribute"_s->intern());
	$assignStatic(XPath$Scanner::fChildSymbol, "child"_s->intern());
	$assignStatic(XPath$Scanner::fDescendantSymbol, "descendant"_s->intern());
	$assignStatic(XPath$Scanner::fDescendantOrSelfSymbol, "descendant-or-self"_s->intern());
	$assignStatic(XPath$Scanner::fFollowingSymbol, "following"_s->intern());
	$assignStatic(XPath$Scanner::fFollowingSiblingSymbol, "following-sibling"_s->intern());
	$assignStatic(XPath$Scanner::fNamespaceSymbol, "namespace"_s->intern());
	$assignStatic(XPath$Scanner::fParentSymbol, "parent"_s->intern());
	$assignStatic(XPath$Scanner::fPrecedingSymbol, "preceding"_s->intern());
	$assignStatic(XPath$Scanner::fPrecedingSiblingSymbol, "preceding-sibling"_s->intern());
	$assignStatic(XPath$Scanner::fSelfSymbol, "self"_s->intern());
}

XPath$Scanner::XPath$Scanner() {
}

$Class* XPath$Scanner::load$($String* name, bool initialize) {
	$loadClass(XPath$Scanner, name, initialize, &_XPath$Scanner_ClassInfo_, clinit$XPath$Scanner, allocate$XPath$Scanner);
	return class$;
}

$Class* XPath$Scanner::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com