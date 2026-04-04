#include <javax/swing/tree/DefaultMutableTreeNode$PreorderEnumeration.h>
#include <java/util/Enumeration.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultMutableTreeNode$PreorderEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* rootNode) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, stack, $new($Stack));
	$var($Vector, v, $new($Vector, 1));
	v->addElement(rootNode);
	this->stack->push($(v->elements()));
}

bool DefaultMutableTreeNode$PreorderEnumeration::hasMoreElements() {
	bool var$0 = !this->stack->empty();
	return (var$0 && $$sure($Enumeration, this->stack->peek())->hasMoreElements());
}

$Object* DefaultMutableTreeNode$PreorderEnumeration::nextElement() {
	$useLocalObjectStack();
	$var($Enumeration, enumer, $cast($Enumeration, this->stack->peek()));
	$var($TreeNode, node, $cast($TreeNode, $nc(enumer)->nextElement()));
	$var($Enumeration, children, $nc(node)->children());
	if (!enumer->hasMoreElements()) {
		this->stack->pop();
	}
	if ($nc(children)->hasMoreElements()) {
		this->stack->push(children);
	}
	return node;
}

DefaultMutableTreeNode$PreorderEnumeration::DefaultMutableTreeNode$PreorderEnumeration() {
}

$Class* DefaultMutableTreeNode$PreorderEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PreorderEnumeration, this$0)},
		{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;>;", $PRIVATE | $FINAL, $field(DefaultMutableTreeNode$PreorderEnumeration, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$PreorderEnumeration, init$, void, $DefaultMutableTreeNode*, $TreeNode*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PreorderEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PreorderEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PreorderEnumeration", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration",
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
	$loadClass(DefaultMutableTreeNode$PreorderEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMutableTreeNode$PreorderEnumeration);
	});
	return class$;
}

$Class* DefaultMutableTreeNode$PreorderEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax