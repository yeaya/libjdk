#include <javax/swing/JTree$DynamicUtilTreeNode.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {

void JTree$DynamicUtilTreeNode::createChildren($DefaultMutableTreeNode* parent, Object$* children) {
	$init(JTree$DynamicUtilTreeNode);
	$useLocalObjectStack();
	if ($instanceOf($Vector, children)) {
		$var($Vector, childVector, $cast($Vector, children));
		for (int32_t counter = 0, maxCounter = childVector->size(); counter < maxCounter; ++counter) {
			$var($Object, var$0, childVector->elementAt(counter));
			$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, var$0, $(childVector->elementAt(counter))));
		}
	} else if ($instanceOf($Hashtable, children)) {
		$var($Hashtable, childHT, $cast($Hashtable, children));
		$var($Enumeration, keys, childHT->keys());
		$var($Object, aKey, nullptr);
		while ($nc(keys)->hasMoreElements()) {
			$assign(aKey, keys->nextElement());
			$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, aKey, $(childHT->get(aKey))));
		}
	} else if ($instanceOf($ObjectArray, children)) {
		$var($ObjectArray, childArray, $cast($ObjectArray, children));
		for (int32_t counter = 0, maxCounter = childArray->length; counter < maxCounter; ++counter) {
			$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, childArray->get(counter), childArray->get(counter)));
		}
	}
}

void JTree$DynamicUtilTreeNode::init$(Object$* value, Object$* children) {
	$DefaultMutableTreeNode::init$(value);
	this->loadedChildren = false;
	$set(this, childValue, children);
	if (children != nullptr) {
		if ($instanceOf($Vector, children)) {
			setAllowsChildren(true);
		} else if ($instanceOf($Hashtable, children)) {
			setAllowsChildren(true);
		} else if ($instanceOf($ObjectArray, children)) {
			setAllowsChildren(true);
		} else {
			setAllowsChildren(false);
		}
	} else {
		setAllowsChildren(false);
	}
}

bool JTree$DynamicUtilTreeNode::isLeaf() {
	return !getAllowsChildren();
}

int32_t JTree$DynamicUtilTreeNode::getChildCount() {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::getChildCount();
}

void JTree$DynamicUtilTreeNode::loadChildren() {
	this->loadedChildren = true;
	createChildren(this, this->childValue);
}

$TreeNode* JTree$DynamicUtilTreeNode::getChildAt(int32_t index) {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::getChildAt(index);
}

$Enumeration* JTree$DynamicUtilTreeNode::children() {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::children();
}

JTree$DynamicUtilTreeNode::JTree$DynamicUtilTreeNode() {
}

$Class* JTree$DynamicUtilTreeNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hasChildren", "Z", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, hasChildren)},
		{"childValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, childValue)},
		{"loadedChildren", "Z", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, loadedChildren)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(JTree$DynamicUtilTreeNode, init$, void, Object$*, Object$*)},
		{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC, $virtualMethod(JTree$DynamicUtilTreeNode, children, $Enumeration*)},
		{"createChildren", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTree$DynamicUtilTreeNode, createChildren, void, $DefaultMutableTreeNode*, Object$*)},
		{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC, $virtualMethod(JTree$DynamicUtilTreeNode, getChildAt, $TreeNode*, int32_t)},
		{"getChildCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTree$DynamicUtilTreeNode, getChildCount, int32_t)},
		{"isLeaf", "()Z", nullptr, $PUBLIC, $virtualMethod(JTree$DynamicUtilTreeNode, isLeaf, bool)},
		{"loadChildren", "()V", nullptr, $PROTECTED, $virtualMethod(JTree$DynamicUtilTreeNode, loadChildren, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTree$DynamicUtilTreeNode", "javax.swing.JTree", "DynamicUtilTreeNode", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JTree$DynamicUtilTreeNode",
		"javax.swing.tree.DefaultMutableTreeNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTree"
	};
	$loadClass(JTree$DynamicUtilTreeNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTree$DynamicUtilTreeNode));
	});
	return class$;
}

$Class* JTree$DynamicUtilTreeNode::class$ = nullptr;

	} // swing
} // javax