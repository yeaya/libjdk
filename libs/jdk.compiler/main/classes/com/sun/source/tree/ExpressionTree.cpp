#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ExpressionTree::load$($String* name, bool initialize) {
	$CompoundAttribute annotations$$[] = {
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		"com.sun.source.tree.CaseLabelTree",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ExpressionTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExpressionTree);
	});
	return class$;
}

$Class* ExpressionTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com