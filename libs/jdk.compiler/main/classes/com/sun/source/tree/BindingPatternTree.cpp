#include <com/sun/source/tree/BindingPatternTree.h>
#include <com/sun/source/tree/VariableTree.h>
#include <jcpp.h>

using $VariableTree = ::com::sun::source::tree::VariableTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* BindingPatternTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getVariable", "()Lcom/sun/source/tree/VariableTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BindingPatternTree, getVariable, $VariableTree*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.BindingPatternTree",
		nullptr,
		"com.sun.source.tree.PatternTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(BindingPatternTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BindingPatternTree);
	});
	return class$;
}

$Class* BindingPatternTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com