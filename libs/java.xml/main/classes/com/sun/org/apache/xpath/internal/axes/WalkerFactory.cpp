#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/AttributeIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/DescendantIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/MatchPatternIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/OneStepIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/OneStepIteratorForward.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/ReverseAxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/SelfIteratorNoPredicate.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIteratorSorted.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/patterns/ContextMatchStepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef ALL
#undef ALLFROMNODE
#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE
#undef BITMASK_TRAVERSES_OUTSIDE_SUBTREE
#undef BITS_COUNT
#undef BITS_RESERVED
#undef BIT_ANCESTOR
#undef BIT_ANCESTOR_OR_SELF
#undef BIT_ANY_DESCENDANT_FROM_ROOT
#undef BIT_ATTRIBUTE
#undef BIT_BACKWARDS_SELF
#undef BIT_CHILD
#undef BIT_DESCENDANT
#undef BIT_DESCENDANT_OR_SELF
#undef BIT_FILTER
#undef BIT_FOLLOWING
#undef BIT_FOLLOWING_SIBLING
#undef BIT_MATCH_PATTERN
#undef BIT_NAMESPACE
#undef BIT_NODETEST_ANY
#undef BIT_PARENT
#undef BIT_PRECEDING
#undef BIT_PRECEDING_SIBLING
#undef BIT_PREDICATE
#undef BIT_ROOT
#undef BIT_SELF
#undef CHILD
#undef DEBUG_ITERATOR_CREATION
#undef DEBUG_PATTERN_CREATION
#undef DEBUG_WALKER_CREATION
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef DESCENDANTSORSELFFROMROOT
#undef ENDOP
#undef ER_NULL_ERROR_HANDLER
#undef FILTEREDLIST
#undef FOLLOWING
#undef FOLLOWINGSIBLING
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
#undef FUNC_LAST
#undef FUNC_POSITION
#undef MATCH_ANY_ANCESTOR
#undef MATCH_ATTRIBUTE
#undef MATCH_IMMEDIATE_ANCESTOR
#undef NAMESPACE
#undef NAMESPACEDECLS
#undef NODETYPE_NODE
#undef NODETYPE_ROOT
#undef OP_ARGUMENT
#undef OP_EQUALS
#undef OP_EXTFUNCTION
#undef OP_FUNCTION
#undef OP_GROUP
#undef OP_GT
#undef OP_GTE
#undef OP_LITERAL
#undef OP_LOCATIONPATH
#undef OP_LT
#undef OP_LTE
#undef OP_NUMBER
#undef OP_NUMBERLIT
#undef OP_PREDICATE
#undef OP_VARIABLE
#undef PARENT
#undef PRECEDING
#undef PRECEDINGANDANCESTOR
#undef PRECEDINGSIBLING
#undef ROOT
#undef SELF
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_ELEMENT
#undef SHOW_NAMESPACE
#undef SHOW_PROCESSING_INSTRUCTION
#undef WILD

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $AttributeIterator = ::com::sun::org::apache::xpath::internal::axes::AttributeIterator;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildIterator = ::com::sun::org::apache::xpath::internal::axes::ChildIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $DescendantIterator = ::com::sun::org::apache::xpath::internal::axes::DescendantIterator;
using $FilterExprWalker = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $MatchPatternIterator = ::com::sun::org::apache::xpath::internal::axes::MatchPatternIterator;
using $OneStepIterator = ::com::sun::org::apache::xpath::internal::axes::OneStepIterator;
using $OneStepIteratorForward = ::com::sun::org::apache::xpath::internal::axes::OneStepIteratorForward;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $ReverseAxesWalker = ::com::sun::org::apache::xpath::internal::axes::ReverseAxesWalker;
using $SelfIteratorNoPredicate = ::com::sun::org::apache::xpath::internal::axes::SelfIteratorNoPredicate;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $WalkingIteratorSorted = ::com::sun::org::apache::xpath::internal::axes::WalkingIteratorSorted;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $ContextMatchStepPattern = ::com::sun::org::apache::xpath::internal::patterns::ContextMatchStepPattern;
using $FunctionPattern = ::com::sun::org::apache::xpath::internal::patterns::FunctionPattern;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _WalkerFactory_FieldInfo_[] = {
	{"DEBUG_PATTERN_CREATION", "Z", nullptr, $STATIC | $FINAL, $constField(WalkerFactory, DEBUG_PATTERN_CREATION)},
	{"DEBUG_WALKER_CREATION", "Z", nullptr, $STATIC | $FINAL, $constField(WalkerFactory, DEBUG_WALKER_CREATION)},
	{"DEBUG_ITERATOR_CREATION", "Z", nullptr, $STATIC | $FINAL, $constField(WalkerFactory, DEBUG_ITERATOR_CREATION)},
	{"BITS_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BITS_COUNT)},
	{"BITS_RESERVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BITS_RESERVED)},
	{"BIT_PREDICATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_PREDICATE)},
	{"BIT_ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_ANCESTOR)},
	{"BIT_ANCESTOR_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_ANCESTOR_OR_SELF)},
	{"BIT_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_ATTRIBUTE)},
	{"BIT_CHILD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_CHILD)},
	{"BIT_DESCENDANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_DESCENDANT)},
	{"BIT_DESCENDANT_OR_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_DESCENDANT_OR_SELF)},
	{"BIT_FOLLOWING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_FOLLOWING)},
	{"BIT_FOLLOWING_SIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_FOLLOWING_SIBLING)},
	{"BIT_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_NAMESPACE)},
	{"BIT_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_PARENT)},
	{"BIT_PRECEDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_PRECEDING)},
	{"BIT_PRECEDING_SIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_PRECEDING_SIBLING)},
	{"BIT_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_SELF)},
	{"BIT_FILTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_FILTER)},
	{"BIT_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_ROOT)},
	{"BITMASK_TRAVERSES_OUTSIDE_SUBTREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BITMASK_TRAVERSES_OUTSIDE_SUBTREE)},
	{"BIT_BACKWARDS_SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_BACKWARDS_SELF)},
	{"BIT_ANY_DESCENDANT_FROM_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_ANY_DESCENDANT_FROM_ROOT)},
	{"BIT_NODETEST_ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_NODETEST_ANY)},
	{"BIT_MATCH_PATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WalkerFactory, BIT_MATCH_PATTERN)},
	{}
};

$MethodInfo _WalkerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WalkerFactory, init$, void)},
	{"analyze", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkerFactory, analyze, int32_t, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"analyzePredicate", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)Z", nullptr, $STATIC, $staticMethod(WalkerFactory, analyzePredicate, bool, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"canCrissCross", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, canCrissCross, bool, int32_t)},
	{"canSkipSubtrees", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, canSkipSubtrees, bool, int32_t)},
	{"createDefaultStepPattern", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;ILcom/sun/org/apache/xpath/internal/axes/MatchPatternIterator;ILcom/sun/org/apache/xpath/internal/patterns/StepPattern;Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;)Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkerFactory, createDefaultStepPattern, $StepPattern*, $Compiler*, int32_t, $MatchPatternIterator*, int32_t, $StepPattern*, $StepPattern*), "javax.xml.transform.TransformerException"},
	{"createDefaultWalker", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;ILcom/sun/org/apache/xpath/internal/axes/WalkingIterator;I)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkerFactory, createDefaultWalker, $AxesWalker*, $Compiler*, int32_t, $WalkingIterator*, int32_t)},
	{"diagnoseIterator", "(Ljava/lang/String;ILcom/sun/org/apache/xpath/internal/compiler/Compiler;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, diagnoseIterator, void, $String*, int32_t, $Compiler*)},
	{"functionProximateOrContainsProximate", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)Z", nullptr, $STATIC, $staticMethod(WalkerFactory, functionProximateOrContainsProximate, bool, $Compiler*, int32_t)},
	{"getAnalysisBitFromAxes", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, getAnalysisBitFromAxes, int32_t, int32_t)},
	{"getAnalysisString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, getAnalysisString, $String*, int32_t)},
	{"getAxisFromStep", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, getAxisFromStep, int32_t, $Compiler*, int32_t), "javax.xml.transform.TransformerException"},
	{"getStepCount", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, getStepCount, int32_t, int32_t)},
	{"hasPredicate", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, hasPredicate, bool, int32_t)},
	{"isAbsolute", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isAbsolute, bool, int32_t)},
	{"isDownwardAxisOfMany", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isDownwardAxisOfMany, bool, int32_t)},
	{"isNaturalDocOrder", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isNaturalDocOrder, bool, int32_t)},
	{"isNaturalDocOrder", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;III)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkerFactory, isNaturalDocOrder, bool, $Compiler*, int32_t, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"isOneStep", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isOneStep, bool, int32_t)},
	{"isOptimizableForDescendantIterator", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkerFactory, isOptimizableForDescendantIterator, bool, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"isProximateInnerExpr", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)Z", nullptr, $STATIC, $staticMethod(WalkerFactory, isProximateInnerExpr, bool, $Compiler*, int32_t)},
	{"isSet", "(II)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isSet, bool, int32_t, int32_t)},
	{"isWild", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, isWild, bool, int32_t)},
	{"loadOneWalker", "(Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;Lcom/sun/org/apache/xpath/internal/compiler/Compiler;I)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $STATIC, $staticMethod(WalkerFactory, loadOneWalker, $AxesWalker*, $WalkingIterator*, $Compiler*, int32_t), "javax.xml.transform.TransformerException"},
	{"loadSteps", "(Lcom/sun/org/apache/xpath/internal/axes/MatchPatternIterator;Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $STATIC, $staticMethod(WalkerFactory, loadSteps, $StepPattern*, $MatchPatternIterator*, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"loadWalkers", "(Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $STATIC, $staticMethod(WalkerFactory, loadWalkers, $AxesWalker*, $WalkingIterator*, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"mightBeProximate", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, mightBeProximate, bool, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"newDTMIterator", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;IZ)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, newDTMIterator, $DTMIterator*, $Compiler*, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"walksAncestors", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksAncestors, bool, int32_t)},
	{"walksAttributes", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksAttributes, bool, int32_t)},
	{"walksChildren", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksChildren, bool, int32_t)},
	{"walksChildrenAndExtraAndSelfOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksChildrenAndExtraAndSelfOnly, bool, int32_t)},
	{"walksChildrenOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksChildrenOnly, bool, int32_t)},
	{"walksDescendants", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksDescendants, bool, int32_t)},
	{"walksDescendantsAndExtraAndSelfOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksDescendantsAndExtraAndSelfOnly, bool, int32_t)},
	{"walksDownExtraOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksDownExtraOnly, bool, int32_t)},
	{"walksDownOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksDownOnly, bool, int32_t)},
	{"walksExtraNodes", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksExtraNodes, bool, int32_t)},
	{"walksExtraNodesOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksExtraNodesOnly, bool, int32_t)},
	{"walksFilteredList", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksFilteredList, bool, int32_t)},
	{"walksFollowingOnlyMaybeAbsolute", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksFollowingOnlyMaybeAbsolute, bool, int32_t)},
	{"walksInDocOrder", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksInDocOrder, bool, int32_t)},
	{"walksNamespaces", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksNamespaces, bool, int32_t)},
	{"walksSelfOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSelfOnly, bool, int32_t)},
	{"walksSideways", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSideways, bool, int32_t)},
	{"walksSubtree", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSubtree, bool, int32_t)},
	{"walksSubtreeOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSubtreeOnly, bool, int32_t)},
	{"walksSubtreeOnlyFromRootOrContext", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSubtreeOnlyFromRootOrContext, bool, int32_t)},
	{"walksSubtreeOnlyMaybeAbsolute", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksSubtreeOnlyMaybeAbsolute, bool, int32_t)},
	{"walksUp", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksUp, bool, int32_t)},
	{"walksUpOnly", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WalkerFactory, walksUpOnly, bool, int32_t)},
	{}
};

$ClassInfo _WalkerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.WalkerFactory",
	"java.lang.Object",
	nullptr,
	_WalkerFactory_FieldInfo_,
	_WalkerFactory_MethodInfo_
};

$Object* allocate$WalkerFactory($Class* clazz) {
	return $of($alloc(WalkerFactory));
}

void WalkerFactory::init$() {
}

$AxesWalker* WalkerFactory::loadOneWalker($WalkingIterator* lpi, $Compiler* compiler, int32_t stepOpCodePos) {
	$var($AxesWalker, firstWalker, nullptr);
	int32_t stepType = $nc(compiler)->getOp(stepOpCodePos);
	if (stepType != $OpCodes::ENDOP) {
		$assign(firstWalker, createDefaultWalker(compiler, stepType, lpi, 0));
		$nc(firstWalker)->init(compiler, stepOpCodePos, stepType);
	}
	return firstWalker;
}

$AxesWalker* WalkerFactory::loadWalkers($WalkingIterator* lpi, $Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = 0;
	$var($AxesWalker, firstWalker, nullptr);
	$var($AxesWalker, walker, nullptr);
	$var($AxesWalker, prevWalker, nullptr);
	int32_t analysis = analyze(compiler, stepOpCodePos, stepIndex);
	while ($OpCodes::ENDOP != (stepType = $nc(compiler)->getOp(stepOpCodePos))) {
		$assign(walker, createDefaultWalker(compiler, stepOpCodePos, lpi, analysis));
		$nc(walker)->init(compiler, stepOpCodePos, stepType);
		walker->exprSetParent(lpi);
		if (nullptr == firstWalker) {
			$assign(firstWalker, walker);
		} else {
			$nc(prevWalker)->setNextWalker(walker);
			walker->setPrevWalker(prevWalker);
		}
		$assign(prevWalker, walker);
		stepOpCodePos = compiler->getNextStepPos(stepOpCodePos);
		if (stepOpCodePos < 0) {
			break;
		}
	}
	return firstWalker;
}

bool WalkerFactory::isSet(int32_t analysis, int32_t bits) {
	return (0 != ((int32_t)(analysis & (uint32_t)bits)));
}

void WalkerFactory::diagnoseIterator($String* name, int32_t analysis, $Compiler* compiler) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$($nc(compiler)->toString()), ", "_s, name, ", "_s}));
	$var($String, var$1, $$concat(var$2, $($Integer::toBinaryString(analysis))));
	$var($String, var$0, $$concat(var$1, ", "_s));
	$nc($System::out)->println($$concat(var$0, $(getAnalysisString(analysis))));
}

$DTMIterator* WalkerFactory::newDTMIterator($Compiler* compiler, int32_t opPos, bool isTopLevel) {
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	int32_t analysis = analyze(compiler, firstStepPos, 0);
	bool isOneStep = WalkerFactory::isOneStep(analysis);
	$var($DTMIterator, iter, nullptr);
	bool var$1 = isOneStep && walksSelfOnly(analysis);
	bool var$0 = var$1 && isWild(analysis);
	if (var$0 && !hasPredicate(analysis)) {
		$assign(iter, $new($SelfIteratorNoPredicate, compiler, opPos, analysis));
	} else if (walksChildrenOnly(analysis) && isOneStep) {
		bool var$2 = isWild(analysis);
		if (var$2 && !hasPredicate(analysis)) {
			$assign(iter, $new($ChildIterator, compiler, opPos, analysis));
		} else {
			$assign(iter, $new($ChildTestIterator, compiler, opPos, analysis));
		}
	} else if (isOneStep && walksAttributes(analysis)) {
		$assign(iter, $new($AttributeIterator, compiler, opPos, analysis));
	} else if (isOneStep && !walksFilteredList(analysis)) {
		bool var$3 = !walksNamespaces(analysis);
		if (var$3) {
			bool var$4 = walksInDocOrder(analysis);
			var$3 = (var$4 || isSet(analysis, WalkerFactory::BIT_PARENT));
		}
		if (var$3) {
			$assign(iter, $new($OneStepIteratorForward, compiler, opPos, analysis));
		} else {
			$assign(iter, $new($OneStepIterator, compiler, opPos, analysis));
		}
	} else if (isOptimizableForDescendantIterator(compiler, firstStepPos, 0)) {
		$assign(iter, $new($DescendantIterator, compiler, opPos, analysis));
	} else if (isNaturalDocOrder(compiler, firstStepPos, 0, analysis)) {
		$assign(iter, $new($WalkingIterator, compiler, opPos, analysis, true));
	} else {
		$assign(iter, $new($WalkingIteratorSorted, compiler, opPos, analysis, true));
	}
	if ($instanceOf($LocPathIterator, iter)) {
		$nc(($cast($LocPathIterator, iter)))->setIsTopLevel(isTopLevel);
	}
	return iter;
}

int32_t WalkerFactory::getAxisFromStep($Compiler* compiler, int32_t stepOpCodePos) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = $nc(compiler)->getOp(stepOpCodePos);
	switch (stepType) {
	case $OpCodes::FROM_FOLLOWING:
		{
			return $Axis::FOLLOWING;
		}
	case $OpCodes::FROM_FOLLOWING_SIBLINGS:
		{
			return $Axis::FOLLOWINGSIBLING;
		}
	case $OpCodes::FROM_PRECEDING:
		{
			return $Axis::PRECEDING;
		}
	case $OpCodes::FROM_PRECEDING_SIBLINGS:
		{
			return $Axis::PRECEDINGSIBLING;
		}
	case $OpCodes::FROM_PARENT:
		{
			return $Axis::PARENT;
		}
	case $OpCodes::FROM_NAMESPACE:
		{
			return $Axis::NAMESPACE;
		}
	case $OpCodes::FROM_ANCESTORS:
		{
			return $Axis::ANCESTOR;
		}
	case $OpCodes::FROM_ANCESTORS_OR_SELF:
		{
			return $Axis::ANCESTORORSELF;
		}
	case $OpCodes::FROM_ATTRIBUTES:
		{
			return $Axis::ATTRIBUTE;
		}
	case $OpCodes::FROM_ROOT:
		{
			return $Axis::ROOT;
		}
	case $OpCodes::FROM_CHILDREN:
		{
			return $Axis::CHILD;
		}
	case $OpCodes::FROM_DESCENDANTS_OR_SELF:
		{
			return $Axis::DESCENDANTORSELF;
		}
	case $OpCodes::FROM_DESCENDANTS:
		{
			return $Axis::DESCENDANT;
		}
	case $OpCodes::FROM_SELF:
		{
			return $Axis::SELF;
		}
	case $OpCodes::OP_EXTFUNCTION:
		{}
	case $OpCodes::OP_FUNCTION:
		{}
	case $OpCodes::OP_GROUP:
		{}
	case $OpCodes::OP_VARIABLE:
		{
			return $Axis::FILTEREDLIST;
		}
	}
	$init($XPATHErrorResources);
	$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
}

int32_t WalkerFactory::getAnalysisBitFromAxes(int32_t axis) {
	switch (axis) {
	case $Axis::ANCESTOR:
		{
			return WalkerFactory::BIT_ANCESTOR;
		}
	case $Axis::ANCESTORORSELF:
		{
			return WalkerFactory::BIT_ANCESTOR_OR_SELF;
		}
	case $Axis::ATTRIBUTE:
		{
			return WalkerFactory::BIT_ATTRIBUTE;
		}
	case $Axis::CHILD:
		{
			return WalkerFactory::BIT_CHILD;
		}
	case $Axis::DESCENDANT:
		{
			return WalkerFactory::BIT_DESCENDANT;
		}
	case $Axis::DESCENDANTORSELF:
		{
			return WalkerFactory::BIT_DESCENDANT_OR_SELF;
		}
	case $Axis::FOLLOWING:
		{
			return WalkerFactory::BIT_FOLLOWING;
		}
	case $Axis::FOLLOWINGSIBLING:
		{
			return WalkerFactory::BIT_FOLLOWING_SIBLING;
		}
	case $Axis::NAMESPACE:
		{}
	case $Axis::NAMESPACEDECLS:
		{
			return WalkerFactory::BIT_NAMESPACE;
		}
	case $Axis::PARENT:
		{
			return WalkerFactory::BIT_PARENT;
		}
	case $Axis::PRECEDING:
		{
			return WalkerFactory::BIT_PRECEDING;
		}
	case $Axis::PRECEDINGSIBLING:
		{
			return WalkerFactory::BIT_PRECEDING_SIBLING;
		}
	case $Axis::SELF:
		{
			return WalkerFactory::BIT_SELF;
		}
	case $Axis::ALLFROMNODE:
		{
			return WalkerFactory::BIT_DESCENDANT_OR_SELF;
		}
	case $Axis::DESCENDANTSFROMROOT:
		{}
	case $Axis::ALL:
		{}
	case $Axis::DESCENDANTSORSELFFROMROOT:
		{
			return WalkerFactory::BIT_ANY_DESCENDANT_FROM_ROOT;
		}
	case $Axis::ROOT:
		{
			return WalkerFactory::BIT_ROOT;
		}
	case $Axis::FILTEREDLIST:
		{
			return WalkerFactory::BIT_FILTER;
		}
	default:
		{
			return WalkerFactory::BIT_FILTER;
		}
	}
}

bool WalkerFactory::functionProximateOrContainsProximate($Compiler* compiler, int32_t opPos) {
	int32_t endFunc = opPos + $nc(compiler)->getOp(opPos + 1) - 1;
	opPos = $OpMap::getFirstChildPos(opPos);
	int32_t funcID = compiler->getOp(opPos);
	{
		int32_t i = 0;
		switch (funcID) {
		case $FunctionTable::FUNC_LAST:
			{}
		case $FunctionTable::FUNC_POSITION:
			{
				return true;
			}
		default:
			{
				++opPos;
				i = 0;
				for (int32_t p = opPos; p < endFunc; p = compiler->getNextOpPos(p), ++i) {
					int32_t innerExprOpPos = p + 2;
					int32_t argOp = compiler->getOp(innerExprOpPos);
					bool prox = isProximateInnerExpr(compiler, innerExprOpPos);
					if (prox) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool WalkerFactory::isProximateInnerExpr($Compiler* compiler, int32_t opPos) {
	int32_t op = $nc(compiler)->getOp(opPos);
	int32_t innerExprOpPos = opPos + 2;
	{
		bool isProx = false;
		int32_t leftPos = 0;
		int32_t rightPos = 0;
		switch (op) {
		case $OpCodes::OP_ARGUMENT:
			{
				if (isProximateInnerExpr(compiler, innerExprOpPos)) {
					return true;
				}
				break;
			}
		case $OpCodes::OP_VARIABLE:
			{}
		case $OpCodes::OP_NUMBERLIT:
			{}
		case $OpCodes::OP_LITERAL:
			{}
		case $OpCodes::OP_LOCATIONPATH:
			{
				break;
			}
		case $OpCodes::OP_FUNCTION:
			{
				isProx = functionProximateOrContainsProximate(compiler, opPos);
				if (isProx) {
					return true;
				}
				break;
			}
		case $OpCodes::OP_GT:
			{}
		case $OpCodes::OP_GTE:
			{}
		case $OpCodes::OP_LT:
			{}
		case $OpCodes::OP_LTE:
			{}
		case $OpCodes::OP_EQUALS:
			{
				leftPos = $OpMap::getFirstChildPos(op);
				rightPos = compiler->getNextOpPos(leftPos);
				isProx = isProximateInnerExpr(compiler, leftPos);
				if (isProx) {
					return true;
				}
				isProx = isProximateInnerExpr(compiler, rightPos);
				if (isProx) {
					return true;
				}
				break;
			}
		default:
			{
				return true;
			}
		}
	}
	return false;
}

bool WalkerFactory::mightBeProximate($Compiler* compiler, int32_t opPos, int32_t stepType) {
	bool mightBeProximate = false;
	int32_t argLen = 0;
	switch (stepType) {
	case $OpCodes::OP_VARIABLE:
		{}
	case $OpCodes::OP_EXTFUNCTION:
		{}
	case $OpCodes::OP_FUNCTION:
		{}
	case $OpCodes::OP_GROUP:
		{
			argLen = $nc(compiler)->getArgLength(opPos);
			break;
		}
	default:
		{
			argLen = $nc(compiler)->getArgLengthOfStep(opPos);
		}
	}
	int32_t predPos = $nc(compiler)->getFirstPredicateOpPos(opPos);
	int32_t count = 0;
	while ($OpCodes::OP_PREDICATE == compiler->getOp(predPos)) {
		++count;
		int32_t innerExprOpPos = predPos + 2;
		int32_t predOp = compiler->getOp(innerExprOpPos);
		{
			bool isProx = false;
			int32_t leftPos = 0;
			int32_t rightPos = 0;
			switch (predOp) {
			case $OpCodes::OP_VARIABLE:
				{
					return true;
				}
			case $OpCodes::OP_LOCATIONPATH:
				{
					break;
				}
			case $OpCodes::OP_NUMBER:
				{}
			case $OpCodes::OP_NUMBERLIT:
				{
					return true;
				}
			case $OpCodes::OP_FUNCTION:
				{
					isProx = functionProximateOrContainsProximate(compiler, innerExprOpPos);
					if (isProx) {
						return true;
					}
					break;
				}
			case $OpCodes::OP_GT:
				{}
			case $OpCodes::OP_GTE:
				{}
			case $OpCodes::OP_LT:
				{}
			case $OpCodes::OP_LTE:
				{}
			case $OpCodes::OP_EQUALS:
				{
					leftPos = $OpMap::getFirstChildPos(innerExprOpPos);
					rightPos = compiler->getNextOpPos(leftPos);
					isProx = isProximateInnerExpr(compiler, leftPos);
					if (isProx) {
						return true;
					}
					isProx = isProximateInnerExpr(compiler, rightPos);
					if (isProx) {
						return true;
					}
					break;
				}
			default:
				{
					return true;
				}
			}
		}
		predPos = compiler->getNextOpPos(predPos);
	}
	return mightBeProximate;
}

bool WalkerFactory::isOptimizableForDescendantIterator($Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = 0;
	int32_t stepCount = 0;
	bool foundDorDS = false;
	bool foundSelf = false;
	bool foundDS = false;
	int32_t nodeTestType = $OpCodes::NODETYPE_NODE;
	while ($OpCodes::ENDOP != (stepType = $nc(compiler)->getOp(stepOpCodePos))) {
		if (nodeTestType != $OpCodes::NODETYPE_NODE && nodeTestType != $OpCodes::NODETYPE_ROOT) {
			return false;
		}
		++stepCount;
		if (stepCount > 3) {
			return false;
		}
		bool mightBeProximate = WalkerFactory::mightBeProximate(compiler, stepOpCodePos, stepType);
		if (mightBeProximate) {
			return false;
		}
		switch (stepType) {
		case $OpCodes::FROM_FOLLOWING:
			{}
		case $OpCodes::FROM_FOLLOWING_SIBLINGS:
			{}
		case $OpCodes::FROM_PRECEDING:
			{}
		case $OpCodes::FROM_PRECEDING_SIBLINGS:
			{}
		case $OpCodes::FROM_PARENT:
			{}
		case $OpCodes::OP_VARIABLE:
			{}
		case $OpCodes::OP_EXTFUNCTION:
			{}
		case $OpCodes::OP_FUNCTION:
			{}
		case $OpCodes::OP_GROUP:
			{}
		case $OpCodes::FROM_NAMESPACE:
			{}
		case $OpCodes::FROM_ANCESTORS:
			{}
		case $OpCodes::FROM_ANCESTORS_OR_SELF:
			{}
		case $OpCodes::FROM_ATTRIBUTES:
			{}
		case $OpCodes::MATCH_ATTRIBUTE:
			{}
		case $OpCodes::MATCH_ANY_ANCESTOR:
			{}
		case $OpCodes::MATCH_IMMEDIATE_ANCESTOR:
			{
				return false;
			}
		case $OpCodes::FROM_ROOT:
			{
				if (1 != stepCount) {
					return false;
				}
				break;
			}
		case $OpCodes::FROM_CHILDREN:
			{
				if (!foundDS && !(foundDorDS && foundSelf)) {
					return false;
				}
				break;
			}
		case $OpCodes::FROM_DESCENDANTS_OR_SELF:
			{
				foundDS = true;
			}
		case $OpCodes::FROM_DESCENDANTS:
			{
				if (3 == stepCount) {
					return false;
				}
				foundDorDS = true;
				break;
			}
		case $OpCodes::FROM_SELF:
			{
				if (1 != stepCount) {
					return false;
				}
				foundSelf = true;
				break;
			}
		default:
			{
				$init($XPATHErrorResources);
				$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
			}
		}
		nodeTestType = compiler->getStepTestType(stepOpCodePos);
		int32_t nextStepOpCodePos = compiler->getNextStepPos(stepOpCodePos);
		if (nextStepOpCodePos < 0) {
			break;
		}
		if ($OpCodes::ENDOP != compiler->getOp(nextStepOpCodePos)) {
			if (compiler->countPredicates(stepOpCodePos) > 0) {
				return false;
			}
		}
		stepOpCodePos = nextStepOpCodePos;
	}
	return true;
}

int32_t WalkerFactory::analyze($Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = 0;
	int32_t stepCount = 0;
	int32_t analysisResult = 0;
	while ($OpCodes::ENDOP != (stepType = $nc(compiler)->getOp(stepOpCodePos))) {
		++stepCount;
		bool predAnalysis = analyzePredicate(compiler, stepOpCodePos, stepType);
		if (predAnalysis) {
			analysisResult |= WalkerFactory::BIT_PREDICATE;
		}
		switch (stepType) {
		case $OpCodes::OP_VARIABLE:
			{}
		case $OpCodes::OP_EXTFUNCTION:
			{}
		case $OpCodes::OP_FUNCTION:
			{}
		case $OpCodes::OP_GROUP:
			{
				analysisResult |= WalkerFactory::BIT_FILTER;
				break;
			}
		case $OpCodes::FROM_ROOT:
			{
				analysisResult |= WalkerFactory::BIT_ROOT;
				break;
			}
		case $OpCodes::FROM_ANCESTORS:
			{
				analysisResult |= WalkerFactory::BIT_ANCESTOR;
				break;
			}
		case $OpCodes::FROM_ANCESTORS_OR_SELF:
			{
				analysisResult |= WalkerFactory::BIT_ANCESTOR_OR_SELF;
				break;
			}
		case $OpCodes::FROM_ATTRIBUTES:
			{
				analysisResult |= WalkerFactory::BIT_ATTRIBUTE;
				break;
			}
		case $OpCodes::FROM_NAMESPACE:
			{
				analysisResult |= WalkerFactory::BIT_NAMESPACE;
				break;
			}
		case $OpCodes::FROM_CHILDREN:
			{
				analysisResult |= WalkerFactory::BIT_CHILD;
				break;
			}
		case $OpCodes::FROM_DESCENDANTS:
			{
				analysisResult |= WalkerFactory::BIT_DESCENDANT;
				break;
			}
		case $OpCodes::FROM_DESCENDANTS_OR_SELF:
			{
				if (2 == stepCount && WalkerFactory::BIT_ROOT == analysisResult) {
					analysisResult |= WalkerFactory::BIT_ANY_DESCENDANT_FROM_ROOT;
				}
				analysisResult |= WalkerFactory::BIT_DESCENDANT_OR_SELF;
				break;
			}
		case $OpCodes::FROM_FOLLOWING:
			{
				analysisResult |= WalkerFactory::BIT_FOLLOWING;
				break;
			}
		case $OpCodes::FROM_FOLLOWING_SIBLINGS:
			{
				analysisResult |= WalkerFactory::BIT_FOLLOWING_SIBLING;
				break;
			}
		case $OpCodes::FROM_PRECEDING:
			{
				analysisResult |= WalkerFactory::BIT_PRECEDING;
				break;
			}
		case $OpCodes::FROM_PRECEDING_SIBLINGS:
			{
				analysisResult |= WalkerFactory::BIT_PRECEDING_SIBLING;
				break;
			}
		case $OpCodes::FROM_PARENT:
			{
				analysisResult |= WalkerFactory::BIT_PARENT;
				break;
			}
		case $OpCodes::FROM_SELF:
			{
				analysisResult |= WalkerFactory::BIT_SELF;
				break;
			}
		case $OpCodes::MATCH_ATTRIBUTE:
			{
				analysisResult |= (WalkerFactory::BIT_MATCH_PATTERN | WalkerFactory::BIT_ATTRIBUTE);
				break;
			}
		case $OpCodes::MATCH_ANY_ANCESTOR:
			{
				analysisResult |= (WalkerFactory::BIT_MATCH_PATTERN | WalkerFactory::BIT_ANCESTOR);
				break;
			}
		case $OpCodes::MATCH_IMMEDIATE_ANCESTOR:
			{
				analysisResult |= (WalkerFactory::BIT_MATCH_PATTERN | WalkerFactory::BIT_PARENT);
				break;
			}
		default:
			{
				$init($XPATHErrorResources);
				$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
			}
		}
		if ($OpCodes::NODETYPE_NODE == compiler->getOp(stepOpCodePos + 3)) {
			analysisResult |= WalkerFactory::BIT_NODETEST_ANY;
		}
		stepOpCodePos = compiler->getNextStepPos(stepOpCodePos);
		if (stepOpCodePos < 0) {
			break;
		}
	}
	analysisResult |= ((int32_t)(stepCount & (uint32_t)WalkerFactory::BITS_COUNT));
	return analysisResult;
}

bool WalkerFactory::isDownwardAxisOfMany(int32_t axis) {
	return (($Axis::DESCENDANTORSELF == axis) || ($Axis::DESCENDANT == axis) || ($Axis::FOLLOWING == axis) || ($Axis::PRECEDING == axis));
}

$StepPattern* WalkerFactory::loadSteps($MatchPatternIterator* mpi, $Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = 0;
	$var($StepPattern, step, nullptr);
	$var($StepPattern, firstStep, nullptr);
	$var($StepPattern, prevStep, nullptr);
	int32_t analysis = analyze(compiler, stepOpCodePos, stepIndex);
	while ($OpCodes::ENDOP != (stepType = $nc(compiler)->getOp(stepOpCodePos))) {
		$assign(step, createDefaultStepPattern(compiler, stepOpCodePos, mpi, analysis, firstStep, prevStep));
		if (nullptr == firstStep) {
			$assign(firstStep, step);
		} else {
			$nc(step)->setRelativePathPattern(prevStep);
		}
		$assign(prevStep, step);
		stepOpCodePos = compiler->getNextStepPos(stepOpCodePos);
		if (stepOpCodePos < 0) {
			break;
		}
	}
	int32_t axis = $Axis::SELF;
	int32_t paxis = $Axis::SELF;
	$var($StepPattern, tail, step);
	{
		$var($StepPattern, pat, step);
		for (; nullptr != pat; $assign(pat, $nc(pat)->getRelativePathPattern())) {
			int32_t nextAxis = pat->getAxis();
			pat->setAxis(axis);
			int32_t whatToShow = pat->getWhatToShow();
			if (whatToShow == $DTMFilter::SHOW_ATTRIBUTE || whatToShow == $DTMFilter::SHOW_NAMESPACE) {
				int32_t newAxis = (whatToShow == $DTMFilter::SHOW_ATTRIBUTE) ? $Axis::ATTRIBUTE : $Axis::NAMESPACE;
				if (isDownwardAxisOfMany(axis)) {
					int32_t var$0 = whatToShow;
					$var($String, var$1, pat->getNamespace());
					$var($StepPattern, attrPat, $new($StepPattern, var$0, var$1, $(pat->getLocalName()), newAxis, 0));
					$var($XNumber, score, pat->getStaticScore());
					pat->setNamespace(nullptr);
					$init($NodeTest);
					pat->setLocalName($NodeTest::WILD);
					attrPat->setPredicates($(pat->getPredicates()));
					pat->setPredicates(nullptr);
					pat->setWhatToShow($DTMFilter::SHOW_ELEMENT);
					$var($StepPattern, rel, pat->getRelativePathPattern());
					pat->setRelativePathPattern(attrPat);
					attrPat->setRelativePathPattern(rel);
					attrPat->setStaticScore(score);
					if ($Axis::PRECEDING == pat->getAxis()) {
						pat->setAxis($Axis::PRECEDINGANDANCESTOR);
					} else if ($Axis::DESCENDANT == pat->getAxis()) {
						pat->setAxis($Axis::DESCENDANTORSELF);
					}
					$assign(pat, attrPat);
				} else if ($Axis::CHILD == pat->getAxis()) {
					pat->setAxis($Axis::ATTRIBUTE);
				}
			}
			axis = nextAxis;
			$assign(tail, pat);
		}
	}
	if (axis < $Axis::ALL) {
		$var($StepPattern, selfPattern, $new($ContextMatchStepPattern, axis, paxis));
		$var($XNumber, score, $nc(tail)->getStaticScore());
		tail->setRelativePathPattern(selfPattern);
		tail->setStaticScore(score);
		selfPattern->setStaticScore(score);
	}
	return step;
}

$StepPattern* WalkerFactory::createDefaultStepPattern($Compiler* compiler, int32_t opPos, $MatchPatternIterator* mpi, int32_t analysis, $StepPattern* tail, $StepPattern* head) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = $nc(compiler)->getOp(opPos);
	bool simpleInit = false;
	bool prevIsOneStepDown = true;
	int32_t whatToShow = compiler->getWhatToShow(opPos);
	$var($StepPattern, ai, nullptr);
	int32_t axis = 0;
	int32_t predicateAxis = 0;
	{
		$var($Expression, expr, nullptr)
		switch (stepType) {
		case $OpCodes::OP_VARIABLE:
			{}
		case $OpCodes::OP_EXTFUNCTION:
			{}
		case $OpCodes::OP_FUNCTION:
			{}
		case $OpCodes::OP_GROUP:
			{
				prevIsOneStepDown = false;
				switch (stepType) {
				case $OpCodes::OP_VARIABLE:
					{}
				case $OpCodes::OP_EXTFUNCTION:
					{}
				case $OpCodes::OP_FUNCTION:
					{}
				case $OpCodes::OP_GROUP:
					{
						$assign(expr, compiler->compileExpression(opPos));
						break;
					}
				default:
					{
						$assign(expr, compiler->compileExpression(opPos + 2));
					}
				}
				axis = $Axis::FILTEREDLIST;
				predicateAxis = $Axis::FILTEREDLIST;
				$assign(ai, $new($FunctionPattern, expr, axis, predicateAxis));
				simpleInit = true;
				break;
			}
		case $OpCodes::FROM_ROOT:
			{
				whatToShow = $DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT;
				axis = $Axis::ROOT;
				predicateAxis = $Axis::ROOT;
				$assign(ai, $new($StepPattern, $DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT, axis, predicateAxis));
				break;
			}
		case $OpCodes::FROM_ATTRIBUTES:
			{
				whatToShow = $DTMFilter::SHOW_ATTRIBUTE;
				axis = $Axis::PARENT;
				predicateAxis = $Axis::ATTRIBUTE;
				break;
			}
		case $OpCodes::FROM_NAMESPACE:
			{
				whatToShow = $DTMFilter::SHOW_NAMESPACE;
				axis = $Axis::PARENT;
				predicateAxis = $Axis::NAMESPACE;
				break;
			}
		case $OpCodes::FROM_ANCESTORS:
			{
				axis = $Axis::DESCENDANT;
				predicateAxis = $Axis::ANCESTOR;
				break;
			}
		case $OpCodes::FROM_CHILDREN:
			{
				axis = $Axis::PARENT;
				predicateAxis = $Axis::CHILD;
				break;
			}
		case $OpCodes::FROM_ANCESTORS_OR_SELF:
			{
				axis = $Axis::DESCENDANTORSELF;
				predicateAxis = $Axis::ANCESTORORSELF;
				break;
			}
		case $OpCodes::FROM_SELF:
			{
				axis = $Axis::SELF;
				predicateAxis = $Axis::SELF;
				break;
			}
		case $OpCodes::FROM_PARENT:
			{
				axis = $Axis::CHILD;
				predicateAxis = $Axis::PARENT;
				break;
			}
		case $OpCodes::FROM_PRECEDING_SIBLINGS:
			{
				axis = $Axis::FOLLOWINGSIBLING;
				predicateAxis = $Axis::PRECEDINGSIBLING;
				break;
			}
		case $OpCodes::FROM_PRECEDING:
			{
				axis = $Axis::FOLLOWING;
				predicateAxis = $Axis::PRECEDING;
				break;
			}
		case $OpCodes::FROM_FOLLOWING_SIBLINGS:
			{
				axis = $Axis::PRECEDINGSIBLING;
				predicateAxis = $Axis::FOLLOWINGSIBLING;
				break;
			}
		case $OpCodes::FROM_FOLLOWING:
			{
				axis = $Axis::PRECEDING;
				predicateAxis = $Axis::FOLLOWING;
				break;
			}
		case $OpCodes::FROM_DESCENDANTS_OR_SELF:
			{
				axis = $Axis::ANCESTORORSELF;
				predicateAxis = $Axis::DESCENDANTORSELF;
				break;
			}
		case $OpCodes::FROM_DESCENDANTS:
			{
				axis = $Axis::ANCESTOR;
				predicateAxis = $Axis::DESCENDANT;
				break;
			}
		default:
			{
				$init($XPATHErrorResources);
				$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
			}
		}
	}
	if (nullptr == ai) {
		whatToShow = compiler->getWhatToShow(opPos);
		int32_t var$0 = whatToShow;
		$var($String, var$1, compiler->getStepNS(opPos));
		$assign(ai, $new($StepPattern, var$0, var$1, $(compiler->getStepLocalName(opPos)), axis, predicateAxis));
	}
	int32_t argLen = compiler->getFirstPredicateOpPos(opPos);
	$nc(ai)->setPredicates($(compiler->getCompiledPredicates(argLen)));
	return ai;
}

bool WalkerFactory::analyzePredicate($Compiler* compiler, int32_t opPos, int32_t stepType) {
	int32_t argLen = 0;
	switch (stepType) {
	case $OpCodes::OP_VARIABLE:
		{}
	case $OpCodes::OP_EXTFUNCTION:
		{}
	case $OpCodes::OP_FUNCTION:
		{}
	case $OpCodes::OP_GROUP:
		{
			argLen = $nc(compiler)->getArgLength(opPos);
			break;
		}
	default:
		{
			argLen = $nc(compiler)->getArgLengthOfStep(opPos);
		}
	}
	int32_t pos = $nc(compiler)->getFirstPredicateOpPos(opPos);
	int32_t nPredicates = compiler->countPredicates(pos);
	return (nPredicates > 0) ? true : false;
}

$AxesWalker* WalkerFactory::createDefaultWalker($Compiler* compiler, int32_t opPos, $WalkingIterator* lpi, int32_t analysis) {
	$useLocalCurrentObjectStackCache();
	$var($AxesWalker, ai, nullptr);
	int32_t stepType = $nc(compiler)->getOp(opPos);
	bool simpleInit = false;
	int32_t totalNumberWalkers = ((int32_t)(analysis & (uint32_t)WalkerFactory::BITS_COUNT));
	bool prevIsOneStepDown = true;
	switch (stepType) {
	case $OpCodes::OP_VARIABLE:
		{}
	case $OpCodes::OP_EXTFUNCTION:
		{}
	case $OpCodes::OP_FUNCTION:
		{}
	case $OpCodes::OP_GROUP:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($FilterExprWalker, lpi));
			simpleInit = true;
			break;
		}
	case $OpCodes::FROM_ROOT:
		{
			$assign(ai, $new($AxesWalker, lpi, $Axis::ROOT));
			break;
		}
	case $OpCodes::FROM_ANCESTORS:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($ReverseAxesWalker, lpi, $Axis::ANCESTOR));
			break;
		}
	case $OpCodes::FROM_ANCESTORS_OR_SELF:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($ReverseAxesWalker, lpi, $Axis::ANCESTORORSELF));
			break;
		}
	case $OpCodes::FROM_ATTRIBUTES:
		{
			$assign(ai, $new($AxesWalker, lpi, $Axis::ATTRIBUTE));
			break;
		}
	case $OpCodes::FROM_NAMESPACE:
		{
			$assign(ai, $new($AxesWalker, lpi, $Axis::NAMESPACE));
			break;
		}
	case $OpCodes::FROM_CHILDREN:
		{
			$assign(ai, $new($AxesWalker, lpi, $Axis::CHILD));
			break;
		}
	case $OpCodes::FROM_DESCENDANTS:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($AxesWalker, lpi, $Axis::DESCENDANT));
			break;
		}
	case $OpCodes::FROM_DESCENDANTS_OR_SELF:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($AxesWalker, lpi, $Axis::DESCENDANTORSELF));
			break;
		}
	case $OpCodes::FROM_FOLLOWING:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($AxesWalker, lpi, $Axis::FOLLOWING));
			break;
		}
	case $OpCodes::FROM_FOLLOWING_SIBLINGS:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($AxesWalker, lpi, $Axis::FOLLOWINGSIBLING));
			break;
		}
	case $OpCodes::FROM_PRECEDING:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($ReverseAxesWalker, lpi, $Axis::PRECEDING));
			break;
		}
	case $OpCodes::FROM_PRECEDING_SIBLINGS:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($ReverseAxesWalker, lpi, $Axis::PRECEDINGSIBLING));
			break;
		}
	case $OpCodes::FROM_PARENT:
		{
			prevIsOneStepDown = false;
			$assign(ai, $new($ReverseAxesWalker, lpi, $Axis::PARENT));
			break;
		}
	case $OpCodes::FROM_SELF:
		{
			$assign(ai, $new($AxesWalker, lpi, $Axis::SELF));
			break;
		}
	default:
		{
			$init($XPATHErrorResources);
			$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
		}
	}
	if (simpleInit) {
		$nc(ai)->initNodeTest($DTMFilter::SHOW_ALL);
	} else {
		int32_t whatToShow = compiler->getWhatToShow(opPos);
		if ((0 == ((int32_t)(whatToShow & (uint32_t)((($DTMFilter::SHOW_ATTRIBUTE | $DTMFilter::SHOW_NAMESPACE) | $DTMFilter::SHOW_ELEMENT) | $DTMFilter::SHOW_PROCESSING_INSTRUCTION)))) || (whatToShow == $DTMFilter::SHOW_ALL)) {
			$nc(ai)->initNodeTest(whatToShow);
		} else {
			int32_t var$0 = whatToShow;
			$var($String, var$1, compiler->getStepNS(opPos));
			$nc(ai)->initNodeTest(var$0, var$1, $(compiler->getStepLocalName(opPos)));
		}
	}
	return ai;
}

$String* WalkerFactory::getAnalysisString(int32_t analysis) {
	$var($StringBuffer, buf, $new($StringBuffer));
	buf->append("count: "_s)->append(getStepCount(analysis))->append(u' ');
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_NODETEST_ANY)) != 0) {
		buf->append("NTANY|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_PREDICATE)) != 0) {
		buf->append("PRED|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_ANCESTOR)) != 0) {
		buf->append("ANC|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_ANCESTOR_OR_SELF)) != 0) {
		buf->append("ANCOS|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_ATTRIBUTE)) != 0) {
		buf->append("ATTR|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_CHILD)) != 0) {
		buf->append("CH|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_DESCENDANT)) != 0) {
		buf->append("DESC|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_DESCENDANT_OR_SELF)) != 0) {
		buf->append("DESCOS|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_FOLLOWING)) != 0) {
		buf->append("FOL|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_FOLLOWING_SIBLING)) != 0) {
		buf->append("FOLS|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_NAMESPACE)) != 0) {
		buf->append("NS|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_PARENT)) != 0) {
		buf->append("P|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_PRECEDING)) != 0) {
		buf->append("PREC|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_PRECEDING_SIBLING)) != 0) {
		buf->append("PRECS|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_SELF)) != 0) {
		buf->append(".|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_FILTER)) != 0) {
		buf->append("FLT|"_s);
	}
	if (((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_ROOT)) != 0) {
		buf->append("R|"_s);
	}
	return buf->toString();
}

bool WalkerFactory::hasPredicate(int32_t analysis) {
	return (0 != ((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_PREDICATE)));
}

bool WalkerFactory::isWild(int32_t analysis) {
	return (0 != ((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_NODETEST_ANY)));
}

bool WalkerFactory::walksAncestors(int32_t analysis) {
	return isSet(analysis, WalkerFactory::BIT_ANCESTOR | WalkerFactory::BIT_ANCESTOR_OR_SELF);
}

bool WalkerFactory::walksAttributes(int32_t analysis) {
	return (0 != ((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_ATTRIBUTE)));
}

bool WalkerFactory::walksNamespaces(int32_t analysis) {
	return (0 != ((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_NAMESPACE)));
}

bool WalkerFactory::walksChildren(int32_t analysis) {
	return (0 != ((int32_t)(analysis & (uint32_t)WalkerFactory::BIT_CHILD)));
}

bool WalkerFactory::walksDescendants(int32_t analysis) {
	return isSet(analysis, WalkerFactory::BIT_DESCENDANT | WalkerFactory::BIT_DESCENDANT_OR_SELF);
}

bool WalkerFactory::walksSubtree(int32_t analysis) {
	return isSet(analysis, (WalkerFactory::BIT_DESCENDANT | WalkerFactory::BIT_DESCENDANT_OR_SELF) | WalkerFactory::BIT_CHILD);
}

bool WalkerFactory::walksSubtreeOnlyMaybeAbsolute(int32_t analysis) {
	bool var$2 = walksSubtree(analysis);
	bool var$1 = var$2 && !walksExtraNodes(analysis);
	bool var$0 = var$1 && !walksUp(analysis);
	return var$0 && !walksSideways(analysis);
}

bool WalkerFactory::walksSubtreeOnly(int32_t analysis) {
	bool var$0 = walksSubtreeOnlyMaybeAbsolute(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::walksFilteredList(int32_t analysis) {
	return isSet(analysis, WalkerFactory::BIT_FILTER);
}

bool WalkerFactory::walksSubtreeOnlyFromRootOrContext(int32_t analysis) {
	bool var$3 = walksSubtree(analysis);
	bool var$2 = var$3 && !walksExtraNodes(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isSet(analysis, WalkerFactory::BIT_FILTER);
}

bool WalkerFactory::walksInDocOrder(int32_t analysis) {
	bool var$2 = walksSubtreeOnlyMaybeAbsolute(analysis);
	bool var$1 = var$2 || walksExtraNodesOnly(analysis);
	bool var$0 = (var$1 || walksFollowingOnlyMaybeAbsolute(analysis));
	return var$0 && !isSet(analysis, WalkerFactory::BIT_FILTER);
}

bool WalkerFactory::walksFollowingOnlyMaybeAbsolute(int32_t analysis) {
	bool var$2 = isSet(analysis, (WalkerFactory::BIT_SELF | WalkerFactory::BIT_FOLLOWING_SIBLING) | WalkerFactory::BIT_FOLLOWING);
	bool var$1 = var$2 && !walksSubtree(analysis);
	bool var$0 = var$1 && !walksUp(analysis);
	return var$0 && !walksSideways(analysis);
}

bool WalkerFactory::walksUp(int32_t analysis) {
	return isSet(analysis, (WalkerFactory::BIT_PARENT | WalkerFactory::BIT_ANCESTOR) | WalkerFactory::BIT_ANCESTOR_OR_SELF);
}

bool WalkerFactory::walksSideways(int32_t analysis) {
	return isSet(analysis, ((WalkerFactory::BIT_FOLLOWING | WalkerFactory::BIT_FOLLOWING_SIBLING) | WalkerFactory::BIT_PRECEDING) | WalkerFactory::BIT_PRECEDING_SIBLING);
}

bool WalkerFactory::walksExtraNodes(int32_t analysis) {
	return isSet(analysis, WalkerFactory::BIT_NAMESPACE | WalkerFactory::BIT_ATTRIBUTE);
}

bool WalkerFactory::walksExtraNodesOnly(int32_t analysis) {
	bool var$4 = walksExtraNodes(analysis);
	bool var$3 = var$4 && !isSet(analysis, WalkerFactory::BIT_SELF);
	bool var$2 = var$3 && !walksSubtree(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::isAbsolute(int32_t analysis) {
	return isSet(analysis, WalkerFactory::BIT_ROOT | WalkerFactory::BIT_FILTER);
}

bool WalkerFactory::walksChildrenOnly(int32_t analysis) {
	bool var$5 = walksChildren(analysis);
	bool var$4 = var$5 && !isSet(analysis, WalkerFactory::BIT_SELF);
	bool var$3 = var$4 && !walksExtraNodes(analysis);
	bool var$2 = var$3 && !walksDescendants(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	if (var$0) {
		bool var$6 = !isAbsolute(analysis);
		var$0 = (var$6 || isSet(analysis, WalkerFactory::BIT_ROOT));
	}
	return var$0;
}

bool WalkerFactory::walksChildrenAndExtraAndSelfOnly(int32_t analysis) {
	bool var$3 = walksChildren(analysis);
	bool var$2 = var$3 && !walksDescendants(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	if (var$0) {
		bool var$4 = !isAbsolute(analysis);
		var$0 = (var$4 || isSet(analysis, WalkerFactory::BIT_ROOT));
	}
	return var$0;
}

bool WalkerFactory::walksDescendantsAndExtraAndSelfOnly(int32_t analysis) {
	bool var$3 = !walksChildren(analysis);
	bool var$2 = var$3 && walksDescendants(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	if (var$0) {
		bool var$4 = !isAbsolute(analysis);
		var$0 = (var$4 || isSet(analysis, WalkerFactory::BIT_ROOT));
	}
	return var$0;
}

bool WalkerFactory::walksSelfOnly(int32_t analysis) {
	bool var$3 = isSet(analysis, WalkerFactory::BIT_SELF);
	bool var$2 = var$3 && !walksSubtree(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::walksUpOnly(int32_t analysis) {
	bool var$2 = !walksSubtree(analysis);
	bool var$1 = var$2 && walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::walksDownOnly(int32_t analysis) {
	bool var$2 = walksSubtree(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::walksDownExtraOnly(int32_t analysis) {
	bool var$3 = walksSubtree(analysis);
	bool var$2 = var$3 && walksExtraNodes(analysis);
	bool var$1 = var$2 && !walksUp(analysis);
	bool var$0 = var$1 && !walksSideways(analysis);
	return var$0 && !isAbsolute(analysis);
}

bool WalkerFactory::canSkipSubtrees(int32_t analysis) {
	bool var$0 = isSet(analysis, WalkerFactory::BIT_CHILD);
	return var$0 | walksSideways(analysis);
}

bool WalkerFactory::canCrissCross(int32_t analysis) {
	if (walksSelfOnly(analysis)) {
		return false;
	} else {
		bool var$1 = walksDownOnly(analysis);
		if (var$1 && !canSkipSubtrees(analysis)) {
			return false;
		} else if (walksChildrenAndExtraAndSelfOnly(analysis)) {
			return false;
		} else if (walksDescendantsAndExtraAndSelfOnly(analysis)) {
			return false;
		} else if (walksUpOnly(analysis)) {
			return false;
		} else if (walksExtraNodesOnly(analysis)) {
			return false;
		} else {
			bool var$5 = walksSubtree(analysis);
			if (var$5) {
				bool var$7 = walksSideways(analysis);
				bool var$6 = var$7 || walksUp(analysis);
				var$5 = (var$6 || canSkipSubtrees(analysis));
			}
			if (var$5) {
				return true;
			} else {
				return false;
			}
		}
	}
}

bool WalkerFactory::isNaturalDocOrder(int32_t analysis) {
	bool var$1 = canCrissCross(analysis);
	bool var$0 = var$1 || isSet(analysis, WalkerFactory::BIT_NAMESPACE);
	if (var$0 || walksFilteredList(analysis)) {
		return false;
	}
	if (walksInDocOrder(analysis)) {
		return true;
	}
	return false;
}

bool WalkerFactory::isNaturalDocOrder($Compiler* compiler, int32_t stepOpCodePos, int32_t stepIndex, int32_t analysis) {
	$useLocalCurrentObjectStackCache();
	if (canCrissCross(analysis)) {
		return false;
	}
	if (isSet(analysis, WalkerFactory::BIT_NAMESPACE)) {
		return false;
	}
	bool var$0 = isSet(analysis, WalkerFactory::BIT_FOLLOWING | WalkerFactory::BIT_FOLLOWING_SIBLING);
	if (var$0 && isSet(analysis, WalkerFactory::BIT_PRECEDING | WalkerFactory::BIT_PRECEDING_SIBLING)) {
		return false;
	}
	int32_t stepType = 0;
	int32_t stepCount = 0;
	bool foundWildAttribute = false;
	int32_t potentialDuplicateMakingStepCount = 0;
	while ($OpCodes::ENDOP != (stepType = $nc(compiler)->getOp(stepOpCodePos))) {
		++stepCount;
		{
			$var($String, localName, nullptr)
			switch (stepType) {
			case $OpCodes::FROM_ATTRIBUTES:
				{}
			case $OpCodes::MATCH_ATTRIBUTE:
				{
					if (foundWildAttribute) {
						return false;
					}
					$assign(localName, compiler->getStepLocalName(stepOpCodePos));
					if ($nc(localName)->equals("*"_s)) {
						foundWildAttribute = true;
					}
					break;
				}
			case $OpCodes::FROM_FOLLOWING:
				{}
			case $OpCodes::FROM_FOLLOWING_SIBLINGS:
				{}
			case $OpCodes::FROM_PRECEDING:
				{}
			case $OpCodes::FROM_PRECEDING_SIBLINGS:
				{}
			case $OpCodes::FROM_PARENT:
				{}
			case $OpCodes::OP_VARIABLE:
				{}
			case $OpCodes::OP_EXTFUNCTION:
				{}
			case $OpCodes::OP_FUNCTION:
				{}
			case $OpCodes::OP_GROUP:
				{}
			case $OpCodes::FROM_NAMESPACE:
				{}
			case $OpCodes::FROM_ANCESTORS:
				{}
			case $OpCodes::FROM_ANCESTORS_OR_SELF:
				{}
			case $OpCodes::MATCH_ANY_ANCESTOR:
				{}
			case $OpCodes::MATCH_IMMEDIATE_ANCESTOR:
				{}
			case $OpCodes::FROM_DESCENDANTS_OR_SELF:
				{}
			case $OpCodes::FROM_DESCENDANTS:
				{
					if (potentialDuplicateMakingStepCount > 0) {
						return false;
					}
					++potentialDuplicateMakingStepCount;
				}
			case $OpCodes::FROM_ROOT:
				{}
			case $OpCodes::FROM_CHILDREN:
				{}
			case $OpCodes::FROM_SELF:
				{
					if (foundWildAttribute) {
						return false;
					}
					break;
				}
			default:
				{
					$init($XPATHErrorResources);
					$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, $$new($ObjectArray, {$($of($Integer::toString(stepType)))}))));
				}
			}
		}
		int32_t nextStepOpCodePos = compiler->getNextStepPos(stepOpCodePos);
		if (nextStepOpCodePos < 0) {
			break;
		}
		stepOpCodePos = nextStepOpCodePos;
	}
	return true;
}

bool WalkerFactory::isOneStep(int32_t analysis) {
	return ((int32_t)(analysis & (uint32_t)WalkerFactory::BITS_COUNT)) == 1;
}

int32_t WalkerFactory::getStepCount(int32_t analysis) {
	return ((int32_t)(analysis & (uint32_t)WalkerFactory::BITS_COUNT));
}

WalkerFactory::WalkerFactory() {
}

$Class* WalkerFactory::load$($String* name, bool initialize) {
	$loadClass(WalkerFactory, name, initialize, &_WalkerFactory_ClassInfo_, allocate$WalkerFactory);
	return class$;
}

$Class* WalkerFactory::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com