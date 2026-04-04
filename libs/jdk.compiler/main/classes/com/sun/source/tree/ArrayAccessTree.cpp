#include <com/sun/source/tree/ArrayAccessTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ArrayAccessTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayAccessTree, getExpression, $ExpressionTree*)},
		{"getIndex", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayAccessTree, getIndex, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ArrayAccessTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ArrayAccessTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayAccessTree);
	});
	return class$;
}

$Class* ArrayAccessTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com