#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* MethodInvocationTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MethodInvocationTree, getArguments, $List*)},
		{"getMethodSelect", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodInvocationTree, getMethodSelect, $ExpressionTree*)},
		{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MethodInvocationTree, getTypeArguments, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.MethodInvocationTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(MethodInvocationTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodInvocationTree);
	});
	return class$;
}

$Class* MethodInvocationTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com