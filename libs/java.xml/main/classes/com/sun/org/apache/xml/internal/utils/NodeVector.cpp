#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

#undef NULL
#undef T

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _NodeVector_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NodeVector, serialVersionUID)},
	{"m_blocksize", "I", nullptr, $PRIVATE, $field(NodeVector, m_blocksize)},
	{"m_map", "[I", nullptr, $PRIVATE, $field(NodeVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(NodeVector, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PRIVATE, $field(NodeVector, m_mapSize)},
	{}
};

$MethodInfo _NodeVector_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(NodeVector, init$, void, int32_t)},
	{"RemoveAllNoClear", "()V", nullptr, $PUBLIC, $virtualMethod(NodeVector, RemoveAllNoClear, void)},
	{"addElement", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, addElement, void, int32_t)},
	{"appendNodes", "(Lcom/sun/org/apache/xml/internal/utils/NodeVector;)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, appendNodes, void, NodeVector*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeVector, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"contains", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeVector, contains, bool, int32_t)},
	{"elementAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeVector, elementAt, int32_t, int32_t)},
	{"indexOf", "(II)I", nullptr, $PUBLIC, $virtualMethod(NodeVector, indexOf, int32_t, int32_t, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeVector, indexOf, int32_t, int32_t)},
	{"insertElementAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, insertElementAt, void, int32_t, int32_t)},
	{"insertInOrder", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, insertInOrder, void, int32_t)},
	{"peepOrNull", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeVector, peepOrNull, int32_t)},
	{"peepTail", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeVector, peepTail, int32_t)},
	{"peepTailSub1", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeVector, peepTailSub1, int32_t)},
	{"pop", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeVector, pop, int32_t)},
	{"popAndTop", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeVector, popAndTop, int32_t)},
	{"popPair", "()V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, popPair, void)},
	{"popQuick", "()V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, popQuick, void)},
	{"push", "(I)V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, push, void, int32_t)},
	{"pushPair", "(II)V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, pushPair, void, int32_t, int32_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(NodeVector, removeAllElements, void)},
	{"removeElement", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeVector, removeElement, bool, int32_t)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, removeElementAt, void, int32_t)},
	{"setElementAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, setElementAt, void, int32_t, int32_t)},
	{"setTail", "(I)V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, setTail, void, int32_t)},
	{"setTailSub1", "(I)V", nullptr, $PUBLIC | $FINAL, $method(NodeVector, setTailSub1, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(NodeVector, size, int32_t)},
	{"sort", "([III)V", nullptr, $PUBLIC, $virtualMethod(NodeVector, sort, void, $ints*, int32_t, int32_t), "java.lang.Exception"},
	{"sort", "()V", nullptr, $PUBLIC, $virtualMethod(NodeVector, sort, void), "java.lang.Exception"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.NodeVector",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_NodeVector_FieldInfo_,
	_NodeVector_MethodInfo_
};

$Object* allocate$NodeVector($Class* clazz) {
	return $of($alloc(NodeVector));
}

int32_t NodeVector::hashCode() {
	 return this->$Serializable::hashCode();
}

bool NodeVector::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$String* NodeVector::toString() {
	 return this->$Serializable::toString();
}

void NodeVector::finalize() {
	this->$Serializable::finalize();
}

void NodeVector::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 32;
	this->m_mapSize = 0;
}

void NodeVector::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = 0;
}

$Object* NodeVector::clone() {
	$var(NodeVector, clone, $cast(NodeVector, $Serializable::clone()));
	if ((nullptr != this->m_map) && (this->m_map == $nc(clone)->m_map)) {
		$set(clone, m_map, $new($ints, $nc(this->m_map)->length));
		$System::arraycopy(this->m_map, 0, clone->m_map, 0, $nc(this->m_map)->length);
	}
	return $of(clone);
}

int32_t NodeVector::size() {
	return this->m_firstFree;
}

void NodeVector::addElement(int32_t value) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		if (nullptr == this->m_map) {
			$set(this, m_map, $new($ints, this->m_blocksize));
			this->m_mapSize = this->m_blocksize;
		} else {
			this->m_mapSize += this->m_blocksize;
			$var($ints, newMap, $new($ints, this->m_mapSize));
			$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
			$set(this, m_map, newMap);
		}
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

void NodeVector::push(int32_t value) {
	int32_t ff = this->m_firstFree;
	if ((ff + 1) >= this->m_mapSize) {
		if (nullptr == this->m_map) {
			$set(this, m_map, $new($ints, this->m_blocksize));
			this->m_mapSize = this->m_blocksize;
		} else {
			this->m_mapSize += this->m_blocksize;
			$var($ints, newMap, $new($ints, this->m_mapSize));
			$System::arraycopy(this->m_map, 0, newMap, 0, ff + 1);
			$set(this, m_map, newMap);
		}
	}
	$nc(this->m_map)->set(ff, value);
	++ff;
	this->m_firstFree = ff;
}

int32_t NodeVector::pop() {
	--this->m_firstFree;
	int32_t n = $nc(this->m_map)->get(this->m_firstFree);
	$nc(this->m_map)->set(this->m_firstFree, $DTM::NULL);
	return n;
}

int32_t NodeVector::popAndTop() {
	--this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, $DTM::NULL);
	return (this->m_firstFree == 0) ? $DTM::NULL : $nc(this->m_map)->get(this->m_firstFree - 1);
}

void NodeVector::popQuick() {
	--this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, $DTM::NULL);
}

int32_t NodeVector::peepOrNull() {
	return ((nullptr != this->m_map) && (this->m_firstFree > 0)) ? $nc(this->m_map)->get(this->m_firstFree - 1) : $DTM::NULL;
}

void NodeVector::pushPair(int32_t v1, int32_t v2) {
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($ints, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	} else if ((this->m_firstFree + 2) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, v1);
	$nc(this->m_map)->set(this->m_firstFree + 1, v2);
	this->m_firstFree += 2;
}

void NodeVector::popPair() {
	this->m_firstFree -= 2;
	$nc(this->m_map)->set(this->m_firstFree, $DTM::NULL);
	$nc(this->m_map)->set(this->m_firstFree + 1, $DTM::NULL);
}

void NodeVector::setTail(int32_t n) {
	$nc(this->m_map)->set(this->m_firstFree - 1, n);
}

void NodeVector::setTailSub1(int32_t n) {
	$nc(this->m_map)->set(this->m_firstFree - 2, n);
}

int32_t NodeVector::peepTail() {
	return $nc(this->m_map)->get(this->m_firstFree - 1);
}

int32_t NodeVector::peepTailSub1() {
	return $nc(this->m_map)->get(this->m_firstFree - 2);
}

void NodeVector::insertInOrder(int32_t value) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if (value < $nc(this->m_map)->get(i)) {
			insertElementAt(value, i);
			return;
		}
	}
	addElement(value);
}

void NodeVector::insertElementAt(int32_t value, int32_t at) {
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($ints, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	} else if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	if (at <= (this->m_firstFree - 1)) {
		$System::arraycopy(this->m_map, at, this->m_map, at + 1, this->m_firstFree - at);
	}
	$nc(this->m_map)->set(at, value);
	++this->m_firstFree;
}

void NodeVector::appendNodes(NodeVector* nodes) {
	int32_t nNodes = $nc(nodes)->size();
	if (nullptr == this->m_map) {
		this->m_mapSize = nNodes + this->m_blocksize;
		$set(this, m_map, $new($ints, this->m_mapSize));
	} else if ((this->m_firstFree + nNodes) >= this->m_mapSize) {
		this->m_mapSize += (nNodes + this->m_blocksize);
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + nNodes);
		$set(this, m_map, newMap);
	}
	$System::arraycopy(nodes->m_map, 0, this->m_map, this->m_firstFree, nNodes);
	this->m_firstFree += nNodes;
}

void NodeVector::removeAllElements() {
	if (nullptr == this->m_map) {
		return;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$nc(this->m_map)->set(i, $DTM::NULL);
	}
	this->m_firstFree = 0;
}

void NodeVector::RemoveAllNoClear() {
	if (nullptr == this->m_map) {
		return;
	}
	this->m_firstFree = 0;
}

bool NodeVector::removeElement(int32_t s) {
	if (nullptr == this->m_map) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		int32_t node = $nc(this->m_map)->get(i);
		if (node == s) {
			if (i > this->m_firstFree) {
				$System::arraycopy(this->m_map, i + 1, this->m_map, i - 1, this->m_firstFree - i);
			} else {
				$nc(this->m_map)->set(i, $DTM::NULL);
			}
			--this->m_firstFree;
			return true;
		}
	}
	return false;
}

void NodeVector::removeElementAt(int32_t i) {
	if (nullptr == this->m_map) {
		return;
	}
	if (i > this->m_firstFree) {
		$System::arraycopy(this->m_map, i + 1, this->m_map, i - 1, this->m_firstFree - i);
	} else {
		$nc(this->m_map)->set(i, $DTM::NULL);
	}
}

void NodeVector::setElementAt(int32_t node, int32_t index) {
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($ints, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	}
	if (index == -1) {
		addElement(node);
	}
	$nc(this->m_map)->set(index, node);
}

int32_t NodeVector::elementAt(int32_t i) {
	if (nullptr == this->m_map) {
		return $DTM::NULL;
	}
	return $nc(this->m_map)->get(i);
}

bool NodeVector::contains(int32_t s) {
	if (nullptr == this->m_map) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		int32_t node = $nc(this->m_map)->get(i);
		if (node == s) {
			return true;
		}
	}
	return false;
}

int32_t NodeVector::indexOf(int32_t elem, int32_t index) {
	if (nullptr == this->m_map) {
		return -1;
	}
	for (int32_t i = index; i < this->m_firstFree; ++i) {
		int32_t node = $nc(this->m_map)->get(i);
		if (node == elem) {
			return i;
		}
	}
	return -1;
}

int32_t NodeVector::indexOf(int32_t elem) {
	if (nullptr == this->m_map) {
		return -1;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		int32_t node = $nc(this->m_map)->get(i);
		if (node == elem) {
			return i;
		}
	}
	return -1;
}

void NodeVector::sort($ints* a, int32_t lo0, int32_t hi0) {
	int32_t lo = lo0;
	int32_t hi = hi0;
	if (lo >= hi) {
		return;
	} else if (lo == hi - 1) {
		if ($nc(a)->get(lo) > a->get(hi)) {
			int32_t T = a->get(lo);
			a->set(lo, a->get(hi));
			a->set(hi, T);
		}
		return;
	}
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	int32_t pivot = $nc(a)->get(mid);
	a->set(mid, a->get(hi));
	a->set(hi, pivot);
	while (lo < hi) {
		while (a->get(lo) <= pivot && lo < hi) {
			++lo;
		}
		while (pivot <= a->get(hi) && lo < hi) {
			--hi;
		}
		if (lo < hi) {
			int32_t T = a->get(lo);
			a->set(lo, a->get(hi));
			a->set(hi, T);
		}
	}
	a->set(hi0, a->get(hi));
	a->set(hi, pivot);
	sort(a, lo0, lo - 1);
	sort(a, hi + 1, hi0);
}

void NodeVector::sort() {
	sort(this->m_map, 0, this->m_firstFree - 1);
}

NodeVector::NodeVector() {
}

$Class* NodeVector::load$($String* name, bool initialize) {
	$loadClass(NodeVector, name, initialize, &_NodeVector_ClassInfo_, allocate$NodeVector);
	return class$;
}

$Class* NodeVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com