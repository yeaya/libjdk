#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xml/internal/utils/SAXSourceLocator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunctionAvailable.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/operations/And.h>
#include <com/sun/org/apache/xpath/internal/operations/Bool.h>
#include <com/sun/org/apache/xpath/internal/operations/Div.h>
#include <com/sun/org/apache/xpath/internal/operations/Equals.h>
#include <com/sun/org/apache/xpath/internal/operations/Gt.h>
#include <com/sun/org/apache/xpath/internal/operations/Gte.h>
#include <com/sun/org/apache/xpath/internal/operations/Lt.h>
#include <com/sun/org/apache/xpath/internal/operations/Lte.h>
#include <com/sun/org/apache/xpath/internal/operations/Minus.h>
#include <com/sun/org/apache/xpath/internal/operations/Mod.h>
#include <com/sun/org/apache/xpath/internal/operations/Mult.h>
#include <com/sun/org/apache/xpath/internal/operations/Neg.h>
#include <com/sun/org/apache/xpath/internal/operations/NotEquals.h>
#include <com/sun/org/apache/xpath/internal/operations/Number.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <com/sun/org/apache/xpath/internal/operations/Or.h>
#include <com/sun/org/apache/xpath/internal/operations/Plus.h>
#include <com/sun/org/apache/xpath/internal/operations/String.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/StackOverflowError.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef ANCESTOR
#undef ATTRIBUTE
#undef CHILD
#undef DEBUG
#undef EMPTY
#undef ENDOP
#undef ER_COMPILATION_TOO_MANY_OPERATION
#undef ER_FUNCTION_TOKEN_NOT_FOUND
#undef ER_INCORRECT_PROGRAMMER_ASSERTION
#undef ER_ONLY_ALLOWS
#undef ER_UNKNOWN_MATCH_OPERATION
#undef ER_UNKNOWN_OPCODE
#undef FROM_ANCESTORS_OR_SELF
#undef FROM_ATTRIBUTES
#undef FROM_DESCENDANTS_OR_SELF
#undef FROM_NAMESPACE
#undef FROM_ROOT
#undef FROM_SELF
#undef MAPINDEX_LENGTH
#undef MATCH_ANY_ANCESTOR
#undef MATCH_ATTRIBUTE
#undef MATCH_IMMEDIATE_ANCESTOR
#undef MAX_VALUE
#undef NODENAME
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
#undef PARENT
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_BYFUNCTION
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_ELEMENT
#undef SHOW_NAMESPACE
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $StepPatternArray = $Array<::com::sun::org::apache::xpath::internal::patterns::StepPattern>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $SAXSourceLocator = ::com::sun::org::apache::xml::internal::utils::SAXSourceLocator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $UnionPathIterator = ::com::sun::org::apache::xpath::internal::axes::UnionPathIterator;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $FuncExtFunction = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction;
using $FuncExtFunctionAvailable = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunctionAvailable;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $And = ::com::sun::org::apache::xpath::internal::operations::And;
using $Bool = ::com::sun::org::apache::xpath::internal::operations::Bool;
using $Div = ::com::sun::org::apache::xpath::internal::operations::Div;
using $Equals = ::com::sun::org::apache::xpath::internal::operations::Equals;
using $Gt = ::com::sun::org::apache::xpath::internal::operations::Gt;
using $Gte = ::com::sun::org::apache::xpath::internal::operations::Gte;
using $Lt = ::com::sun::org::apache::xpath::internal::operations::Lt;
using $Lte = ::com::sun::org::apache::xpath::internal::operations::Lte;
using $Minus = ::com::sun::org::apache::xpath::internal::operations::Minus;
using $Mod = ::com::sun::org::apache::xpath::internal::operations::Mod;
using $Mult = ::com::sun::org::apache::xpath::internal::operations::Mult;
using $Neg = ::com::sun::org::apache::xpath::internal::operations::Neg;
using $NotEquals = ::com::sun::org::apache::xpath::internal::operations::NotEquals;
using $Number = ::com::sun::org::apache::xpath::internal::operations::Number;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $Or = ::com::sun::org::apache::xpath::internal::operations::Or;
using $Plus = ::com::sun::org::apache::xpath::internal::operations::Plus;
using $1String = ::com::sun::org::apache::xpath::internal::operations::String;
using $UnaryOperation = ::com::sun::org::apache::xpath::internal::operations::UnaryOperation;
using $Variable = ::com::sun::org::apache::xpath::internal::operations::Variable;
using $FunctionPattern = ::com::sun::org::apache::xpath::internal::patterns::FunctionPattern;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $UnionPattern = ::com::sun::org::apache::xpath::internal::patterns::UnionPattern;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _Compiler_FieldInfo_[] = {
	{"countOp", "I", nullptr, 0, $field(Compiler, countOp)},
	{"locPathDepth", "I", nullptr, $PRIVATE, $field(Compiler, locPathDepth)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Compiler, DEBUG)},
	{"s_nextMethodId", "J", nullptr, $PRIVATE | $STATIC, $staticField(Compiler, s_nextMethodId)},
	{"m_currentPrefixResolver", "Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, $PRIVATE, $field(Compiler, m_currentPrefixResolver)},
	{"m_errorHandler", "Ljavax/xml/transform/ErrorListener;", nullptr, 0, $field(Compiler, m_errorHandler)},
	{"m_locator", "Ljavax/xml/transform/SourceLocator;", nullptr, 0, $field(Compiler, m_locator)},
	{"m_functionTable", "Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, $PRIVATE, $field(Compiler, m_functionTable)},
	{}
};

$MethodInfo _Compiler_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/transform/ErrorListener;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;)V", nullptr, $PUBLIC, $method(Compiler, init$, void, $ErrorListener*, $SourceLocator*, $FunctionTable*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Compiler, init$, void)},
	{"and", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, and$, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"arg", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, arg, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"assertion", "(ZLjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Compiler, assertion, void, bool, $String*)},
	{"bool", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, bool$, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"compile", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $method(Compiler, compile, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"compileExpression", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Compiler, compileExpression, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"compileExtension", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $method(Compiler, compileExtension, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"compileFunction", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $virtualMethod(Compiler, compileFunction, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"compileOperation", "(Lcom/sun/org/apache/xpath/internal/operations/Operation;I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $method(Compiler, compileOperation, $Expression*, $Operation*, int32_t), "javax.xml.transform.TransformerException"},
	{"compilePredicates", "(I[Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PRIVATE, $method(Compiler, compilePredicates, void, int32_t, $ExpressionArray*), "javax.xml.transform.TransformerException"},
	{"compileUnary", "(Lcom/sun/org/apache/xpath/internal/operations/UnaryOperation;I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $method(Compiler, compileUnary, $Expression*, $UnaryOperation*, int32_t), "javax.xml.transform.TransformerException"},
	{"countPredicates", "(I)I", nullptr, $PUBLIC, $virtualMethod(Compiler, countPredicates, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"div", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, div, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"equals", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, equals, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Compiler, error, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{"getCompiledPredicates", "(I)[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Compiler, getCompiledPredicates, $ExpressionArray*, int32_t), "javax.xml.transform.TransformerException"},
	{"getFunctionTable", "()Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, 0, $virtualMethod(Compiler, getFunctionTable, $FunctionTable*)},
	{"getLocationPathDepth", "()I", nullptr, $PUBLIC, $virtualMethod(Compiler, getLocationPathDepth, int32_t)},
	{"getNamespaceContext", "()Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, $PUBLIC, $virtualMethod(Compiler, getNamespaceContext, $PrefixResolver*)},
	{"getNextMethodId", "()J", nullptr, $PRIVATE | $SYNCHRONIZED, $method(Compiler, getNextMethodId, int64_t)},
	{"getWhatToShow", "(I)I", nullptr, $PUBLIC, $virtualMethod(Compiler, getWhatToShow, int32_t, int32_t)},
	{"group", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, group, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"gt", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, gt, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"gte", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, gte, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"literal", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, literal, $Expression*, int32_t)},
	{"locationPath", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Compiler, locationPath, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"locationPathPattern", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Compiler, locationPathPattern, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"lt", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, lt, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"lte", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, lte, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"matchPattern", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, matchPattern, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"minus", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, minus, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"mod", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, mod, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"mult", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, mult, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"neg", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, neg, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"notequals", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, notequals, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"number", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, number, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"numberlit", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, numberlit, $Expression*, int32_t)},
	{"or", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, or$, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"plus", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, plus, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"predicate", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Compiler, predicate, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"setNamespaceContext", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $virtualMethod(Compiler, setNamespaceContext, void, $PrefixResolver*)},
	{"stepPattern", "(IILcom/sun/org/apache/xpath/internal/patterns/StepPattern;)Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PROTECTED, $virtualMethod(Compiler, stepPattern, $StepPattern*, int32_t, int32_t, $StepPattern*), "javax.xml.transform.TransformerException"},
	{"string", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, string, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"union", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, union$, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"variable", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $virtualMethod(Compiler, variable, $Expression*, int32_t), "javax.xml.transform.TransformerException"},
	{"warn", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Compiler, warn, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Compiler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.Compiler",
	"com.sun.org.apache.xpath.internal.compiler.OpMap",
	nullptr,
	_Compiler_FieldInfo_,
	_Compiler_MethodInfo_
};

$Object* allocate$Compiler($Class* clazz) {
	return $of($alloc(Compiler));
}

int64_t Compiler::s_nextMethodId = 0;

void Compiler::init$($ErrorListener* errorHandler, $SourceLocator* locator, $FunctionTable* fTable) {
	$OpMap::init$();
	this->locPathDepth = -1;
	$set(this, m_currentPrefixResolver, nullptr);
	$set(this, m_errorHandler, errorHandler);
	$set(this, m_locator, locator);
	$set(this, m_functionTable, fTable);
}

void Compiler::init$() {
	$OpMap::init$();
	this->locPathDepth = -1;
	$set(this, m_currentPrefixResolver, nullptr);
	$set(this, m_errorHandler, nullptr);
	$set(this, m_locator, nullptr);
}

$Expression* Compiler::compileExpression(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	try {
		this->countOp = 0;
		return compile(opPos);
	} catch ($StackOverflowError& sof) {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_COMPILATION_TOO_MANY_OPERATION, $$new($ObjectArray, {$($of($Integer::valueOf(this->countOp)))}));
	}
	return nullptr;
}

$Expression* Compiler::compile(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	int32_t op = getOp(opPos);
	$var($Expression, expr, nullptr);
	switch (op) {
	case $OpCodes::OP_XPATH:
		{
			$assign(expr, compile(opPos + 2));
			break;
		}
	case $OpCodes::OP_OR:
		{
			$assign(expr, or$(opPos));
			break;
		}
	case $OpCodes::OP_AND:
		{
			$assign(expr, and$(opPos));
			break;
		}
	case $OpCodes::OP_NOTEQUALS:
		{
			$assign(expr, notequals(opPos));
			break;
		}
	case $OpCodes::OP_EQUALS:
		{
			$assign(expr, equals(opPos));
			break;
		}
	case $OpCodes::OP_LTE:
		{
			$assign(expr, lte(opPos));
			break;
		}
	case $OpCodes::OP_LT:
		{
			$assign(expr, lt(opPos));
			break;
		}
	case $OpCodes::OP_GTE:
		{
			$assign(expr, gte(opPos));
			break;
		}
	case $OpCodes::OP_GT:
		{
			$assign(expr, gt(opPos));
			break;
		}
	case $OpCodes::OP_PLUS:
		{
			$assign(expr, plus(opPos));
			break;
		}
	case $OpCodes::OP_MINUS:
		{
			$assign(expr, minus(opPos));
			break;
		}
	case $OpCodes::OP_MULT:
		{
			$assign(expr, mult(opPos));
			break;
		}
	case $OpCodes::OP_DIV:
		{
			$assign(expr, div(opPos));
			break;
		}
	case $OpCodes::OP_MOD:
		{
			$assign(expr, mod(opPos));
			break;
		}
	case $OpCodes::OP_NEG:
		{
			$assign(expr, neg(opPos));
			break;
		}
	case $OpCodes::OP_STRING:
		{
			$assign(expr, string(opPos));
			break;
		}
	case $OpCodes::OP_BOOL:
		{
			$assign(expr, bool$(opPos));
			break;
		}
	case $OpCodes::OP_NUMBER:
		{
			$assign(expr, number(opPos));
			break;
		}
	case $OpCodes::OP_UNION:
		{
			$assign(expr, union$(opPos));
			break;
		}
	case $OpCodes::OP_LITERAL:
		{
			$assign(expr, literal(opPos));
			break;
		}
	case $OpCodes::OP_VARIABLE:
		{
			$assign(expr, variable(opPos));
			break;
		}
	case $OpCodes::OP_GROUP:
		{
			$assign(expr, group(opPos));
			break;
		}
	case $OpCodes::OP_NUMBERLIT:
		{
			$assign(expr, numberlit(opPos));
			break;
		}
	case $OpCodes::OP_ARGUMENT:
		{
			$assign(expr, arg(opPos));
			break;
		}
	case $OpCodes::OP_EXTFUNCTION:
		{
			$assign(expr, compileExtension(opPos));
			break;
		}
	case $OpCodes::OP_FUNCTION:
		{
			$assign(expr, compileFunction(opPos));
			break;
		}
	case $OpCodes::OP_LOCATIONPATH:
		{
			$assign(expr, locationPath(opPos));
			break;
		}
	case $OpCodes::OP_PREDICATE:
		{
			$assign(expr, nullptr);
			break;
		}
	case $OpCodes::OP_MATCHPATTERN:
		{
			$assign(expr, matchPattern(opPos + 2));
			break;
		}
	case $OpCodes::OP_LOCATIONPATHPATTERN:
		{
			$assign(expr, locationPathPattern(opPos));
			break;
		}
	case $OpCodes::OP_QUO:
		{
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_UNKNOWN_OPCODE, $$new($ObjectArray, {$of("quo"_s)}));
			break;
		}
	default:
		{
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_UNKNOWN_OPCODE, $$new($ObjectArray, {$($of($Integer::toString(getOp(opPos))))}));
		}
	}
	return expr;
}

$Expression* Compiler::compileOperation($Operation* operation, int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	++this->countOp;
	int32_t leftPos = getFirstChildPos(opPos);
	int32_t rightPos = getNextOpPos(leftPos);
	$var($Expression, var$0, compile(leftPos));
	$nc(operation)->setLeftRight(var$0, $(compile(rightPos)));
	return operation;
}

$Expression* Compiler::compileUnary($UnaryOperation* unary, int32_t opPos) {
	int32_t rightPos = getFirstChildPos(opPos);
	$nc(unary)->setRight($(compile(rightPos)));
	return unary;
}

$Expression* Compiler::or$(int32_t opPos) {
	return compileOperation($$new($Or), opPos);
}

$Expression* Compiler::and$(int32_t opPos) {
	return compileOperation($$new($And), opPos);
}

$Expression* Compiler::notequals(int32_t opPos) {
	return compileOperation($$new($NotEquals), opPos);
}

$Expression* Compiler::equals(int32_t opPos) {
	return compileOperation($$new($Equals), opPos);
}

$Expression* Compiler::lte(int32_t opPos) {
	return compileOperation($$new($Lte), opPos);
}

$Expression* Compiler::lt(int32_t opPos) {
	return compileOperation($$new($Lt), opPos);
}

$Expression* Compiler::gte(int32_t opPos) {
	return compileOperation($$new($Gte), opPos);
}

$Expression* Compiler::gt(int32_t opPos) {
	return compileOperation($$new($Gt), opPos);
}

$Expression* Compiler::plus(int32_t opPos) {
	return compileOperation($$new($Plus), opPos);
}

$Expression* Compiler::minus(int32_t opPos) {
	return compileOperation($$new($Minus), opPos);
}

$Expression* Compiler::mult(int32_t opPos) {
	return compileOperation($$new($Mult), opPos);
}

$Expression* Compiler::div(int32_t opPos) {
	return compileOperation($$new($Div), opPos);
}

$Expression* Compiler::mod(int32_t opPos) {
	return compileOperation($$new($Mod), opPos);
}

$Expression* Compiler::neg(int32_t opPos) {
	return compileUnary($$new($Neg), opPos);
}

$Expression* Compiler::string(int32_t opPos) {
	return compileUnary($$new($1String), opPos);
}

$Expression* Compiler::bool$(int32_t opPos) {
	return compileUnary($$new($Bool), opPos);
}

$Expression* Compiler::number(int32_t opPos) {
	return compileUnary($$new($Number), opPos);
}

$Expression* Compiler::literal(int32_t opPos) {
	opPos = getFirstChildPos(opPos);
	return $cast($XString, $nc($(getTokenQueue()))->elementAt(getOp(opPos)));
}

$Expression* Compiler::numberlit(int32_t opPos) {
	opPos = getFirstChildPos(opPos);
	return $cast($XNumber, $nc($(getTokenQueue()))->elementAt(getOp(opPos)));
}

$Expression* Compiler::variable(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	$var($Variable, var, $new($Variable));
	opPos = getFirstChildPos(opPos);
	int32_t nsPos = getOp(opPos);
	$var($String, namespace$, ($OpCodes::EMPTY == nsPos) ? ($String*)nullptr : $cast($String, $nc($(getTokenQueue()))->elementAt(nsPos)));
	$var($String, localname, $cast($String, $nc($(getTokenQueue()))->elementAt(getOp(opPos + 1))));
	$var($QName, qname, $new($QName, namespace$, localname));
	var->setQName(qname);
	return var;
}

$Expression* Compiler::group(int32_t opPos) {
	return compile(opPos + 2);
}

$Expression* Compiler::arg(int32_t opPos) {
	return compile(opPos + 2);
}

$Expression* Compiler::union$(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	++this->locPathDepth;
	{
		$var($Throwable, var$0, nullptr);
		$var($Expression, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $UnionPathIterator::createUnionIterator(this, opPos));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			--this->locPathDepth;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t Compiler::getLocationPathDepth() {
	return this->locPathDepth;
}

$FunctionTable* Compiler::getFunctionTable() {
	return this->m_functionTable;
}

$Expression* Compiler::locationPath(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	++this->locPathDepth;
	{
		$var($Throwable, var$0, nullptr);
		$var($Expression, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($DTMIterator, iter, $WalkerFactory::newDTMIterator(this, opPos, (this->locPathDepth == 0)));
			$assign(var$2, $cast($Expression, iter));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			--this->locPathDepth;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Expression* Compiler::predicate(int32_t opPos) {
	return compile(opPos + 2);
}

$Expression* Compiler::matchPattern(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	++this->locPathDepth;
	{
		$var($Throwable, var$0, nullptr);
		$var($Expression, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t nextOpPos = opPos;
			int32_t i = 0;
			for (i = 0; getOp(nextOpPos) == $OpCodes::OP_LOCATIONPATHPATTERN; ++i) {
				nextOpPos = getNextOpPos(nextOpPos);
			}
			if (i == 1) {
				$assign(var$2, compile(opPos));
				return$1 = true;
				goto $finally;
			}
			$var($UnionPattern, up, $new($UnionPattern));
			$var($StepPatternArray, patterns, $new($StepPatternArray, i));
			for (i = 0; getOp(opPos) == $OpCodes::OP_LOCATIONPATHPATTERN; ++i) {
				nextOpPos = getNextOpPos(opPos);
				patterns->set(i, $cast($StepPattern, $(compile(opPos))));
				opPos = nextOpPos;
			}
			up->setPatterns(patterns);
			$assign(var$2, up);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			--this->locPathDepth;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Expression* Compiler::locationPathPattern(int32_t opPos) {
	opPos = getFirstChildPos(opPos);
	return stepPattern(opPos, 0, nullptr);
}

int32_t Compiler::getWhatToShow(int32_t opPos) {
	int32_t axesType = getOp(opPos);
	int32_t testType = getOp(opPos + 3);
	switch (testType) {
	case $OpCodes::NODETYPE_COMMENT:
		{
			return $DTMFilter::SHOW_COMMENT;
		}
	case $OpCodes::NODETYPE_TEXT:
		{
			return $DTMFilter::SHOW_TEXT | $DTMFilter::SHOW_CDATA_SECTION;
		}
	case $OpCodes::NODETYPE_PI:
		{
			return $DTMFilter::SHOW_PROCESSING_INSTRUCTION;
		}
	case $OpCodes::NODETYPE_NODE:
		{
			switch (axesType) {
			case $OpCodes::FROM_NAMESPACE:
				{
					return $DTMFilter::SHOW_NAMESPACE;
				}
			case $OpCodes::FROM_ATTRIBUTES:
				{}
			case $OpCodes::MATCH_ATTRIBUTE:
				{
					return $DTMFilter::SHOW_ATTRIBUTE;
				}
			case $OpCodes::FROM_SELF:
				{}
			case $OpCodes::FROM_ANCESTORS_OR_SELF:
				{}
			case $OpCodes::FROM_DESCENDANTS_OR_SELF:
				{
					return $DTMFilter::SHOW_ALL;
				}
			default:
				{
					if (getOp(0) == $OpCodes::OP_MATCHPATTERN) {
						return (int32_t)(((int32_t)(~$DTMFilter::SHOW_ATTRIBUTE & (uint32_t)~$DTMFilter::SHOW_DOCUMENT)) & (uint32_t)~$DTMFilter::SHOW_DOCUMENT_FRAGMENT);
					} else {
						return ~$DTMFilter::SHOW_ATTRIBUTE;
					}
				}
			}
		}
	case $OpCodes::NODETYPE_ROOT:
		{
			return $DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT;
		}
	case $OpCodes::NODETYPE_FUNCTEST:
		{
			return $NodeTest::SHOW_BYFUNCTION;
		}
	case $OpCodes::NODENAME:
		{
			switch (axesType) {
			case $OpCodes::FROM_NAMESPACE:
				{
					return $DTMFilter::SHOW_NAMESPACE;
				}
			case $OpCodes::FROM_ATTRIBUTES:
				{}
			case $OpCodes::MATCH_ATTRIBUTE:
				{
					return $DTMFilter::SHOW_ATTRIBUTE;
				}
			case $OpCodes::MATCH_ANY_ANCESTOR:
				{}
			case $OpCodes::MATCH_IMMEDIATE_ANCESTOR:
				{
					return $DTMFilter::SHOW_ELEMENT;
				}
			default:
				{
					return $DTMFilter::SHOW_ELEMENT;
				}
			}
		}
	default:
		{
			return $DTMFilter::SHOW_ALL;
		}
	}
}

$StepPattern* Compiler::stepPattern(int32_t opPos, int32_t stepCount, $StepPattern* ancestorPattern) {
	$useLocalCurrentObjectStackCache();
	int32_t startOpPos = opPos;
	int32_t stepType = getOp(opPos);
	if ($OpCodes::ENDOP == stepType) {
		return nullptr;
	}
	bool addMagicSelf = true;
	int32_t endStep = getNextOpPos(opPos);
	$var($StepPattern, pattern, nullptr);
	int32_t argLen = 0;
	{
		int32_t what = 0;
		switch (stepType) {
		case $OpCodes::OP_FUNCTION:
			{
				addMagicSelf = false;
				argLen = getOp(opPos + $OpMap::MAPINDEX_LENGTH);
				$assign(pattern, $new($FunctionPattern, $(compileFunction(opPos)), $Axis::PARENT, $Axis::CHILD));
				break;
			}
		case $OpCodes::FROM_ROOT:
			{
				addMagicSelf = false;
				argLen = getArgLengthOfStep(opPos);
				opPos = getFirstChildPosOfStep(opPos);
				$assign(pattern, $new($StepPattern, $DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT, $Axis::PARENT, $Axis::CHILD));
				break;
			}
		case $OpCodes::MATCH_ATTRIBUTE:
			{
				argLen = getArgLengthOfStep(opPos);
				opPos = getFirstChildPosOfStep(opPos);
				$var($String, var$0, getStepNS(startOpPos));
				$assign(pattern, $new($StepPattern, $DTMFilter::SHOW_ATTRIBUTE, var$0, $(getStepLocalName(startOpPos)), $Axis::PARENT, $Axis::ATTRIBUTE));
				break;
			}
		case $OpCodes::MATCH_ANY_ANCESTOR:
			{
				argLen = getArgLengthOfStep(opPos);
				opPos = getFirstChildPosOfStep(opPos);
				what = getWhatToShow(startOpPos);
				if (1280 == what) {
					addMagicSelf = false;
				}
				int32_t var$1 = getWhatToShow(startOpPos);
				$var($String, var$2, getStepNS(startOpPos));
				$assign(pattern, $new($StepPattern, var$1, var$2, $(getStepLocalName(startOpPos)), $Axis::ANCESTOR, $Axis::CHILD));
				break;
			}
		case $OpCodes::MATCH_IMMEDIATE_ANCESTOR:
			{
				argLen = getArgLengthOfStep(opPos);
				opPos = getFirstChildPosOfStep(opPos);
				int32_t var$3 = getWhatToShow(startOpPos);
				$var($String, var$4, getStepNS(startOpPos));
				$assign(pattern, $new($StepPattern, var$3, var$4, $(getStepLocalName(startOpPos)), $Axis::PARENT, $Axis::CHILD));
				break;
			}
		default:
			{
				$init($XPATHErrorResources);
				error($XPATHErrorResources::ER_UNKNOWN_MATCH_OPERATION, nullptr);
				return nullptr;
			}
		}
	}
	$nc(pattern)->setPredicates($(getCompiledPredicates(opPos + argLen)));
	if (nullptr == ancestorPattern) {
	} else {
		pattern->setRelativePathPattern(ancestorPattern);
	}
	$var($StepPattern, relativePathPattern, stepPattern(endStep, stepCount + 1, pattern));
	return (nullptr != relativePathPattern) ? relativePathPattern : pattern;
}

$ExpressionArray* Compiler::getCompiledPredicates(int32_t opPos) {
	int32_t count = countPredicates(opPos);
	if (count > 0) {
		$var($ExpressionArray, predicates, $new($ExpressionArray, count));
		compilePredicates(opPos, predicates);
		return predicates;
	}
	return nullptr;
}

int32_t Compiler::countPredicates(int32_t opPos) {
	int32_t count = 0;
	while ($OpCodes::OP_PREDICATE == getOp(opPos)) {
		++count;
		opPos = getNextOpPos(opPos);
	}
	return count;
}

void Compiler::compilePredicates(int32_t opPos, $ExpressionArray* predicates) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; $OpCodes::OP_PREDICATE == getOp(opPos); ++i) {
		$nc(predicates)->set(i, $(predicate(opPos)));
		opPos = getNextOpPos(opPos);
	}
}

$Expression* Compiler::compileFunction(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	int32_t endFunc = opPos + getOp(opPos + 1) - 1;
	opPos = getFirstChildPos(opPos);
	int32_t funcID = getOp(opPos);
	++opPos;
	if (-1 != funcID) {
		$var($Function, func, $nc(this->m_functionTable)->getFunction(funcID));
		if ($instanceOf($FuncExtFunctionAvailable, func)) {
			$nc(($cast($FuncExtFunctionAvailable, func)))->setFunctionTable(this->m_functionTable);
		}
		$nc(func)->postCompileStep(this);
		try {
			int32_t i = 0;
			for (int32_t p = opPos; p < endFunc; p = getNextOpPos(p), ++i) {
				func->setArg($(compile(p)), i);
			}
			func->checkNumberArgs(i);
		} catch ($WrongNumberArgsException& wnae) {
			$var($String, name, $nc(this->m_functionTable)->getFunctionName(funcID));
			$init($XPATHErrorResources);
			$nc(this->m_errorHandler)->fatalError($$new($TransformerException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ONLY_ALLOWS, $$new($ObjectArray, {
				$of(name),
				$($of(wnae->getMessage()))
			}))), this->m_locator));
		}
		return func;
	} else {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_FUNCTION_TOKEN_NOT_FOUND, nullptr);
		return nullptr;
	}
}

int64_t Compiler::getNextMethodId() {
	$synchronized(this) {
		if (Compiler::s_nextMethodId == $Long::MAX_VALUE) {
			Compiler::s_nextMethodId = 0;
		}
		return Compiler::s_nextMethodId++;
	}
}

$Expression* Compiler::compileExtension(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	int32_t endExtFunc = opPos + getOp(opPos + 1) - 1;
	opPos = getFirstChildPos(opPos);
	$var($String, ns, $cast($String, $nc($(getTokenQueue()))->elementAt(getOp(opPos))));
	++opPos;
	$var($String, funcName, $cast($String, $nc($(getTokenQueue()))->elementAt(getOp(opPos))));
	++opPos;
	$var($Function, extension, $new($FuncExtFunction, ns, funcName, $($String::valueOf(getNextMethodId()))));
	try {
		int32_t i = 0;
		while (opPos < endExtFunc) {
			int32_t nextOpPos = getNextOpPos(opPos);
			extension->setArg($(this->compile(opPos)), i);
			opPos = nextOpPos;
			++i;
		}
	} catch ($WrongNumberArgsException& wnae) {
	}
	return extension;
}

void Compiler::warn($String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHWarning(msg, args));
	if (nullptr != this->m_errorHandler) {
		$nc(this->m_errorHandler)->warning($$new($TransformerException, fmsg, this->m_locator));
	} else {
		$var($String, var$2, $$str({fmsg, "; file "_s, $($nc(this->m_locator)->getSystemId()), "; line "_s}));
		$var($String, var$1, $$concat(var$2, $$str($nc(this->m_locator)->getLineNumber())));
		$var($String, var$0, $$concat(var$1, "; column "_s));
		$nc($System::out)->println($$concat(var$0, $$str($nc(this->m_locator)->getColumnNumber())));
	}
}

void Compiler::assertion(bool b, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (!b) {
		$init($XPATHErrorResources);
		$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of(msg)})));
		$throwNew($RuntimeException, fMsg);
	}
}

void Compiler::error($String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	if (nullptr != this->m_errorHandler) {
		$nc(this->m_errorHandler)->fatalError($$new($TransformerException, fmsg, this->m_locator));
	} else {
		$throwNew($TransformerException, fmsg, $cast($SAXSourceLocator, this->m_locator));
	}
}

$PrefixResolver* Compiler::getNamespaceContext() {
	return this->m_currentPrefixResolver;
}

void Compiler::setNamespaceContext($PrefixResolver* pr) {
	$set(this, m_currentPrefixResolver, pr);
}

void clinit$Compiler($Class* class$) {
	Compiler::s_nextMethodId = 0;
}

Compiler::Compiler() {
}

$Class* Compiler::load$($String* name, bool initialize) {
	$loadClass(Compiler, name, initialize, &_Compiler_ClassInfo_, clinit$Compiler, allocate$Compiler);
	return class$;
}

$Class* Compiler::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com