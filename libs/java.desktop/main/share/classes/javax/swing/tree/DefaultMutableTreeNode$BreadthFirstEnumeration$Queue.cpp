#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue.h>
#include <java/util/NoSuchElementException.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DefaultMutableTreeNode$BreadthFirstEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration;
using $DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;

namespace javax {
	namespace swing {
		namespace tree {

void DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::init$($DefaultMutableTreeNode$BreadthFirstEnumeration* this$1) {
	$set(this, this$1, this$1);
}

void DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::enqueue(Object$* anObject) {
	if (this->head == nullptr) {
		$set(this, head, $set(this, tail, $new($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, this, anObject, nullptr)));
	} else {
		$set($nc(this->tail), next, $new($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, this, anObject, nullptr));
		$set(this, tail, this->tail->next);
	}
}

$Object* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::dequeue() {
	$useLocalObjectStack();
	if (this->head == nullptr) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	$var($Object, retval, $nc(this->head)->object);
	$var($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, oldHead, this->head);
	$set(this, head, this->head->next);
	if (this->head == nullptr) {
		$set(this, tail, nullptr);
	} else {
		$set($nc(oldHead), next, nullptr);
	}
	return retval;
}

$Object* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::firstObject() {
	if (this->head == nullptr) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	return $nc(this->head)->object;
}

bool DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::isEmpty() {
	return this->head == nullptr;
}

DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue() {
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, this$1)},
		{"head", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;", nullptr, 0, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, head)},
		{"tail", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;", nullptr, 0, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, tail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration;)V", nullptr, 0, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, init$, void, $DefaultMutableTreeNode$BreadthFirstEnumeration*)},
		{"dequeue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, dequeue, $Object*)},
		{"enqueue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, enqueue, void, Object$*)},
		{"firstObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, firstObject, $Object*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $method(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, isEmpty, bool)},
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
		"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue",
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
	$loadClass(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue);
	});
	return class$;
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::class$ = nullptr;

		} // tree
	} // swing
} // javax