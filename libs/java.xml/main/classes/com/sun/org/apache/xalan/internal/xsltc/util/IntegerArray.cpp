#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace util {

$FieldInfo _IntegerArray_FieldInfo_[] = {
	{"InitialSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegerArray, InitialSize)},
	{"_array", "[I", nullptr, $PRIVATE, $field(IntegerArray, _array)},
	{"_size", "I", nullptr, $PRIVATE, $field(IntegerArray, _size)},
	{"_free", "I", nullptr, $PRIVATE, $field(IntegerArray, _free)},
	{}
};

$MethodInfo _IntegerArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerArray, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(IntegerArray, init$, void, int32_t)},
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(IntegerArray, init$, void, $ints*)},
	{"add", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntegerArray, add, void, int32_t)},
	{"addNew", "(I)V", nullptr, $PUBLIC, $method(IntegerArray, addNew, void, int32_t)},
	{"at", "(I)I", nullptr, $PUBLIC | $FINAL, $method(IntegerArray, at, int32_t, int32_t)},
	{"cardinality", "()I", nullptr, $PUBLIC | $FINAL, $method(IntegerArray, cardinality, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC, $method(IntegerArray, clear, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IntegerArray, clone, $Object*)},
	{"growArray", "(I)V", nullptr, $PRIVATE, $method(IntegerArray, growArray, void, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC, $method(IntegerArray, indexOf, int32_t, int32_t)},
	{"last", "()I", nullptr, $PUBLIC, $method(IntegerArray, last, int32_t)},
	{"merge", "(Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;)V", nullptr, $PUBLIC, $method(IntegerArray, merge, void, IntegerArray*)},
	{"partition", "([III)I", nullptr, $PRIVATE | $STATIC, $staticMethod(IntegerArray, partition, int32_t, $ints*, int32_t, int32_t)},
	{"pop", "()V", nullptr, $PUBLIC, $method(IntegerArray, pop, void)},
	{"pop", "(I)V", nullptr, $PUBLIC, $method(IntegerArray, pop, void, int32_t)},
	{"popLast", "()I", nullptr, $PUBLIC, $method(IntegerArray, popLast, int32_t)},
	{"print", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(IntegerArray, print, void, $PrintStream*)},
	{"quicksort", "([III)V", nullptr, $PRIVATE | $STATIC, $staticMethod(IntegerArray, quicksort, void, $ints*, int32_t, int32_t)},
	{"reverse", "()V", nullptr, $PUBLIC, $method(IntegerArray, reverse, void)},
	{"set", "(II)V", nullptr, $PUBLIC | $FINAL, $method(IntegerArray, set, void, int32_t, int32_t)},
	{"setLast", "(I)V", nullptr, $PUBLIC, $method(IntegerArray, setLast, void, int32_t)},
	{"sort", "()V", nullptr, $PUBLIC, $method(IntegerArray, sort, void)},
	{"toIntArray", "()[I", nullptr, $PUBLIC, $method(IntegerArray, toIntArray, $ints*)},
	{}
};

$ClassInfo _IntegerArray_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.util.IntegerArray",
	"java.lang.Object",
	nullptr,
	_IntegerArray_FieldInfo_,
	_IntegerArray_MethodInfo_
};

$Object* allocate$IntegerArray($Class* clazz) {
	return $of($alloc(IntegerArray));
}

void IntegerArray::init$() {
	IntegerArray::init$(IntegerArray::InitialSize);
}

void IntegerArray::init$(int32_t size) {
	this->_free = 0;
	$set(this, _array, $new($ints, this->_size = size));
}

void IntegerArray::init$($ints* array) {
	IntegerArray::init$($nc(array)->length);
	$System::arraycopy(array, 0, this->_array, 0, this->_free = this->_size);
}

void IntegerArray::clear() {
	this->_free = 0;
}

$Object* IntegerArray::clone() {
	$var(IntegerArray, clone, $new(IntegerArray, this->_free > 0 ? this->_free : 1));
	$System::arraycopy(this->_array, 0, clone->_array, 0, this->_free);
	clone->_free = this->_free;
	return $of(clone);
}

$ints* IntegerArray::toIntArray() {
	$var($ints, result, $new($ints, cardinality()));
	$System::arraycopy(this->_array, 0, result, 0, cardinality());
	return result;
}

int32_t IntegerArray::at(int32_t index) {
	return $nc(this->_array)->get(index);
}

void IntegerArray::set(int32_t index, int32_t value) {
	$nc(this->_array)->set(index, value);
}

int32_t IntegerArray::indexOf(int32_t n) {
	for (int32_t i = 0; i < this->_free; ++i) {
		if (n == $nc(this->_array)->get(i)) {
			return i;
		}
	}
	return -1;
}

void IntegerArray::add(int32_t value) {
	if (this->_free == this->_size) {
		growArray(this->_size * 2);
	}
	$nc(this->_array)->set(this->_free++, value);
}

void IntegerArray::addNew(int32_t value) {
	for (int32_t i = 0; i < this->_free; ++i) {
		if ($nc(this->_array)->get(i) == value) {
			return;
		}
	}
	add(value);
}

void IntegerArray::reverse() {
	int32_t left = 0;
	int32_t right = this->_free - 1;
	while (left < right) {
		int32_t temp = $nc(this->_array)->get(left);
		$nc(this->_array)->set(left++, $nc(this->_array)->get(right));
		$nc(this->_array)->set(right--, temp);
	}
}

void IntegerArray::merge(IntegerArray* other) {
	int32_t newSize = this->_free + $nc(other)->_free;
	$var($ints, newArray, $new($ints, newSize));
	int32_t i = 0;
	int32_t j = 0;
	int32_t k = 0;
	for (k = 0; i < this->_free && j < other->_free; ++k) {
		int32_t x = $nc(this->_array)->get(i);
		int32_t y = $nc(other->_array)->get(j);
		if (x < y) {
			newArray->set(k, x);
			++i;
		} else if (x > y) {
			newArray->set(k, y);
			++j;
		} else {
			newArray->set(k, x);
			++i;
			++j;
		}
	}
	if (i >= this->_free) {
		while (j < other->_free) {
			newArray->set(k++, $nc(other->_array)->get(j++));
		}
	} else {
		while (i < this->_free) {
			newArray->set(k++, $nc(this->_array)->get(i++));
		}
	}
	$set(this, _array, newArray);
	this->_free = (this->_size = newSize);
}

void IntegerArray::sort() {
	quicksort(this->_array, 0, this->_free - 1);
}

void IntegerArray::quicksort($ints* array, int32_t p, int32_t r) {
	if (p < r) {
		int32_t q = partition(array, p, r);
		quicksort(array, p, q);
		quicksort(array, q + 1, r);
	}
}

int32_t IntegerArray::partition($ints* array, int32_t p, int32_t r) {
	int32_t x = $nc(array)->get((int32_t)((uint32_t)(p + r) >> 1));
	int32_t i = p - 1;
	int32_t j = r + 1;
	while (true) {
		while (x < array->get(--j)) {
		}
		while (x > array->get(++i)) {
		}
		if (i < j) {
			int32_t temp = array->get(i);
			array->set(i, array->get(j));
			array->set(j, temp);
		} else {
			return j;
		}
	}
}

void IntegerArray::growArray(int32_t size) {
	$var($ints, newArray, $new($ints, this->_size = size));
	$System::arraycopy(this->_array, 0, newArray, 0, this->_free);
	$set(this, _array, newArray);
}

int32_t IntegerArray::popLast() {
	return $nc(this->_array)->get(--this->_free);
}

int32_t IntegerArray::last() {
	return $nc(this->_array)->get(this->_free - 1);
}

void IntegerArray::setLast(int32_t n) {
	$nc(this->_array)->set(this->_free - 1, n);
}

void IntegerArray::pop() {
	--this->_free;
}

void IntegerArray::pop(int32_t n) {
	this->_free -= n;
}

int32_t IntegerArray::cardinality() {
	return this->_free;
}

void IntegerArray::print($PrintStream* out) {
	if (this->_free > 0) {
		for (int32_t i = 0; i < this->_free - 1; ++i) {
			$nc(out)->print($nc(this->_array)->get(i));
			out->print(u' ');
		}
		$nc(out)->println($nc(this->_array)->get(this->_free - 1));
	} else {
		$nc(out)->println("IntegerArray: empty"_s);
	}
}

IntegerArray::IntegerArray() {
}

$Class* IntegerArray::load$($String* name, bool initialize) {
	$loadClass(IntegerArray, name, initialize, &_IntegerArray_ClassInfo_, allocate$IntegerArray);
	return class$;
}

$Class* IntegerArray::class$ = nullptr;

							} // util
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com