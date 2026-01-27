#include <com/sun/org/apache/xml/internal/utils/IntStack.h>

#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/EmptyStackException.h>
#include <jcpp.h>

using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _IntStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntStack, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(IntStack, init$, void, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/IntStack;)V", nullptr, $PUBLIC, $method(IntStack, init$, void, IntStack*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IntStack, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(IntStack, empty, bool)},
	{"peek", "()I", nullptr, $PUBLIC | $FINAL, $method(IntStack, peek, int32_t)},
	{"peek", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntStack, peek, int32_t, int32_t)},
	{"pop", "()I", nullptr, $PUBLIC | $FINAL, $method(IntStack, pop, int32_t)},
	{"push", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntStack, push, int32_t, int32_t)},
	{"quickPop", "(I)V", nullptr, $PUBLIC | $FINAL, $method(IntStack, quickPop, void, int32_t)},
	{"search", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntStack, search, int32_t, int32_t)},
	{"setTop", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntStack, setTop, void, int32_t)},
	{}
};

$ClassInfo _IntStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.IntStack",
	"com.sun.org.apache.xml.internal.utils.IntVector",
	nullptr,
	nullptr,
	_IntStack_MethodInfo_
};

$Object* allocate$IntStack($Class* clazz) {
	return $of($alloc(IntStack));
}

void IntStack::init$() {
	$IntVector::init$();
}

void IntStack::init$(int32_t blocksize) {
	$IntVector::init$(blocksize);
}

void IntStack::init$(IntStack* v) {
	$IntVector::init$(static_cast<$IntVector*>(v));
}

int32_t IntStack::push(int32_t i) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ints, newMap, $new($ints, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, i);
	++this->m_firstFree;
	return i;
}

int32_t IntStack::pop() {
	return $nc(this->m_map)->get(--this->m_firstFree);
}

void IntStack::quickPop(int32_t n) {
	this->m_firstFree -= n;
}

int32_t IntStack::peek() {
	try {
		return $nc(this->m_map)->get(this->m_firstFree - 1);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

int32_t IntStack::peek(int32_t n) {
	try {
		return $nc(this->m_map)->get(this->m_firstFree - (1 + n));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

void IntStack::setTop(int32_t val) {
	try {
		$nc(this->m_map)->set(this->m_firstFree - 1, val);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
}

bool IntStack::empty() {
	return this->m_firstFree == 0;
}

int32_t IntStack::search(int32_t o) {
	int32_t i = lastIndexOf(o);
	if (i >= 0) {
		return size() - i;
	}
	return -1;
}

$Object* IntStack::clone() {
	return $of($cast(IntStack, $IntVector::clone()));
}

IntStack::IntStack() {
}

$Class* IntStack::load$($String* name, bool initialize) {
	$loadClass(IntStack, name, initialize, &_IntStack_ClassInfo_, allocate$IntStack);
	return class$;
}

$Class* IntStack::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com