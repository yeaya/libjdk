#include <com/sun/source/tree/EnhancedForLoopTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* EnhancedForLoopTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EnhancedForLoopTree, getExpression, $ExpressionTree*)},
		{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EnhancedForLoopTree, getStatement, $StatementTree*)},
		{"getVariable", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EnhancedForLoopTree, getVariable, $VariableTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.EnhancedForLoopTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(EnhancedForLoopTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnhancedForLoopTree);
	});
	return class$;
}

$Class* EnhancedForLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com