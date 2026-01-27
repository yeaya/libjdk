#include <com/sun/org/apache/xml/internal/utils/SuballocatedByteVector.h>

#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
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

$FieldInfo _SuballocatedByteVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(SuballocatedByteVector, m_blocksize)},
	{"m_numblocks", "I", nullptr, $PROTECTED, $field(SuballocatedByteVector, m_numblocks)},
	{"m_map", "[[B", nullptr, $PROTECTED, $field(SuballocatedByteVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(SuballocatedByteVector, m_firstFree)},
	{"m_map0", "[B", nullptr, $PROTECTED, $field(SuballocatedByteVector, m_map0)},
	{}
};

$MethodInfo _SuballocatedByteVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SuballocatedByteVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SuballocatedByteVector, init$, void, int32_t)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(SuballocatedByteVector, init$, void, int32_t, int32_t)},
	{"addElement", "(B)V", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, addElement, void, int8_t)},
	{"addElements", "(BI)V", nullptr, $PRIVATE, $method(SuballocatedByteVector, addElements, void, int8_t, int32_t)},
	{"addElements", "(I)V", nullptr, $PRIVATE, $method(SuballocatedByteVector, addElements, void, int32_t)},
	{"contains", "(B)Z", nullptr, $PRIVATE, $method(SuballocatedByteVector, contains, bool, int8_t)},
	{"elementAt", "(I)B", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, elementAt, int8_t, int32_t)},
	{"indexOf", "(BI)I", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, indexOf, int32_t, int8_t, int32_t)},
	{"indexOf", "(B)I", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, indexOf, int32_t, int8_t)},
	{"insertElementAt", "(BI)V", nullptr, $PRIVATE, $method(SuballocatedByteVector, insertElementAt, void, int8_t, int32_t)},
	{"lastIndexOf", "(B)I", nullptr, $PRIVATE, $method(SuballocatedByteVector, lastIndexOf, int32_t, int8_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, removeAllElements, void)},
	{"removeElement", "(B)Z", nullptr, $PRIVATE, $method(SuballocatedByteVector, removeElement, bool, int8_t)},
	{"removeElementAt", "(I)V", nullptr, $PRIVATE, $method(SuballocatedByteVector, removeElementAt, void, int32_t)},
	{"setElementAt", "(BI)V", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, setElementAt, void, int8_t, int32_t)},
	{"setSize", "(I)V", nullptr, $PRIVATE, $method(SuballocatedByteVector, setSize, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SuballocatedByteVector, size, int32_t)},
	{}
};

$ClassInfo _SuballocatedByteVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SuballocatedByteVector",
	"java.lang.Object",
	nullptr,
	_SuballocatedByteVector_FieldInfo_,
	_SuballocatedByteVector_MethodInfo_
};

$Object* allocate$SuballocatedByteVector($Class* clazz) {
	return $of($alloc(SuballocatedByteVector));
}

void SuballocatedByteVector::init$() {
	SuballocatedByteVector::init$(2048);
}

void SuballocatedByteVector::init$(int32_t blocksize) {
	this->m_numblocks = 32;
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	$set(this, m_map0, $new($bytes, blocksize));
	$set(this, m_map, $new($byteArray2, this->m_numblocks));
	$nc(this->m_map)->set(0, this->m_map0);
}

void SuballocatedByteVector::init$(int32_t blocksize, int32_t increaseSize) {
	SuballocatedByteVector::init$(blocksize);
}

int32_t SuballocatedByteVector::size() {
	return this->m_firstFree;
}

void SuballocatedByteVector::setSize(int32_t sz) {
	if (this->m_firstFree < sz) {
		this->m_firstFree = sz;
	}
}

void SuballocatedByteVector::addElement(int8_t value) {
	$useLocalCurrentObjectStackCache();
	if (this->m_firstFree < this->m_blocksize) {
		$nc(this->m_map0)->set(this->m_firstFree++, value);
	} else {
		int32_t index = $div(this->m_firstFree, this->m_blocksize);
		int32_t offset = $mod(this->m_firstFree, this->m_blocksize);
		++this->m_firstFree;
		if (index >= $nc(this->m_map)->length) {
			int32_t newsize = index + this->m_numblocks;
			$var($byteArray2, newMap, $new($byteArray2, newsize));
			$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
			$set(this, m_map, newMap);
		}
		$var($bytes, block, $nc(this->m_map)->get(index));
		if (nullptr == block) {
			$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
		}
		$nc(block)->set(offset, value);
	}
}

void SuballocatedByteVector::addElements(int8_t value, int32_t numberOfElements) {
	$useLocalCurrentObjectStackCache();
	if (this->m_firstFree + numberOfElements < this->m_blocksize) {
		for (int32_t i = 0; i < numberOfElements; ++i) {
			$nc(this->m_map0)->set(this->m_firstFree++, value);
		}
	} else {
		int32_t index = $div(this->m_firstFree, this->m_blocksize);
		int32_t offset = $mod(this->m_firstFree, this->m_blocksize);
		this->m_firstFree += numberOfElements;
		while (numberOfElements > 0) {
			if (index >= $nc(this->m_map)->length) {
				int32_t newsize = index + this->m_numblocks;
				$var($byteArray2, newMap, $new($byteArray2, newsize));
				$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
				$set(this, m_map, newMap);
			}
			$var($bytes, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
			}
			int32_t copied = (this->m_blocksize - offset < numberOfElements) ? this->m_blocksize - offset : numberOfElements;
			numberOfElements -= copied;
			while (copied-- > 0) {
				$nc(block)->set(offset++, value);
			}
			++index;
			offset = 0;
		}
	}
}

void SuballocatedByteVector::addElements(int32_t numberOfElements) {
	$useLocalCurrentObjectStackCache();
	int32_t newlen = this->m_firstFree + numberOfElements;
	if (newlen > this->m_blocksize) {
		int32_t index = $mod(this->m_firstFree, this->m_blocksize);
		int32_t newindex = $mod((this->m_firstFree + numberOfElements), this->m_blocksize);
		for (int32_t i = index + 1; i <= newindex; ++i) {
			$nc(this->m_map)->set(i, $$new($bytes, this->m_blocksize));
		}
	}
	this->m_firstFree = newlen;
}

void SuballocatedByteVector::insertElementAt(int8_t value, int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at == this->m_firstFree) {
		addElement(value);
	} else if (at > this->m_firstFree) {
		int32_t index = $div(at, this->m_blocksize);
		if (index >= $nc(this->m_map)->length) {
			int32_t newsize = index + this->m_numblocks;
			$var($byteArray2, newMap, $new($byteArray2, newsize));
			$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
			$set(this, m_map, newMap);
		}
		$var($bytes, block, $nc(this->m_map)->get(index));
		if (nullptr == block) {
			$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
		}
		int32_t offset = $mod(at, this->m_blocksize);
		$nc(block)->set(offset, value);
		this->m_firstFree = offset + 1;
	} else {
		int32_t index = $div(at, this->m_blocksize);
		int32_t maxindex = this->m_firstFree + $div(1, this->m_blocksize);
		++this->m_firstFree;
		int32_t offset = $mod(at, this->m_blocksize);
		int8_t push = 0;
		while (index <= maxindex) {
			int32_t copylen = this->m_blocksize - offset - 1;
			$var($bytes, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				push = (int8_t)0;
				$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
			} else {
				push = $nc(block)->get(this->m_blocksize - 1);
				$System::arraycopy(block, offset, block, offset + 1, copylen);
			}
			$nc(block)->set(offset, value);
			value = push;
			offset = 0;
			++index;
		}
	}
}

void SuballocatedByteVector::removeAllElements() {
	this->m_firstFree = 0;
}

bool SuballocatedByteVector::removeElement(int8_t s) {
	int32_t at = indexOf(s, 0);
	if (at < 0) {
		return false;
	}
	removeElementAt(at);
	return true;
}

void SuballocatedByteVector::removeElementAt(int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at < this->m_firstFree) {
		int32_t index = $div(at, this->m_blocksize);
		int32_t maxindex = $div(this->m_firstFree, this->m_blocksize);
		int32_t offset = $mod(at, this->m_blocksize);
		while (index <= maxindex) {
			int32_t copylen = this->m_blocksize - offset - 1;
			$var($bytes, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
			} else {
				$System::arraycopy(block, offset + 1, block, offset, copylen);
			}
			if (index < maxindex) {
				$var($bytes, next, $nc(this->m_map)->get(index + 1));
				if (next != nullptr) {
					$nc(block)->set(this->m_blocksize - 1, (next != nullptr) ? next->get(0) : (int8_t)0);
				}
			} else {
				$nc(block)->set(this->m_blocksize - 1, (int8_t)0);
			}
			offset = 0;
			++index;
		}
	}
	--this->m_firstFree;
}

void SuballocatedByteVector::setElementAt(int8_t value, int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at < this->m_blocksize) {
		$nc(this->m_map0)->set(at, value);
		return;
	}
	int32_t index = $div(at, this->m_blocksize);
	int32_t offset = $mod(at, this->m_blocksize);
	if (index >= $nc(this->m_map)->length) {
		int32_t newsize = index + this->m_numblocks;
		$var($byteArray2, newMap, $new($byteArray2, newsize));
		$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
		$set(this, m_map, newMap);
	}
	$var($bytes, block, $nc(this->m_map)->get(index));
	if (nullptr == block) {
		$assign(block, ($nc(this->m_map)->set(index, $$new($bytes, this->m_blocksize))));
	}
	$nc(block)->set(offset, value);
	if (at >= this->m_firstFree) {
		this->m_firstFree = at + 1;
	}
}

int8_t SuballocatedByteVector::elementAt(int32_t i) {
	if (i < this->m_blocksize) {
		return $nc(this->m_map0)->get(i);
	}
	return $nc($nc(this->m_map)->get($div(i, this->m_blocksize)))->get($mod(i, this->m_blocksize));
}

bool SuballocatedByteVector::contains(int8_t s) {
	return (indexOf(s, 0) >= 0);
}

int32_t SuballocatedByteVector::indexOf(int8_t elem, int32_t index) {
	if (index >= this->m_firstFree) {
		return -1;
	}
	int32_t bindex = $div(index, this->m_blocksize);
	int32_t boffset = $mod(index, this->m_blocksize);
	int32_t maxindex = $div(this->m_firstFree, this->m_blocksize);
	$var($bytes, block, nullptr);
	for (; bindex < maxindex; ++bindex) {
		$assign(block, $nc(this->m_map)->get(bindex));
		if (block != nullptr) {
			for (int32_t offset = boffset; offset < this->m_blocksize; ++offset) {
				if (block->get(offset) == elem) {
					return offset + bindex * this->m_blocksize;
				}
			}
		}
		boffset = 0;
	}
	int32_t maxoffset = $mod(this->m_firstFree, this->m_blocksize);
	$assign(block, $nc(this->m_map)->get(maxindex));
	for (int32_t offset = boffset; offset < maxoffset; ++offset) {
		if ($nc(block)->get(offset) == elem) {
			return offset + maxindex * this->m_blocksize;
		}
	}
	return -1;
}

int32_t SuballocatedByteVector::indexOf(int8_t elem) {
	return indexOf(elem, 0);
}

int32_t SuballocatedByteVector::lastIndexOf(int8_t elem) {
	$useLocalCurrentObjectStackCache();
	int32_t boffset = $mod(this->m_firstFree, this->m_blocksize);
	for (int32_t index = $div(this->m_firstFree, this->m_blocksize); index >= 0; --index) {
		$var($bytes, block, $nc(this->m_map)->get(index));
		if (block != nullptr) {
			for (int32_t offset = boffset; offset >= 0; --offset) {
				if (block->get(offset) == elem) {
					return offset + index * this->m_blocksize;
				}
			}
		}
		boffset = 0;
	}
	return -1;
}

SuballocatedByteVector::SuballocatedByteVector() {
}

$Class* SuballocatedByteVector::load$($String* name, bool initialize) {
	$loadClass(SuballocatedByteVector, name, initialize, &_SuballocatedByteVector_ClassInfo_, allocate$SuballocatedByteVector);
	return class$;
}

$Class* SuballocatedByteVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com