#include <javax/swing/tree/DefaultMutableTreeNode$PathBetweenNodesEnumeration.h>
#include <java/util/EmptyStackException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Stack.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Stack = ::java::util::Stack;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultMutableTreeNode$PathBetweenNodesEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* ancestor, $TreeNode* descendant) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	if (ancestor == nullptr || descendant == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	$var($TreeNode, current, nullptr);
	$set(this, stack, $new($Stack));
	this->stack->push(descendant);
	$assign(current, descendant);
	while (current != ancestor) {
		$assign(current, $nc(current)->getParent());
		if (current == nullptr && descendant != ancestor) {
			$throwNew($IllegalArgumentException, $$str({"node "_s, ancestor, " is not an ancestor of "_s, descendant}));
		}
		$nc(this->stack)->push(current);
	}
}

bool DefaultMutableTreeNode$PathBetweenNodesEnumeration::hasMoreElements() {
	return $nc(this->stack)->size() > 0;
}

$Object* DefaultMutableTreeNode$PathBetweenNodesEnumeration::nextElement() {
	try {
		return $cast($TreeNode, $nc(this->stack)->pop());
	} catch ($EmptyStackException& e) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	$shouldNotReachHere();
}

DefaultMutableTreeNode$PathBetweenNodesEnumeration::DefaultMutableTreeNode$PathBetweenNodesEnumeration() {
}

$Class* DefaultMutableTreeNode$PathBetweenNodesEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PathBetweenNodesEnumeration, this$0)},
		{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PathBetweenNodesEnumeration, stack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$PathBetweenNodesEnumeration, init$, void, $DefaultMutableTreeNode*, $TreeNode*, $TreeNode*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PathBetweenNodesEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC, $virtualMethod(DefaultMutableTreeNode$PathBetweenNodesEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PathBetweenNodesEnumeration", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration",
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
	$loadClass(DefaultMutableTreeNode$PathBetweenNodesEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMutableTreeNode$PathBetweenNodesEnumeration);
	});
	return class$;
}

$Class* DefaultMutableTreeNode$PathBetweenNodesEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax