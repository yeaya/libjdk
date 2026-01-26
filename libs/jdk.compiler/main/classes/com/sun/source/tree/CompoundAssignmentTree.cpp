#include <com/sun/source/tree/CompoundAssignmentTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _CompoundAssignmentTree_MethodInfo_[] = {
	{"getExpression", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompoundAssignmentTree, getExpression, $ExpressionTree*)},
	{"getVariable", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompoundAssignmentTree, getVariable, $ExpressionTree*)},
	{}
};

$ClassInfo _CompoundAssignmentTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.CompoundAssignmentTree",
	nullptr,
	"com.sun.source.tree.ExpressionTree",
	nullptr,
	_CompoundAssignmentTree_MethodInfo_
};

$Object* allocate$CompoundAssignmentTree($Class* clazz) {
	return $of($alloc(CompoundAssignmentTree));
}

$Class* CompoundAssignmentTree::load$($String* name, bool initialize) {
	$loadClass(CompoundAssignmentTree, name, initialize, &_CompoundAssignmentTree_ClassInfo_, allocate$CompoundAssignmentTree);
	return class$;
}

$Class* CompoundAssignmentTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com