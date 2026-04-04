#include <com/sun/source/tree/PackageTree.h>
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

$Class* PackageTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PackageTree, getAnnotations, $List*)},
		{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PackageTree, getPackageName, $ExpressionTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.PackageTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(PackageTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackageTree);
	});
	return class$;
}

$Class* PackageTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com