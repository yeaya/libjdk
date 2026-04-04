#include <com/sun/source/tree/BinaryTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* BinaryTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLeftOperand", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BinaryTree, getLeftOperand, $ExpressionTree*)},
		{"getRightOperand", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BinaryTree, getRightOperand, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.BinaryTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(BinaryTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BinaryTree);
	});
	return class$;
}

$Class* BinaryTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com