#include <com/sun/source/tree/GuardedPatternTree.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $PatternTree = ::com::sun::source::tree::PatternTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* GuardedPatternTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GuardedPatternTree, getExpression, $ExpressionTree*)},
		{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GuardedPatternTree, getPattern, $PatternTree*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.GuardedPatternTree",
		nullptr,
		"com.sun.source.tree.PatternTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(GuardedPatternTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GuardedPatternTree);
	});
	return class$;
}

$Class* GuardedPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com