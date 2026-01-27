#include <com/sun/org/apache/xml/internal/utils/IntVector.h>

#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _IntVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(IntVector, m_blocksize)},
	{"m_map", "[I", nullptr, $PROTECTED, $field(IntVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(IntVector, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PROTECTED, $field(IntVector, m_mapSize)},
	{}
};

$MethodInfo _IntVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(IntVector, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(IntVector, init$, void, int32_t, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/IntVector;)V", nullptr, $PUBLIC, $method(IntVector, init$, void, IntVector*)},
	{"addElement", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, addElement, void, int32_t)},
	{"addElements", "(II)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, addElements, void, int32_t, int32_t)},
	{"addElements", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, addElements, void, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IntVector, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"contains", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(IntVector, contains, bool, int32_t)},
	{"elementAt", "(I)I", nullptr, $PUBLIC | $FINAL, $method(IntVector, elementAt, int32_t, int32_t)},
	{"indexOf", "(II)I", nullptr, $PUBLIC | $FINAL, $method(IntVector, indexOf, int32_t, int32_t, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC | $FINAL, $method(IntVector, indexOf, int32_t, int32_t)},
	{"insertElementAt", "(II)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, insertElementAt, void, int32_t, int32_t)},
	{"lastIndexOf", "(I)I", nullptr, $PUBLIC | $FINAL, $method(IntVector, lastIndexOf, int32_t, int32_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC | $FINAL, $method(IntVector, removeAllElements, void)},
	{"removeElement", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(IntVector, removeElement, bool, int32_t)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, removeElementAt, void, int32_t)},
	{"setElementAt", "(II)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, setElementAt, void, int32_t, int32_t)},
	{"setSize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntVector, setSize, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(IntVector, size, int32_t)},
	{}
};

$ClassInfo _IntVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.IntVector",
	"java.lang.Object",
	"java.lang.Cloneable",
	_IntVector_FieldInfo_,
	_IntVector_MethodInfo_
};

$Object* allocate$IntVector($Class* clazz) {
	return $of($alloc(IntVector));
}

void IntVector::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 32;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($ints, this->m_blocksize));
}

void IntVector::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($ints, blocksize));
}

void IntVector::init$(int32_t blocksize, int32_t increaseSize) {
	this->m_firstFree = 0;
	this->m_blocksize = increaseSize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($ints, blocksize));
}

void IntVector::init$(IntVector* v) {
	this->m_firstFree = 0;
	$set(this, m_map, $new($ints, $nc(v)->m_mapSize));
	this->m_mapSize = v->m_mapSize;
	this->m_firstFree = v->m_firstFree;
	this->m_blocksize = v->m_blocksize;
	$System::arraycopy(v->m_map, 0, this->m_map, 0, this->m_firstFree);
}

int32_t IntVector::size() {
	return this->m_firstFree;
}

void IntVector::setSize(int32_t sz) {
	this->m_firstFree = sz;
}

void IntVector::addElement(int32_t value) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

void IntVector::addElements(int32_t value, int32_t numberOfElements) {
	if ((this->m_firstFree + numberOfElements) >= this->m_mapSize) {
		this->m_mapSize += (this->m_blocksize + numberOfElements);
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	for (int32_t i = 0; i < numberOfElements; ++i) {
		$nc(this->m_map)->set(this->m_firstFree, value);
		++this->m_firstFree;
	}
}

void IntVector::addElements(int32_t numberOfElements) {
	if ((this->m_firstFree + numberOfElements) >= this->m_mapSize) {
		this->m_mapSize += (this->m_blocksize + numberOfElements);
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	this->m_firstFree += numberOfElements;
}

void IntVector::insertElementAt(int32_t value, int32_t at) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
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

void IntVector::removeAllElements() {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$nc(this->m_map)->set(i, $Integer::MIN_VALUE);
	}
	this->m_firstFree = 0;
}

bool IntVector::removeElement(int32_t s) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc(this->m_map)->get(i) == s) {
			if ((i + 1) < this->m_firstFree) {
				$System::arraycopy(this->m_map, i + 1, this->m_map, i - 1, this->m_firstFree - i);
			} else {
				$nc(this->m_map)->set(i, $Integer::MIN_VALUE);
			}
			--this->m_firstFree;
			return true;
		}
	}
	return false;
}

void IntVector::removeElementAt(int32_t i) {
	if (i > this->m_firstFree) {
		$System::arraycopy(this->m_map, i + 1, this->m_map, i, this->m_firstFree);
	} else {
		$nc(this->m_map)->set(i, $Integer::MIN_VALUE);
	}
	--this->m_firstFree;
}

void IntVector::setElementAt(int32_t value, int32_t index) {
	$nc(this->m_map)->set(index, value);
}

int32_t IntVector::elementAt(int32_t i) {
	return $nc(this->m_map)->get(i);
}

bool IntVector::contains(int32_t s) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc(this->m_map)->get(i) == s) {
			return true;
		}
	}
	return false;
}

int32_t IntVector::indexOf(int32_t elem, int32_t index) {
	for (int32_t i = index; i < this->m_firstFree; ++i) {
		if ($nc(this->m_map)->get(i) == elem) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

int32_t IntVector::indexOf(int32_t elem) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($nc(this->m_map)->get(i) == elem) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

int32_t IntVector::lastIndexOf(int32_t elem) {
	for (int32_t i = (this->m_firstFree - 1); i >= 0; --i) {
		if ($nc(this->m_map)->get(i) == elem) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

$Object* IntVector::clone() {
	return $of($new(IntVector, this));
}

IntVector::IntVector() {
}

$Class* IntVector::load$($String* name, bool initialize) {
	$loadClass(IntVector, name, initialize, &_IntVector_ClassInfo_, allocate$IntVector);
	return class$;
}

$Class* IntVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com