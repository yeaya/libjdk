#include <com/sun/source/tree/ConditionalExpressionTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ConditionalExpressionTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConditionalExpressionTree, getCondition, $ExpressionTree*)},
		{"getFalseExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConditionalExpressionTree, getFalseExpression, $ExpressionTree*)},
		{"getTrueExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConditionalExpressionTree, getTrueExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ConditionalExpressionTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ConditionalExpressionTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConditionalExpressionTree);
	});
	return class$;
}

$Class* ConditionalExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com