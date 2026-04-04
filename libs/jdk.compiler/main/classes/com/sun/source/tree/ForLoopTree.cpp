#include <com/sun/source/tree/ForLoopTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/StatementTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $StatementTree = ::com::sun::source::tree::StatementTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ForLoopTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCondition", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ForLoopTree, getCondition, $ExpressionTree*)},
		{"getInitializer", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ForLoopTree, getInitializer, $List*)},
		{"getStatement", "()Lcom/sun/source/tree/StatementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ForLoopTree, getStatement, $StatementTree*)},
		{"getUpdate", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionStatementTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ForLoopTree, getUpdate, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ForLoopTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ForLoopTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForLoopTree);
	});
	return class$;
}

$Class* ForLoopTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com