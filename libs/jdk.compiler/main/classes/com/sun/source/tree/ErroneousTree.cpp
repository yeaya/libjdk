#include <com/sun/source/tree/ErroneousTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ErroneousTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getErrorTrees", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ErroneousTree, getErrorTrees, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ErroneousTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ErroneousTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErroneousTree);
	});
	return class$;
}

$Class* ErroneousTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com