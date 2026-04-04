#include <com/sun/source/tree/SwitchTree.h>
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

$Class* SwitchTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCases", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/CaseTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SwitchTree, getCases, $List*)},
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwitchTree, getExpression, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.SwitchTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(SwitchTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwitchTree);
	});
	return class$;
}

$Class* SwitchTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com