#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_sym_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_sym_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.sym
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANCESTOR")
#undef ANCESTOR
#pragma push_macro("ANCESTORORSELF")
#undef ANCESTORORSELF
#pragma push_macro("AND")
#undef AND
#pragma push_macro("ATSIGN")
#undef ATSIGN
#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("CHILD")
#undef CHILD
#pragma push_macro("COMMA")
#undef COMMA
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("DCOLON")
#undef DCOLON
#pragma push_macro("DDOT")
#undef DDOT
#pragma push_macro("DESCENDANT")
#undef DESCENDANT
#pragma push_macro("DESCENDANTORSELF")
#undef DESCENDANTORSELF
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("DOLLAR")
#undef DOLLAR
#pragma push_macro("DOT")
#undef DOT
#pragma push_macro("DSLASH")
#undef DSLASH
#pragma push_macro("EOF")
#undef EOF
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("EXPRESSION")
#undef EXPRESSION
#pragma push_macro("FOLLOWING")
#undef FOLLOWING
#pragma push_macro("FOLLOWINGSIBLING")
#undef FOLLOWINGSIBLING
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("ID")
#undef ID
#pragma push_macro("INT")
#undef INT
#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("LBRACK")
#undef LBRACK
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LPAREN")
#undef LPAREN
#pragma push_macro("LT")
#undef LT
#pragma push_macro("MINUS")
#undef MINUS
#pragma push_macro("MOD")
#undef MOD
#pragma push_macro("NAMESPACE")
#undef NAMESPACE
#pragma push_macro("NE")
#undef NE
#pragma push_macro("NODE")
#undef NODE
#pragma push_macro("OR")
#undef OR
#pragma push_macro("PARENT")
#undef PARENT
#pragma push_macro("PATTERN")
#undef PATTERN
#pragma push_macro("PI")
#undef PI
#pragma push_macro("PIPARAM")
#undef PIPARAM
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("PRECEDING")
#undef PRECEDING
#pragma push_macro("PRECEDINGSIBLING")
#undef PRECEDINGSIBLING
#pragma push_macro("QNAME")
#undef QNAME
#pragma push_macro("RBRACK")
#undef RBRACK
#pragma push_macro("REAL")
#undef REAL
#pragma push_macro("RPAREN")
#undef RPAREN
#pragma push_macro("SELF")
#undef SELF
#pragma push_macro("SLASH")
#undef SLASH
#pragma push_macro("STAR")
#undef STAR
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("VBAR")
#undef VBAR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class sym : public ::java::lang::Object {
	$class(sym, $NO_CLASS_INIT, ::java::lang::Object)
public:
	sym();
	void init$();
	static const int32_t Literal = 26;
	static const int32_t GE = 21;
	static const int32_t NAMESPACE = 48;
	static const int32_t SLASH = 2;
	static const int32_t PI = 35;
	static const int32_t COMMENT = 34;
	static const int32_t PIPARAM = 36;
	static const int32_t FOLLOWINGSIBLING = 47;
	static const int32_t ATSIGN = 12;
	static const int32_t DSLASH = 15;
	static const int32_t LPAREN = 7;
	static const int32_t EXPRESSION = 53;
	static const int32_t INT = 51;
	static const int32_t CHILD = 40;
	static const int32_t MINUS = 23;
	static const int32_t STAR = 9;
	static const int32_t DESCENDANTORSELF = 45;
	static const int32_t RPAREN = 8;
	static const int32_t AND = 33;
	static const int32_t LT = 18;
	static const int32_t OR = 32;
	static const int32_t COMMA = 10;
	static const int32_t DDOT = 13;
	static const int32_t DIV = 24;
	static const int32_t PLUS = 22;
	static const int32_t DOT = 3;
	static const int32_t ID = 28;
	static const int32_t LE = 20;
	static const int32_t QNAME = 27;
	static const int32_t DESCENDANT = 44;
	static const int32_t PRECEDINGSIBLING = 37;
	static const int32_t EOF = 0;
	static const int32_t error = 1;
	static const int32_t SELF = 38;
	static const int32_t VBAR = 6;
	static const int32_t MOD = 25;
	static const int32_t ANCESTORORSELF = 43;
	static const int32_t PRECEDING = 49;
	static const int32_t EQ = 16;
	static const int32_t PATTERN = 52;
	static const int32_t LBRACK = 4;
	static const int32_t REAL = 50;
	static const int32_t ANCESTOR = 42;
	static const int32_t RBRACK = 5;
	static const int32_t DCOLON = 14;
	static const int32_t DOLLAR = 11;
	static const int32_t NE = 17;
	static const int32_t PARENT = 39;
	static const int32_t FOLLOWING = 46;
	static const int32_t KEY = 29;
	static const int32_t TEXT = 30;
	static const int32_t ATTRIBUTE = 41;
	static const int32_t GT = 19;
	static const int32_t NODE = 31;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANCESTOR")
#pragma pop_macro("ANCESTORORSELF")
#pragma pop_macro("AND")
#pragma pop_macro("ATSIGN")
#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("CHILD")
#pragma pop_macro("COMMA")
#pragma pop_macro("COMMENT")
#pragma pop_macro("DCOLON")
#pragma pop_macro("DDOT")
#pragma pop_macro("DESCENDANT")
#pragma pop_macro("DESCENDANTORSELF")
#pragma pop_macro("DIV")
#pragma pop_macro("DOLLAR")
#pragma pop_macro("DOT")
#pragma pop_macro("DSLASH")
#pragma pop_macro("EOF")
#pragma pop_macro("EQ")
#pragma pop_macro("EXPRESSION")
#pragma pop_macro("FOLLOWING")
#pragma pop_macro("FOLLOWINGSIBLING")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("ID")
#pragma pop_macro("INT")
#pragma pop_macro("KEY")
#pragma pop_macro("LBRACK")
#pragma pop_macro("LE")
#pragma pop_macro("LPAREN")
#pragma pop_macro("LT")
#pragma pop_macro("MINUS")
#pragma pop_macro("MOD")
#pragma pop_macro("NAMESPACE")
#pragma pop_macro("NE")
#pragma pop_macro("NODE")
#pragma pop_macro("OR")
#pragma pop_macro("PARENT")
#pragma pop_macro("PATTERN")
#pragma pop_macro("PI")
#pragma pop_macro("PIPARAM")
#pragma pop_macro("PLUS")
#pragma pop_macro("PRECEDING")
#pragma pop_macro("PRECEDINGSIBLING")
#pragma pop_macro("QNAME")
#pragma pop_macro("RBRACK")
#pragma pop_macro("REAL")
#pragma pop_macro("RPAREN")
#pragma pop_macro("SELF")
#pragma pop_macro("SLASH")
#pragma pop_macro("STAR")
#pragma pop_macro("TEXT")
#pragma pop_macro("VBAR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_sym_h_