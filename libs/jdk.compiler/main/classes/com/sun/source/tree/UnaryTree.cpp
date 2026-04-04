#include <com/sun/source/tree/UnaryTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* UnaryTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnaryTree, getExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.UnaryTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnaryTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnaryTree);
	});
	return class$;
}

$Class* UnaryTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com