#include <sun/java2d/pipe/RenderBuffer.h>

#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_FLOAT_BASE_OFFSET
#undef ARRAY_INT_BASE_OFFSET
#undef ARRAY_LONG_BASE_OFFSET
#undef ARRAY_SHORT_BASE_OFFSET
#undef COPY_FROM_ARRAY_THRESHOLD
#undef SIZEOF_BYTE
#undef SIZEOF_DOUBLE
#undef SIZEOF_FLOAT
#undef SIZEOF_INT
#undef SIZEOF_LONG
#undef SIZEOF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RenderBuffer_FieldInfo_[] = {
	{"SIZEOF_BYTE", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_BYTE)},
	{"SIZEOF_SHORT", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_SHORT)},
	{"SIZEOF_INT", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_INT)},
	{"SIZEOF_FLOAT", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_FLOAT)},
	{"SIZEOF_LONG", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_LONG)},
	{"SIZEOF_DOUBLE", "J", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RenderBuffer, SIZEOF_DOUBLE)},
	{"COPY_FROM_ARRAY_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RenderBuffer, COPY_FROM_ARRAY_THRESHOLD)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PROTECTED | $FINAL, $field(RenderBuffer, unsafe)},
	{"baseAddress", "J", nullptr, $PROTECTED | $FINAL, $field(RenderBuffer, baseAddress)},
	{"endAddress", "J", nullptr, $PROTECTED | $FINAL, $field(RenderBuffer, endAddress)},
	{"curAddress", "J", nullptr, $PROTECTED, $field(RenderBuffer, curAddress)},
	{"capacity", "I", nullptr, $PROTECTED | $FINAL, $field(RenderBuffer, capacity$)},
	{}
};

$MethodInfo _RenderBuffer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(RenderBuffer, init$, void, int32_t)},
	{"allocate", "(I)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(RenderBuffer, allocate, RenderBuffer*, int32_t)},
	{"capacity", "()I", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, capacity, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, clear, void)},
	{"getAddress", "()J", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, getAddress, int64_t)},
	{"position", "()I", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, position, int32_t)},
	{"position", "(J)V", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, position, void, int64_t)},
	{"put", "([B)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $bytes*)},
	{"put", "([BII)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $bytes*, int32_t, int32_t)},
	{"put", "([S)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $shorts*)},
	{"put", "([SII)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $shorts*, int32_t, int32_t)},
	{"put", "([I)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $ints*)},
	{"put", "([III)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $ints*, int32_t, int32_t)},
	{"put", "([F)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $floats*)},
	{"put", "([FII)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $floats*, int32_t, int32_t)},
	{"put", "([J)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $longs*)},
	{"put", "([JII)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC, $virtualMethod(RenderBuffer, put, RenderBuffer*, $longs*, int32_t, int32_t)},
	{"putByte", "(B)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putByte, RenderBuffer*, int8_t)},
	{"putDouble", "(D)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putDouble, RenderBuffer*, double)},
	{"putFloat", "(F)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putFloat, RenderBuffer*, float)},
	{"putInt", "(II)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putInt, RenderBuffer*, int32_t, int32_t)},
	{"putInt", "(I)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putInt, RenderBuffer*, int32_t)},
	{"putLong", "(J)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putLong, RenderBuffer*, int64_t)},
	{"putShort", "(S)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, putShort, RenderBuffer*, int16_t)},
	{"remaining", "()I", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, remaining, int32_t)},
	{"skip", "(J)Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(RenderBuffer, skip, RenderBuffer*, int64_t)},
	{}
};

$ClassInfo _RenderBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.RenderBuffer",
	"java.lang.Object",
	nullptr,
	_RenderBuffer_FieldInfo_,
	_RenderBuffer_MethodInfo_
};

$Object* allocate$RenderBuffer($Class* clazz) {
	return $of($alloc(RenderBuffer));
}

void RenderBuffer::init$(int32_t numBytes) {
	$set(this, unsafe, $Unsafe::getUnsafe());
	this->curAddress = (this->baseAddress = $nc(this->unsafe)->allocateMemory(numBytes));
	this->endAddress = this->baseAddress + numBytes;
	this->capacity$ = numBytes;
}

RenderBuffer* RenderBuffer::allocate(int32_t numBytes) {
	return $new(RenderBuffer, numBytes);
}

int64_t RenderBuffer::getAddress() {
	return this->baseAddress;
}

int32_t RenderBuffer::capacity() {
	return this->capacity$;
}

int32_t RenderBuffer::remaining() {
	return (int32_t)(this->endAddress - this->curAddress);
}

int32_t RenderBuffer::position() {
	return (int32_t)(this->curAddress - this->baseAddress);
}

void RenderBuffer::position(int64_t numBytes) {
	this->curAddress = this->baseAddress + numBytes;
}

void RenderBuffer::clear() {
	this->curAddress = this->baseAddress;
}

RenderBuffer* RenderBuffer::skip(int64_t numBytes) {
	this->curAddress += numBytes;
	return this;
}

RenderBuffer* RenderBuffer::putByte(int8_t x) {
	$nc(this->unsafe)->putByte(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_BYTE;
	return this;
}

RenderBuffer* RenderBuffer::put($bytes* x) {
	return put(x, 0, $nc(x)->length);
}

RenderBuffer* RenderBuffer::put($bytes* x, int32_t offset, int32_t length) {
	if (length > RenderBuffer::COPY_FROM_ARRAY_THRESHOLD) {
		$init($Unsafe);
		int64_t offsetInBytes = offset * RenderBuffer::SIZEOF_BYTE + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
		int64_t lengthInBytes = length * RenderBuffer::SIZEOF_BYTE;
		$nc(this->unsafe)->copyMemory(x, offsetInBytes, nullptr, this->curAddress, lengthInBytes);
		position(position() + lengthInBytes);
	} else {
		int32_t end = offset + length;
		for (int32_t i = offset; i < end; ++i) {
			putByte($nc(x)->get(i));
		}
	}
	return this;
}

RenderBuffer* RenderBuffer::putShort(int16_t x) {
	$nc(this->unsafe)->putShort(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_SHORT;
	return this;
}

RenderBuffer* RenderBuffer::put($shorts* x) {
	return put(x, 0, $nc(x)->length);
}

RenderBuffer* RenderBuffer::put($shorts* x, int32_t offset, int32_t length) {
	if (length > RenderBuffer::COPY_FROM_ARRAY_THRESHOLD) {
		$init($Unsafe);
		int64_t offsetInBytes = offset * RenderBuffer::SIZEOF_SHORT + $Unsafe::ARRAY_SHORT_BASE_OFFSET;
		int64_t lengthInBytes = length * RenderBuffer::SIZEOF_SHORT;
		$nc(this->unsafe)->copyMemory(x, offsetInBytes, nullptr, this->curAddress, lengthInBytes);
		position(position() + lengthInBytes);
	} else {
		int32_t end = offset + length;
		for (int32_t i = offset; i < end; ++i) {
			putShort($nc(x)->get(i));
		}
	}
	return this;
}

RenderBuffer* RenderBuffer::putInt(int32_t pos, int32_t x) {
	$nc(this->unsafe)->putInt(this->baseAddress + pos, x);
	return this;
}

RenderBuffer* RenderBuffer::putInt(int32_t x) {
	$nc(this->unsafe)->putInt(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_INT;
	return this;
}

RenderBuffer* RenderBuffer::put($ints* x) {
	return put(x, 0, $nc(x)->length);
}

RenderBuffer* RenderBuffer::put($ints* x, int32_t offset, int32_t length) {
	if (length > RenderBuffer::COPY_FROM_ARRAY_THRESHOLD) {
		$init($Unsafe);
		int64_t offsetInBytes = offset * RenderBuffer::SIZEOF_INT + $Unsafe::ARRAY_INT_BASE_OFFSET;
		int64_t lengthInBytes = length * RenderBuffer::SIZEOF_INT;
		$nc(this->unsafe)->copyMemory(x, offsetInBytes, nullptr, this->curAddress, lengthInBytes);
		position(position() + lengthInBytes);
	} else {
		int32_t end = offset + length;
		for (int32_t i = offset; i < end; ++i) {
			putInt($nc(x)->get(i));
		}
	}
	return this;
}

RenderBuffer* RenderBuffer::putFloat(float x) {
	$nc(this->unsafe)->putFloat(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_FLOAT;
	return this;
}

RenderBuffer* RenderBuffer::put($floats* x) {
	return put(x, 0, $nc(x)->length);
}

RenderBuffer* RenderBuffer::put($floats* x, int32_t offset, int32_t length) {
	if (length > RenderBuffer::COPY_FROM_ARRAY_THRESHOLD) {
		$init($Unsafe);
		int64_t offsetInBytes = offset * RenderBuffer::SIZEOF_FLOAT + $Unsafe::ARRAY_FLOAT_BASE_OFFSET;
		int64_t lengthInBytes = length * RenderBuffer::SIZEOF_FLOAT;
		$nc(this->unsafe)->copyMemory(x, offsetInBytes, nullptr, this->curAddress, lengthInBytes);
		position(position() + lengthInBytes);
	} else {
		int32_t end = offset + length;
		for (int32_t i = offset; i < end; ++i) {
			putFloat($nc(x)->get(i));
		}
	}
	return this;
}

RenderBuffer* RenderBuffer::putLong(int64_t x) {
	$nc(this->unsafe)->putLong(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_LONG;
	return this;
}

RenderBuffer* RenderBuffer::put($longs* x) {
	return put(x, 0, $nc(x)->length);
}

RenderBuffer* RenderBuffer::put($longs* x, int32_t offset, int32_t length) {
	if (length > RenderBuffer::COPY_FROM_ARRAY_THRESHOLD) {
		$init($Unsafe);
		int64_t offsetInBytes = offset * RenderBuffer::SIZEOF_LONG + $Unsafe::ARRAY_LONG_BASE_OFFSET;
		int64_t lengthInBytes = length * RenderBuffer::SIZEOF_LONG;
		$nc(this->unsafe)->copyMemory(x, offsetInBytes, nullptr, this->curAddress, lengthInBytes);
		position(position() + lengthInBytes);
	} else {
		int32_t end = offset + length;
		for (int32_t i = offset; i < end; ++i) {
			putLong($nc(x)->get(i));
		}
	}
	return this;
}

RenderBuffer* RenderBuffer::putDouble(double x) {
	$nc(this->unsafe)->putDouble(this->curAddress, x);
	this->curAddress += RenderBuffer::SIZEOF_DOUBLE;
	return this;
}

RenderBuffer::RenderBuffer() {
}

$Class* RenderBuffer::load$($String* name, bool initialize) {
	$loadClass(RenderBuffer, name, initialize, &_RenderBuffer_ClassInfo_, allocate$RenderBuffer);
	return class$;
}

$Class* RenderBuffer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun