#include <com/sun/source/tree/ClassTree.h>

#include <com/sun/source/tree/ModifiersTree.h>
#include <com/sun/source/tree/Tree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ModifiersTree = ::com::sun::source::tree::ModifiersTree;
using $Tree = ::com::sun::source::tree::Tree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _ClassTree_MethodInfo_[] = {
	{"getExtendsClause", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getExtendsClause, $Tree*)},
	{"getImplementsClause", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getImplementsClause, $List*)},
	{"getMembers", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getMembers, $List*)},
	{"getModifiers", "()Lcom/sun/source/tree/ModifiersTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getModifiers, $ModifiersTree*)},
	{"getPermitsClause", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC, $virtualMethod(ClassTree, getPermitsClause, $List*)},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getSimpleName, $Name*)},
	{"getTypeParameters", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/TypeParameterTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ClassTree, getTypeParameters, $List*)},
	{}
};

$ClassInfo _ClassTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.ClassTree",
	nullptr,
	"com.sun.source.tree.StatementTree",
	nullptr,
	_ClassTree_MethodInfo_
};

$Object* allocate$ClassTree($Class* clazz) {
	return $of($alloc(ClassTree));
}

$List* ClassTree::getPermitsClause() {
	return $List::of();
}

$Class* ClassTree::load$($String* name, bool initialize) {
	$loadClass(ClassTree, name, initialize, &_ClassTree_ClassInfo_, allocate$ClassTree);
	return class$;
}

$Class* ClassTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com