#include <com/sun/source/tree/ParenthesizedPatternTree.h>
#include <com/sun/source/tree/PatternTree.h>
#include <jcpp.h>

using $PatternTree = ::com::sun::source::tree::PatternTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ParenthesizedPatternTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPattern", "()Lcom/sun/source/tree/PatternTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParenthesizedPatternTree, getPattern, $PatternTree*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ParenthesizedPatternTree",
		nullptr,
		"com.sun.source.tree.PatternTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ParenthesizedPatternTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParenthesizedPatternTree);
	});
	return class$;
}

$Class* ParenthesizedPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com