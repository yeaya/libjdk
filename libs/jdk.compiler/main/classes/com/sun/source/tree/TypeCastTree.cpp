#include <com/sun/source/tree/TypeCastTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* TypeCastTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeCastTree, getExpression, $ExpressionTree*)},
		{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeCastTree, getType, $Tree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.TypeCastTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(TypeCastTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeCastTree);
	});
	return class$;
}

$Class* TypeCastTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com