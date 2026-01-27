#include <javax/swing/tree/MutableTreeNode.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _MutableTreeNode_MethodInfo_[] = {
	{"insert", "(Ljavax/swing/tree/MutableTreeNode;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, insert, void, MutableTreeNode*, int32_t)},
	{"remove", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, remove, void, int32_t)},
	{"remove", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, remove, void, MutableTreeNode*)},
	{"removeFromParent", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, removeFromParent, void)},
	{"setParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, setParent, void, MutableTreeNode*)},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, setUserObject, void, Object$*)},
	{}
};

$ClassInfo _MutableTreeNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.MutableTreeNode",
	nullptr,
	"javax.swing.tree.TreeNode",
	nullptr,
	_MutableTreeNode_MethodInfo_
};

$Object* allocate$MutableTreeNode($Class* clazz) {
	return $of($alloc(MutableTreeNode));
}

$Class* MutableTreeNode::load$($String* name, bool initialize) {
	$loadClass(MutableTreeNode, name, initialize, &_MutableTreeNode_ClassInfo_, allocate$MutableTreeNode);
	return class$;
}

$Class* MutableTreeNode::class$ = nullptr;

		} // tree
	} // swing
} // javax