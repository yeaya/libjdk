#include <javax/swing/tree/DefaultMutableTreeNode$PostorderEnumeration.h>
#include <java/util/Enumeration.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultMutableTreeNode$PostorderEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* rootNode) {
	$set(this, this$0, this$0);
	$set(this, root, rootNode);
	$set(this, children, $nc(this->root)->children());
	$init($DefaultMutableTreeNode);
	$set(this, subtree, $DefaultMutableTreeNode::EMPTY_ENUMERATION);
}

bool DefaultMutableTreeNode$PostorderEnumeration::hasMoreElements() {
	return this->root != nullptr;
}

$Object* DefaultMutableTreeNode$PostorderEnumeration::nextElement() {
	$useLocalObjectStack();
	$var($TreeNode, retval, nullptr);
	if ($nc(this->subtree)->hasMoreElements()) {
		$assign(retval, $cast($TreeNode, this->subtree->nextElement()));
	} else if ($nc(this->children)->hasMoreElements()) {
		$set(this, subtree, $new(DefaultMutableTreeNode$PostorderEnumeration, this->this$0, $$cast($TreeNode, this->children->nextElement())));
		$assign(retval, $cast($TreeNode, this->subtree->nextElement()));
	} else {
		$assign(retval, this->root);
		$set(this, root, nullptr);
	}
	return retval;
}

DefaultMutableTreeNode$PostorderEnumeration::DefaultMutableTreeNode$PostorderEnumeration() {
}

$Class* DefaultMutableTreeNode$PostorderEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PostorderEnumeration, this$0)},
		{"root", "Ljavax/swing/tree/TreeNode;", nullptr, $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, root)},
		{"children", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, children)},
		{"subtree", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, subtree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$PostorderEnumeration, init$, void, $DefaultMutableTreeNode*, $TreeNode*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PostorderEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PostorderEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PostorderEnumeration", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.tree.DefaultMutableTreeNode"
	};
	$loadClass(DefaultMutableTreeNode$PostorderEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMutableTreeNode$PostorderEnumeration);
	});
	return class$;
}

$Class* DefaultMutableTreeNode$PostorderEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax