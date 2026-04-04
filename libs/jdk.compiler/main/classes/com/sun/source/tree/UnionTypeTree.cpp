#include <com/sun/source/tree/UnionTypeTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* UnionTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTypeAlternatives", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(UnionTypeTree, getTypeAlternatives, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.UnionTypeTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnionTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionTypeTree);
	});
	return class$;
}

$Class* UnionTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com