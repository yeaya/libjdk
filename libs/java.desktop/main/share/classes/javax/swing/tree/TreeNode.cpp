#include <javax/swing/tree/TreeNode.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace javax {
	namespace swing {
		namespace tree {

$Class* TreeNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, children, $Enumeration*)},
		{"getAllowsChildren", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, getAllowsChildren, bool)},
		{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, getChildAt, TreeNode*, int32_t)},
		{"getChildCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, getChildCount, int32_t)},
		{"getIndex", "(Ljavax/swing/tree/TreeNode;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, getIndex, int32_t, TreeNode*)},
		{"getParent", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, getParent, TreeNode*)},
		{"isLeaf", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeNode, isLeaf, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.tree.TreeNode",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeNode);
	});
	return class$;
}

$Class* TreeNode::class$ = nullptr;

		} // tree
	} // swing
} // javax