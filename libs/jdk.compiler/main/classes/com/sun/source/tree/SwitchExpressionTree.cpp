#include <com/sun/source/tree/SwitchExpressionTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* SwitchExpressionTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCases", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SwitchExpressionTree, getCases, $List*)},
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwitchExpressionTree, getExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.SwitchExpressionTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SwitchExpressionTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwitchExpressionTree);
	});
	return class$;
}

$Class* SwitchExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com