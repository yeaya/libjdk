#include <com/sun/xml/internal/stream/util/BufferAllocator.h>

#include <jcpp.h>

#undef LARGE_SIZE_LIMIT
#undef MEDIUM_SIZE_LIMIT
#undef SMALL_SIZE_LIMIT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

$FieldInfo _BufferAllocator_FieldInfo_[] = {
	{"SMALL_SIZE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferAllocator, SMALL_SIZE_LIMIT)},
	{"MEDIUM_SIZE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferAllocator, MEDIUM_SIZE_LIMIT)},
	{"LARGE_SIZE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BufferAllocator, LARGE_SIZE_LIMIT)},
	{"smallCharBuffer", "[C", nullptr, 0, $field(BufferAllocator, smallCharBuffer)},
	{"mediumCharBuffer", "[C", nullptr, 0, $field(BufferAllocator, mediumCharBuffer)},
	{"largeCharBuffer", "[C", nullptr, 0, $field(BufferAllocator, largeCharBuffer)},
	{"smallByteBuffer", "[B", nullptr, 0, $field(BufferAllocator, smallByteBuffer)},
	{"mediumByteBuffer", "[B", nullptr, 0, $field(BufferAllocator, mediumByteBuffer)},
	{"largeByteBuffer", "[B", nullptr, 0, $field(BufferAllocator, largeByteBuffer)},
	{}
};

$MethodInfo _BufferAllocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BufferAllocator, init$, void)},
	{"getByteBuffer", "(I)[B", nullptr, $PUBLIC, $virtualMethod(BufferAllocator, getByteBuffer, $bytes*, int32_t)},
	{"getCharBuffer", "(I)[C", nullptr, $PUBLIC, $virtualMethod(BufferAllocator, getCharBuffer, $chars*, int32_t)},
	{"returnByteBuffer", "([B)V", nullptr, $PUBLIC, $virtualMethod(BufferAllocator, returnByteBuffer, void, $bytes*)},
	{"returnCharBuffer", "([C)V", nullptr, $PUBLIC, $virtualMethod(BufferAllocator, returnCharBuffer, void, $chars*)},
	{}
};

$ClassInfo _BufferAllocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.util.BufferAllocator",
	"java.lang.Object",
	nullptr,
	_BufferAllocator_FieldInfo_,
	_BufferAllocator_MethodInfo_
};

$Object* allocate$BufferAllocator($Class* clazz) {
	return $of($alloc(BufferAllocator));
}

void BufferAllocator::init$() {
}

$chars* BufferAllocator::getCharBuffer(int32_t size) {
	$useLocalCurrentObjectStackCache();
	if (size <= BufferAllocator::SMALL_SIZE_LIMIT) {
		$var($chars, buffer, this->smallCharBuffer);
		$set(this, smallCharBuffer, nullptr);
		return buffer;
	} else if (size <= BufferAllocator::MEDIUM_SIZE_LIMIT) {
		$var($chars, buffer, this->mediumCharBuffer);
		$set(this, mediumCharBuffer, nullptr);
		return buffer;
	} else if (size <= BufferAllocator::LARGE_SIZE_LIMIT) {
		$var($chars, buffer, this->largeCharBuffer);
		$set(this, largeCharBuffer, nullptr);
		return buffer;
	}
	return nullptr;
}

void BufferAllocator::returnCharBuffer($chars* c) {
	if (c == nullptr) {
		return;
	}
	if ($nc(c)->length <= BufferAllocator::SMALL_SIZE_LIMIT) {
		$set(this, smallCharBuffer, c);
	} else if (c->length <= BufferAllocator::MEDIUM_SIZE_LIMIT) {
		$set(this, mediumCharBuffer, c);
	} else if (c->length <= BufferAllocator::LARGE_SIZE_LIMIT) {
		$set(this, largeCharBuffer, c);
	}
}

$bytes* BufferAllocator::getByteBuffer(int32_t size) {
	$useLocalCurrentObjectStackCache();
	if (size <= BufferAllocator::SMALL_SIZE_LIMIT) {
		$var($bytes, buffer, this->smallByteBuffer);
		$set(this, smallByteBuffer, nullptr);
		return buffer;
	} else if (size <= BufferAllocator::MEDIUM_SIZE_LIMIT) {
		$var($bytes, buffer, this->mediumByteBuffer);
		$set(this, mediumByteBuffer, nullptr);
		return buffer;
	} else if (size <= BufferAllocator::LARGE_SIZE_LIMIT) {
		$var($bytes, buffer, this->largeByteBuffer);
		$set(this, largeByteBuffer, nullptr);
		return buffer;
	}
	return nullptr;
}

void BufferAllocator::returnByteBuffer($bytes* b) {
	if (b == nullptr) {
		return;
	}
	if ($nc(b)->length <= BufferAllocator::SMALL_SIZE_LIMIT) {
		$set(this, smallByteBuffer, b);
	} else if (b->length <= BufferAllocator::MEDIUM_SIZE_LIMIT) {
		$set(this, mediumByteBuffer, b);
	} else if (b->length <= BufferAllocator::LARGE_SIZE_LIMIT) {
		$set(this, largeByteBuffer, b);
	}
}

BufferAllocator::BufferAllocator() {
}

$Class* BufferAllocator::load$($String* name, bool initialize) {
	$loadClass(BufferAllocator, name, initialize, &_BufferAllocator_ClassInfo_, allocate$BufferAllocator);
	return class$;
}

$Class* BufferAllocator::class$ = nullptr;

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com