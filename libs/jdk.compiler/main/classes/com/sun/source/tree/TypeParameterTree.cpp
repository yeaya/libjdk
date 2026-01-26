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

$MethodInfo _TypeParameterTree_MethodInfo_[] = {
	{"getAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getAnnotations, $List*)},
	{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getBounds, $List*)},
	{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeParameterTree, getName, $Name*)},
	{}
};

$ClassInfo _TypeParameterTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.TypeParameterTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_TypeParameterTree_MethodInfo_
};

$Object* allocate$TypeParameterTree($Class* clazz) {
	return $of($alloc(TypeParameterTree));
}

$Class* TypeParameterTree::load$($String* name, bool initialize) {
	$loadClass(TypeParameterTree, name, initialize, &_TypeParameterTree_ClassInfo_, allocate$TypeParameterTree);
	return class$;
}

$Class* TypeParameterTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com