#include <com/sun/source/tree/IdentifierTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* IdentifierTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IdentifierTree, getName, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.IdentifierTree",
		nullptr,
		"com.sun.source.tree.ExpressionTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(IdentifierTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentifierTree);
	});
	return class$;
}

$Class* IdentifierTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com