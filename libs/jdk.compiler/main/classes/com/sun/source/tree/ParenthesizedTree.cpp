#include <com/sun/source/tree/ParenthesizedTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ParenthesizedTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParenthesizedTree, getExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ParenthesizedTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ParenthesizedTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParenthesizedTree);
	});
	return class$;
}

$Class* ParenthesizedTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com