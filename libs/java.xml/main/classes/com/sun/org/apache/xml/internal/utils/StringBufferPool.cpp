#include <com/sun/org/apache/xml/internal/utils/StringBufferPool.h>

#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/ObjectPool.h>
#include <jcpp.h>

using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $ObjectPool = ::com::sun::org::apache::xml::internal::utils::ObjectPool;
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

$FieldInfo _StringBufferPool_FieldInfo_[] = {
	{"m_stringBufPool", "Lcom/sun/org/apache/xml/internal/utils/ObjectPool;", nullptr, $PRIVATE | $STATIC, $staticField(StringBufferPool, m_stringBufPool)},
	{}
};

$MethodInfo _StringBufferPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringBufferPool, init$, void)},
	{"free", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(StringBufferPool, free, void, $FastStringBuffer*)},
	{"get", "()Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(StringBufferPool, get, $FastStringBuffer*)},
	{}
};

$ClassInfo _StringBufferPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringBufferPool",
	"java.lang.Object",
	nullptr,
	_StringBufferPool_FieldInfo_,
	_StringBufferPool_MethodInfo_
};

$Object* allocate$StringBufferPool($Class* clazz) {
	return $of($alloc(StringBufferPool));
}

$ObjectPool* StringBufferPool::m_stringBufPool = nullptr;

void StringBufferPool::init$() {
}

$FastStringBuffer* StringBufferPool::get() {
	$load(StringBufferPool);
	$synchronized(class$) {
		$init(StringBufferPool);
		return $cast($FastStringBuffer, $nc(StringBufferPool::m_stringBufPool)->getInstance());
	}
}

void StringBufferPool::free($FastStringBuffer* sb) {
	$load(StringBufferPool);
	$synchronized(class$) {
		$init(StringBufferPool);
		$nc(sb)->setLength(0);
		$nc(StringBufferPool::m_stringBufPool)->freeInstance(sb);
	}
}

void clinit$StringBufferPool($Class* class$) {
	$load($FastStringBuffer);
	$assignStatic(StringBufferPool::m_stringBufPool, $new($ObjectPool, $FastStringBuffer::class$));
}

StringBufferPool::StringBufferPool() {
}

$Class* StringBufferPool::load$($String* name, bool initialize) {
	$loadClass(StringBufferPool, name, initialize, &_StringBufferPool_ClassInfo_, clinit$StringBufferPool, allocate$StringBufferPool);
	return class$;
}

$Class* StringBufferPool::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com