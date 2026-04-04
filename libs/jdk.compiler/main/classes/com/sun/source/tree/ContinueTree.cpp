#include <com/sun/source/tree/ContinueTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ContinueTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLabel", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContinueTree, getLabel, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ContinueTree",
		nullptr,
		"com.sun.source.tree.StatementTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ContinueTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContinueTree);
	});
	return class$;
}

$Class* ContinueTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com