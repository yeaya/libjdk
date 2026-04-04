#include <com/sun/source/tree/IfTree.h>
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

$Class* IfTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IfTree, getCondition, $ExpressionTree*)},
		{"getElseStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IfTree, getElseStatement, $StatementTree*)},
		{"getThenStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IfTree, getThenStatement, $StatementTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.IfTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(IfTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IfTree);
	});
	return class$;
}

$Class* IfTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com