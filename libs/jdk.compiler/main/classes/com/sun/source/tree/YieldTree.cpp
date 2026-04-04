#include <com/sun/source/tree/YieldTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* YieldTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(YieldTree, getValue, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.YieldTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(YieldTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(YieldTree);
	});
	return class$;
}

$Class* YieldTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com