#include <com/sun/source/tree/ArrayTypeTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ArrayTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypeTree, getType, $Tree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ArrayTypeTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ArrayTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayTypeTree);
	});
	return class$;
}

$Class* ArrayTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com