#include <com/sun/org/apache/xml/internal/utils/ObjectStack.h>

#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/EmptyStackException.h>
#include <jcpp.h>

using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
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

$MethodInfo _ObjectStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectStack, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ObjectStack, init$, void, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/ObjectStack;)V", nullptr, $PUBLIC, $method(ObjectStack, init$, void, ObjectStack*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectStack, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ObjectStack, empty, bool)},
	{"peek", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectStack, peek, $Object*)},
	{"peek", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectStack, peek, $Object*, int32_t)},
	{"pop", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectStack, pop, $Object*)},
	{"push", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ObjectStack, push, $Object*, Object$*)},
	{"quickPop", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectStack, quickPop, void, int32_t)},
	{"search", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ObjectStack, search, int32_t, Object$*)},
	{"setTop", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ObjectStack, setTop, void, Object$*)},
	{}
};

$ClassInfo _ObjectStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ObjectStack",
	"com.sun.org.apache.xml.internal.utils.ObjectVector",
	nullptr,
	nullptr,
	_ObjectStack_MethodInfo_
};

$Object* allocate$ObjectStack($Class* clazz) {
	return $of($alloc(ObjectStack));
}

void ObjectStack::init$() {
	$ObjectVector::init$();
}

void ObjectStack::init$(int32_t blocksize) {
	$ObjectVector::init$(blocksize);
}

void ObjectStack::init$(ObjectStack* v) {
	$ObjectVector::init$(static_cast<$ObjectVector*>(v));
}

$Object* ObjectStack::push(Object$* i) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, i);
	++this->m_firstFree;
	return $of(i);
}

$Object* ObjectStack::pop() {
	$var($Object0, val, $nc(this->m_map)->get(--this->m_firstFree));
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	return $of(val);
}

void ObjectStack::quickPop(int32_t n) {
	this->m_firstFree -= n;
}

$Object* ObjectStack::peek() {
	try {
		return $of($nc(this->m_map)->get(this->m_firstFree - 1));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

$Object* ObjectStack::peek(int32_t n) {
	try {
		return $of($nc(this->m_map)->get(this->m_firstFree - (1 + n)));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

void ObjectStack::setTop(Object$* val) {
	try {
		$nc(this->m_map)->set(this->m_firstFree - 1, val);
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($EmptyStackException);
	}
}

bool ObjectStack::empty() {
	return this->m_firstFree == 0;
}

int32_t ObjectStack::search(Object$* o) {
	int32_t i = lastIndexOf(o);
	if (i >= 0) {
		return size() - i;
	}
	return -1;
}

$Object* ObjectStack::clone() {
	return $of($cast(ObjectStack, $ObjectVector::clone()));
}

ObjectStack::ObjectStack() {
}

$Class* ObjectStack::load$($String* name, bool initialize) {
	$loadClass(ObjectStack, name, initialize, &_ObjectStack_ClassInfo_, allocate$ObjectStack);
	return class$;
}

$Class* ObjectStack::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com