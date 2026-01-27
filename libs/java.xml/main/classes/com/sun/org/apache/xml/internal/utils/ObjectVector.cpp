#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>

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

$FieldInfo _ObjectVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(ObjectVector, m_blocksize)},
	{"m_map", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(ObjectVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(ObjectVector, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PROTECTED, $field(ObjectVector, m_mapSize)},
	{}
};

$MethodInfo _ObjectVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ObjectVector, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ObjectVector, init$, void, int32_t, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/ObjectVector;)V", nullptr, $PUBLIC, $method(ObjectVector, init$, void, ObjectVector*)},
	{"addElement", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, addElement, void, Object$*)},
	{"addElements", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, addElements, void, Object$*, int32_t)},
	{"addElements", "(I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, addElements, void, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectVector, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, contains, bool, Object$*)},
	{"elementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, elementAt, $Object*, int32_t)},
	{"indexOf", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, indexOf, int32_t, Object$*, int32_t)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, indexOf, int32_t, Object$*)},
	{"insertElementAt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, insertElementAt, void, Object$*, int32_t)},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, lastIndexOf, int32_t, Object$*)},
	{"removeAllElements", "()V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, removeAllElements, void)},
	{"removeElement", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, removeElement, bool, Object$*)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, removeElementAt, void, int32_t)},
	{"setElementAt", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, setElementAt, void, Object$*, int32_t)},
	{"setSize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, setSize, void, int32_t)},
	{"setToSize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, setToSize, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(ObjectVector, size, int32_t)},
	{}
};

$ClassInfo _ObjectVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ObjectVector",
	"java.lang.Object",
	"java.lang.Cloneable",
	_ObjectVector_FieldInfo_,
	_ObjectVector_MethodInfo_
};

$Object* allocate$ObjectVector($Class* clazz) {
	return $of($alloc(ObjectVector));
}

void ObjectVector::init$() {
	this->m_firstFree = 0;
	this->m_blocksize = 32;
	this->m_mapSize = this->m_blocksize;
	$set(this, m_map, $new($ObjectArray, this->m_blocksize));
}

void ObjectVector::init$(int32_t blocksize) {
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($ObjectArray, blocksize));
}

void ObjectVector::init$(int32_t blocksize, int32_t increaseSize) {
	this->m_firstFree = 0;
	this->m_blocksize = increaseSize;
	this->m_mapSize = blocksize;
	$set(this, m_map, $new($ObjectArray, blocksize));
}

void ObjectVector::init$(ObjectVector* v) {
	this->m_firstFree = 0;
	$set(this, m_map, $new($ObjectArray, $nc(v)->m_mapSize));
	this->m_mapSize = v->m_mapSize;
	this->m_firstFree = v->m_firstFree;
	this->m_blocksize = v->m_blocksize;
	$System::arraycopy(v->m_map, 0, this->m_map, 0, this->m_firstFree);
}

int32_t ObjectVector::size() {
	return this->m_firstFree;
}

void ObjectVector::setSize(int32_t sz) {
	this->m_firstFree = sz;
}

void ObjectVector::addElement(Object$* value) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

void ObjectVector::addElements(Object$* value, int32_t numberOfElements) {
	if ((this->m_firstFree + numberOfElements) >= this->m_mapSize) {
		this->m_mapSize += (this->m_blocksize + numberOfElements);
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	for (int32_t i = 0; i < numberOfElements; ++i) {
		$nc(this->m_map)->set(this->m_firstFree, value);
		++this->m_firstFree;
	}
}

void ObjectVector::addElements(int32_t numberOfElements) {
	if ((this->m_firstFree + numberOfElements) >= this->m_mapSize) {
		this->m_mapSize += (this->m_blocksize + numberOfElements);
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	this->m_firstFree += numberOfElements;
}

void ObjectVector::insertElementAt(Object$* value, int32_t at) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	if (at <= (this->m_firstFree - 1)) {
		$System::arraycopy(this->m_map, at, this->m_map, at + 1, this->m_firstFree - at);
	}
	$nc(this->m_map)->set(at, value);
	++this->m_firstFree;
}

void ObjectVector::removeAllElements() {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$nc(this->m_map)->set(i, nullptr);
	}
	this->m_firstFree = 0;
}

bool ObjectVector::removeElement(Object$* s) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($equals($nc(this->m_map)->get(i), s)) {
			if ((i + 1) < this->m_firstFree) {
				$System::arraycopy(this->m_map, i + 1, this->m_map, i - 1, this->m_firstFree - i);
			} else {
				$nc(this->m_map)->set(i, nullptr);
			}
			--this->m_firstFree;
			return true;
		}
	}
	return false;
}

void ObjectVector::removeElementAt(int32_t i) {
	if (i > this->m_firstFree) {
		$System::arraycopy(this->m_map, i + 1, this->m_map, i, this->m_firstFree);
	} else {
		$nc(this->m_map)->set(i, nullptr);
	}
	--this->m_firstFree;
}

void ObjectVector::setElementAt(Object$* value, int32_t index) {
	$nc(this->m_map)->set(index, value);
}

$Object* ObjectVector::elementAt(int32_t i) {
	return $of($nc(this->m_map)->get(i));
}

bool ObjectVector::contains(Object$* s) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($equals($nc(this->m_map)->get(i), s)) {
			return true;
		}
	}
	return false;
}

int32_t ObjectVector::indexOf(Object$* elem, int32_t index) {
	for (int32_t i = index; i < this->m_firstFree; ++i) {
		if ($equals($nc(this->m_map)->get(i), elem)) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

int32_t ObjectVector::indexOf(Object$* elem) {
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		if ($equals($nc(this->m_map)->get(i), elem)) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

int32_t ObjectVector::lastIndexOf(Object$* elem) {
	for (int32_t i = (this->m_firstFree - 1); i >= 0; --i) {
		if ($equals($nc(this->m_map)->get(i), elem)) {
			return i;
		}
	}
	return $Integer::MIN_VALUE;
}

void ObjectVector::setToSize(int32_t size) {
	$var($ObjectArray, newMap, $new($ObjectArray, size));
	$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree);
	this->m_mapSize = size;
	$set(this, m_map, newMap);
}

$Object* ObjectVector::clone() {
	return $of($new(ObjectVector, this));
}

ObjectVector::ObjectVector() {
}

$Class* ObjectVector::load$($String* name, bool initialize) {
	$loadClass(ObjectVector, name, initialize, &_ObjectVector_ClassInfo_, allocate$ObjectVector);
	return class$;
}

$Class* ObjectVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com