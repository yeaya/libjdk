#include <javax/imageio/spi/DigraphNode.h>
#include <java/lang/Cloneable.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;

namespace javax {
	namespace imageio {
		namespace spi {

int32_t DigraphNode::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool DigraphNode::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* DigraphNode::clone() {
	 return this->$Cloneable::clone();
}

$String* DigraphNode::toString() {
	 return this->$Cloneable::toString();
}

void DigraphNode::finalize() {
	this->$Cloneable::finalize();
}

void DigraphNode::init$(Object$* data) {
	$set(this, outNodes, $new($HashSet));
	this->inDegree = 0;
	$set(this, inNodes, $new($HashSet));
	$set(this, data, data);
}

$Object* DigraphNode::getData() {
	return this->data;
}

$Iterator* DigraphNode::getOutNodes() {
	return $nc(this->outNodes)->iterator();
}

bool DigraphNode::addEdge(DigraphNode* node) {
	if ($nc(this->outNodes)->contains(node)) {
		return false;
	}
	this->outNodes->add(node);
	$nc($nc(node)->inNodes)->add(this);
	node->incrementInDegree();
	return true;
}

bool DigraphNode::hasEdge(DigraphNode* node) {
	return $nc(this->outNodes)->contains(node);
}

bool DigraphNode::removeEdge(DigraphNode* node) {
	if (!$nc(this->outNodes)->contains(node)) {
		return false;
	}
	this->outNodes->remove(node);
	$nc($nc(node)->inNodes)->remove(this);
	node->decrementInDegree();
	return true;
}

void DigraphNode::dispose() {
	$useLocalObjectStack();
	$var($ObjectArray, inNodesArray, $nc(this->inNodes)->toArray());
	for (int32_t i = 0; i < $nc(inNodesArray)->length; ++i) {
		$var(DigraphNode, node, $cast(DigraphNode, inNodesArray->get(i)));
		$nc(node)->removeEdge(this);
	}
	$var($ObjectArray, outNodesArray, $nc(this->outNodes)->toArray());
	for (int32_t i = 0; i < $nc(outNodesArray)->length; ++i) {
		$var(DigraphNode, node, $cast(DigraphNode, outNodesArray->get(i)));
		removeEdge(node);
	}
}

int32_t DigraphNode::getInDegree() {
	return this->inDegree;
}

void DigraphNode::incrementInDegree() {
	++this->inDegree;
}

void DigraphNode::decrementInDegree() {
	--this->inDegree;
}

DigraphNode::DigraphNode() {
}

$Class* DigraphNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigraphNode, serialVersionUID)},
		{"data", "Ljava/lang/Object;", "TE;", $PROTECTED, $field(DigraphNode, data)},
		{"outNodes", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PROTECTED, $field(DigraphNode, outNodes)},
		{"inDegree", "I", nullptr, $PROTECTED, $field(DigraphNode, inDegree)},
		{"inNodes", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PRIVATE, $field(DigraphNode, inNodes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $method(DigraphNode, init$, void, Object$*)},
		{"addEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC, $virtualMethod(DigraphNode, addEdge, bool, DigraphNode*)},
		{"decrementInDegree", "()V", nullptr, $PRIVATE, $method(DigraphNode, decrementInDegree, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(DigraphNode, dispose, void)},
		{"getData", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(DigraphNode, getData, $Object*)},
		{"getInDegree", "()I", nullptr, $PUBLIC, $virtualMethod(DigraphNode, getInDegree, int32_t)},
		{"getOutNodes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PUBLIC, $virtualMethod(DigraphNode, getOutNodes, $Iterator*)},
		{"hasEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC, $virtualMethod(DigraphNode, hasEdge, bool, DigraphNode*)},
		{"incrementInDegree", "()V", nullptr, $PRIVATE, $method(DigraphNode, incrementInDegree, void)},
		{"removeEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC, $virtualMethod(DigraphNode, removeEdge, bool, DigraphNode*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.spi.DigraphNode",
		"java.lang.Object",
		"java.lang.Cloneable,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Cloneable;Ljava/io/Serializable;"
	};
	$loadClass(DigraphNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DigraphNode));
	});
	return class$;
}

$Class* DigraphNode::class$ = nullptr;

		} // spi
	} // imageio
} // javax