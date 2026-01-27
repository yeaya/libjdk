#include <com/sun/org/apache/xerces/internal/impl/xs/util/XIntPool.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <jcpp.h>

#undef POOL_SIZE

using $XIntArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XInt>;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _XIntPool_FieldInfo_[] = {
	{"POOL_SIZE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIntPool, POOL_SIZE)},
	{"fXIntPool", "[Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIntPool, fXIntPool)},
	{}
};

$MethodInfo _XIntPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XIntPool, init$, void)},
	{"getXInt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PUBLIC | $FINAL, $method(XIntPool, getXInt, $XInt*, int32_t)},
	{}
};

$ClassInfo _XIntPool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XIntPool",
	"java.lang.Object",
	nullptr,
	_XIntPool_FieldInfo_,
	_XIntPool_MethodInfo_
};

$Object* allocate$XIntPool($Class* clazz) {
	return $of($alloc(XIntPool));
}

$XIntArray* XIntPool::fXIntPool = nullptr;

void XIntPool::init$() {
}

$XInt* XIntPool::getXInt(int32_t value) {
	if (value >= 0 && value < $nc(XIntPool::fXIntPool)->length) {
		return $nc(XIntPool::fXIntPool)->get(value);
	} else {
		return $new($XInt, value);
	}
}

void clinit$XIntPool($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XIntPool::fXIntPool, $new($XIntArray, XIntPool::POOL_SIZE));
	{
		for (int32_t i = 0; i < XIntPool::POOL_SIZE; ++i) {
			$nc(XIntPool::fXIntPool)->set(i, $$new($XInt, i));
		}
	}
}

XIntPool::XIntPool() {
}

$Class* XIntPool::load$($String* name, bool initialize) {
	$loadClass(XIntPool, name, initialize, &_XIntPool_ClassInfo_, clinit$XIntPool, allocate$XIntPool);
	return class$;
}

$Class* XIntPool::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com