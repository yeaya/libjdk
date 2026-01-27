#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>

#include <jcpp.h>

#undef AXES_END_TYPES
#undef AXES_START_TYPES
#undef ELEMWILDCARD
#undef EMPTY
#undef ENDOP
#undef FIRST_NODESET_OP
#undef FROM_ANCESTORS
#undef FROM_ANCESTORS_OR_SELF
#undef FROM_ATTRIBUTES
#undef FROM_CHILDREN
#undef FROM_DESCENDANTS
#undef FROM_DESCENDANTS_OR_SELF
#undef FROM_FOLLOWING
#undef FROM_FOLLOWING_SIBLINGS
#undef FROM_NAMESPACE
#undef FROM_PARENT
#undef FROM_PRECEDING
#undef FROM_PRECEDING_SIBLINGS
#undef FROM_ROOT
#undef FROM_SELF
#undef LAST_NODESET_OP
#undef MATCH_ANY_ANCESTOR
#undef MATCH_ATTRIBUTE
#undef MATCH_IMMEDIATE_ANCESTOR
#undef NEXT_FREE_ID
#undef NODENAME
#undef NODETYPE_ANYELEMENT
#undef NODETYPE_COMMENT
#undef NODETYPE_FUNCTEST
#undef NODETYPE_NODE
#undef NODETYPE_PI
#undef NODETYPE_ROOT
#undef NODETYPE_TEXT
#undef OP_AND
#undef OP_ARGUMENT
#undef OP_BOOL
#undef OP_DIV
#undef OP_EQUALS
#undef OP_EXTFUNCTION
#undef OP_FUNCTION
#undef OP_GROUP
#undef OP_GT
#undef OP_GTE
#undef OP_LITERAL
#undef OP_LOCATIONPATH
#undef OP_LOCATIONPATHPATTERN
#undef OP_LT
#undef OP_LTE
#undef OP_MATCHPATTERN
#undef OP_MINUS
#undef OP_MOD
#undef OP_MULT
#undef OP_NEG
#undef OP_NOTEQUALS
#undef OP_NUMBER
#undef OP_NUMBERLIT
#undef OP_OR
#undef OP_PLUS
#undef OP_PREDICATE
#undef OP_QUO
#undef OP_STRING
#undef OP_UNION
#undef OP_VARIABLE
#undef OP_XPATH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _OpCodes_FieldInfo_[] = {
	{"ENDOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, ENDOP)},
	{"EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, EMPTY)},
	{"ELEMWILDCARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, ELEMWILDCARD)},
	{"OP_XPATH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_XPATH)},
	{"OP_OR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_OR)},
	{"OP_AND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_AND)},
	{"OP_NOTEQUALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_NOTEQUALS)},
	{"OP_EQUALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_EQUALS)},
	{"OP_LTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_LTE)},
	{"OP_LT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_LT)},
	{"OP_GTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_GTE)},
	{"OP_GT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_GT)},
	{"OP_PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_PLUS)},
	{"OP_MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_MINUS)},
	{"OP_MULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_MULT)},
	{"OP_DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_DIV)},
	{"OP_MOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_MOD)},
	{"OP_QUO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_QUO)},
	{"OP_NEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_NEG)},
	{"OP_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_STRING)},
	{"OP_BOOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_BOOL)},
	{"OP_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_NUMBER)},
	{"OP_UNION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_UNION)},
	{"OP_LITERAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_LITERAL)},
	{"FIRST_NODESET_OP", "I", nullptr, $STATIC | $FINAL, $constField(OpCodes, FIRST_NODESET_OP)},
	{"OP_VARIABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_VARIABLE)},
	{"OP_GROUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_GROUP)},
	{"OP_EXTFUNCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_EXTFUNCTION)},
	{"OP_FUNCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_FUNCTION)},
	{"LAST_NODESET_OP", "I", nullptr, $STATIC | $FINAL, $constField(OpCodes, LAST_NODESET_OP)},
	{"OP_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_ARGUMENT)},
	{"OP_NUMBERLIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_NUMBERLIT)},
	{"OP_LOCATIONPATH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_LOCATIONPATH)},
	{"OP_PREDICATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_PREDICATE)},
	{"OP_MATCHPATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_MATCHPATTERN)},
	{"OP_LOCATIONPATHPATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, OP_LOCATIONPATHPATTERN)},
	{"NODETYPE_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_COMMENT)},
	{"NODETYPE_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_TEXT)},
	{"NODETYPE_PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_PI)},
	{"NODETYPE_NODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_NODE)},
	{"NODENAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODENAME)},
	{"NODETYPE_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_ROOT)},
	{"NODETYPE_ANYELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_ANYELEMENT)},
	{"NODETYPE_FUNCTEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, NODETYPE_FUNCTEST)},
	{"AXES_START_TYPES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, AXES_START_TYPES)},
	{"FROM_ANCESTORS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_ANCESTORS)},
	{"FROM_ANCESTORS_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_ANCESTORS_OR_SELF)},
	{"FROM_ATTRIBUTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_ATTRIBUTES)},
	{"FROM_CHILDREN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_CHILDREN)},
	{"FROM_DESCENDANTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_DESCENDANTS)},
	{"FROM_DESCENDANTS_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_DESCENDANTS_OR_SELF)},
	{"FROM_FOLLOWING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_FOLLOWING)},
	{"FROM_FOLLOWING_SIBLINGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_FOLLOWING_SIBLINGS)},
	{"FROM_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_PARENT)},
	{"FROM_PRECEDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_PRECEDING)},
	{"FROM_PRECEDING_SIBLINGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_PRECEDING_SIBLINGS)},
	{"FROM_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_SELF)},
	{"FROM_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_NAMESPACE)},
	{"FROM_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, FROM_ROOT)},
	{"MATCH_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, MATCH_ATTRIBUTE)},
	{"MATCH_ANY_ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, MATCH_ANY_ANCESTOR)},
	{"MATCH_IMMEDIATE_ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, MATCH_IMMEDIATE_ANCESTOR)},
	{"AXES_END_TYPES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpCodes, AXES_END_TYPES)},
	{"NEXT_FREE_ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpCodes, NEXT_FREE_ID)},
	{}
};

$MethodInfo _OpCodes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OpCodes, init$, void)},
	{}
};

$ClassInfo _OpCodes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.OpCodes",
	"java.lang.Object",
	nullptr,
	_OpCodes_FieldInfo_,
	_OpCodes_MethodInfo_
};

$Object* allocate$OpCodes($Class* clazz) {
	return $of($alloc(OpCodes));
}

void OpCodes::init$() {
}

OpCodes::OpCodes() {
}

$Class* OpCodes::load$($String* name, bool initialize) {
	$loadClass(OpCodes, name, initialize, &_OpCodes_ClassInfo_, allocate$OpCodes);
	return class$;
}

$Class* OpCodes::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com