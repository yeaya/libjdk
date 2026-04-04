#include <com/sun/source/tree/CaseLabelTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* CaseLabelTree::load$($String* name, bool initialize) {
	$CompoundAttribute annotations$$[] = {
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.CaseLabelTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CaseLabelTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaseLabelTree);
	});
	return class$;
}

$Class* CaseLabelTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com