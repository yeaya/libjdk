#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* SynchronizedTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynchronizedTree, getBlock, $BlockTree*)},
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynchronizedTree, getExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.SynchronizedTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SynchronizedTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronizedTree);
	});
	return class$;
}

$Class* SynchronizedTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com