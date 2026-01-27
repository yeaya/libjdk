#include <com/sun/org/apache/xalan/internal/xsltc/compiler/parser_actions.h>

#include <com/sun/java_cup/internal/runtime/Symbol.h>
#include <com/sun/java_cup/internal/runtime/lr_parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsoluteLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsolutePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AlternativePattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AncestorPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BinOpExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BooleanCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BooleanExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CeilingCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ConcatCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ContainsCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CurrentCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DocumentCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ElementAvailableCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/EqualityExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FilterExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FilterParentPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FloorCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FormatNumberCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionAvailableCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/GenerateIdCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IntExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LangCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LastCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocalNameCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LogicalExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NamespaceUriCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NotCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NumberCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParameterRef.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/PositionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ProcessingInstructionPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RealExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelationalExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RoundCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StartsWithCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StringCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StringLengthCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnaryOpExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnionPathExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnparsedEntityUriCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnresolvedRef.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRef.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Stack.h>
#include <jcpp.h>

#undef ANCESTOR
#undef ANCESTORORSELF
#undef AND
#undef ANODE
#undef ATTRIBUTE
#undef CHILD
#undef COMMENT
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DIV
#undef ELEMENT_NODE
#undef EQ
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef GE
#undef GT
#undef LE
#undef LT
#undef MAX_VALUE
#undef MINUS
#undef MIN_VALUE
#undef MOD
#undef NAMESPACE
#undef NE
#undef NO_TYPE
#undef OR
#undef PARENT
#undef PI
#undef PLUS
#undef PRECEDING
#undef PRECEDINGSIBLING
#undef SELF
#undef TEXT
#undef TIMES
#undef TRANSLET_URI

using $Symbol = ::com::sun::java_cup::internal::runtime::Symbol;
using $lr_parser = ::com::sun::java_cup::internal::runtime::lr_parser;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $AbsoluteLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AbsoluteLocationPath;
using $AbsolutePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AbsolutePathPattern;
using $AlternativePattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AlternativePattern;
using $AncestorPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AncestorPattern;
using $BinOpExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::BinOpExpr;
using $BooleanCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::BooleanCall;
using $BooleanExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::BooleanExpr;
using $CastCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastCall;
using $CeilingCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CeilingCall;
using $ConcatCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ConcatCall;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $ContainsCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ContainsCall;
using $CurrentCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CurrentCall;
using $DocumentCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::DocumentCall;
using $ElementAvailableCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ElementAvailableCall;
using $EqualityExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::EqualityExpr;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FilterExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FilterExpr;
using $FilterParentPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FilterParentPath;
using $FloorCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FloorCall;
using $FormatNumberCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FormatNumberCall;
using $FunctionAvailableCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionAvailableCall;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $GenerateIdCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::GenerateIdCall;
using $IdKeyPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern;
using $IdPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdPattern;
using $IntExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IntExpr;
using $KeyCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::KeyCall;
using $KeyPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::KeyPattern;
using $LangCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LangCall;
using $LastCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LastCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $LocalNameCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocalNameCall;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $LogicalExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LogicalExpr;
using $NameBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameBase;
using $NameCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameCall;
using $NamespaceUriCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NamespaceUriCall;
using $NodeTest = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest;
using $NotCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NotCall;
using $NumberCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NumberCall;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $ParameterRef = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParameterRef;
using $ParentLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParentLocationPath;
using $ParentPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParentPattern;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $PositionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::PositionCall;
using $Predicate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Predicate;
using $ProcessingInstructionPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ProcessingInstructionPattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $RealExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RealExpr;
using $RelationalExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelationalExpr;
using $RelativeLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $RoundCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RoundCall;
using $StartsWithCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StartsWithCall;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $StringCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StringCall;
using $StringLengthCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StringLengthCall;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $UnaryOpExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnaryOpExpr;
using $UnionPathExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnionPathExpr;
using $UnparsedEntityUriCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnparsedEntityUriCall;
using $UnresolvedRef = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnresolvedRef;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableRef = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRef;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $XPathParser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser;
using $Operators = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Operators;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _parser_actions_FieldInfo_[] = {
	{"parser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser;", nullptr, $PRIVATE | $FINAL, $field(parser_actions, parser)},
	{}
};

$MethodInfo _parser_actions_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser;)V", nullptr, 0, $method(parser_actions, init$, void, $XPathParser*)},
	{"parser_do_action", "(ILcom/sun/java_cup/internal/runtime/lr_parser;Ljava/util/Stack;I)Lcom/sun/java_cup/internal/runtime/Symbol;", "(ILcom/sun/java_cup/internal/runtime/lr_parser;Ljava/util/Stack<Lcom/sun/java_cup/internal/runtime/Symbol;>;I)Lcom/sun/java_cup/internal/runtime/Symbol;", $PUBLIC | $FINAL, $method(parser_actions, parser_do_action, $Symbol*, int32_t, $lr_parser*, $Stack*, int32_t), "java.lang.Exception"},
	{}
};

$ClassInfo _parser_actions_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.parser_actions",
	"java.lang.Object",
	nullptr,
	_parser_actions_FieldInfo_,
	_parser_actions_MethodInfo_
};

$Object* allocate$parser_actions($Class* clazz) {
	return $of($alloc(parser_actions));
}

void parser_actions::init$($XPathParser* parser) {
	$set(this, parser, parser);
}

$Symbol* parser_actions::parser_do_action(int32_t parser_act_num, $lr_parser* parser_parser, $Stack* parser_stack, int32_t parser_top) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, parser_result, nullptr);
	switch (parser_act_num) {
	case 0:
		{
			{
				$var($SyntaxTreeNode, start_val, $cast($SyntaxTreeNode, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				int32_t var$0 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 0, var$0, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, start_val));
			}
			$nc(parser_parser)->done_parsing();
			return parser_result;
		}
	case 1:
		{
			{
				$var($Pattern, pattern, $cast($Pattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$1 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 1, var$1, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, pattern));
			}
			return parser_result;
		}
	case 2:
		{
			{
				$var($Expression, expr, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$2 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 1, var$2, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, expr));
			}
			return parser_result;
		}
	case 3:
		{
			{
				$var($Pattern, lpp, $cast($Pattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$3 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 28, var$3, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, lpp));
			}
			return parser_result;
		}
	case 4:
		{
			{
				$var($Pattern, lpp, $cast($Pattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Pattern, p, $cast($Pattern, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Pattern, result, $new($AlternativePattern, lpp, p));
				int32_t var$4 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 28, var$4, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 5:
		{
			{
				$var($Pattern, result, $new($AbsolutePathPattern, nullptr));
				int32_t var$5 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$5, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 6:
		{
			{
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($Pattern, result, $new($AbsolutePathPattern, rpp));
				int32_t var$6 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$6, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 7:
		{
			{
				$var($IdKeyPattern, ikp, $cast($IdKeyPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$7 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$7, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ikp));
			}
			return parser_result;
		}
	case 8:
		{
			{
				$var($IdKeyPattern, ikp, $cast($IdKeyPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Pattern, result, $new($ParentPattern, ikp, rpp));
				int32_t var$8 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$8, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 9:
		{
			{
				$var($IdKeyPattern, ikp, $cast($IdKeyPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Pattern, result, $new($AncestorPattern, ikp, rpp));
				int32_t var$9 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$9, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 10:
		{
			{
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($Pattern, result, $new($AncestorPattern, rpp));
				int32_t var$10 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$10, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 11:
		{
			{
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$11 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 29, var$11, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, rpp));
			}
			return parser_result;
		}
	case 12:
		{
			{
				$var($String, l, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($IdKeyPattern, result, $new($IdPattern, l));
				$nc(this->parser)->setHasIdCall(true);
				int32_t var$12 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 3)))))->left;
				$assign(parser_result, $new($Symbol, 27, var$12, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 13:
		{
			{
				$var($String, l1, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 3)))))->value));
				$var($String, l2, $cast($String, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->value));
				$var($IdKeyPattern, result, $new($KeyPattern, l1, l2));
				int32_t var$13 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 5)))))->left;
				$assign(parser_result, $new($Symbol, 27, var$13, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 14:
		{
			{
				$var($String, l, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($StepPattern, result, $new($ProcessingInstructionPattern, l));
				int32_t var$14 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 3)))))->left;
				$assign(parser_result, $new($Symbol, 30, var$14, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 15:
		{
			{
				$var($StepPattern, sp, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$15 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 31, var$15, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, sp));
			}
			return parser_result;
		}
	case 16:
		{
			{
				$var($StepPattern, sp, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($RelativePathPattern, result, $new($ParentPattern, sp, rpp));
				int32_t var$16 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 31, var$16, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 17:
		{
			{
				$var($StepPattern, sp, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($RelativePathPattern, rpp, $cast($RelativePathPattern, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($RelativePathPattern, result, $new($AncestorPattern, sp, rpp));
				int32_t var$17 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 31, var$17, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 18:
		{
			{
				$var($Object, nt, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value);
				$var($StepPattern, result, $nc(this->parser)->createStepPattern($Axis::CHILD, nt, nullptr));
				int32_t var$18 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$18, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 19:
		{
			{
				$var($Object, nt, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value);
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($StepPattern, result, $nc(this->parser)->createStepPattern($Axis::CHILD, nt, pp));
				int32_t var$19 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$19, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 20:
		{
			{
				$var($StepPattern, pip, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$20 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$20, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, pip));
			}
			return parser_result;
		}
	case 21:
		{
			{
				$var($StepPattern, pip, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($StepPattern, result, $cast($ProcessingInstructionPattern, $nc(pip)->setPredicates(pp)));
				int32_t var$21 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$21, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 22:
		{
			{
				$var($Integer, axis, $cast($Integer, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($Object, nt, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value);
				$var($StepPattern, result, $nc(this->parser)->createStepPattern($nc(axis)->intValue(), nt, nullptr));
				int32_t var$22 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$22, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 23:
		{
			{
				$var($Integer, axis, $cast($Integer, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Object, nt, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->value);
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($StepPattern, result, $nc(this->parser)->createStepPattern($nc(axis)->intValue(), nt, pp));
				int32_t var$23 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$23, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 24:
		{
			{
				$var($StepPattern, pip, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($StepPattern, result, pip);
				int32_t var$24 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$24, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 25:
		{
			{
				$var($StepPattern, pip, $cast($StepPattern, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($StepPattern, result, $cast($ProcessingInstructionPattern, $nc(pip)->setPredicates(pp)));
				int32_t var$25 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 32, var$25, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 26:
		{
			{
				$var($Object, nt, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value);
				int32_t var$26 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 33, var$26, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, nt));
			}
			return parser_result;
		}
	case 27:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::ANODE));
				int32_t var$27 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 33, var$27, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 28:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::TEXT));
				int32_t var$28 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 33, var$28, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 29:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::COMMENT));
				int32_t var$29 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 33, var$29, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 30:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::PI));
				int32_t var$30 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 33, var$30, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 31:
		{
			{
				$var($Object, result, nullptr);
				int32_t var$31 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 34, var$31, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 32:
		{
			{
				$var($QName, qn, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$32 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 34, var$32, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, qn));
			}
			return parser_result;
		}
	case 33:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ATTRIBUTE));
				int32_t var$33 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 42, var$33, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 34:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::CHILD));
				int32_t var$34 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 42, var$34, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 35:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ATTRIBUTE));
				int32_t var$35 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 42, var$35, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 36:
		{
			{
				$var($Expression, p, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($List, temp, $new($ArrayList));
				temp->add(p);
				int32_t var$36 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 35, var$36, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, temp));
			}
			return parser_result;
		}
	case 37:
		{
			{
				$var($Expression, p, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$nc(pp)->add(0, p);
				int32_t var$37 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 35, var$37, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, pp));
			}
			return parser_result;
		}
	case 38:
		{
			{
				$var($Expression, e, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($Expression, result, $new($Predicate, e));
				int32_t var$38 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 5, var$38, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 39:
		{
			{
				$var($Expression, ex, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$39 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 2, var$39, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ex));
			}
			return parser_result;
		}
	case 40:
		{
			{
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$40 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 8, var$40, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ae));
			}
			return parser_result;
		}
	case 41:
		{
			{
				$var($Expression, oe, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($LogicalExpr, $LogicalExpr::OR, oe, ae));
				int32_t var$41 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 8, var$41, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 42:
		{
			{
				$var($Expression, e, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$42 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 9, var$42, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, e));
			}
			return parser_result;
		}
	case 43:
		{
			{
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ee, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($LogicalExpr, $LogicalExpr::AND, ae, ee));
				int32_t var$43 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 9, var$43, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 44:
		{
			{
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$44 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 10, var$44, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, re));
			}
			return parser_result;
		}
	case 45:
		{
			{
				$var($Expression, ee, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($EqualityExpr, $Operators::EQ, ee, re));
				int32_t var$45 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 10, var$45, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 46:
		{
			{
				$var($Expression, ee, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($EqualityExpr, $Operators::NE, ee, re));
				int32_t var$46 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 10, var$46, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 47:
		{
			{
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$47 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 11, var$47, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ae));
			}
			return parser_result;
		}
	case 48:
		{
			{
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($RelationalExpr, $Operators::LT, re, ae));
				int32_t var$48 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 11, var$48, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 49:
		{
			{
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($RelationalExpr, $Operators::GT, re, ae));
				int32_t var$49 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 11, var$49, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 50:
		{
			{
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($RelationalExpr, $Operators::LE, re, ae));
				int32_t var$50 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 11, var$50, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 51:
		{
			{
				$var($Expression, re, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($RelationalExpr, $Operators::GE, re, ae));
				int32_t var$51 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 11, var$51, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 52:
		{
			{
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$52 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 12, var$52, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, me));
			}
			return parser_result;
		}
	case 53:
		{
			{
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($BinOpExpr, $BinOpExpr::PLUS, ae, me));
				int32_t var$53 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 12, var$53, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 54:
		{
			{
				$var($Expression, ae, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($BinOpExpr, $BinOpExpr::MINUS, ae, me));
				int32_t var$54 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 12, var$54, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 55:
		{
			{
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$55 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 13, var$55, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ue));
			}
			return parser_result;
		}
	case 56:
		{
			{
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($BinOpExpr, $BinOpExpr::TIMES, me, ue));
				int32_t var$56 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 13, var$56, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 57:
		{
			{
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($BinOpExpr, $BinOpExpr::DIV, me, ue));
				int32_t var$57 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 13, var$57, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 58:
		{
			{
				$var($Expression, me, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($BinOpExpr, $BinOpExpr::MOD, me, ue));
				int32_t var$58 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 13, var$58, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 59:
		{
			{
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$59 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 14, var$59, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ue));
			}
			return parser_result;
		}
	case 60:
		{
			{
				$var($Expression, ue, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($UnaryOpExpr, ue));
				int32_t var$60 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 14, var$60, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 61:
		{
			{
				$var($Expression, pe, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$61 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 18, var$61, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, pe));
			}
			return parser_result;
		}
	case 62:
		{
			{
				$var($Expression, pe, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, rest, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($UnionPathExpr, pe, rest));
				int32_t var$62 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 18, var$62, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 63:
		{
			{
				$var($Expression, lp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$63 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 19, var$63, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, lp));
			}
			return parser_result;
		}
	case 64:
		{
			{
				$var($Expression, fexp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$64 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 19, var$64, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, fexp));
			}
			return parser_result;
		}
	case 65:
		{
			{
				$var($Expression, fexp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($FilterParentPath, fexp, rlp));
				int32_t var$65 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 19, var$65, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 66:
		{
			{
				$var($Expression, fexp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				int32_t nodeType = $DOM::NO_TYPE;
				if ($instanceOf($Step, rlp) && $nc(this->parser)->isElementAxis($nc(($cast($Step, rlp)))->getAxis())) {
					nodeType = $DTM::ELEMENT_NODE;
				}
				$var($Step, step, $new($Step, $Axis::DESCENDANTORSELF, nodeType, nullptr));
				$var($FilterParentPath, fpp, $new($FilterParentPath, fexp, step));
				$assign(fpp, $new($FilterParentPath, fpp, rlp));
				if ($instanceOf($KeyCall, fexp) == false) {
					fpp->setDescendantAxis();
				}
				int32_t var$66 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 19, var$66, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, fpp));
			}
			return parser_result;
		}
	case 67:
		{
			{
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$67 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 4, var$67, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, rlp));
			}
			return parser_result;
		}
	case 68:
		{
			{
				$var($Expression, alp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$68 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 4, var$68, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, alp));
			}
			return parser_result;
		}
	case 69:
		{
			{
				$var($Expression, step, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$69 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 21, var$69, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, step));
			}
			return parser_result;
		}
	case 70:
		{
			{
				$var($Expression, result, nullptr);
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, step, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				if ($instanceOf($Step, rlp) && $nc(($cast($Step, rlp)))->isAbbreviatedDot()) {
					$assign(result, step);
				} else if ($nc(($cast($Step, step)))->isAbbreviatedDot()) {
					$assign(result, rlp);
				} else {
					$assign(result, $new($ParentLocationPath, $cast($RelativeLocationPath, rlp), step));
				}
				int32_t var$70 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 21, var$70, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 71:
		{
			{
				$var($Expression, arlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$71 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 21, var$71, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, arlp));
			}
			return parser_result;
		}
	case 72:
		{
			{
				$var($Expression, result, $new($AbsoluteLocationPath));
				int32_t var$72 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 23, var$72, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 73:
		{
			{
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($AbsoluteLocationPath, rlp));
				int32_t var$73 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 23, var$73, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 74:
		{
			{
				$var($Expression, aalp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$74 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 23, var$74, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, aalp));
			}
			return parser_result;
		}
	case 75:
		{
			{
				$var($Expression, result, nullptr);
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Expression, step, $cast($Expression, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Step, right, $cast($Step, step));
				int32_t axis = $nc(right)->getAxis();
				int32_t type = right->getNodeType();
				$var($List, predicates, right->getPredicates());
				if ((axis == $Axis::CHILD) && (type != $NodeTest::ATTRIBUTE)) {
					if (predicates == nullptr) {
						right->setAxis($Axis::DESCENDANT);
						if ($instanceOf($Step, rlp) && $nc(($cast($Step, rlp)))->isAbbreviatedDot()) {
							$assign(result, right);
						} else {
							$var($RelativeLocationPath, left, $cast($RelativeLocationPath, rlp));
							$assign(result, $new($ParentLocationPath, left, right));
						}
					} else if ($instanceOf($Step, rlp) && $nc(($cast($Step, rlp)))->isAbbreviatedDot()) {
						$var($Step, left, $new($Step, $Axis::DESCENDANTORSELF, $DTM::ELEMENT_NODE, nullptr));
						$assign(result, $new($ParentLocationPath, left, right));
					} else {
						$var($RelativeLocationPath, left, $cast($RelativeLocationPath, rlp));
						$var($Step, mid, $new($Step, $Axis::DESCENDANTORSELF, $DTM::ELEMENT_NODE, nullptr));
						$var($ParentLocationPath, ppl, $new($ParentLocationPath, mid, right));
						$assign(result, $new($ParentLocationPath, left, ppl));
					}
				} else if ((axis == $Axis::ATTRIBUTE) || (type == $NodeTest::ATTRIBUTE)) {
					$var($RelativeLocationPath, left, $cast($RelativeLocationPath, rlp));
					$var($Step, middle, $new($Step, $Axis::DESCENDANTORSELF, $DTM::ELEMENT_NODE, nullptr));
					$var($ParentLocationPath, ppl, $new($ParentLocationPath, middle, right));
					$assign(result, $new($ParentLocationPath, left, ppl));
				} else {
					$var($RelativeLocationPath, left, $cast($RelativeLocationPath, rlp));
					$var($Step, middle, $new($Step, $Axis::DESCENDANTORSELF, $DOM::NO_TYPE, nullptr));
					$var($ParentLocationPath, ppl, $new($ParentLocationPath, middle, right));
					$assign(result, $new($ParentLocationPath, left, ppl));
				}
				int32_t var$75 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 22, var$75, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 76:
		{
			{
				$var($Expression, rlp, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t nodeType = $DOM::NO_TYPE;
				if ($instanceOf($Step, rlp) && $nc(this->parser)->isElementAxis($nc(($cast($Step, rlp)))->getAxis())) {
					nodeType = $DTM::ELEMENT_NODE;
				}
				$var($Step, step, $new($Step, $Axis::DESCENDANTORSELF, nodeType, nullptr));
				$var($Expression, result, $new($AbsoluteLocationPath, $($nc(this->parser)->insertStep(step, $cast($RelativeLocationPath, rlp)))));
				int32_t var$76 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 24, var$76, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 77:
		{
			{
				$var($Expression, result, nullptr);
				$var($Object, ntest, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value);
				if ($instanceOf($Step, ntest)) {
					$assign(result, $cast($Step, ntest));
				} else {
					$assign(result, $new($Step, $Axis::CHILD, $nc(this->parser)->findNodeType($Axis::CHILD, ntest), nullptr));
				}
				int32_t var$77 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 7, var$77, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 78:
		{
			{
				$var($Expression, result, nullptr);
				$var($Object, ntest, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value);
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				if ($instanceOf($Step, ntest)) {
					$var($Step, step, $cast($Step, ntest));
					$nc(step)->addPredicates(pp);
					$assign(result, $cast($Step, ntest));
				} else {
					$assign(result, $new($Step, $Axis::CHILD, $nc(this->parser)->findNodeType($Axis::CHILD, ntest), pp));
				}
				int32_t var$78 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 7, var$78, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 79:
		{
			{
				$var($Integer, axis, $cast($Integer, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($Object, ntest, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->value);
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				int32_t var$79 = $nc(axis)->intValue();
				$var($Expression, result, $new($Step, var$79, $nc(this->parser)->findNodeType(axis->intValue(), ntest), pp));
				int32_t var$80 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 7, var$80, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 80:
		{
			{
				$var($Integer, axis, $cast($Integer, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($Object, ntest, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value);
				int32_t var$81 = $nc(axis)->intValue();
				$var($Expression, result, $new($Step, var$81, $nc(this->parser)->findNodeType(axis->intValue(), ntest), nullptr));
				int32_t var$82 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 7, var$82, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 81:
		{
			{
				$var($Expression, abbrev, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$83 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 7, var$83, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, abbrev));
			}
			return parser_result;
		}
	case 82:
		{
			{
				$var($Integer, an, $cast($Integer, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				int32_t var$84 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 41, var$84, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, an));
			}
			return parser_result;
		}
	case 83:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ATTRIBUTE));
				int32_t var$85 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 41, var$85, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 84:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ANCESTOR));
				int32_t var$86 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$86, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 85:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ANCESTORORSELF));
				int32_t var$87 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$87, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 86:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::ATTRIBUTE));
				int32_t var$88 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$88, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 87:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::CHILD));
				int32_t var$89 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$89, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 88:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::DESCENDANT));
				int32_t var$90 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$90, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 89:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::DESCENDANTORSELF));
				int32_t var$91 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$91, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 90:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::FOLLOWING));
				int32_t var$92 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$92, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 91:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::FOLLOWINGSIBLING));
				int32_t var$93 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$93, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 92:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::NAMESPACE));
				int32_t var$94 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$94, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 93:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::PARENT));
				int32_t var$95 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$95, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 94:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::PRECEDING));
				int32_t var$96 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$96, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 95:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::PRECEDINGSIBLING));
				int32_t var$97 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$97, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 96:
		{
			{
				$var($Integer, result, $Integer::valueOf($Axis::SELF));
				int32_t var$98 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 40, var$98, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 97:
		{
			{
				$var($Expression, result, $new($Step, $Axis::SELF, $NodeTest::ANODE, nullptr));
				int32_t var$99 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 20, var$99, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 98:
		{
			{
				$var($Expression, result, $new($Step, $Axis::PARENT, $NodeTest::ANODE, nullptr));
				int32_t var$100 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 20, var$100, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 99:
		{
			{
				$var($Expression, primary, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$101 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 6, var$101, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, primary));
			}
			return parser_result;
		}
	case 100:
		{
			{
				$var($Expression, primary, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($List, pp, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($FilterExpr, primary, pp));
				int32_t var$102 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 6, var$102, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 101:
		{
			{
				$var($Expression, vr, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$103 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$103, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, vr));
			}
			return parser_result;
		}
	case 102:
		{
			{
				$var($Expression, ex, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				int32_t var$104 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$104, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ex));
			}
			return parser_result;
		}
	case 103:
		{
			{
				$var($String, string, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($String, namespace$, nullptr);
				int32_t index = $nc(string)->lastIndexOf((int32_t)u':');
				if (index > 0) {
					$var($String, prefix, string->substring(0, index));
					$assign(namespace$, $nc($nc(this->parser)->_symbolTable)->lookupNamespace(prefix));
				}
				$var($Expression, result, (namespace$ == nullptr) ? static_cast<$Expression*>($new($LiteralExpr, string)) : static_cast<$Expression*>($new($LiteralExpr, string, namespace$)));
				int32_t var$105 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$105, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 104:
		{
			{
				$var($Expression, result, nullptr);
				$var($Long, num, $cast($Long, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				bool var$106 = $nc(num)->longValue() < $Integer::MIN_VALUE;
				if (var$106 || $nc(num)->longValue() > $Integer::MAX_VALUE) {
					$assign(result, $new($RealExpr, (double)num->longValue()));
				} else if (num->doubleValue() == - 0) {
					$assign(result, $new($RealExpr, num->doubleValue()));
				} else if (num->intValue() == 0) {
					$assign(result, $new($IntExpr, num->intValue()));
				} else if (num->doubleValue() == 0.0) {
					$assign(result, $new($RealExpr, num->doubleValue()));
				} else {
					$assign(result, $new($IntExpr, num->intValue()));
				}
				int32_t var$107 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$107, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 105:
		{
			{
				$var($Double, num, $cast($Double, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($Expression, result, $new($RealExpr, $nc(num)->doubleValue()));
				int32_t var$108 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$108, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 106:
		{
			{
				$var($Expression, fc, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$109 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 17, var$109, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, fc));
			}
			return parser_result;
		}
	case 107:
		{
			{
				$var($Expression, result, nullptr);
				$var($QName, varName, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($SyntaxTreeNode, node, $nc(this->parser)->lookupName(varName));
				if (node != nullptr) {
					if ($instanceOf($Variable, node)) {
						$assign(result, $new($VariableRef, $cast($Variable, node)));
					} else if ($instanceOf($Param, node)) {
						$assign(result, $new($ParameterRef, $cast($Param, node)));
					} else {
						$assign(result, $new($UnresolvedRef, varName));
					}
				}
				if (node == nullptr) {
					$assign(result, $new($UnresolvedRef, varName));
				}
				int32_t var$110 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->left;
				$assign(parser_result, $new($Symbol, 15, var$110, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 108:
		{
			{
				$var($Expression, result, nullptr);
				$var($QName, fname, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("current"_s)) {
					$assign(result, $new($CurrentCall, fname));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("number"_s)) {
					$init($XPathParser);
					$assign(result, $new($NumberCall, fname, $XPathParser::EmptyArgs));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("string"_s)) {
					$init($XPathParser);
					$assign(result, $new($StringCall, fname, $XPathParser::EmptyArgs));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("concat"_s)) {
					$init($XPathParser);
					$assign(result, $new($ConcatCall, fname, $XPathParser::EmptyArgs));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("true"_s)) {
					$assign(result, $new($BooleanExpr, true));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("false"_s)) {
					$assign(result, $new($BooleanExpr, false));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("name"_s)) {
					$assign(result, $new($NameCall, fname));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("generate-id"_s)) {
					$init($XPathParser);
					$assign(result, $new($GenerateIdCall, fname, $XPathParser::EmptyArgs));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("string-length"_s)) {
					$init($XPathParser);
					$assign(result, $new($StringLengthCall, fname, $XPathParser::EmptyArgs));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("position"_s)) {
					$assign(result, $new($PositionCall, fname));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("last"_s)) {
					$assign(result, $new($LastCall, fname));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("local-name"_s)) {
					$assign(result, $new($LocalNameCall, fname));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("namespace-uri"_s)) {
					$assign(result, $new($NamespaceUriCall, fname));
				} else {
					$init($XPathParser);
					$assign(result, $new($FunctionCall, fname, $XPathParser::EmptyArgs));
				}
				int32_t var$111 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 16, var$111, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 109:
		{
			{
				$var($Expression, result, nullptr);
				$var($QName, fname, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 3)))))->value));
				$var($List, argl, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 1)))))->value));
				if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("concat"_s)) {
					$assign(result, $new($ConcatCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("number"_s)) {
					$assign(result, $new($NumberCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("document"_s)) {
					$nc(this->parser)->setMultiDocument(true);
					$assign(result, $new($DocumentCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("string"_s)) {
					$assign(result, $new($StringCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("boolean"_s)) {
					$assign(result, $new($BooleanCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("name"_s)) {
					$assign(result, $new($NameCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("generate-id"_s)) {
					$assign(result, $new($GenerateIdCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("not"_s)) {
					$assign(result, $new($NotCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("format-number"_s)) {
					$assign(result, $new($FormatNumberCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("unparsed-entity-uri"_s)) {
					$assign(result, $new($UnparsedEntityUriCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("key"_s)) {
					$assign(result, $new($KeyCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("id"_s)) {
					$assign(result, $new($KeyCall, fname, argl));
					$nc(this->parser)->setHasIdCall(true);
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("ceiling"_s)) {
					$assign(result, $new($CeilingCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("round"_s)) {
					$assign(result, $new($RoundCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("floor"_s)) {
					$assign(result, $new($FloorCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("contains"_s)) {
					$assign(result, $new($ContainsCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("string-length"_s)) {
					$assign(result, $new($StringLengthCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("starts-with"_s)) {
					$assign(result, $new($StartsWithCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("function-available"_s)) {
					$assign(result, $new($FunctionAvailableCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("element-available"_s)) {
					$assign(result, $new($ElementAvailableCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("local-name"_s)) {
					$assign(result, $new($LocalNameCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("lang"_s)) {
					$assign(result, $new($LangCall, fname, argl));
				} else if (fname == $nc(this->parser)->getQNameIgnoreDefaultNs("namespace-uri"_s)) {
					$assign(result, $new($NamespaceUriCall, fname, argl));
				} else {
					$init($Constants);
					if (fname == $nc(this->parser)->getQName($Constants::TRANSLET_URI, "xsltc"_s, "cast"_s)) {
						$assign(result, $new($CastCall, fname, argl));
					} else {
						bool var$113 = $nc($($nc(fname)->getLocalPart()))->equals("nodeset"_s);
						if (var$113 || $nc($($nc(fname)->getLocalPart()))->equals("node-set"_s)) {
							$nc(this->parser)->setCallsNodeset(true);
							$assign(result, $new($FunctionCall, fname, argl));
						} else {
							$assign(result, $new($FunctionCall, fname, argl));
						}
					}
				}
				int32_t var$114 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 3)))))->left;
				$assign(parser_result, $new($Symbol, 16, var$114, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 110:
		{
			{
				$var($Expression, arg, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($List, temp, $new($ArrayList));
				temp->add(arg);
				int32_t var$115 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 36, var$115, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, temp));
			}
			return parser_result;
		}
	case 111:
		{
			{
				$var($Expression, arg, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 2)))))->value));
				$var($List, argl, $cast($ArrayList, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->value));
				$nc(argl)->add(0, arg);
				int32_t var$116 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 2)))))->left;
				$assign(parser_result, $new($Symbol, 36, var$116, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, argl));
			}
			return parser_result;
		}
	case 112:
		{
			{
				$var($QName, fname, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$117 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 38, var$117, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, fname));
			}
			return parser_result;
		}
	case 113:
		{
			{
				$var($QName, vname, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$118 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 39, var$118, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, vname));
			}
			return parser_result;
		}
	case 114:
		{
			{
				$var($Expression, ex, $cast($Expression, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$119 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 3, var$119, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, ex));
			}
			return parser_result;
		}
	case 115:
		{
			{
				$var($Object, nt, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value);
				int32_t var$120 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$120, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, nt));
			}
			return parser_result;
		}
	case 116:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::ANODE));
				int32_t var$121 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$121, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 117:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::TEXT));
				int32_t var$122 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$122, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 118:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::COMMENT));
				int32_t var$123 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$123, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 119:
		{
			{
				$var($String, l, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 1)))))->value));
				$var($QName, name, $nc(this->parser)->getQNameIgnoreDefaultNs("name"_s));
				$var($Expression, var$124, static_cast<$Expression*>($new($NameCall, name)));
				$var($Expression, exp, $new($EqualityExpr, $Operators::EQ, var$124, $$new($LiteralExpr, l)));
				$var($List, predicates, $new($ArrayList));
				predicates->add($$new($Predicate, exp));
				$var($Object, result, $new($Step, $Axis::CHILD, $NodeTest::PI, predicates));
				int32_t var$125 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 3)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$125, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 120:
		{
			{
				$var($Object, result, $Integer::valueOf($NodeTest::PI));
				int32_t var$126 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 25, var$126, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 121:
		{
			{
				$var($Object, result, nullptr);
				int32_t var$127 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 26, var$127, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 122:
		{
			{
				$var($QName, qn, $cast($QName, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				int32_t var$128 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 26, var$128, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, qn));
			}
			return parser_result;
		}
	case 123:
		{
			{
				$var($String, qname, $cast($String, $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->value));
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs(qname));
				int32_t var$129 = $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$129, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 124:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("div"_s));
				int32_t var$130 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$130, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 125:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("mod"_s));
				int32_t var$131 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$131, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 126:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("key"_s));
				int32_t var$132 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$132, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 127:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("child"_s));
				int32_t var$133 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$133, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 128:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("ancestor-or-self"_s));
				int32_t var$134 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$134, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 129:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("attribute"_s));
				int32_t var$135 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$135, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 130:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("child"_s));
				int32_t var$136 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$136, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 131:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("decendant"_s));
				int32_t var$137 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$137, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 132:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("decendant-or-self"_s));
				int32_t var$138 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$138, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 133:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("following"_s));
				int32_t var$139 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$139, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 134:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("following-sibling"_s));
				int32_t var$140 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$140, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 135:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("namespace"_s));
				int32_t var$141 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$141, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 136:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("parent"_s));
				int32_t var$142 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$142, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 137:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("preceding"_s));
				int32_t var$143 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$143, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 138:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("preceding-sibling"_s));
				int32_t var$144 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$144, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 139:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("self"_s));
				int32_t var$145 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$145, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	case 140:
		{
			{
				$var($QName, result, $nc(this->parser)->getQNameIgnoreDefaultNs("id"_s));
				int32_t var$146 = $nc(($cast($Symbol, $($nc(parser_stack)->get(parser_top - 0)))))->left;
				$assign(parser_result, $new($Symbol, 37, var$146, $nc(($cast($Symbol, $(parser_stack->get(parser_top - 0)))))->right, result));
			}
			return parser_result;
		}
	default:
		{
			$throwNew($Exception, "Invalid action number found in internal parse table"_s);
		}
	}
}

parser_actions::parser_actions() {
}

$Class* parser_actions::load$($String* name, bool initialize) {
	$loadClass(parser_actions, name, initialize, &_parser_actions_ClassInfo_, allocate$parser_actions);
	return class$;
}

$Class* parser_actions::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com