#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Tokens_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Tokens_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$Tokens
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DUMP_TOKENS")
#undef DUMP_TOKENS
#pragma push_macro("EXPRTOKEN_ATSIGN")
#undef EXPRTOKEN_ATSIGN
#pragma push_macro("EXPRTOKEN_AXISNAME_ANCESTOR")
#undef EXPRTOKEN_AXISNAME_ANCESTOR
#pragma push_macro("EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF")
#undef EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF
#pragma push_macro("EXPRTOKEN_AXISNAME_ATTRIBUTE")
#undef EXPRTOKEN_AXISNAME_ATTRIBUTE
#pragma push_macro("EXPRTOKEN_AXISNAME_CHILD")
#undef EXPRTOKEN_AXISNAME_CHILD
#pragma push_macro("EXPRTOKEN_AXISNAME_DESCENDANT")
#undef EXPRTOKEN_AXISNAME_DESCENDANT
#pragma push_macro("EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF")
#undef EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF
#pragma push_macro("EXPRTOKEN_AXISNAME_FOLLOWING")
#undef EXPRTOKEN_AXISNAME_FOLLOWING
#pragma push_macro("EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING")
#undef EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING
#pragma push_macro("EXPRTOKEN_AXISNAME_NAMESPACE")
#undef EXPRTOKEN_AXISNAME_NAMESPACE
#pragma push_macro("EXPRTOKEN_AXISNAME_PARENT")
#undef EXPRTOKEN_AXISNAME_PARENT
#pragma push_macro("EXPRTOKEN_AXISNAME_PRECEDING")
#undef EXPRTOKEN_AXISNAME_PRECEDING
#pragma push_macro("EXPRTOKEN_AXISNAME_PRECEDING_SIBLING")
#undef EXPRTOKEN_AXISNAME_PRECEDING_SIBLING
#pragma push_macro("EXPRTOKEN_AXISNAME_SELF")
#undef EXPRTOKEN_AXISNAME_SELF
#pragma push_macro("EXPRTOKEN_CLOSE_BRACKET")
#undef EXPRTOKEN_CLOSE_BRACKET
#pragma push_macro("EXPRTOKEN_CLOSE_PAREN")
#undef EXPRTOKEN_CLOSE_PAREN
#pragma push_macro("EXPRTOKEN_COMMA")
#undef EXPRTOKEN_COMMA
#pragma push_macro("EXPRTOKEN_DOUBLE_COLON")
#undef EXPRTOKEN_DOUBLE_COLON
#pragma push_macro("EXPRTOKEN_DOUBLE_PERIOD")
#undef EXPRTOKEN_DOUBLE_PERIOD
#pragma push_macro("EXPRTOKEN_FUNCTION_NAME")
#undef EXPRTOKEN_FUNCTION_NAME
#pragma push_macro("EXPRTOKEN_LITERAL")
#undef EXPRTOKEN_LITERAL
#pragma push_macro("EXPRTOKEN_NAMETEST_ANY")
#undef EXPRTOKEN_NAMETEST_ANY
#pragma push_macro("EXPRTOKEN_NAMETEST_NAMESPACE")
#undef EXPRTOKEN_NAMETEST_NAMESPACE
#pragma push_macro("EXPRTOKEN_NAMETEST_QNAME")
#undef EXPRTOKEN_NAMETEST_QNAME
#pragma push_macro("EXPRTOKEN_NODETYPE_COMMENT")
#undef EXPRTOKEN_NODETYPE_COMMENT
#pragma push_macro("EXPRTOKEN_NODETYPE_NODE")
#undef EXPRTOKEN_NODETYPE_NODE
#pragma push_macro("EXPRTOKEN_NODETYPE_PI")
#undef EXPRTOKEN_NODETYPE_PI
#pragma push_macro("EXPRTOKEN_NODETYPE_TEXT")
#undef EXPRTOKEN_NODETYPE_TEXT
#pragma push_macro("EXPRTOKEN_NUMBER")
#undef EXPRTOKEN_NUMBER
#pragma push_macro("EXPRTOKEN_OPEN_BRACKET")
#undef EXPRTOKEN_OPEN_BRACKET
#pragma push_macro("EXPRTOKEN_OPEN_PAREN")
#undef EXPRTOKEN_OPEN_PAREN
#pragma push_macro("EXPRTOKEN_OPERATOR_AND")
#undef EXPRTOKEN_OPERATOR_AND
#pragma push_macro("EXPRTOKEN_OPERATOR_DIV")
#undef EXPRTOKEN_OPERATOR_DIV
#pragma push_macro("EXPRTOKEN_OPERATOR_DOUBLE_SLASH")
#undef EXPRTOKEN_OPERATOR_DOUBLE_SLASH
#pragma push_macro("EXPRTOKEN_OPERATOR_EQUAL")
#undef EXPRTOKEN_OPERATOR_EQUAL
#pragma push_macro("EXPRTOKEN_OPERATOR_GREATER")
#undef EXPRTOKEN_OPERATOR_GREATER
#pragma push_macro("EXPRTOKEN_OPERATOR_GREATER_EQUAL")
#undef EXPRTOKEN_OPERATOR_GREATER_EQUAL
#pragma push_macro("EXPRTOKEN_OPERATOR_LESS")
#undef EXPRTOKEN_OPERATOR_LESS
#pragma push_macro("EXPRTOKEN_OPERATOR_LESS_EQUAL")
#undef EXPRTOKEN_OPERATOR_LESS_EQUAL
#pragma push_macro("EXPRTOKEN_OPERATOR_MINUS")
#undef EXPRTOKEN_OPERATOR_MINUS
#pragma push_macro("EXPRTOKEN_OPERATOR_MOD")
#undef EXPRTOKEN_OPERATOR_MOD
#pragma push_macro("EXPRTOKEN_OPERATOR_MULT")
#undef EXPRTOKEN_OPERATOR_MULT
#pragma push_macro("EXPRTOKEN_OPERATOR_NOT_EQUAL")
#undef EXPRTOKEN_OPERATOR_NOT_EQUAL
#pragma push_macro("EXPRTOKEN_OPERATOR_OR")
#undef EXPRTOKEN_OPERATOR_OR
#pragma push_macro("EXPRTOKEN_OPERATOR_PLUS")
#undef EXPRTOKEN_OPERATOR_PLUS
#pragma push_macro("EXPRTOKEN_OPERATOR_SLASH")
#undef EXPRTOKEN_OPERATOR_SLASH
#pragma push_macro("EXPRTOKEN_OPERATOR_UNION")
#undef EXPRTOKEN_OPERATOR_UNION
#pragma push_macro("EXPRTOKEN_PERIOD")
#undef EXPRTOKEN_PERIOD
#pragma push_macro("EXPRTOKEN_VARIABLE_REFERENCE")
#undef EXPRTOKEN_VARIABLE_REFERENCE
#pragma push_macro("INITIAL_TOKEN_COUNT")
#undef INITIAL_TOKEN_COUNT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolTable;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

class XPath$Tokens : public ::java::lang::Object {
	$class(XPath$Tokens, 0, ::java::lang::Object)
public:
	XPath$Tokens();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void addToken($String* tokenStr);
	void addToken(int32_t token);
	void dumpTokens();
	$String* getTokenString(int32_t token);
	bool hasMore();
	int32_t nextToken();
	$String* nextTokenAsString();
	int32_t peekToken();
	void rewind();
	static const bool DUMP_TOKENS = false;
	static const int32_t EXPRTOKEN_OPEN_PAREN = 0;
	static const int32_t EXPRTOKEN_CLOSE_PAREN = 1;
	static const int32_t EXPRTOKEN_OPEN_BRACKET = 2;
	static const int32_t EXPRTOKEN_CLOSE_BRACKET = 3;
	static const int32_t EXPRTOKEN_PERIOD = 4;
	static const int32_t EXPRTOKEN_DOUBLE_PERIOD = 5;
	static const int32_t EXPRTOKEN_ATSIGN = 6;
	static const int32_t EXPRTOKEN_COMMA = 7;
	static const int32_t EXPRTOKEN_DOUBLE_COLON = 8;
	static const int32_t EXPRTOKEN_NAMETEST_ANY = 9;
	static const int32_t EXPRTOKEN_NAMETEST_NAMESPACE = 10;
	static const int32_t EXPRTOKEN_NAMETEST_QNAME = 11;
	static const int32_t EXPRTOKEN_NODETYPE_COMMENT = 12;
	static const int32_t EXPRTOKEN_NODETYPE_TEXT = 13;
	static const int32_t EXPRTOKEN_NODETYPE_PI = 14;
	static const int32_t EXPRTOKEN_NODETYPE_NODE = 15;
	static const int32_t EXPRTOKEN_OPERATOR_AND = 16;
	static const int32_t EXPRTOKEN_OPERATOR_OR = 17;
	static const int32_t EXPRTOKEN_OPERATOR_MOD = 18;
	static const int32_t EXPRTOKEN_OPERATOR_DIV = 19;
	static const int32_t EXPRTOKEN_OPERATOR_MULT = 20;
	static const int32_t EXPRTOKEN_OPERATOR_SLASH = 21;
	static const int32_t EXPRTOKEN_OPERATOR_DOUBLE_SLASH = 22;
	static const int32_t EXPRTOKEN_OPERATOR_UNION = 23;
	static const int32_t EXPRTOKEN_OPERATOR_PLUS = 24;
	static const int32_t EXPRTOKEN_OPERATOR_MINUS = 25;
	static const int32_t EXPRTOKEN_OPERATOR_EQUAL = 26;
	static const int32_t EXPRTOKEN_OPERATOR_NOT_EQUAL = 27;
	static const int32_t EXPRTOKEN_OPERATOR_LESS = 28;
	static const int32_t EXPRTOKEN_OPERATOR_LESS_EQUAL = 29;
	static const int32_t EXPRTOKEN_OPERATOR_GREATER = 30;
	static const int32_t EXPRTOKEN_OPERATOR_GREATER_EQUAL = 31;
	static const int32_t EXPRTOKEN_FUNCTION_NAME = 32;
	static const int32_t EXPRTOKEN_AXISNAME_ANCESTOR = 33;
	static const int32_t EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF = 34;
	static const int32_t EXPRTOKEN_AXISNAME_ATTRIBUTE = 35;
	static const int32_t EXPRTOKEN_AXISNAME_CHILD = 36;
	static const int32_t EXPRTOKEN_AXISNAME_DESCENDANT = 37;
	static const int32_t EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF = 38;
	static const int32_t EXPRTOKEN_AXISNAME_FOLLOWING = 39;
	static const int32_t EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING = 40;
	static const int32_t EXPRTOKEN_AXISNAME_NAMESPACE = 41;
	static const int32_t EXPRTOKEN_AXISNAME_PARENT = 42;
	static const int32_t EXPRTOKEN_AXISNAME_PRECEDING = 43;
	static const int32_t EXPRTOKEN_AXISNAME_PRECEDING_SIBLING = 44;
	static const int32_t EXPRTOKEN_AXISNAME_SELF = 45;
	static const int32_t EXPRTOKEN_LITERAL = 46;
	static const int32_t EXPRTOKEN_NUMBER = 47;
	static const int32_t EXPRTOKEN_VARIABLE_REFERENCE = 48;
	static $StringArray* fgTokenNames;
	static const int32_t INITIAL_TOKEN_COUNT = 256; // 1 << 8
	$ints* fTokens = nullptr;
	int32_t fTokenCount = 0;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::Map* fSymbolMapping = nullptr;
	::java::util::Map* fTokenNames = nullptr;
	int32_t fCurrentTokenIndex = 0;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DUMP_TOKENS")
#pragma pop_macro("EXPRTOKEN_ATSIGN")
#pragma pop_macro("EXPRTOKEN_AXISNAME_ANCESTOR")
#pragma pop_macro("EXPRTOKEN_AXISNAME_ANCESTOR_OR_SELF")
#pragma pop_macro("EXPRTOKEN_AXISNAME_ATTRIBUTE")
#pragma pop_macro("EXPRTOKEN_AXISNAME_CHILD")
#pragma pop_macro("EXPRTOKEN_AXISNAME_DESCENDANT")
#pragma pop_macro("EXPRTOKEN_AXISNAME_DESCENDANT_OR_SELF")
#pragma pop_macro("EXPRTOKEN_AXISNAME_FOLLOWING")
#pragma pop_macro("EXPRTOKEN_AXISNAME_FOLLOWING_SIBLING")
#pragma pop_macro("EXPRTOKEN_AXISNAME_NAMESPACE")
#pragma pop_macro("EXPRTOKEN_AXISNAME_PARENT")
#pragma pop_macro("EXPRTOKEN_AXISNAME_PRECEDING")
#pragma pop_macro("EXPRTOKEN_AXISNAME_PRECEDING_SIBLING")
#pragma pop_macro("EXPRTOKEN_AXISNAME_SELF")
#pragma pop_macro("EXPRTOKEN_CLOSE_BRACKET")
#pragma pop_macro("EXPRTOKEN_CLOSE_PAREN")
#pragma pop_macro("EXPRTOKEN_COMMA")
#pragma pop_macro("EXPRTOKEN_DOUBLE_COLON")
#pragma pop_macro("EXPRTOKEN_DOUBLE_PERIOD")
#pragma pop_macro("EXPRTOKEN_FUNCTION_NAME")
#pragma pop_macro("EXPRTOKEN_LITERAL")
#pragma pop_macro("EXPRTOKEN_NAMETEST_ANY")
#pragma pop_macro("EXPRTOKEN_NAMETEST_NAMESPACE")
#pragma pop_macro("EXPRTOKEN_NAMETEST_QNAME")
#pragma pop_macro("EXPRTOKEN_NODETYPE_COMMENT")
#pragma pop_macro("EXPRTOKEN_NODETYPE_NODE")
#pragma pop_macro("EXPRTOKEN_NODETYPE_PI")
#pragma pop_macro("EXPRTOKEN_NODETYPE_TEXT")
#pragma pop_macro("EXPRTOKEN_NUMBER")
#pragma pop_macro("EXPRTOKEN_OPEN_BRACKET")
#pragma pop_macro("EXPRTOKEN_OPEN_PAREN")
#pragma pop_macro("EXPRTOKEN_OPERATOR_AND")
#pragma pop_macro("EXPRTOKEN_OPERATOR_DIV")
#pragma pop_macro("EXPRTOKEN_OPERATOR_DOUBLE_SLASH")
#pragma pop_macro("EXPRTOKEN_OPERATOR_EQUAL")
#pragma pop_macro("EXPRTOKEN_OPERATOR_GREATER")
#pragma pop_macro("EXPRTOKEN_OPERATOR_GREATER_EQUAL")
#pragma pop_macro("EXPRTOKEN_OPERATOR_LESS")
#pragma pop_macro("EXPRTOKEN_OPERATOR_LESS_EQUAL")
#pragma pop_macro("EXPRTOKEN_OPERATOR_MINUS")
#pragma pop_macro("EXPRTOKEN_OPERATOR_MOD")
#pragma pop_macro("EXPRTOKEN_OPERATOR_MULT")
#pragma pop_macro("EXPRTOKEN_OPERATOR_NOT_EQUAL")
#pragma pop_macro("EXPRTOKEN_OPERATOR_OR")
#pragma pop_macro("EXPRTOKEN_OPERATOR_PLUS")
#pragma pop_macro("EXPRTOKEN_OPERATOR_SLASH")
#pragma pop_macro("EXPRTOKEN_OPERATOR_UNION")
#pragma pop_macro("EXPRTOKEN_PERIOD")
#pragma pop_macro("EXPRTOKEN_VARIABLE_REFERENCE")
#pragma pop_macro("INITIAL_TOKEN_COUNT")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Tokens_h_