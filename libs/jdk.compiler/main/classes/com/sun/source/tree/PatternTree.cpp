#include <com/sun/source/tree/PatternTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* PatternTree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.PatternTree",
		nullptr,
		"com.sun.source.tree.CaseLabelTree"
	};
	$loadClass(PatternTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PatternTree);
	});
	return class$;
}

$Class* PatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com