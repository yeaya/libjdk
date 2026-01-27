#include <com/sun/org/apache/xpath/internal/axes/IteratorPool.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _IteratorPool_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IteratorPool, serialVersionUID)},
	{"m_orig", "Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PRIVATE | $FINAL, $field(IteratorPool, m_orig)},
	{"m_freeStack", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;>;", $PRIVATE | $FINAL, $field(IteratorPool, m_freeStack)},
	{}
};

$MethodInfo _IteratorPool_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $method(IteratorPool, init$, void, $DTMIterator*)},
	{"freeInstance", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(IteratorPool, freeInstance, void, $DTMIterator*)},
	{"getInstance", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(IteratorPool, getInstance, $DTMIterator*)},
	{"getInstanceOrThrow", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(IteratorPool, getInstanceOrThrow, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{}
};

$ClassInfo _IteratorPool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.IteratorPool",
	"java.lang.Object",
	"java.io.Serializable",
	_IteratorPool_FieldInfo_,
	_IteratorPool_MethodInfo_
};

$Object* allocate$IteratorPool($Class* clazz) {
	return $of($alloc(IteratorPool));
}

void IteratorPool::init$($DTMIterator* original) {
	$set(this, m_orig, original);
	$set(this, m_freeStack, $new($ArrayList));
}

$DTMIterator* IteratorPool::getInstanceOrThrow() {
	$synchronized(this) {
		if ($nc(this->m_freeStack)->isEmpty()) {
			return $cast($DTMIterator, $nc(this->m_orig)->clone());
		} else {
			$var($DTMIterator, result, $cast($DTMIterator, $nc(this->m_freeStack)->remove($nc(this->m_freeStack)->size() - 1)));
			return result;
		}
	}
}

$DTMIterator* IteratorPool::getInstance() {
	$synchronized(this) {
		if ($nc(this->m_freeStack)->isEmpty()) {
			try {
				return $cast($DTMIterator, $nc(this->m_orig)->clone());
			} catch ($Exception& ex) {
				$throwNew($WrappedRuntimeException, ex);
			}
		} else {
			$var($DTMIterator, result, $cast($DTMIterator, $nc(this->m_freeStack)->remove($nc(this->m_freeStack)->size() - 1)));
			return result;
		}
	}
}

void IteratorPool::freeInstance($DTMIterator* obj) {
	$synchronized(this) {
		$nc(this->m_freeStack)->add(obj);
	}
}

IteratorPool::IteratorPool() {
}

$Class* IteratorPool::load$($String* name, bool initialize) {
	$loadClass(IteratorPool, name, initialize, &_IteratorPool_ClassInfo_, allocate$IteratorPool);
	return class$;
}

$Class* IteratorPool::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com