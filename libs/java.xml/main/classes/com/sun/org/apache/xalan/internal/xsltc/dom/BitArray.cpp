#include <com/sun/org/apache/xalan/internal/xsltc/dom/BitArray.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <jcpp.h>

#undef DEBUG_ASSERTIONS
#undef END
#undef MAX_VALUE
#undef MIN_VALUE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _BitArray_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(BitArray, serialVersionUID)},
	{"_bits", "[I", nullptr, $PRIVATE, $field(BitArray, _bits)},
	{"_bitSize", "I", nullptr, $PRIVATE, $field(BitArray, _bitSize)},
	{"_intSize", "I", nullptr, $PRIVATE, $field(BitArray, _intSize)},
	{"_mask", "I", nullptr, $PRIVATE, $field(BitArray, _mask)},
	{"_masks", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BitArray, _masks)},
	{"DEBUG_ASSERTIONS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BitArray, DEBUG_ASSERTIONS)},
	{"_pos", "I", nullptr, $PRIVATE, $field(BitArray, _pos)},
	{"_node", "I", nullptr, $PRIVATE, $field(BitArray, _node)},
	{"_int", "I", nullptr, $PRIVATE, $field(BitArray, _int)},
	{"_bit", "I", nullptr, $PRIVATE, $field(BitArray, _bit)},
	{"_first", "I", nullptr, 0, $field(BitArray, _first)},
	{"_last", "I", nullptr, 0, $field(BitArray, _last)},
	{}
};

$MethodInfo _BitArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BitArray, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(BitArray, init$, void, int32_t)},
	{"<init>", "(I[I)V", nullptr, $PUBLIC, $method(BitArray, init$, void, int32_t, $ints*)},
	{"cloneArray", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/BitArray;", nullptr, $PUBLIC, $virtualMethod(BitArray, cloneArray, BitArray*)},
	{"data", "()[I", nullptr, $PUBLIC | $FINAL, $method(BitArray, data, $ints*)},
	{"getBit", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(BitArray, getBit, bool, int32_t)},
	{"getBitNumber", "(I)I", nullptr, $PUBLIC | $FINAL, $method(BitArray, getBitNumber, int32_t, int32_t)},
	{"getMask", "()I", nullptr, $PUBLIC, $virtualMethod(BitArray, getMask, int32_t)},
	{"getNextBit", "(I)I", nullptr, $PUBLIC | $FINAL, $method(BitArray, getNextBit, int32_t, int32_t)},
	{"merge", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/BitArray;)Lcom/sun/org/apache/xalan/internal/xsltc/dom/BitArray;", nullptr, $PUBLIC | $FINAL, $method(BitArray, merge, BitArray*, BitArray*)},
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, $virtualMethod(BitArray, readExternal, void, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(BitArray, resize, void, int32_t)},
	{"setBit", "(I)V", nullptr, $PUBLIC | $FINAL, $method(BitArray, setBit, void, int32_t)},
	{"setMask", "(I)V", nullptr, $PUBLIC, $virtualMethod(BitArray, setMask, void, int32_t)},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(BitArray, size, int32_t)},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, $virtualMethod(BitArray, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
	{}
};

$ClassInfo _BitArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.BitArray",
	"java.lang.Object",
	"java.io.Externalizable",
	_BitArray_FieldInfo_,
	_BitArray_MethodInfo_
};

$Object* allocate$BitArray($Class* clazz) {
	return $of($alloc(BitArray));
}

$ints* BitArray::_masks = nullptr;

void BitArray::init$() {
	BitArray::init$(32);
}

void BitArray::init$(int32_t size) {
	this->_pos = $Integer::MAX_VALUE;
	this->_node = 0;
	this->_int = 0;
	this->_bit = 0;
	this->_first = $Integer::MAX_VALUE;
	this->_last = $Integer::MIN_VALUE;
	if (size < 32) {
		size = 32;
	}
	this->_bitSize = size;
	this->_intSize = ((int32_t)((uint32_t)this->_bitSize >> 5)) + 1;
	$set(this, _bits, $new($ints, this->_intSize + 1));
}

void BitArray::init$(int32_t size, $ints* bits) {
	this->_pos = $Integer::MAX_VALUE;
	this->_node = 0;
	this->_int = 0;
	this->_bit = 0;
	this->_first = $Integer::MAX_VALUE;
	this->_last = $Integer::MIN_VALUE;
	if (size < 32) {
		size = 32;
	}
	this->_bitSize = size;
	this->_intSize = ((int32_t)((uint32_t)this->_bitSize >> 5)) + 1;
	$set(this, _bits, bits);
}

void BitArray::setMask(int32_t mask) {
	this->_mask = mask;
}

int32_t BitArray::getMask() {
	return (this->_mask);
}

int32_t BitArray::size() {
	return (this->_bitSize);
}

bool BitArray::getBit(int32_t bit) {
	return (((int32_t)($nc(this->_bits)->get((int32_t)((uint32_t)bit >> 5)) & (uint32_t)$nc(BitArray::_masks)->get(bit % 32))) != 0);
}

int32_t BitArray::getNextBit(int32_t startBit) {
	for (int32_t i = ((int32_t)((uint32_t)startBit >> 5)); i <= this->_intSize; ++i) {
		int32_t bits = $nc(this->_bits)->get(i);
		if (bits != 0) {
			for (int32_t b = (startBit % 32); b < 32; ++b) {
				if (((int32_t)(bits & (uint32_t)$nc(BitArray::_masks)->get(b))) != 0) {
					return ((i << 5) + b);
				}
			}
		}
		startBit = 0;
	}
	return ($DTMAxisIterator::END);
}

int32_t BitArray::getBitNumber(int32_t pos) {
	if (pos == this->_pos) {
		return (this->_node);
	}
	if (pos < this->_pos) {
		this->_int = (this->_bit = (this->_pos = 0));
	}
	for (; this->_int <= this->_intSize; ++this->_int) {
		int32_t bits = $nc(this->_bits)->get(this->_int);
		if (bits != 0) {
			for (; this->_bit < 32; ++this->_bit) {
				if (((int32_t)(bits & (uint32_t)$nc(BitArray::_masks)->get(this->_bit))) != 0) {
					if (++this->_pos == pos) {
						this->_node = ((this->_int << 5) + this->_bit) - 1;
						return (this->_node);
					}
				}
			}
			this->_bit = 0;
		}
	}
	return (0);
}

$ints* BitArray::data() {
	return (this->_bits);
}

void BitArray::setBit(int32_t bit) {
	if (bit >= this->_bitSize) {
		return;
	}
	int32_t i = ((int32_t)((uint32_t)bit >> 5));
	if (i < this->_first) {
		this->_first = i;
	}
	if (i > this->_last) {
		this->_last = i;
	}
	(*$nc(this->_bits))[i] |= $nc(BitArray::_masks)->get(bit % 32);
}

BitArray* BitArray::merge(BitArray* other) {
	if (this->_last == -1) {
		$set(this, _bits, $nc(other)->_bits);
	} else if ($nc(other)->_last != -1) {
		int32_t start = (this->_first < other->_first) ? this->_first : other->_first;
		int32_t stop = (this->_last > other->_last) ? this->_last : other->_last;
		if (other->_intSize > this->_intSize) {
			if (stop > this->_intSize) {
				stop = this->_intSize;
			}
			for (int32_t i = start; i <= stop; ++i) {
				(*$nc(other->_bits))[i] |= $nc(this->_bits)->get(i);
			}
			$set(this, _bits, other->_bits);
		} else {
			if (stop > other->_intSize) {
				stop = other->_intSize;
			}
			for (int32_t i = start; i <= stop; ++i) {
				(*$nc(this->_bits))[i] |= $nc(other->_bits)->get(i);
			}
		}
	}
	return (this);
}

void BitArray::resize(int32_t newSize) {
	if (newSize > this->_bitSize) {
		this->_intSize = ((int32_t)((uint32_t)newSize >> 5)) + 1;
		$var($ints, newBits, $new($ints, this->_intSize + 1));
		$System::arraycopy(this->_bits, 0, newBits, 0, ((int32_t)((uint32_t)this->_bitSize >> 5)) + 1);
		$set(this, _bits, newBits);
		this->_bitSize = newSize;
	}
}

BitArray* BitArray::cloneArray() {
	return ($new(BitArray, this->_intSize, this->_bits));
}

void BitArray::writeExternal($ObjectOutput* out) {
	$nc(out)->writeInt(this->_bitSize);
	out->writeInt(this->_mask);
	out->writeObject(this->_bits);
	out->flush();
}

void BitArray::readExternal($ObjectInput* in) {
	this->_bitSize = $nc(in)->readInt();
	this->_intSize = ((int32_t)((uint32_t)this->_bitSize >> 5)) + 1;
	this->_mask = in->readInt();
	$set(this, _bits, $cast($ints, in->readObject()));
}

void clinit$BitArray($Class* class$) {
	$assignStatic(BitArray::_masks, $new($ints, {
		(int32_t)0x80000000,
		0x40000000,
		0x20000000,
		0x10000000,
		0x08000000,
		0x04000000,
		0x02000000,
		0x01000000,
		0x00800000,
		0x00400000,
		0x00200000,
		0x00100000,
		0x00080000,
		0x00040000,
		0x00020000,
		0x00010000,
		32768,
		16384,
		8192,
		4096,
		2048,
		1024,
		512,
		256,
		128,
		64,
		32,
		16,
		8,
		4,
		2,
		1
	}));
}

BitArray::BitArray() {
}

$Class* BitArray::load$($String* name, bool initialize) {
	$loadClass(BitArray, name, initialize, &_BitArray_ClassInfo_, clinit$BitArray, allocate$BitArray);
	return class$;
}

$Class* BitArray::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com