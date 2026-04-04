#include <com/sun/source/tree/ImportTree.h>
#include <com/sun/source/tree/Tree.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ImportTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getQualifiedIdentifier", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImportTree, getQualifiedIdentifier, $Tree*)},
		{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImportTree, isStatic, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ImportTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ImportTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImportTree);
	});
	return class$;
}

$Class* ImportTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com