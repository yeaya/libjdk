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

$ObjectPool* StringBufferPool::m_stringBufPool = nullptr;

void StringBufferPool::init$() {
}

$FastStringBuffer* StringBufferPool::get() {
	$init(StringBufferPool);
	$synchronized(class$) {
		return $cast($FastStringBuffer, $nc(StringBufferPool::m_stringBufPool)->getInstance());
	}
}

void StringBufferPool::free($FastStringBuffer* sb) {
	$init(StringBufferPool);
	$synchronized(class$) {
		$nc(sb)->setLength(0);
		$nc(StringBufferPool::m_stringBufPool)->freeInstance(sb);
	}
}

void StringBufferPool::clinit$($Class* clazz) {
	$load($FastStringBuffer);
	$assignStatic(StringBufferPool::m_stringBufPool, $new($ObjectPool, $FastStringBuffer::class$));
}

StringBufferPool::StringBufferPool() {
}

$Class* StringBufferPool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_stringBufPool", "Lcom/sun/org/apache/xml/internal/utils/ObjectPool;", nullptr, $PRIVATE | $STATIC, $staticField(StringBufferPool, m_stringBufPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringBufferPool, init$, void)},
		{"free", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(StringBufferPool, free, void, $FastStringBuffer*)},
		{"get", "()Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(StringBufferPool, get, $FastStringBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.StringBufferPool",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringBufferPool, name, initialize, &classInfo$$, StringBufferPool::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StringBufferPool);
	});
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