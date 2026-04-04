#include <com/sun/source/tree/ExportsTree.h>
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

$Class* ExportsTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getModuleNames", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ExpressionTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExportsTree, getModuleNames, $List*)},
		{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExportsTree, getPackageName, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ExportsTree",
		nullptr,
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExportsTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExportsTree);
	});
	return class$;
}

$Class* ExportsTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com