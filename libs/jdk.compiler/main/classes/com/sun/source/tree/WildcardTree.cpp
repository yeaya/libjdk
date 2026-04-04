#include <com/sun/source/tree/WildcardTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* WildcardTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBound", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardTree, getBound, $Tree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.WildcardTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(WildcardTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WildcardTree);
	});
	return class$;
}

$Class* WildcardTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com