#include <com/sun/source/tree/StatementTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* StatementTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.StatementTree",
		nullptr,
		"com.sun.source.tree.Tree"
	};
	$loadClass(StatementTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StatementTree);
	});
	return class$;
}

$Class* StatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com