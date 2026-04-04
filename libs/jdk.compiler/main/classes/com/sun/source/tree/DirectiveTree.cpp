#include <com/sun/source/tree/DirectiveTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* DirectiveTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.DirectiveTree",
		nullptr,
		"com.sun.source.tree.Tree"
	};
	$loadClass(DirectiveTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectiveTree);
	});
	return class$;
}

$Class* DirectiveTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com