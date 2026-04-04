#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMutableTreeNode$BreadthFirstEnumeration$Queue = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode::init$($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue* this$2, Object$* object, DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode* next) {
	$set(this, this$2, this$2);
	$set(this, object, object);
	$set(this, next, next);
}

DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode() {
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$2", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, this$2)},
		{"object", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, object)},
		{"next", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;", nullptr, $PUBLIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;Ljava/lang/Object;Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;)V", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, init$, void, $DefaultMutableTreeNode$BreadthFirstEnumeration$Queue*, Object$*, DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "BreadthFirstEnumeration", $FINAL},
		{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue", "javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "Queue", $FINAL},
		{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode", "javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue", "QNode", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.tree.DefaultMutableTreeNode"
	};
	$loadClass(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode);
	});
	return class$;
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode::class$ = nullptr;

		} // tree
	} // swing
} // javax