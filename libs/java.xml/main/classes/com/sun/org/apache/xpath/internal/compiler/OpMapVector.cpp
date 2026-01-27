#include <com/sun/org/apache/xpath/internal/compiler/OpMapVector.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _OpMapVector_FieldInfo_[] = {
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(OpMapVector, m_blocksize)},
	{"m_map", "[I", nullptr, $PROTECTED, $field(OpMapVector, m_map)},
	{"m_lengthPos", "I", nullptr, $PROTECTED, $field(OpMapVector, m_lengthPos)},
	{"m_mapSize", "I", nullptr, $PROTECTED, $field(OpMapVector, m_mapSize)},
	{}
};

$MethodInfo _OpMapVector_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(OpMapVector, init$, void, int32_t, int32_t, int32_t)},
	{"elementAt", "(I)I", nullptr, $PUBLIC | $FINAL, $method(OpMapVector, elementAt, int32_t, int32_t)},
	{"setElementAt", "(II)V", nullptr, $PUBLIC | $FINAL, $method(OpMapVector, setElementAt, void, int32_t, int32_t)},
	{"setToSize", "(I)V", nullptr, $PUBLIC | $FINAL, $method(OpMapVector, setToSize, void, int32_t)},
	{}
};

$ClassInfo _OpMapVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.OpMapVector",
	"java.lang.Object",
	nullptr,
	_OpMapVector_FieldInfo_,
	_OpMapVector_MethodInfo_
};

$Object* allocate$OpMapVector($Class* clazz) {
	return $of($alloc(OpMapVector));
}

void OpMapVector::init$(int32_t blocksize, int32_t increaseSize, int32_t lengthPos) {
	this->m_lengthPos = 0;
	this->m_blocksize = increaseSize;
	this->m_mapSize = blocksize;
	this->m_lengthPos = lengthPos;
	$set(this, m_map, $new($ints, blocksize));
}

int32_t OpMapVector::elementAt(int32_t i) {
	return $nc(this->m_map)->get(i);
}

void OpMapVector::setElementAt(int32_t value, int32_t index) {
	if (index >= this->m_mapSize) {
		int32_t oldSize = this->m_mapSize;
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, oldSize);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(index, value);
}

void OpMapVector::setToSize(int32_t size) {
	$var($ints, newMap, $new($ints, size));
	$System::arraycopy(this->m_map, 0, newMap, 0, $nc(this->m_map)->get(this->m_lengthPos));
	this->m_mapSize = size;
	$set(this, m_map, newMap);
}

OpMapVector::OpMapVector() {
}

$Class* OpMapVector::load$($String* name, bool initialize) {
	$loadClass(OpMapVector, name, initialize, &_OpMapVector_ClassInfo_, allocate$OpMapVector);
	return class$;
}

$Class* OpMapVector::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com