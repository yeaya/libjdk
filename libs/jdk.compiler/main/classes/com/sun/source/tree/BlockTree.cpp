#include <com/sun/source/tree/BlockTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* BlockTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getStatements", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/StatementTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(BlockTree, getStatements, $List*)},
		{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BlockTree, isStatic, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.BlockTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(BlockTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BlockTree);
	});
	return class$;
}

$Class* BlockTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com