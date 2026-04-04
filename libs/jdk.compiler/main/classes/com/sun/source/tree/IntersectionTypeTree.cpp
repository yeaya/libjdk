#include <com/sun/source/tree/IntersectionTypeTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* IntersectionTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(IntersectionTypeTree, getBounds, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.IntersectionTypeTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(IntersectionTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntersectionTypeTree);
	});
	return class$;
}

$Class* IntersectionTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com