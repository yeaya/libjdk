#include <com/sun/source/tree/TypeParameterTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* TypeParameterTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getAnnotations, $List*)},
		{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getBounds, $List*)},
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getName, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.TypeParameterTree",
		nullptr,
		"com.sun.source.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(TypeParameterTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeParameterTree);
	});
	return class$;
}

$Class* TypeParameterTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com