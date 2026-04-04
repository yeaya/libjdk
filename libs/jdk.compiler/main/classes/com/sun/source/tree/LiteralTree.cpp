#include <com/sun/source/tree/LiteralTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* LiteralTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LiteralTree, getValue, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.LiteralTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(LiteralTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiteralTree);
	});
	return class$;
}

$Class* LiteralTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com