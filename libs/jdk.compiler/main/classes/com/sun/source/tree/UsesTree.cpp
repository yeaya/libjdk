#include <com/sun/source/tree/UsesTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* UsesTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getServiceName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UsesTree, getServiceName, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.UsesTree",
		nullptr,
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(UsesTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UsesTree);
	});
	return class$;
}

$Class* UsesTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com