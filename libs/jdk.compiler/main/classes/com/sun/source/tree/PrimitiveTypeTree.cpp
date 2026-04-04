#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* PrimitiveTypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPrimitiveTypeKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrimitiveTypeTree, getPrimitiveTypeKind, $TypeKind*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.PrimitiveTypeTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrimitiveTypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveTypeTree);
	});
	return class$;
}

$Class* PrimitiveTypeTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com