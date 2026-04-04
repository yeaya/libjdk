#include <com/sun/source/tree/OpensTree.h>
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

$Class* OpensTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getModuleNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(OpensTree, getModuleNames, $List*)},
		{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpensTree, getPackageName, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.OpensTree",
		nullptr,
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(OpensTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpensTree);
	});
	return class$;
}

$Class* OpensTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com