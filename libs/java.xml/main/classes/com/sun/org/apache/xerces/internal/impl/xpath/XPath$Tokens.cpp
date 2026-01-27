#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DUMP_TOKENS
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
#undef INITIAL_TOKEN_COUNT

using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

$FieldInfo _XPath$Tokens_FieldInfo_[] = {
	{"DUMP_TOKENS", "Z", nullptr, $STATIC | $FINAL, $constField(XPath$Tokens, DUMP_TOKENS)},
	{"EXPRTOKEN_OPEN_PAREN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPEN_PAREN)},
	{"EXPRTOKEN_CLOSE_PAREN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_CLOSE_PAREN)},
	{"EXPRTOKEN_OPEN_BRACKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPEN_BRACKET)},
	{"EXPRTOKEN_CLOSE_BRACKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_CLOSE_BRACKET)},
	{"EXPRTOKEN_PERIOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_PERIOD)},
	{"EXPRTOKEN_DOUBLE_PERIOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_DOUBLE_PERIOD)},
	{"EXPRTOKEN_ATSIGN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_ATSIGN)},
	{"EXPRTOKEN_COMMA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_COMMA)},
	{"EXPRTOKEN_DOUBLE_COLON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_DOUBLE_COLON)},
	{"EXPRTOKEN_NAMETEST_ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NAMETEST_ANY)},
	{"EXPRTOKEN_NAMETEST_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NAMETEST_NAMESPACE)},
	{"EXPRTOKEN_NAMETEST_QNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NAMETEST_QNAME)},
	{"EXPRTOKEN_NODETYPE_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NODETYPE_COMMENT)},
	{"EXPRTOKEN_NODETYPE_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NODETYPE_TEXT)},
	{"EXPRTOKEN_NODETYPE_PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NODETYPE_PI)},
	{"EXPRTOKEN_NODETYPE_NODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NODETYPE_NODE)},
	{"EXPRTOKEN_OPERATOR_AND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_AND)},
	{"EXPRTOKEN_OPERATOR_OR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_OR)},
	{"EXPRTOKEN_OPERATOR_MOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_MOD)},
	{"EXPRTOKEN_OPERATOR_DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_DIV)},
	{"EXPRTOKEN_OPERATOR_MULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_MULT)},
	{"EXPRTOKEN_OPERATOR_SLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_SLASH)},
	{"EXPRTOKEN_OPERATOR_DOUBLE_SLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_DOUBLE_SLASH)},
	{"EXPRTOKEN_OPERATOR_UNION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_UNION)},
	{"EXPRTOKEN_OPERATOR_PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_PLUS)},
	{"EXPRTOKEN_OPERATOR_MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_MINUS)},
	{"EXPRTOKEN_OPERATOR_EQUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_EQUAL)},
	{"EXPRTOKEN_OPERATOR_NOT_EQUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_NOT_EQUAL)},
	{"EXPRTOKEN_OPERATOR_LESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_LESS)},
	{"EXPRTOKEN_OPERATOR_LESS_EQUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_LESS_EQUAL)},
	{"EXPRTOKEN_OPERATOR_GREATER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_GREATER)},
	{"EXPRTOKEN_OPERATOR_GREATER_EQUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_OPERATOR_GREATER_EQUAL)},
	{"EXPRTOKEN_FUNCTION_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_FUNCTION_NAME)},
	{"EXPRTOKEN_AXISNAME_ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_ANCESTOR)},
	{"EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF)},
	{"EXPRTOKEN_AXISNAME_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_ATTRIBUTE)},
	{"EXPRTOKEN_AXISNAME_CHILD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_CHILD)},
	{"EXPRTOKEN_AXISNAME_DESCENDANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_DESCENDANT)},
	{"EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF)},
	{"EXPRTOKEN_AXISNAME_FOLLOWING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_FOLLOWING)},
	{"EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING)},
	{"EXPRTOKEN_AXISNAME_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_NAMESPACE)},
	{"EXPRTOKEN_AXISNAME_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_PARENT)},
	{"EXPRTOKEN_AXISNAME_PRECEDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_PRECEDING)},
	{"EXPRTOKEN_AXISNAME_PRECEDING_SIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_PRECEDING_SIBLING)},
	{"EXPRTOKEN_AXISNAME_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_AXISNAME_SELF)},
	{"EXPRTOKEN_LITERAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_LITERAL)},
	{"EXPRTOKEN_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_NUMBER)},
	{"EXPRTOKEN_VARIABLE_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Tokens, EXPRTOKEN_VARIABLE_REFERENCE)},
	{"fgTokenNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath$Tokens, fgTokenNames)},
	{"INITIAL_TOKEN_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath$Tokens, INITIAL_TOKEN_COUNT)},
	{"fTokens", "[I", nullptr, $PRIVATE, $field(XPath$Tokens, fTokens)},
	{"fTokenCount", "I", nullptr, $PRIVATE, $field(XPath$Tokens, fTokenCount)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(XPath$Tokens, fSymbolTable)},
	{"fSymbolMapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(XPath$Tokens, fSymbolMapping)},
	{"fTokenNames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XPath$Tokens, fTokenNames)},
	{"fCurrentTokenIndex", "I", nullptr, $PRIVATE, $field(XPath$Tokens, fCurrentTokenIndex)},
	{}
};

$MethodInfo _XPath$Tokens_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XPath$Tokens, init$, void, $SymbolTable*)},
	{"addToken", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPath$Tokens, addToken, void, $String*)},
	{"addToken", "(I)V", nullptr, $PUBLIC, $method(XPath$Tokens, addToken, void, int32_t)},
	{"dumpTokens", "()V", nullptr, $PUBLIC, $method(XPath$Tokens, dumpTokens, void)},
	{"getTokenString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(XPath$Tokens, getTokenString, $String*, int32_t)},
	{"hasMore", "()Z", nullptr, $PUBLIC, $method(XPath$Tokens, hasMore, bool)},
	{"nextToken", "()I", nullptr, $PUBLIC, $method(XPath$Tokens, nextToken, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"nextTokenAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XPath$Tokens, nextTokenAsString, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"peekToken", "()I", nullptr, $PUBLIC, $method(XPath$Tokens, peekToken, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"rewind", "()V", nullptr, $PUBLIC, $method(XPath$Tokens, rewind, void)},
	{}
};

$InnerClassInfo _XPath$Tokens_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Tokens", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Tokens", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XPath$Tokens_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Tokens",
	"java.lang.Object",
	nullptr,
	_XPath$Tokens_FieldInfo_,
	_XPath$Tokens_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$Tokens_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$Tokens($Class* clazz) {
	return $of($alloc(XPath$Tokens));
}

$StringArray* XPath$Tokens::fgTokenNames = nullptr;

void XPath$Tokens::init$($SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	$set(this, fTokens, $new($ints, XPath$Tokens::INITIAL_TOKEN_COUNT));
	this->fTokenCount = 0;
	$set(this, fSymbolMapping, $new($HashMap));
	$set(this, fTokenNames, $new($HashMap));
	$set(this, fSymbolTable, symbolTable);
	$var($StringArray, symbols, $new($StringArray, {
		"ancestor"_s,
		"ancestor-or-self"_s,
		"attribute"_s,
		"child"_s,
		"descendant"_s,
		"descendant-or-self"_s,
		"following"_s,
		"following-sibling"_s,
		"namespace"_s,
		"parent"_s,
		"preceding"_s,
		"preceding-sibling"_s,
		"self"_s
	}));
	for (int32_t i = 0; i < symbols->length; ++i) {
		$var($Object, var$0, $of($nc(this->fSymbolTable)->addSymbol(symbols->get(i))));
		$nc(this->fSymbolMapping)->put(var$0, $($Integer::valueOf(i)));
	}
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPEN_PAREN)), "EXPRTOKEN_OPEN_PAREN"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_CLOSE_PAREN)), "EXPRTOKEN_CLOSE_PAREN"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPEN_BRACKET)), "EXPRTOKEN_OPEN_BRACKET"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_CLOSE_BRACKET)), "EXPRTOKEN_CLOSE_BRACKET"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_PERIOD)), "EXPRTOKEN_PERIOD"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_DOUBLE_PERIOD)), "EXPRTOKEN_DOUBLE_PERIOD"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_ATSIGN)), "EXPRTOKEN_ATSIGN"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_COMMA)), "EXPRTOKEN_COMMA"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_DOUBLE_COLON)), "EXPRTOKEN_DOUBLE_COLON"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NAMETEST_ANY)), "EXPRTOKEN_NAMETEST_ANY"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE)), "EXPRTOKEN_NAMETEST_NAMESPACE"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME)), "EXPRTOKEN_NAMETEST_QNAME"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NODETYPE_COMMENT)), "EXPRTOKEN_NODETYPE_COMMENT"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NODETYPE_TEXT)), "EXPRTOKEN_NODETYPE_TEXT"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NODETYPE_PI)), "EXPRTOKEN_NODETYPE_PI"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NODETYPE_NODE)), "EXPRTOKEN_NODETYPE_NODE"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_AND)), "EXPRTOKEN_OPERATOR_AND"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_OR)), "EXPRTOKEN_OPERATOR_OR"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_MOD)), "EXPRTOKEN_OPERATOR_MOD"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_DIV)), "EXPRTOKEN_OPERATOR_DIV"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_MULT)), "EXPRTOKEN_OPERATOR_MULT"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH)), "EXPRTOKEN_OPERATOR_SLASH"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH)), "EXPRTOKEN_OPERATOR_DOUBLE_SLASH"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_UNION)), "EXPRTOKEN_OPERATOR_UNION"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_PLUS)), "EXPRTOKEN_OPERATOR_PLUS"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_MINUS)), "EXPRTOKEN_OPERATOR_MINUS"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_EQUAL)), "EXPRTOKEN_OPERATOR_EQUAL"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_NOT_EQUAL)), "EXPRTOKEN_OPERATOR_NOT_EQUAL"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_LESS)), "EXPRTOKEN_OPERATOR_LESS"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_LESS_EQUAL)), "EXPRTOKEN_OPERATOR_LESS_EQUAL"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER)), "EXPRTOKEN_OPERATOR_GREATER"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER_EQUAL)), "EXPRTOKEN_OPERATOR_GREATER_EQUAL"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_FUNCTION_NAME)), "EXPRTOKEN_FUNCTION_NAME"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR)), "EXPRTOKEN_AXISNAME_ANCESTOR"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF)), "EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_ATTRIBUTE)), "EXPRTOKEN_AXISNAME_ATTRIBUTE"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_CHILD)), "EXPRTOKEN_AXISNAME_CHILD"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT)), "EXPRTOKEN_AXISNAME_DESCENDANT"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF)), "EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING)), "EXPRTOKEN_AXISNAME_FOLLOWING"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING)), "EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_NAMESPACE)), "EXPRTOKEN_AXISNAME_NAMESPACE"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_PARENT)), "EXPRTOKEN_AXISNAME_PARENT"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING)), "EXPRTOKEN_AXISNAME_PRECEDING"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING_SIBLING)), "EXPRTOKEN_AXISNAME_PRECEDING_SIBLING"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_AXISNAME_SELF)), "EXPRTOKEN_AXISNAME_SELF"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_LITERAL)), "EXPRTOKEN_LITERAL"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_NUMBER)), "EXPRTOKEN_NUMBER"_s);
	$nc(this->fTokenNames)->put($($Integer::valueOf(XPath$Tokens::EXPRTOKEN_VARIABLE_REFERENCE)), "EXPRTOKEN_VARIABLE_REFERENCE"_s);
}

$String* XPath$Tokens::getTokenString(int32_t token) {
	return $cast($String, $nc(this->fTokenNames)->get($($Integer::valueOf(token))));
}

void XPath$Tokens::addToken($String* tokenStr) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, tokenInt, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(this->fTokenNames)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				if ($nc(($cast($String, $($nc(entry)->getValue()))))->equals(tokenStr)) {
					$assign(tokenInt, $cast($Integer, entry->getKey()));
				}
			}
		}
	}
	if (tokenInt == nullptr) {
		$assign(tokenInt, $Integer::valueOf($nc(this->fTokenNames)->size()));
		$nc(this->fTokenNames)->put(tokenInt, tokenStr);
	}
	addToken($nc(tokenInt)->intValue());
}

void XPath$Tokens::addToken(int32_t token) {
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

void XPath$Tokens::rewind() {
	this->fCurrentTokenIndex = 0;
}

bool XPath$Tokens::hasMore() {
	return this->fCurrentTokenIndex < this->fTokenCount;
}

int32_t XPath$Tokens::nextToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		$throwNew($XPathException, "c-general-xpath"_s);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex++);
}

int32_t XPath$Tokens::peekToken() {
	if (this->fCurrentTokenIndex == this->fTokenCount) {
		$throwNew($XPathException, "c-general-xpath"_s);
	}
	return $nc(this->fTokens)->get(this->fCurrentTokenIndex);
}

$String* XPath$Tokens::nextTokenAsString() {
	$var($String, s, getTokenString(nextToken()));
	if (s == nullptr) {
		$throwNew($XPathException, "c-general-xpath"_s);
	}
	return s;
}

void XPath$Tokens::dumpTokens() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fTokenCount; ++i) {
		switch ($nc(this->fTokens)->get(i)) {
		case XPath$Tokens::EXPRTOKEN_OPEN_PAREN:
			{
				$nc($System::out)->print("<OPEN_PAREN/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_CLOSE_PAREN:
			{
				$nc($System::out)->print("<CLOSE_PAREN/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPEN_BRACKET:
			{
				$nc($System::out)->print("<OPEN_BRACKET/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_CLOSE_BRACKET:
			{
				$nc($System::out)->print("<CLOSE_BRACKET/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_PERIOD:
			{
				$nc($System::out)->print("<PERIOD/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_DOUBLE_PERIOD:
			{
				$nc($System::out)->print("<DOUBLE_PERIOD/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_ATSIGN:
			{
				$nc($System::out)->print("<ATSIGN/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_COMMA:
			{
				$nc($System::out)->print("<COMMA/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_DOUBLE_COLON:
			{
				$nc($System::out)->print("<DOUBLE_COLON/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NAMETEST_ANY:
			{
				$nc($System::out)->print("<NAMETEST_ANY/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE:
			{
				$nc($System::out)->print("<NAMETEST_NAMESPACE"_s);
				$nc($System::out)->print($$str({" prefix=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME:
			{
				$nc($System::out)->print("<NAMETEST_QNAME"_s);
				if ($nc(this->fTokens)->get(++i) != -1) {
					$nc($System::out)->print($$str({" prefix=\""_s, $(getTokenString($nc(this->fTokens)->get(i))), "\""_s}));
				}
				$nc($System::out)->print($$str({" localpart=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NODETYPE_COMMENT:
			{
				$nc($System::out)->print("<NODETYPE_COMMENT/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NODETYPE_TEXT:
			{
				$nc($System::out)->print("<NODETYPE_TEXT/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NODETYPE_PI:
			{
				$nc($System::out)->print("<NODETYPE_PI/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NODETYPE_NODE:
			{
				$nc($System::out)->print("<NODETYPE_NODE/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_AND:
			{
				$nc($System::out)->print("<OPERATOR_AND/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_OR:
			{
				$nc($System::out)->print("<OPERATOR_OR/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_MOD:
			{
				$nc($System::out)->print("<OPERATOR_MOD/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_DIV:
			{
				$nc($System::out)->print("<OPERATOR_DIV/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_MULT:
			{
				$nc($System::out)->print("<OPERATOR_MULT/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH:
			{
				$nc($System::out)->print("<OPERATOR_SLASH/>"_s);
				if (i + 1 < this->fTokenCount) {
					$nc($System::out)->println();
					$nc($System::out)->print("  "_s);
				}
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH:
			{
				$nc($System::out)->print("<OPERATOR_DOUBLE_SLASH/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_UNION:
			{
				$nc($System::out)->print("<OPERATOR_UNION/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_PLUS:
			{
				$nc($System::out)->print("<OPERATOR_PLUS/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_MINUS:
			{
				$nc($System::out)->print("<OPERATOR_MINUS/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_EQUAL:
			{
				$nc($System::out)->print("<OPERATOR_EQUAL/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_NOT_EQUAL:
			{
				$nc($System::out)->print("<OPERATOR_NOT_EQUAL/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_LESS:
			{
				$nc($System::out)->print("<OPERATOR_LESS/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_LESS_EQUAL:
			{
				$nc($System::out)->print("<OPERATOR_LESS_EQUAL/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER:
			{
				$nc($System::out)->print("<OPERATOR_GREATER/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_OPERATOR_GREATER_EQUAL:
			{
				$nc($System::out)->print("<OPERATOR_GREATER_EQUAL/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_FUNCTION_NAME:
			{
				$nc($System::out)->print("<FUNCTION_NAME"_s);
				if ($nc(this->fTokens)->get(++i) != -1) {
					$nc($System::out)->print($$str({" prefix=\""_s, $(getTokenString($nc(this->fTokens)->get(i))), "\""_s}));
				}
				$nc($System::out)->print($$str({" localpart=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR:
			{
				$nc($System::out)->print("<AXISNAME_ANCESTOR/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF:
			{
				$nc($System::out)->print("<AXISNAME_ANCESTOR_OR_SELF/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_ATTRIBUTE:
			{
				$nc($System::out)->print("<AXISNAME_ATTRIBUTE/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_CHILD:
			{
				$nc($System::out)->print("<AXISNAME_CHILD/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT:
			{
				$nc($System::out)->print("<AXISNAME_DESCENDANT/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF:
			{
				$nc($System::out)->print("<AXISNAME_DESCENDANT_OR_SELF/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING:
			{
				$nc($System::out)->print("<AXISNAME_FOLLOWING/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING:
			{
				$nc($System::out)->print("<AXISNAME_FOLLOWING_SIBLING/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_NAMESPACE:
			{
				$nc($System::out)->print("<AXISNAME_NAMESPACE/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_PARENT:
			{
				$nc($System::out)->print("<AXISNAME_PARENT/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING:
			{
				$nc($System::out)->print("<AXISNAME_PRECEDING/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_PRECEDING_SIBLING:
			{
				$nc($System::out)->print("<AXISNAME_PRECEDING_SIBLING/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_AXISNAME_SELF:
			{
				$nc($System::out)->print("<AXISNAME_SELF/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_LITERAL:
			{
				$nc($System::out)->print("<LITERAL"_s);
				$nc($System::out)->print($$str({" value=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_NUMBER:
			{
				$nc($System::out)->print("<NUMBER"_s);
				$nc($System::out)->print($$str({" whole=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print($$str({" part=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		case XPath$Tokens::EXPRTOKEN_VARIABLE_REFERENCE:
			{
				$nc($System::out)->print("<VARIABLE_REFERENCE"_s);
				if ($nc(this->fTokens)->get(++i) != -1) {
					$nc($System::out)->print($$str({" prefix=\""_s, $(getTokenString($nc(this->fTokens)->get(i))), "\""_s}));
				}
				$nc($System::out)->print($$str({" localpart=\""_s, $(getTokenString($nc(this->fTokens)->get(++i))), "\""_s}));
				$nc($System::out)->print("/>"_s);
				break;
			}
		default:
			{
				$nc($System::out)->println("<???/>"_s);
			}
		}
	}
	$nc($System::out)->println();
}

void clinit$XPath$Tokens($Class* class$) {
	$assignStatic(XPath$Tokens::fgTokenNames, $new($StringArray, {
		"EXPRTOKEN_OPEN_PAREN"_s,
		"EXPRTOKEN_CLOSE_PAREN"_s,
		"EXPRTOKEN_OPEN_BRACKET"_s,
		"EXPRTOKEN_CLOSE_BRACKET"_s,
		"EXPRTOKEN_PERIOD"_s,
		"EXPRTOKEN_DOUBLE_PERIOD"_s,
		"EXPRTOKEN_ATSIGN"_s,
		"EXPRTOKEN_COMMA"_s,
		"EXPRTOKEN_DOUBLE_COLON"_s,
		"EXPRTOKEN_NAMETEST_ANY"_s,
		"EXPRTOKEN_NAMETEST_NAMESPACE"_s,
		"EXPRTOKEN_NAMETEST_QNAME"_s,
		"EXPRTOKEN_NODETYPE_COMMENT"_s,
		"EXPRTOKEN_NODETYPE_TEXT"_s,
		"EXPRTOKEN_NODETYPE_PI"_s,
		"EXPRTOKEN_NODETYPE_NODE"_s,
		"EXPRTOKEN_OPERATOR_AND"_s,
		"EXPRTOKEN_OPERATOR_OR"_s,
		"EXPRTOKEN_OPERATOR_MOD"_s,
		"EXPRTOKEN_OPERATOR_DIV"_s,
		"EXPRTOKEN_OPERATOR_MULT"_s,
		"EXPRTOKEN_OPERATOR_SLASH"_s,
		"EXPRTOKEN_OPERATOR_DOUBLE_SLASH"_s,
		"EXPRTOKEN_OPERATOR_UNION"_s,
		"EXPRTOKEN_OPERATOR_PLUS"_s,
		"EXPRTOKEN_OPERATOR_MINUS"_s,
		"EXPRTOKEN_OPERATOR_EQUAL"_s,
		"EXPRTOKEN_OPERATOR_NOT_EQUAL"_s,
		"EXPRTOKEN_OPERATOR_LESS"_s,
		"EXPRTOKEN_OPERATOR_LESS_EQUAL"_s,
		"EXPRTOKEN_OPERATOR_GREATER"_s,
		"EXPRTOKEN_OPERATOR_GREATER_EQUAL"_s,
		"EXPRTOKEN_FUNCTION_NAME"_s,
		"EXPRTOKEN_AXISNAME_ANCESTOR"_s,
		"EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF"_s,
		"EXPRTOKEN_AXISNAME_ATTRIBUTE"_s,
		"EXPRTOKEN_AXISNAME_CHILD"_s,
		"EXPRTOKEN_AXISNAME_DESCENDANT"_s,
		"EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF"_s,
		"EXPRTOKEN_AXISNAME_FOLLOWING"_s,
		"EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING"_s,
		"EXPRTOKEN_AXISNAME_NAMESPACE"_s,
		"EXPRTOKEN_AXISNAME_PARENT"_s,
		"EXPRTOKEN_AXISNAME_PRECEDING"_s,
		"EXPRTOKEN_AXISNAME_PRECEDING_SIBLING"_s,
		"EXPRTOKEN_AXISNAME_SELF"_s,
		"EXPRTOKEN_LITERAL"_s,
		"EXPRTOKEN_NUMBER"_s,
		"EXPRTOKEN_VARIABLE_REFERENCE"_s
	}));
}

XPath$Tokens::XPath$Tokens() {
}

$Class* XPath$Tokens::load$($String* name, bool initialize) {
	$loadClass(XPath$Tokens, name, initialize, &_XPath$Tokens_ClassInfo_, clinit$XPath$Tokens, allocate$XPath$Tokens);
	return class$;
}

$Class* XPath$Tokens::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com