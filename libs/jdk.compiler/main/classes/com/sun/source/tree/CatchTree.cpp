#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/BlockTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $BlockTree = ::com::sun::source::tree::BlockTree;
using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* CatchTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBlock", "()Lcom/sun/source/tree/BlockTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CatchTree, getBlock, $BlockTree*)},
		{"getParameter", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CatchTree, getParameter, $VariableTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.CatchTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(CatchTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CatchTree);
	});
	return class$;
}

$Class* CatchTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com