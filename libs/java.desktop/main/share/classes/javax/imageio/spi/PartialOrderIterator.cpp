#include <javax/imageio/spi/PartialOrderIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Map.h>
#include <javax/imageio/spi/DigraphNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $DigraphNode = ::javax::imageio::spi::DigraphNode;

namespace javax {
	namespace imageio {
		namespace spi {

void PartialOrderIterator::init$($Iterator* iter) {
	$useLocalObjectStack();
	$set(this, zeroList, $new($LinkedList));
	$set(this, inDegrees, $new($HashMap));
	while ($nc(iter)->hasNext()) {
		$var($DigraphNode, node, $cast($DigraphNode, iter->next()));
		int32_t inDegree = $nc(node)->getInDegree();
		$nc(this->inDegrees)->put(node, $($Integer::valueOf(inDegree)));
		if (inDegree == 0) {
			$nc(this->zeroList)->add(node);
		}
	}
}

bool PartialOrderIterator::hasNext() {
	return !$nc(this->zeroList)->isEmpty();
}

$Object* PartialOrderIterator::next() {
	$useLocalObjectStack();
	$var($DigraphNode, first, $cast($DigraphNode, $nc(this->zeroList)->removeFirst()));
	$var($Iterator, outNodes, $nc(first)->getOutNodes());
	while ($nc(outNodes)->hasNext()) {
		$var($DigraphNode, node, $cast($DigraphNode, outNodes->next()));
		int32_t inDegree = $$sure($Integer, $nc(this->inDegrees)->get(node))->intValue() - 1;
		this->inDegrees->put(node, $($Integer::valueOf(inDegree)));
		if (inDegree == 0) {
			$nc(this->zeroList)->add(node);
		}
	}
	return first->getData();
}

void PartialOrderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

PartialOrderIterator::PartialOrderIterator() {
}

$Class* PartialOrderIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zeroList", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljavax/imageio/spi/DigraphNode<TE;>;>;", 0, $field(PartialOrderIterator, zeroList)},
		{"inDegrees", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/imageio/spi/DigraphNode<TE;>;Ljava/lang/Integer;>;", 0, $field(PartialOrderIterator, inDegrees)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/DigraphNode<TE;>;>;)V", $PUBLIC, $method(PartialOrderIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PartialOrderIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(PartialOrderIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PartialOrderIterator, remove, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.spi.PartialOrderIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;"
	};
	$loadClass(PartialOrderIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PartialOrderIterator);
	});
	return class$;
}

$Class* PartialOrderIterator::class$ = nullptr;

		} // spi
	} // imageio
} // javax