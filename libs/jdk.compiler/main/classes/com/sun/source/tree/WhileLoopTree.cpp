#include <com/sun/source/tree/WhileLoopTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* WhileLoopTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WhileLoopTree, getCondition, $ExpressionTree*)},
		{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WhileLoopTree, getStatement, $StatementTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.WhileLoopTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(WhileLoopTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WhileLoopTree);
	});
	return class$;
}

$Class* WhileLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com