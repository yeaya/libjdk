#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>

#include <jcpp.h>

#undef NUMBLOCKS_DEFAULT

using $intArray2 = $Array<int32_t, 2>;
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

$FieldInfo _SuballocatedIntVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_blocksize)},
	{"m_SHIFT", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_SHIFT)},
	{"m_MASK", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_MASK)},
	{"NUMBLOCKS_DEFAULT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SuballocatedIntVector, NUMBLOCKS_DEFAULT)},
	{"m_numblocks", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_numblocks)},
	{"m_map", "[[I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_firstFree)},
	{"m_map0", "[I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_map0)},
	{"m_buildCache", "[I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_buildCache)},
	{"m_buildCacheStartIndex", "I", nullptr, $PROTECTED, $field(SuballocatedIntVector, m_buildCacheStartIndex)},
	{}
};

$MethodInfo _SuballocatedIntVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SuballocatedIntVector, init$, void)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(SuballocatedIntVector, init$, void, int32_t, int32_t)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SuballocatedIntVector, init$, void, int32_t)},
	{"addElement", "(I)V", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, addElement, void, int32_t)},
	{"addElements", "(II)V", nullptr, $PRIVATE, $method(SuballocatedIntVector, addElements, void, int32_t, int32_t)},
	{"addElements", "(I)V", nullptr, $PRIVATE, $method(SuballocatedIntVector, addElements, void, int32_t)},
	{"contains", "(I)Z", nullptr, $PRIVATE, $method(SuballocatedIntVector, contains, bool, int32_t)},
	{"elementAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, elementAt, int32_t, int32_t)},
	{"getMap", "()[[I", nullptr, $PUBLIC | $FINAL, $method(SuballocatedIntVector, getMap, $intArray2*)},
	{"getMap0", "()[I", nullptr, $PUBLIC | $FINAL, $method(SuballocatedIntVector, getMap0, $ints*)},
	{"indexOf", "(II)I", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, indexOf, int32_t, int32_t, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, indexOf, int32_t, int32_t)},
	{"insertElementAt", "(II)V", nullptr, $PRIVATE, $method(SuballocatedIntVector, insertElementAt, void, int32_t, int32_t)},
	{"lastIndexOf", "(I)I", nullptr, $PRIVATE, $method(SuballocatedIntVector, lastIndexOf, int32_t, int32_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, removeAllElements, void)},
	{"removeElement", "(I)Z", nullptr, $PRIVATE, $method(SuballocatedIntVector, removeElement, bool, int32_t)},
	{"removeElementAt", "(I)V", nullptr, $PRIVATE, $method(SuballocatedIntVector, removeElementAt, void, int32_t)},
	{"setElementAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, setElementAt, void, int32_t, int32_t)},
	{"setSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, setSize, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SuballocatedIntVector, size, int32_t)},
	{}
};

$ClassInfo _SuballocatedIntVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SuballocatedIntVector",
	"java.lang.Object",
	nullptr,
	_SuballocatedIntVector_FieldInfo_,
	_SuballocatedIntVector_MethodInfo_
};

$Object* allocate$SuballocatedIntVector($Class* clazz) {
	return $of($alloc(SuballocatedIntVector));
}

void SuballocatedIntVector::init$() {
	SuballocatedIntVector::init$(2048);
}

void SuballocatedIntVector::init$(int32_t blocksize, int32_t numblocks) {
	this->m_numblocks = SuballocatedIntVector::NUMBLOCKS_DEFAULT;
	this->m_firstFree = 0;
	for (this->m_SHIFT = 0; 0 != ($usrAssign(blocksize, 1)); ++this->m_SHIFT) {
	}
	this->m_blocksize = $sl(1, this->m_SHIFT);
	this->m_MASK = this->m_blocksize - 1;
	this->m_numblocks = numblocks;
	$set(this, m_map0, $new($ints, this->m_blocksize));
	$set(this, m_map, $new($intArray2, numblocks));
	$nc(this->m_map)->set(0, this->m_map0);
	$set(this, m_buildCache, this->m_map0);
	this->m_buildCacheStartIndex = 0;
}

void SuballocatedIntVector::init$(int32_t blocksize) {
	SuballocatedIntVector::init$(blocksize, SuballocatedIntVector::NUMBLOCKS_DEFAULT);
}

int32_t SuballocatedIntVector::size() {
	return this->m_firstFree;
}

void SuballocatedIntVector::setSize(int32_t sz) {
	if (this->m_firstFree > sz) {
		this->m_firstFree = sz;
	}
}

void SuballocatedIntVector::addElement(int32_t value) {
	$useLocalCurrentObjectStackCache();
	int32_t indexRelativeToCache = this->m_firstFree - this->m_buildCacheStartIndex;
	if (indexRelativeToCache >= 0 && indexRelativeToCache < this->m_blocksize) {
		$nc(this->m_buildCache)->set(indexRelativeToCache, value);
		++this->m_firstFree;
	} else {
		int32_t index = $usr(this->m_firstFree, this->m_SHIFT);
		int32_t offset = (int32_t)(this->m_firstFree & (uint32_t)this->m_MASK);
		if (index >= $nc(this->m_map)->length) {
			int32_t newsize = index + this->m_numblocks;
			$var($intArray2, newMap, $new($intArray2, newsize));
			$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
			$set(this, m_map, newMap);
		}
		$var($ints, block, $nc(this->m_map)->get(index));
		if (nullptr == block) {
			$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
		}
		$nc(block)->set(offset, value);
		$set(this, m_buildCache, block);
		this->m_buildCacheStartIndex = this->m_firstFree - offset;
		++this->m_firstFree;
	}
}

void SuballocatedIntVector::addElements(int32_t value, int32_t numberOfElements) {
	$useLocalCurrentObjectStackCache();
	if (this->m_firstFree + numberOfElements < this->m_blocksize) {
		for (int32_t i = 0; i < numberOfElements; ++i) {
			$nc(this->m_map0)->set(this->m_firstFree++, value);
		}
	} else {
		int32_t index = $usr(this->m_firstFree, this->m_SHIFT);
		int32_t offset = (int32_t)(this->m_firstFree & (uint32_t)this->m_MASK);
		this->m_firstFree += numberOfElements;
		while (numberOfElements > 0) {
			if (index >= $nc(this->m_map)->length) {
				int32_t newsize = index + this->m_numblocks;
				$var($intArray2, newMap, $new($intArray2, newsize));
				$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
				$set(this, m_map, newMap);
			}
			$var($ints, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
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

void SuballocatedIntVector::addElements(int32_t numberOfElements) {
	$useLocalCurrentObjectStackCache();
	int32_t newlen = this->m_firstFree + numberOfElements;
	if (newlen > this->m_blocksize) {
		int32_t index = $usr(this->m_firstFree, this->m_SHIFT);
		int32_t newindex = $usr(this->m_firstFree + numberOfElements, this->m_SHIFT);
		for (int32_t i = index + 1; i <= newindex; ++i) {
			$nc(this->m_map)->set(i, $$new($ints, this->m_blocksize));
		}
	}
	this->m_firstFree = newlen;
}

void SuballocatedIntVector::insertElementAt(int32_t value, int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at == this->m_firstFree) {
		addElement(value);
	} else if (at > this->m_firstFree) {
		int32_t index = $usr(at, this->m_SHIFT);
		if (index >= $nc(this->m_map)->length) {
			int32_t newsize = index + this->m_numblocks;
			$var($intArray2, newMap, $new($intArray2, newsize));
			$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
			$set(this, m_map, newMap);
		}
		$var($ints, block, $nc(this->m_map)->get(index));
		if (nullptr == block) {
			$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
		}
		int32_t offset = (int32_t)(at & (uint32_t)this->m_MASK);
		$nc(block)->set(offset, value);
		this->m_firstFree = offset + 1;
	} else {
		int32_t index = $usr(at, this->m_SHIFT);
		int32_t maxindex = $usr(this->m_firstFree, this->m_SHIFT);
		++this->m_firstFree;
		int32_t offset = (int32_t)(at & (uint32_t)this->m_MASK);
		int32_t push = 0;
		while (index <= maxindex) {
			int32_t copylen = this->m_blocksize - offset - 1;
			$var($ints, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				push = 0;
				$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
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

void SuballocatedIntVector::removeAllElements() {
	this->m_firstFree = 0;
	$set(this, m_buildCache, this->m_map0);
	this->m_buildCacheStartIndex = 0;
}

bool SuballocatedIntVector::removeElement(int32_t s) {
	int32_t at = indexOf(s, 0);
	if (at < 0) {
		return false;
	}
	removeElementAt(at);
	return true;
}

void SuballocatedIntVector::removeElementAt(int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at < this->m_firstFree) {
		int32_t index = $usr(at, this->m_SHIFT);
		int32_t maxindex = $usr(this->m_firstFree, this->m_SHIFT);
		int32_t offset = (int32_t)(at & (uint32_t)this->m_MASK);
		while (index <= maxindex) {
			int32_t copylen = this->m_blocksize - offset - 1;
			$var($ints, block, $nc(this->m_map)->get(index));
			if (nullptr == block) {
				$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
			} else {
				$System::arraycopy(block, offset + 1, block, offset, copylen);
			}
			if (index < maxindex) {
				$var($ints, next, $nc(this->m_map)->get(index + 1));
				if (next != nullptr) {
					$nc(block)->set(this->m_blocksize - 1, (next != nullptr) ? next->get(0) : 0);
				}
			} else {
				$nc(block)->set(this->m_blocksize - 1, 0);
			}
			offset = 0;
			++index;
		}
	}
	--this->m_firstFree;
}

void SuballocatedIntVector::setElementAt(int32_t value, int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (at < this->m_blocksize) {
		$nc(this->m_map0)->set(at, value);
	} else {
		int32_t index = $usr(at, this->m_SHIFT);
		int32_t offset = (int32_t)(at & (uint32_t)this->m_MASK);
		if (index >= $nc(this->m_map)->length) {
			int32_t newsize = index + this->m_numblocks;
			$var($intArray2, newMap, $new($intArray2, newsize));
			$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->length);
			$set(this, m_map, newMap);
		}
		$var($ints, block, $nc(this->m_map)->get(index));
		if (nullptr == block) {
			$assign(block, ($nc(this->m_map)->set(index, $$new($ints, this->m_blocksize))));
		}
		$nc(block)->set(offset, value);
	}
	if (at >= this->m_firstFree) {
		this->m_firstFree = at + 1;
	}
}

int32_t SuballocatedIntVector::elementAt(int32_t i) {
	if (i < this->m_blocksize) {
		return $nc(this->m_map0)->get(i);
	}
	return $nc($nc(this->m_map)->get($usr(i, this->m_SHIFT)))->get((int32_t)(i & (uint32_t)this->m_MASK));
}

bool SuballocatedIntVector::contains(int32_t s) {
	return (indexOf(s, 0) >= 0);
}

int32_t SuballocatedIntVector::indexOf(int32_t elem, int32_t index) {
	if (index >= this->m_firstFree) {
		return -1;
	}
	int32_t bindex = $usr(index, this->m_SHIFT);
	int32_t boffset = (int32_t)(index & (uint32_t)this->m_MASK);
	int32_t maxindex = $usr(this->m_firstFree, this->m_SHIFT);
	$var($ints, block, nullptr);
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
	int32_t maxoffset = (int32_t)(this->m_firstFree & (uint32_t)this->m_MASK);
	$assign(block, $nc(this->m_map)->get(maxindex));
	for (int32_t offset = boffset; offset < maxoffset; ++offset) {
		if ($nc(block)->get(offset) == elem) {
			return offset + maxindex * this->m_blocksize;
		}
	}
	return -1;
}

int32_t SuballocatedIntVector::indexOf(int32_t elem) {
	return indexOf(elem, 0);
}

int32_t SuballocatedIntVector::lastIndexOf(int32_t elem) {
	$useLocalCurrentObjectStackCache();
	int32_t boffset = (int32_t)(this->m_firstFree & (uint32_t)this->m_MASK);
	for (int32_t index = $usr(this->m_firstFree, this->m_SHIFT); index >= 0; --index) {
		$var($ints, block, $nc(this->m_map)->get(index));
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

$ints* SuballocatedIntVector::getMap0() {
	return this->m_map0;
}

$intArray2* SuballocatedIntVector::getMap() {
	return this->m_map;
}

SuballocatedIntVector::SuballocatedIntVector() {
}

$Class* SuballocatedIntVector::load$($String* name, bool initialize) {
	$loadClass(SuballocatedIntVector, name, initialize, &_SuballocatedIntVector_ClassInfo_, allocate$SuballocatedIntVector);
	return class$;
}

$Class* SuballocatedIntVector::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com