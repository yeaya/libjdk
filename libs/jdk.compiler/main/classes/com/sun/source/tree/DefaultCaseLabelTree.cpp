#include <com/sun/source/tree/DefaultCaseLabelTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* DefaultCaseLabelTree::load$($String* name, bool initialize) {
	$CompoundAttribute annotations$$[] = {
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.DefaultCaseLabelTree",
		nullptr,
		"com.sun.source.tree.CaseLabelTree",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DefaultCaseLabelTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultCaseLabelTree);
	});
	return class$;
}

$Class* DefaultCaseLabelTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com