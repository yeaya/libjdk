#ifndef _com_sun_org_apache_xpath_internal_compiler_OpCodes_h_
#define _com_sun_org_apache_xpath_internal_compiler_OpCodes_h_
//$ class com.sun.org.apache.xpath.internal.compiler.OpCodes
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AXES_END_TYPES")
#undef AXES_END_TYPES
#pragma push_macro("AXES_START_TYPES")
#undef AXES_START_TYPES
#pragma push_macro("ELEMWILDCARD")
#undef ELEMWILDCARD
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("ENDOP")
#undef ENDOP
#pragma push_macro("FIRST_NODESET_OP")
#undef FIRST_NODESET_OP
#pragma push_macro("FROM_ANCESTORS")
#undef FROM_ANCESTORS
#pragma push_macro("FROM_ANCESTORS_OR_SELF")
#undef FROM_ANCESTORS_OR_SELF
#pragma push_macro("FROM_ATTRIBUTES")
#undef FROM_ATTRIBUTES
#pragma push_macro("FROM_CHILDREN")
#undef FROM_CHILDREN
#pragma push_macro("FROM_DESCENDANTS")
#undef FROM_DESCENDANTS
#pragma push_macro("FROM_DESCENDANTS_OR_SELF")
#undef FROM_DESCENDANTS_OR_SELF
#pragma push_macro("FROM_FOLLOWING")
#undef FROM_FOLLOWING
#pragma push_macro("FROM_FOLLOWING_SIBLINGS")
#undef FROM_FOLLOWING_SIBLINGS
#pragma push_macro("FROM_NAMESPACE")
#undef FROM_NAMESPACE
#pragma push_macro("FROM_PARENT")
#undef FROM_PARENT
#pragma push_macro("FROM_PRECEDING")
#undef FROM_PRECEDING
#pragma push_macro("FROM_PRECEDING_SIBLINGS")
#undef FROM_PRECEDING_SIBLINGS
#pragma push_macro("FROM_ROOT")
#undef FROM_ROOT
#pragma push_macro("FROM_SELF")
#undef FROM_SELF
#pragma push_macro("LAST_NODESET_OP")
#undef LAST_NODESET_OP
#pragma push_macro("MATCH_ANY_ANCESTOR")
#undef MATCH_ANY_ANCESTOR
#pragma push_macro("MATCH_ATTRIBUTE")
#undef MATCH_ATTRIBUTE
#pragma push_macro("MATCH_IMMEDIATE_ANCESTOR")
#undef MATCH_IMMEDIATE_ANCESTOR
#pragma push_macro("NEXT_FREE_ID")
#undef NEXT_FREE_ID
#pragma push_macro("NODENAME")
#undef NODENAME
#pragma push_macro("NODETYPE_ANYELEMENT")
#undef NODETYPE_ANYELEMENT
#pragma push_macro("NODETYPE_COMMENT")
#undef NODETYPE_COMMENT
#pragma push_macro("NODETYPE_FUNCTEST")
#undef NODETYPE_FUNCTEST
#pragma push_macro("NODETYPE_NODE")
#undef NODETYPE_NODE
#pragma push_macro("NODETYPE_PI")
#undef NODETYPE_PI
#pragma push_macro("NODETYPE_ROOT")
#undef NODETYPE_ROOT
#pragma push_macro("NODETYPE_TEXT")
#undef NODETYPE_TEXT
#pragma push_macro("OP_AND")
#undef OP_AND
#pragma push_macro("OP_ARGUMENT")
#undef OP_ARGUMENT
#pragma push_macro("OP_BOOL")
#undef OP_BOOL
#pragma push_macro("OP_DIV")
#undef OP_DIV
#pragma push_macro("OP_EQUALS")
#undef OP_EQUALS
#pragma push_macro("OP_EXTFUNCTION")
#undef OP_EXTFUNCTION
#pragma push_macro("OP_FUNCTION")
#undef OP_FUNCTION
#pragma push_macro("OP_GROUP")
#undef OP_GROUP
#pragma push_macro("OP_GT")
#undef OP_GT
#pragma push_macro("OP_GTE")
#undef OP_GTE
#pragma push_macro("OP_LITERAL")
#undef OP_LITERAL
#pragma push_macro("OP_LOCATIONPATH")
#undef OP_LOCATIONPATH
#pragma push_macro("OP_LOCATIONPATHPATTERN")
#undef OP_LOCATIONPATHPATTERN
#pragma push_macro("OP_LT")
#undef OP_LT
#pragma push_macro("OP_LTE")
#undef OP_LTE
#pragma push_macro("OP_MATCHPATTERN")
#undef OP_MATCHPATTERN
#pragma push_macro("OP_MINUS")
#undef OP_MINUS
#pragma push_macro("OP_MOD")
#undef OP_MOD
#pragma push_macro("OP_MULT")
#undef OP_MULT
#pragma push_macro("OP_NEG")
#undef OP_NEG
#pragma push_macro("OP_NOTEQUALS")
#undef OP_NOTEQUALS
#pragma push_macro("OP_NUMBER")
#undef OP_NUMBER
#pragma push_macro("OP_NUMBERLIT")
#undef OP_NUMBERLIT
#pragma push_macro("OP_OR")
#undef OP_OR
#pragma push_macro("OP_PLUS")
#undef OP_PLUS
#pragma push_macro("OP_PREDICATE")
#undef OP_PREDICATE
#pragma push_macro("OP_QUO")
#undef OP_QUO
#pragma push_macro("OP_STRING")
#undef OP_STRING
#pragma push_macro("OP_UNION")
#undef OP_UNION
#pragma push_macro("OP_VARIABLE")
#undef OP_VARIABLE
#pragma push_macro("OP_XPATH")
#undef OP_XPATH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export OpCodes : public ::java::lang::Object {
	$class(OpCodes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OpCodes();
	void init$();
	static const int32_t ENDOP = (-1);
	static const int32_t EMPTY = (-2);
	static const int32_t ELEMWILDCARD = (-3);
	static const int32_t OP_XPATH = 1;
	static const int32_t OP_OR = 2;
	static const int32_t OP_AND = 3;
	static const int32_t OP_NOTEQUALS = 4;
	static const int32_t OP_EQUALS = 5;
	static const int32_t OP_LTE = 6;
	static const int32_t OP_LT = 7;
	static const int32_t OP_GTE = 8;
	static const int32_t OP_GT = 9;
	static const int32_t OP_PLUS = 10;
	static const int32_t OP_MINUS = 11;
	static const int32_t OP_MULT = 12;
	static const int32_t OP_DIV = 13;
	static const int32_t OP_MOD = 14;
	static const int32_t OP_QUO = 15;
	static const int32_t OP_NEG = 16;
	static const int32_t OP_STRING = 17;
	static const int32_t OP_BOOL = 18;
	static const int32_t OP_NUMBER = 19;
	static const int32_t OP_UNION = 20;
	static const int32_t OP_LITERAL = 21;
	static const int32_t FIRST_NODESET_OP = 22;
	static const int32_t OP_VARIABLE = 22;
	static const int32_t OP_GROUP = 23;
	static const int32_t OP_EXTFUNCTION = 24;
	static const int32_t OP_FUNCTION = 25;
	static const int32_t LAST_NODESET_OP = 25;
	static const int32_t OP_ARGUMENT = 26;
	static const int32_t OP_NUMBERLIT = 27;
	static const int32_t OP_LOCATIONPATH = 28;
	static const int32_t OP_PREDICATE = 29;
	static const int32_t OP_MATCHPATTERN = 30;
	static const int32_t OP_LOCATIONPATHPATTERN = 31;
	static const int32_t NODETYPE_COMMENT = 1030;
	static const int32_t NODETYPE_TEXT = 1031;
	static const int32_t NODETYPE_PI = 1032;
	static const int32_t NODETYPE_NODE = 1033;
	static const int32_t NODENAME = 34;
	static const int32_t NODETYPE_ROOT = 35;
	static const int32_t NODETYPE_ANYELEMENT = 36;
	static const int32_t NODETYPE_FUNCTEST = 1034;
	static const int32_t AXES_START_TYPES = 37;
	static const int32_t FROM_ANCESTORS = 37;
	static const int32_t FROM_ANCESTORS_OR_SELF = 38;
	static const int32_t FROM_ATTRIBUTES = 39;
	static const int32_t FROM_CHILDREN = 40;
	static const int32_t FROM_DESCENDANTS = 41;
	static const int32_t FROM_DESCENDANTS_OR_SELF = 42;
	static const int32_t FROM_FOLLOWING = 43;
	static const int32_t FROM_FOLLOWING_SIBLINGS = 44;
	static const int32_t FROM_PARENT = 45;
	static const int32_t FROM_PRECEDING = 46;
	static const int32_t FROM_PRECEDING_SIBLINGS = 47;
	static const int32_t FROM_SELF = 48;
	static const int32_t FROM_NAMESPACE = 49;
	static const int32_t FROM_ROOT = 50;
	static const int32_t MATCH_ATTRIBUTE = 51;
	static const int32_t MATCH_ANY_ANCESTOR = 52;
	static const int32_t MATCH_IMMEDIATE_ANCESTOR = 53;
	static const int32_t AXES_END_TYPES = 53;
	static const int32_t NEXT_FREE_ID = 99;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AXES_END_TYPES")
#pragma pop_macro("AXES_START_TYPES")
#pragma pop_macro("ELEMWILDCARD")
#pragma pop_macro("EMPTY")
#pragma pop_macro("ENDOP")
#pragma pop_macro("FIRST_NODESET_OP")
#pragma pop_macro("FROM_ANCESTORS")
#pragma pop_macro("FROM_ANCESTORS_OR_SELF")
#pragma pop_macro("FROM_ATTRIBUTES")
#pragma pop_macro("FROM_CHILDREN")
#pragma pop_macro("FROM_DESCENDANTS")
#pragma pop_macro("FROM_DESCENDANTS_OR_SELF")
#pragma pop_macro("FROM_FOLLOWING")
#pragma pop_macro("FROM_FOLLOWING_SIBLINGS")
#pragma pop_macro("FROM_NAMESPACE")
#pragma pop_macro("FROM_PARENT")
#pragma pop_macro("FROM_PRECEDING")
#pragma pop_macro("FROM_PRECEDING_SIBLINGS")
#pragma pop_macro("FROM_ROOT")
#pragma pop_macro("FROM_SELF")
#pragma pop_macro("LAST_NODESET_OP")
#pragma pop_macro("MATCH_ANY_ANCESTOR")
#pragma pop_macro("MATCH_ATTRIBUTE")
#pragma pop_macro("MATCH_IMMEDIATE_ANCESTOR")
#pragma pop_macro("NEXT_FREE_ID")
#pragma pop_macro("NODENAME")
#pragma pop_macro("NODETYPE_ANYELEMENT")
#pragma pop_macro("NODETYPE_COMMENT")
#pragma pop_macro("NODETYPE_FUNCTEST")
#pragma pop_macro("NODETYPE_NODE")
#pragma pop_macro("NODETYPE_PI")
#pragma pop_macro("NODETYPE_ROOT")
#pragma pop_macro("NODETYPE_TEXT")
#pragma pop_macro("OP_AND")
#pragma pop_macro("OP_ARGUMENT")
#pragma pop_macro("OP_BOOL")
#pragma pop_macro("OP_DIV")
#pragma pop_macro("OP_EQUALS")
#pragma pop_macro("OP_EXTFUNCTION")
#pragma pop_macro("OP_FUNCTION")
#pragma pop_macro("OP_GROUP")
#pragma pop_macro("OP_GT")
#pragma pop_macro("OP_GTE")
#pragma pop_macro("OP_LITERAL")
#pragma pop_macro("OP_LOCATIONPATH")
#pragma pop_macro("OP_LOCATIONPATHPATTERN")
#pragma pop_macro("OP_LT")
#pragma pop_macro("OP_LTE")
#pragma pop_macro("OP_MATCHPATTERN")
#pragma pop_macro("OP_MINUS")
#pragma pop_macro("OP_MOD")
#pragma pop_macro("OP_MULT")
#pragma pop_macro("OP_NEG")
#pragma pop_macro("OP_NOTEQUALS")
#pragma pop_macro("OP_NUMBER")
#pragma pop_macro("OP_NUMBERLIT")
#pragma pop_macro("OP_OR")
#pragma pop_macro("OP_PLUS")
#pragma pop_macro("OP_PREDICATE")
#pragma pop_macro("OP_QUO")
#pragma pop_macro("OP_STRING")
#pragma pop_macro("OP_UNION")
#pragma pop_macro("OP_VARIABLE")
#pragma pop_macro("OP_XPATH")

#endif // _com_sun_org_apache_xpath_internal_compiler_OpCodes_h_