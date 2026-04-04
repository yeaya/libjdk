#include <com/sun/source/tree/EmptyStatementTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* EmptyStatementTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.EmptyStatementTree",
		nullptr,
		"com.sun.source.tree.StatementTree"
	};
	$loadClass(EmptyStatementTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyStatementTree);
	});
	return class$;
}

$Class* EmptyStatementTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com