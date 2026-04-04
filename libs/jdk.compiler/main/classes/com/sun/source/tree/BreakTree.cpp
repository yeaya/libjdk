#include <com/sun/source/tree/BreakTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* BreakTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BreakTree, getLabel, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.BreakTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(BreakTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakTree);
	});
	return class$;
}

$Class* BreakTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com