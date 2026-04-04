#include <javax/swing/tree/MutableTreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace tree {

$Class* MutableTreeNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"insert", "(Ljavax/swing/tree/MutableTreeNode;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, insert, void, MutableTreeNode*, int32_t)},
		{"remove", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, remove, void, int32_t)},
		{"remove", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, remove, void, MutableTreeNode*)},
		{"removeFromParent", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, removeFromParent, void)},
		{"setParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, setParent, void, MutableTreeNode*)},
		{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableTreeNode, setUserObject, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.tree.MutableTreeNode",
		nullptr,
		"javax.swing.tree.TreeNode",
		nullptr,
		methodInfos$$
	};
	$loadClass(MutableTreeNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MutableTreeNode);
	});
	return class$;
}

$Class* MutableTreeNode::class$ = nullptr;

		} // tree
	} // swing
} // javax