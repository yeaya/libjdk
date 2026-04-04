#include <com/sun/source/tree/ModifiersTree.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* ModifiersTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModifiersTree, getAnnotations, $List*)},
		{"getFlags", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModifiersTree, getFlags, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.ModifiersTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModifiersTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModifiersTree);
	});
	return class$;
}

$Class* ModifiersTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com