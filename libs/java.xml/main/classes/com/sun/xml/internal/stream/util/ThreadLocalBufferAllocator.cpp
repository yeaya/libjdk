#include <com/sun/xml/internal/stream/util/ThreadLocalBufferAllocator.h>

#include <com/sun/xml/internal/stream/util/BufferAllocator.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

#undef TL

using $BufferAllocator = ::com::sun::xml::internal::stream::util::BufferAllocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

$FieldInfo _ThreadLocalBufferAllocator_FieldInfo_[] = {
	{"TL", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/ref/SoftReference<Lcom/sun/xml/internal/stream/util/BufferAllocator;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ThreadLocalBufferAllocator, TL)},
	{}
};

$MethodInfo _ThreadLocalBufferAllocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadLocalBufferAllocator, init$, void)},
	{"getBufferAllocator", "()Lcom/sun/xml/internal/stream/util/BufferAllocator;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadLocalBufferAllocator, getBufferAllocator, $BufferAllocator*)},
	{}
};

$ClassInfo _ThreadLocalBufferAllocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.util.ThreadLocalBufferAllocator",
	"java.lang.Object",
	nullptr,
	_ThreadLocalBufferAllocator_FieldInfo_,
	_ThreadLocalBufferAllocator_MethodInfo_
};

$Object* allocate$ThreadLocalBufferAllocator($Class* clazz) {
	return $of($alloc(ThreadLocalBufferAllocator));
}

$ThreadLocal* ThreadLocalBufferAllocator::TL = nullptr;

void ThreadLocalBufferAllocator::init$() {
}

$BufferAllocator* ThreadLocalBufferAllocator::getBufferAllocator() {
	$init(ThreadLocalBufferAllocator);
	$useLocalCurrentObjectStackCache();
	$var($BufferAllocator, ba, nullptr);
	$var($SoftReference, sr, $cast($SoftReference, $nc(ThreadLocalBufferAllocator::TL)->get()));
	if (sr != nullptr) {
		$assign(ba, $cast($BufferAllocator, sr->get()));
	}
	if (ba == nullptr) {
		$assign(ba, $new($BufferAllocator));
		$assign(sr, $new($SoftReference, ba));
		$nc(ThreadLocalBufferAllocator::TL)->set(sr);
	}
	return ba;
}

void clinit$ThreadLocalBufferAllocator($Class* class$) {
	$assignStatic(ThreadLocalBufferAllocator::TL, $new($ThreadLocal));
}

ThreadLocalBufferAllocator::ThreadLocalBufferAllocator() {
}

$Class* ThreadLocalBufferAllocator::load$($String* name, bool initialize) {
	$loadClass(ThreadLocalBufferAllocator, name, initialize, &_ThreadLocalBufferAllocator_ClassInfo_, clinit$ThreadLocalBufferAllocator, allocate$ThreadLocalBufferAllocator);
	return class$;
}

$Class* ThreadLocalBufferAllocator::class$ = nullptr;

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com