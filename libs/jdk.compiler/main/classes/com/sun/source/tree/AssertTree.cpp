#include <com/sun/source/tree/AssertTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* AssertTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssertTree, getCondition, $ExpressionTree*)},
		{"getDetail", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AssertTree, getDetail, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.AssertTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(AssertTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssertTree);
	});
	return class$;
}

$Class* AssertTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com