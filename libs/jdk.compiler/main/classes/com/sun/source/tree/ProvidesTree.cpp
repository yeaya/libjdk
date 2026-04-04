#include <com/sun/source/tree/ProvidesTree.h>
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

$Class* ProvidesTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getImplementationNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ProvidesTree, getImplementationNames, $List*)},
		{"getServiceName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProvidesTree, getServiceName, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ProvidesTree",
		nullptr,
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProvidesTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProvidesTree);
	});
	return class$;
}

$Class* ProvidesTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com