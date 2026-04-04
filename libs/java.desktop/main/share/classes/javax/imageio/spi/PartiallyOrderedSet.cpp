#include <javax/imageio/spi/PartiallyOrderedSet.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/imageio/spi/DigraphNode.h>
#include <javax/imageio/spi/PartialOrderIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $DigraphNode = ::javax::imageio::spi::DigraphNode;
using $PartialOrderIterator = ::javax::imageio::spi::PartialOrderIterator;

namespace javax {
	namespace imageio {
		namespace spi {

void PartiallyOrderedSet::init$() {
	$AbstractSet::init$();
	$set(this, poNodes, $new($HashMap));
	$set(this, nodes, this->poNodes->keySet());
}

int32_t PartiallyOrderedSet::size() {
	return $nc(this->nodes)->size();
}

bool PartiallyOrderedSet::contains(Object$* o) {
	return $nc(this->nodes)->contains(o);
}

$Iterator* PartiallyOrderedSet::iterator() {
	$useLocalObjectStack();
	return $new($PartialOrderIterator, $($$nc($nc(this->poNodes)->values())->iterator()));
}

bool PartiallyOrderedSet::add(Object$* o) {
	if ($nc(this->nodes)->contains(o)) {
		return false;
	}
	$var($DigraphNode, node, $new($DigraphNode, o));
	$nc(this->poNodes)->put(o, node);
	return true;
}

bool PartiallyOrderedSet::remove(Object$* o) {
	$var($DigraphNode, node, $cast($DigraphNode, $nc(this->poNodes)->get(o)));
	if (node == nullptr) {
		return false;
	}
	this->poNodes->remove(o);
	$nc(node)->dispose();
	return true;
}

void PartiallyOrderedSet::clear() {
	$nc(this->poNodes)->clear();
}

bool PartiallyOrderedSet::setOrdering(Object$* first, Object$* second) {
	$useLocalObjectStack();
	$var($DigraphNode, firstPONode, $cast($DigraphNode, $nc(this->poNodes)->get(first)));
	$var($DigraphNode, secondPONode, $cast($DigraphNode, this->poNodes->get(second)));
	$nc(secondPONode)->removeEdge(firstPONode);
	return $nc(firstPONode)->addEdge(secondPONode);
}

bool PartiallyOrderedSet::unsetOrdering(Object$* first, Object$* second) {
	$useLocalObjectStack();
	$var($DigraphNode, firstPONode, $cast($DigraphNode, $nc(this->poNodes)->get(first)));
	$var($DigraphNode, secondPONode, $cast($DigraphNode, this->poNodes->get(second)));
	bool var$0 = $nc(firstPONode)->removeEdge(secondPONode);
	return var$0 || $nc(secondPONode)->removeEdge(firstPONode);
}

bool PartiallyOrderedSet::hasOrdering(Object$* preferred, Object$* other) {
	$useLocalObjectStack();
	$var($DigraphNode, preferredPONode, $cast($DigraphNode, $nc(this->poNodes)->get(preferred)));
	$var($DigraphNode, otherPONode, $cast($DigraphNode, this->poNodes->get(other)));
	return $nc(preferredPONode)->hasEdge(otherPONode);
}

PartiallyOrderedSet::PartiallyOrderedSet() {
}

$Class* PartiallyOrderedSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"poNodes", "Ljava/util/Map;", "Ljava/util/Map<TE;Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PRIVATE, $field(PartiallyOrderedSet, poNodes)},
		{"nodes", "Ljava/util/Set;", "Ljava/util/Set<TE;>;", $PRIVATE, $field(PartiallyOrderedSet, nodes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PartiallyOrderedSet, init$, void)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(PartiallyOrderedSet, add, bool, Object$*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(PartiallyOrderedSet, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PartiallyOrderedSet, contains, bool, Object$*)},
		{"hasOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC, $virtualMethod(PartiallyOrderedSet, hasOrdering, bool, Object$*, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(PartiallyOrderedSet, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PartiallyOrderedSet, remove, bool, Object$*)},
		{"setOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC, $virtualMethod(PartiallyOrderedSet, setOrdering, bool, Object$*, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(PartiallyOrderedSet, size, int32_t)},
		{"unsetOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC, $virtualMethod(PartiallyOrderedSet, unsetOrdering, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.spi.PartiallyOrderedSet",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;"
	};
	$loadClass(PartiallyOrderedSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PartiallyOrderedSet));
	});
	return class$;
}

$Class* PartiallyOrderedSet::class$ = nullptr;

		} // spi
	} // imageio
} // javax