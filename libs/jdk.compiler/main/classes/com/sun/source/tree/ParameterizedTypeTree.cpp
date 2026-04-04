#include <com/sun/source/tree/ParameterizedTypeTree.h>
#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ParameterizedTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getType", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedTypeTree, getType, $Tree*)},
		{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedTypeTree, getTypeArguments, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ParameterizedTypeTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ParameterizedTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedTypeTree);
	});
	return class$;
}

$Class* ParameterizedTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com